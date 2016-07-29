#include "LoopLabeler.h"
#include "LoopReplacer.h"
#include "AttributeInitializer.h"
#include "ArrayIndexClassifier.h"
#include "HalideCodeGenerator.h"
#include "IRTranslator.h"
#include "LoopVarAnalyzer.h"
#include "StructureAnalyzer.h"
#include "TimeInstrumentor.h"
#include "VariableIdentifier.h"

#include "debug.h"

#include "rose.h"

#include "DefUseAnalysis.h"
//#include "liveDeadVarAnalysis.h"
#include "LivenessAnalysis.h"

#include <boost/filesystem/path.hpp>

using namespace StencilTranslator;

// base main for testing rose
int 
main2 (int argc, char* argv[])
{
  Rose_STL_Container<std::string> cl = 
    CommandlineProcessing::generateArgListFromArgcArgv(argc, argv);

  SgProject* project = frontend(cl) ;
  
  return backend(project);
}



int 
main (int argc, char* argv[])
{
  Rose_STL_Container<std::string> cl = 
    CommandlineProcessing::generateArgListFromArgcArgv(argc, argv);

  std::string outDir("");
  if (CommandlineProcessing::isOptionWithParameter(cl, "-out", "", outDir, true)) 
    std::cout << "outdir: " << outDir << "\n";
  if (outDir == "")
  {
    std::cerr << "missing output dir use -out <dirname>\n";
    return 1;
  }

  bool genTimers = CommandlineProcessing::isOption(cl, "-i", "", true);
  std::cout << "instrument: " << genTimers << "\n";

  bool skipProcess = CommandlineProcessing::isOption(cl, "-s", "", true);

  mkdir(outDir.c_str(), S_IRWXU | S_IRWXG | S_IRWXO);

  SgProject* project = frontend(cl) ;
  
  if (!skipProcess)
  {
    // initialize each loop's attribute
    AttributeInitializer attributeInitializer;
    attributeInitializer.initialize(project); 

    // check if each loop has function calls / conditionals / uses array
    StructureAnalyzer structureAnalyzer;
    structureAnalyzer.analyze(project);
    
    // run dataflow to taint values from arrays
    /*
    initAnalysis(project);
    Dbg::init("test", ".", "index.html");
    analysisDebugLevel = 0;
    */

    /*
    // Call the Def-Use Analysis
    DFAnalysis* defuse = new DefUseAnalysis(project);
    int val = defuse->run(true);
      std::cout << "Analysis is : " << (val ?  "failure" : "success" ) << " " << val <<std::endl;
    if (val==1) exit(1);

    LivenessAnalysis* liv = new LivenessAnalysis(true,(DefUseAnalysis*)defuse);

    //example usage
    // testing
    std::vector <FilteredCFGNode < IsDFAFilter > > dfaFunctions;
    bool abortme=false;
    NodeQuerySynthesizedAttributeType vars = NodeQuery::querySubTree(project, V_SgFunctionDefinition);
    NodeQuerySynthesizedAttributeType::const_iterator i = vars.begin();
    for (; i!=vars.end();++i) {
      SgFunctionDefinition* func = isSgFunctionDefinition(*i);
      string funcName = func->get_declaration()->get_qualified_name().str();
      std::cout << " running live analysis for func : " << funcName << "\n";
      FilteredCFGNode <IsDFAFilter> rem_source = liv->run(func,abortme);
      if (rem_source.getNode()!=NULL)
        dfaFunctions.push_back(rem_source);
      if (abortme)
        break;
    }
    */

    /*
    LiveDeadVarsAnalysis ldva(project);
    UnstructuredPassInterDataflow upid_ldva(&ldva);
    upid_ldva.runAnalysis();
    
    printLiveDeadVarsAnalysisStates(&ldva, "[");

    ArrayIndexAnalysis aia(&ldva);
    UnstructuredPassInterDataflow upid_aia(&aia);
    upid_aia.runAnalysis();

    aia.printResults();
    */


    // label the loops that can be transformed
    LoopLabeler labeler;
    labeler.labelLoops(project);
   
   
    // find the variables that are used in the transformable loops
    VariableIdentifier varIdentifier;
    varIdentifier.computeVariables(project);

    LoopVarAnalyzer loopAnalyzer;
    loopAnalyzer.analyzeLoops(project);

    // convert the transformable loops into IR
    IRTranslator translator;
    translator.translateLoops(outDir, project);

    if (genTimers)
    {
      TimeInstrumentor instrumentor;
      instrumentor.addTimers(outDir, project);

      // run variable identifier again to insert the timer variables
      varIdentifier.computeVariables(project);
    }

    // generate halide glue files
    HalideCodeGenerator halideGen;
    halideGen.generateGlueFiles(outDir, project);

    // replace the transformable loops with function calls
    LoopReplacer replacer;
    replacer.replaceLoops(outDir, project);

    // move the output file to the output directory
    SgFilePtrList files = project->get_fileList();
    for (SgFilePtrList::const_iterator it = files.begin(); it != files.end(); ++it)
    {
      SgFile * file = *it;
      // get_filenameString returns the filename including its full path
      boost::filesystem::path currentPath(file->get_file_info()->get_filenameString());
      std::string newPath = outDir + "/" + currentPath.filename().generic_string();
      
      file->set_unparse_output_filename(newPath);
    }
  }
    
  //return backend(project);
  project->unparse();

  return 0;
}

/*
int 
main(int argc, char* argv[])
{
  Rose_STL_Container<std::string> cl = 
    CommandlineProcessing::generateArgListFromArgcArgv(argc, argv);
    // can change output file

  std::string outDir("");
  if (CommandlineProcessing::isOptionWithParameter(cl, "-out", "", outDir, true)) 
    std::cout << "outdir: " << outDir << "\n";
  if (outDir == "")
  {
    std::cerr << "missing output dir use -out <dirname>\n";
    return 1;
  }

  // Build the AST used by ROSE
  //SgProject* project = frontend(argc, argv) ;
  SgProject* project = frontend(cl) ;


  initAnalysis(project);
  Dbg::init("test", ".", "index.html");
  //analysisDebugLevel = 0;
  
  LiveDeadVarsAnalysis ldva(project);
  UnstructuredPassInterDataflow upid_ldva(&ldva);
  upid_ldva.runAnalysis();

  return 0;
}
*/


/*
int old_main (int argc, char * argv [])
{
  int num_translated = 0;
  int num_outerloops = 0;
  bool is_fortran = true;
  
  // Process the commandline
  Rose_STL_Container<std::string> cl = CommandlineProcessing::generateArgListFromArgcArgv(argc, argv);
  if (CommandlineProcessing::isOption(cl, "-translateC", "", true)) {
      std::cout << "Using C++ mode.\n";
      is_fortran = false;
  }
  
  if (is_fortran) {

    std::vector<SgFortranDo*> forLoops = SageInterface::querySubTree<SgFortranDo>(dynamic_cast<SgNode*>(project), V_SgFortranDo);


    // normalize the loops
    // this is done in a separate loop so it normalizes the nested ones as well.
    for (auto fl: forLoops) {
      SageInterface::doLoopNormalization(fl);
    }

    for (auto fl : forLoops) {
      if (!DoLoopTranslator::is_outermost(fl)) {
        std::cout << "Skipping non-outermost loop\n";
        continue;
      }
      num_outerloops++;
      std::cout << "========= Processing loop ========\n";
      std::cout << fl->unparseToString() << "\n";
      DoLoopTranslator t(fl);

      auto result = t.translate();
      std::cout << "=== Done.  Result: \n";
      if (result == nullptr)
        std::cout << "Got a nullptr.\n";
      else {
        num_translated++;
        std::cout << result->unParse();
        delete result;
      }

    }
  }
  else {

    std::vector<SgForStatement*> forLoops = SageInterface::querySubTree<SgForStatement>(dynamic_cast<SgNode*>(project), V_SgForStatement);

    // normalize the loops
    // this is done in a separate loop so it normalizes the nested ones as well.
    for (auto fl : forLoops) {
      SageInterface::forLoopNormalization(fl);
    }

    for (auto fl : forLoops) {
      if (!ForLoopTranslator::is_outermost(fl)) {
        std::cout << "Skipping non-outermost loop\n";
        continue;
      }
      num_outerloops++;
      std::cout << "========= Processing loop ========\n";
      std::cout << fl->unparseToString() << "\n";
      ForLoopTranslator t(fl);

      auto result = t.translate();
      std::cout << "=== Done.  Result: \n";
      if (result == nullptr)
        std::cout << "Got a nullptr.\n";
      else {
        num_translated++;
        std::cout << result->unParse();
        delete result;
      }

    }
    
  }
  
  std::cout << "======= Translated " << num_translated << " of " << num_outerloops << " outer loops";
  std::cout << " (" << 100*num_translated/(double)num_outerloops << " percent). =======\n";

  return 0;
}
*/
