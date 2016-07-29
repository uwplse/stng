#include "LoopReplacer.h"
#include "LoopAttribute.h"
#include "debug.h"
#include "util.h"

namespace StencilTranslator
{

namespace SB = SageBuilder;
namespace SI = SageInterface;

void
LoopReplacer::visit (SgNode * n)
{
  // replace all transformable loop stmts with a call to the 
  // loop function to be generated
  SgBasicBlock * b = isSgBasicBlock(n);
  if (b)
  {
    SgStatementPtrList stmts = b->get_statements();
    for (SgStatementPtrList::const_iterator it = stmts.begin();
         it != stmts.end(); ++it)
    {
      SgStatement * stmt = *it;
      //std::cout << "stmt: " << stmt->unparseToString() << "\n";
      if (isSgFortranDo(stmt))
      {
        LoopAttribute * attr = 
          static_cast<LoopAttribute *>(stmt->getAttribute(LoopAttribute::Name));
        if (attr->getIsTransformable())
        {
          std::string loopName = attr->getLoopName();
          SgName halideLoopFn(attr->getHalideGlueFnName());
          SgName origLoopFn(attr->getFnName());
          std::cout << "converting loop: " << stmt->unparseToString() << "\n";
             
          SgBasicBlock * newBlock = SB::buildBasicBlock();

          // setting scope to newBlock causes problems
          SgExprListExp * args = SB::buildExprListExp();
          SgExprListExp * halideArgs = SB::buildExprListExp();

          const VariableSet & inductionVars = attr->getInductionVars(); 
          for (VariableSet::const_iterator it = inductionVars.begin(); 
               it != inductionVars.end(); ++it)
          {      
            Variable * v = *it;
            SgVarRefExp * arg = SB::buildVarRefExp(SgName(v->name));
            SI::appendExpression(args, arg);
            SI::appendExpression(halideArgs, arg);
          }

          const VariableSet & usedVars = attr->getUsedVars();
          for (VariableSet::const_iterator it = usedVars.begin(); 
               it != usedVars.end(); ++it)
          {      
            Variable * v = *it;
            SgVarRefExp * arg = SB::buildVarRefExp(SgName(v->name));
            SI::appendExpression(args, arg);
            SI::appendExpression(halideArgs, arg);

            if (isSgArrayType(v->type))
              addHalideArrayArgs(halideArgs, (ArrayVariable *)v, SI::getGlobalScope(b));
          }

          SgExprStatement * halideCallStmt = 
            SB::buildFunctionCallStmt(halideLoopFn, SB::buildVoidType(), halideArgs, b);
          
          SgExprStatement * origCallStmt = 
            SB::buildFunctionCallStmt(origLoopFn, SB::buildVoidType(), args, b);

          SgIfdefDirectiveStatement * ifdef = new SgIfdefDirectiveStatement(b->get_file_info());
          ifdef->set_directiveString("#ifdef use_" + halideLoopFn);

          SgElseDirectiveStatement * Else = new SgElseDirectiveStatement(b->get_file_info());
          Else->set_directiveString("#else");
         
          SgEndifDirectiveStatement * endif = new SgEndifDirectiveStatement(b->get_file_info());
          endif->set_directiveString("#endif");

          newBlock->append_statement(ifdef);
          newBlock->append_statement(halideCallStmt);
          newBlock->append_statement(Else);
          newBlock->append_statement(origCallStmt);
          newBlock->append_statement(endif);
          
          SI::replaceStatement(stmt, newBlock);
          
          fortranCalls[attr] = origCallStmt->unparseToString();
          halideCalls[attr] = halideCallStmt->unparseToString();
        }
      }
    }
  }
  
  // add USE statements in the beginning of the function
  else if (isSgFunctionDefinition(n))
  {
    SgFunctionDefinition * fn = isSgFunctionDefinition(n);
    Sg_File_Info * info = fn->get_file_info();
    std::vector<SgStatement *> useStmts;

    std::vector<SgFortranDo*> loops = 
      SageInterface::querySubTree<SgFortranDo>(fn, V_SgFortranDo);

    for (std::vector<SgFortranDo *>::const_iterator it = loops.begin();
         it != loops.end(); ++it)
    {
      SgFortranDo * loop = *it;
      LoopAttribute * attr = 
        static_cast<LoopAttribute *>(loop->getAttribute(LoopAttribute::Name)); 
 
      if (attr->getIsTransformable())
      {
        SgIfdefDirectiveStatement * ifdef = new SgIfdefDirectiveStatement(info);
        //ifdef->set_directiveString("#ifdef use_" + attr->getHalideFnName());
        ifdef->set_directiveString("#ifdef use_" + attr->getHalideGlueFnName());

        SgElseDirectiveStatement * Else = new SgElseDirectiveStatement(info);
        Else->set_directiveString("#else");
         
        SgEndifDirectiveStatement * endif = new SgEndifDirectiveStatement(info);
        endif->set_directiveString("#endif");
        
        useStmts.push_back(ifdef);
        /*
        useStmts.push_back(new SgUseStatement(info, 
                                              SgName(attr->getHalideModuleName()), false));        
        */
        useStmts.push_back(Else);
        useStmts.push_back(new SgUseStatement(info, SgName(attr->getModuleName()), false));        
        useStmts.push_back(endif);
      }
    }

    for (std::vector<SgStatement *>::reverse_iterator sit = useStmts.rbegin(); 
         sit != useStmts.rend(); ++sit) 
      fn->prepend_statement(*sit);
  }
}

void
LoopReplacer::replaceLoops (std::string outdirname, SgProject * project)
{
  // generate new functions for each transformable loop
  generateLoopFunctions(outdirname, project);

  std::vector<SgFortranDo*> loops = 
    SageInterface::querySubTree<SgFortranDo>(project, V_SgFortranDo);
 
  // replace code in the original file
  traverse(project, preorder);
 
  generateBenchmarkFunctions(loops, outdirname, project);

  //generateHalideWrapperFunction(outdirname, project);

}

/*
void
LoopReplacer::generateHalideWrapperFunction (std::string outdirname, SgProject * project)
{
  std::vector<SgFortranDo*> loops = 
    SageInterface::querySubTree<SgFortranDo>(project, V_SgFortranDo);

  for (std::vector<SgFortranDo *>::const_iterator it = loops.begin();
       it != loops.end(); ++it)
  {
    SgFortranDo * loop = *it;
    LoopAttribute * attr = 
      static_cast<LoopAttribute *>(loop->getAttribute(LoopAttribute::Name)); 
 
    if (attr->getIsTransformable())
    {
      std::string filename = outdirname + "/" + attr->getHalideFnName() + ".f90";
      remove(filename.c_str());

      // create a new project (by not passing in project as last argument)
      SgSourceFile * file = isSgSourceFile(SageBuilder::buildFile(filename, filename));
      SgGlobal * global = file->get_globalScope();
      
      SB::pushScopeStack(isSgScopeStatement (global));

      // parameters to this declaration
      SgFunctionParameterList * params = SB::buildFunctionParameterList();
      // actuals to the halide glue call
      SgExprListExp * args = SB::buildExprListExp();

      const VariableSet & inductionVars = attr->getInductionVars(); 
      for (VariableSet::const_iterator it = inductionVars.begin(); 
           it != inductionVars.end(); ++it)
      {      
        Variable * v = *it;
        SgInitializedName * arg = SB::buildInitializedName(SgName(v->name), v->type);
        SI::appendArg(params, arg);
        SI::appendExpression(args, SB::buildVarRefExp(SgName(v->name)));
      }

      const VariableSet & usedVars = attr->getUsedVars();
      for (VariableSet::const_iterator it = usedVars.begin(); 
           it != usedVars.end(); ++it)
      {      
        Variable * v = *it;
        SgInitializedName * arg = SB::buildInitializedName(SgName(v->name), v->type);
        SI::appendArg(params, arg);
        SI::appendExpression(args, SB::buildVarRefExp(SgName(v->name)));
      }

      SgProcedureHeaderStatement * fn = 
        SB::buildProcedureHeaderStatement(attr->getLoopName().c_str(), 
                                          SB::buildVoidType(), params,
                                          SgProcedureHeaderStatement::e_subroutine_subprogram_kind);

      SgBasicBlock * fnBody = fn->get_definition()->get_body();
      
      SB::pushScopeStack(isSgScopeStatement(fnBody));
      
      // add the non array var decls first as array bounds might involve variables
      std::list<SgVariableDeclaration *> nonArrayVars;
      std::list<SgVariableDeclaration *> arrayVars;      
      
      for (VariableSet::const_iterator it = inductionVars.begin(); 
           it != inductionVars.end(); ++it)
      {      
        Variable * v = *it;
        SgVariableDeclaration * decl = SB::buildVariableDeclaration(SgName(v->name), v->type);
        if (isSgArrayType(v->type))
          arrayVars.push_back(decl);
        else
          nonArrayVars.push_back(decl);
      }

      for (VariableSet::const_iterator it = usedVars.begin(); 
           it != usedVars.end(); ++it)
      {      
        Variable * v = *it;
        SgVariableDeclaration * decl = SB::buildVariableDeclaration(SgName(v->name), v->type);
        if (isSgArrayType(v->type))
          arrayVars.push_back(decl);
        else
          nonArrayVars.push_back(decl);
      }
      
      for (std::list<SgVariableDeclaration *>::const_iterator it = nonArrayVars.begin();
           it != nonArrayVars.end(); ++it)
        SI::appendStatement(*it);

      for (std::list<SgVariableDeclaration *>::const_iterator it = arrayVars.begin();
           it != arrayVars.end(); ++it)
        SI::appendStatement(*it);

      SgStatement * copy = 
        SB::buildFunctionCallStmt(SgName(attr->getHalideGlueFnName()), SB::buildVoidType(), args);
  

      FilenameSetter setter;
      setter.traverse(copy, preorder);

      SI::appendStatement(copy);
      SB::popScopeStack();
      
      Sg_File_Info * info = copy->get_file_info();
      SgModuleStatement * modStmt = new SgModuleStatement(info);
      SgClassDefinition * classDef = new SgClassDefinition(info);

      SgContainsStatement * contains = new SgContainsStatement(info);
      contains->set_definingDeclaration(contains);
      contains->set_parent(classDef);

      SI::appendStatement(contains, classDef);
      SI::appendStatement(fn, classDef);

      classDef->set_parent(modStmt);
      classDef->set_endOfConstruct(info);

      modStmt->set_definition(classDef);
      modStmt->set_firstNondefiningDeclaration(modStmt);
      modStmt->set_definingDeclaration(modStmt);
      modStmt->set_name(SgName(attr->getModuleName()));
      modStmt->set_parent(global);
    
      SI::appendStatement(modStmt, isSgScopeStatement(global));

      SB::popScopeStack();

      SgProject * newProject = file->get_project();
      newProject->unparse();
    }
  }
}
*/

void
LoopReplacer::generateLoopFunctions (std::string outdirname, SgProject * project)
{
  std::vector<SgFortranDo*> loops = 
    SageInterface::querySubTree<SgFortranDo>(project, V_SgFortranDo);

  for (std::vector<SgFortranDo *>::const_iterator it = loops.begin();
       it != loops.end(); ++it)
  {
    SgFortranDo * loop = *it;
    LoopAttribute * attr = 
      static_cast<LoopAttribute *>(loop->getAttribute(LoopAttribute::Name)); 
 
    if (attr->getIsTransformable())
    {
      std::string filename = outdirname + "/" + attr->getFilename();
      remove(filename.c_str());

      // create a new project (by not passing in project as last argument)
      SgSourceFile * file = isSgSourceFile(SageBuilder::buildFile(filename, filename));
      SgGlobal * global = file->get_globalScope();
      
      //SgGlobal *globalScope = SI::getFirstGlobalScope (proj);
      SB::pushScopeStack(isSgScopeStatement (global));

      SgFunctionParameterList * params = SB::buildFunctionParameterList();

      const VariableSet & inductionVars = attr->getInductionVars(); 
      for (VariableSet::const_iterator it = inductionVars.begin(); 
           it != inductionVars.end(); ++it)
      {      
        Variable * v = *it;
        SgInitializedName * arg = SB::buildInitializedName(SgName(v->name), v->type);
        SI::appendArg(params, arg);
      }

      const VariableSet & usedVars = attr->getUsedVars();
      for (VariableSet::const_iterator it = usedVars.begin(); 
           it != usedVars.end(); ++it)
      {      
        Variable * v = *it;
        SgInitializedName * arg = SB::buildInitializedName(SgName(v->name), v->type);
        SI::appendArg(params, arg);
      }

      //SgFunctionDeclaration * fn = SB::buildDefiningFunctionDeclaration \
      //   (SgName("foo"), SB::buildVoidType(),params);

      /*
              // build a statement inside the function body
      SgBasicBlock *fnBody = fn->get_definition ()->get_body ();
      SB::pushScopeStack (isSgScopeStatement (fnBody));
      */

      SgProcedureHeaderStatement * fn = 
        SB::buildProcedureHeaderStatement(attr->getLoopName().c_str(), 
                                          SB::buildVoidType(), params,
                                          SgProcedureHeaderStatement::e_subroutine_subprogram_kind);

      SgBasicBlock * fnBody = fn->get_definition()->get_body();
      
      SB::pushScopeStack(isSgScopeStatement(fnBody));
      
      // add the non array var decls first as array bounds might involve variables
      std::vector<SgVariableDeclaration *> nonArrayVars;
      std::vector<SgVariableDeclaration *> arrayVars;      
      
      for (VariableSet::const_iterator it = inductionVars.begin(); 
           it != inductionVars.end(); ++it)
      {      
        Variable * v = *it;
        if (isSgArrayType(v->type))
        {
          ArrayVariable * av = (ArrayVariable *)v;
          SgVariableDeclaration * decl;
          if (av->getIsPointer())
          {
            decl = SB::buildVariableDeclaration(SgName(av->name), new SgPointerType(av->type));
            Sg_File_Info * f = decl->get_file_info();
            decl = new SgVariableDeclaration(SgName(av->name), new SgPointerType(av->type), NULL);
            decl->set_file_info(f);
          }
          else
            decl = SB::buildVariableDeclaration(SgName(v->name), v->type);
          arrayVars.push_back(decl);
        }
        else
        {
          SgVariableDeclaration * decl = SB::buildVariableDeclaration(SgName(v->name), v->type);
          nonArrayVars.push_back(decl);
        }
      }

      for (VariableSet::const_iterator it = usedVars.begin(); 
           it != usedVars.end(); ++it)
      {      
        Variable * v = *it;
        if (isSgArrayType(v->type))
        {
          ArrayVariable * av = (ArrayVariable *)v;
          SgVariableDeclaration * decl;
          if (av->getIsPointer())
          {
            decl = SB::buildVariableDeclaration(SgName(av->name), new SgPointerType(av->type));
            Sg_File_Info * f = decl->get_file_info();
            decl = new SgVariableDeclaration(SgName(av->name), new SgPointerType(av->type), NULL);
            decl->set_file_info(f);
          }
          else
            decl = SB::buildVariableDeclaration(SgName(v->name), SB::buildPointerType(v->type));
          
          arrayVars.push_back(decl);
        }
        else
        {
          SgVariableDeclaration * decl = SB::buildVariableDeclaration(SgName(v->name), v->type);
          nonArrayVars.push_back(decl);
        }

        /*
        SgVariableDeclaration * decl = SB::buildVariableDeclaration(SgName(v->name), v->type);
        if (isSgArrayType(v->type))
          arrayVars.push_back(decl);
        else
          nonArrayVars.push_back(decl);
          */
      }
      
      for (std::vector<SgVariableDeclaration *>::const_iterator it = nonArrayVars.begin();
           it != nonArrayVars.end(); ++it)
        SI::appendStatement(*it);
      
      for (std::vector<SgVariableDeclaration *>::const_iterator it = arrayVars.begin();
           it != arrayVars.end(); ++it)
        SI::appendStatement(*it);

      SgStatement * copy = SI::copyStatement(loop);
      FilenameSetter setter;
      setter.traverse(copy, preorder);

      SI::appendStatement(copy);
      
      SB::popScopeStack();
      
      //SI::appendStatement(fn, isSgScopeStatement(global));
      
      Sg_File_Info * info = copy->get_file_info();
      SgModuleStatement * modStmt = new SgModuleStatement(info);
      SgClassDefinition * classDef = new SgClassDefinition(info);

      SgContainsStatement * contains = new SgContainsStatement(info);
      contains->set_definingDeclaration(contains);
      contains->set_parent(classDef);

      SI::appendStatement(contains, classDef);
      SI::appendStatement(fn, classDef);

      classDef->set_parent(modStmt);
      classDef->set_endOfConstruct(info);

      modStmt->set_definition(classDef);
      modStmt->set_firstNondefiningDeclaration(modStmt);
      modStmt->set_definingDeclaration(modStmt);
      modStmt->set_name(SgName(attr->getModuleName()));
      modStmt->set_parent(global);
    
      SI::appendStatement(modStmt, isSgScopeStatement(global));

      SB::popScopeStack();

      SgProject * newProject = file->get_project();
      newProject->unparse();
    }
  }
}

void
LoopReplacer::generateBenchmarkFunctions (std::vector<SgFortranDo*> loops, std::string outdirname, SgProject * project)
{
  int loopNum = 0;
  for (std::vector<SgFortranDo *>::const_iterator it = loops.begin();
       it != loops.end(); ++it)
  {
    SgFortranDo * loop = *it;
    LoopAttribute * attr = 
      static_cast<LoopAttribute *>(loop->getAttribute(LoopAttribute::Name)); 
 
    if (attr->getIsTransformable())
    {
      std::string filename = outdirname + "/" + attr->getBenchmarkFilename() + ".f90";
      remove(filename.c_str());

      std::ofstream out(filename);
      out << "program " << attr->getBenchmarkFilename() << "\n"
          << "use " << attr->getModuleName() << "\n"
          << "implicit none\n";

      // declare variables
      std::vector<Variable *> nonArrayVars;
      std::vector<ArrayVariable *> arrayVars;      
      
      const VariableSet & usedVars = attr->getUsedVars(); 
      for (VariableSet::const_iterator it = usedVars.begin(); 
           it != usedVars.end(); ++it)
      {      
        Variable * v = *it;
        if (isSgArrayType(v->type))
        {
          ArrayVariable * av = (ArrayVariable *)v;
          if (av->getIsPointer())
            arrayVars.push_back(new ArrayVariable(av->name + "_target", isSgArrayType(av->type), 0, false));
          arrayVars.push_back(av);
        }
        else
          nonArrayVars.push_back(v);
      }

      // declare the variables that represent upper or lower bounds for arrays
      for (std::vector<ArrayVariable *>::const_iterator it = arrayVars.begin();
           it != arrayVars.end(); ++it)
      {
        ArrayVariable * v = *it;
        if (!v->getIsPointer())
        {
          SgArrayType * t = isSgArrayType(v->type);
          SgExpressionPtrList &dimInfo = t->get_dim_info()->get_expressions();
          int numDims = dimInfo.size();
          
          for (int i = 0; i < numDims; ++i)
          {
            SgExpression * dim = dimInfo[i];
            std::string ubound("");
            std::string lbound("");

            if (isSgSubscriptExpression(dim)) // (a:b)
            {
              SgSubscriptExpression * bounds = isSgSubscriptExpression(dim);
              SgExpression * uboundExpr = bounds->get_upperBound();
              SgExpression * lboundExpr = bounds->get_lowerBound();
             
              std::string arrayName = (v->getIsPointer()) ? v->name + "_target" : v->name;
              
              if (isSgNullExpression(uboundExpr))
                nonArrayVars.push_back(new Variable(loopBoundVarName(true, arrayName, i), new SgTypeInt(), 0));

              if (isSgNullExpression(lboundExpr))
                nonArrayVars.push_back(new Variable(loopBoundVarName(false, arrayName, i), new SgTypeInt(), 0));
            }
          }
        }
      }

      std::sort(nonArrayVars.begin(), nonArrayVars.end(), VarCmp());

      for (std::vector<Variable *>::const_iterator it = nonArrayVars.begin();
           it != nonArrayVars.end(); ++it)
      {
        Variable * v = *it;
        out << toFortranType(v->type) << " :: " << v->name << "\n";

        if (!isSgTypeChar(v->type))
          out << "character(100) :: " << v->name << "_string \n";          
      }
      
      out << "\n";

      std::sort(arrayVars.begin(), arrayVars.end(), VarCmp());
      for (std::vector<ArrayVariable *>::const_iterator it = arrayVars.begin();
           it != arrayVars.end(); ++it)
      {
        ArrayVariable * v = *it;
        SgArrayType * t = isSgArrayType(v->type);
        
        if (v->getIsPointer())
        {
          out << toFortranType(t->get_base_type()) << ", pointer, dimension";
          SgExpressionPtrList &dimInfo = t->get_dim_info()->get_expressions();
          int numDims = dimInfo.size();
        
          out << "(";
          for (int i = 0; i < numDims; ++i)
          {
            out << ":";
            if (numDims > 1 && i < numDims - 1)
              out << ",";
          }
          out << ") :: " << v->name << "\n";
        }
        else
        {
          out << toFortranType(t->get_base_type()) << ", allocatable, target, dimension";

          SgExpressionPtrList &dimInfo = t->get_dim_info()->get_expressions();
          int numDims = dimInfo.size();
        
          out << "(";
          for (int i = 0; i < numDims; ++i)
          {
            out << ":";
            if (numDims > 1 && i < numDims - 1)
              out << ",";            
          }
          out << ") :: " << v->name << "\n";
        }

      }
   
      const VariableSet & inductionVars = attr->getInductionVars(); 
      for (VariableSet::const_iterator it = inductionVars.begin(); 
           it != inductionVars.end(); ++it)
      {      
        Variable * v = *it;
        out << toFortranType(v->type) << " :: " << v->name << "\n";
      }


     
      out << "real(kind=8) tstart, tend\n"
          << "integer iter\n\n";


      // initialize the command args
      int index = 1; // index = 0 is the program name
      for (std::vector<Variable *>::const_iterator it = nonArrayVars.begin();
           it != nonArrayVars.end(); ++it, ++index)
      {
        Variable * v = *it;
        if (!isSgTypeChar(v->type))
        {
          out << "call getarg(" << index << ", " << v->name << "_string)\n";
          out << "read (" << v->name << "_string, *) " << v->name << "\n";
        }
        else
          out << "call getarg(" << index << ", " << v->name << "\n";
      }
      
      // initialize array args
      out << allocateCalls(arrayVars) << "\n\n";        
      
      // initialize induction vars
      for (VariableSet::const_iterator it = inductionVars.begin(); 
           it != inductionVars.end(); ++it)
      {      
        Variable * v = *it;
        out << v->name << " = 0\n";
      }

      out << "\n! first touch\n"
          << "! call fortran version\n"
          << fortranCalls[attr] << "\n\n" 
          << randomizeCalls(arrayVars) << "\n\n"

          << "! warmup cache\n"
          << "#ifdef warm_cache\n"
          << "! call fortran version\n"
          << fortranCalls[attr] << "\n\n" 
          << "#endif\n\n"
          
          << measureLoop(attr, true) << "\n\n"

          << deallocateCalls(arrayVars) << "\n\n"

          << allocateCalls(arrayVars) << "\n\n"

          << "write(*,*) \"IGNORE:\"\n\n"
          << "! first touch\n"
          << "! call halide\n"
          << halideCalls[attr] << "\n\n"

          << randomizeCalls(arrayVars) << "\n\n"

          << "! warmup cache\n"
          << "#ifdef warm_cache\n"
          << "! call halide version\n"
          << halideCalls[attr] << "\n"
          << "#endif\n\n"
          
          << "write(*,*) \"END IGNORE\"\n\n"
          
          << measureLoop(attr, false) << "\n\n"

          << deallocateCalls(arrayVars) << "\n\n"

          << "end program\n";

      out.close();

      ++loopNum;
    }
  }
}

std::string
LoopReplacer::measureLoop (LoopAttribute * attr, bool callFortran)
{
  std::stringstream out;
  out << "do iter=1,5\n\n"
      << "#ifndef warm_cache\n"
      << "  call clear_cache()\n"
      << "#endif\n\n";

  if (callFortran)
    out << "  call timer(tstart)\n";

  if (callFortran)
    out << "  " << fortranCalls[attr] << "\n";
  else
    out << "  " << halideCalls[attr] << "\n";
   
  if (callFortran)   
    out << "  call timer(tend)\n\n"
        << "  write(*,*) \"Elapsed: \", tend-tstart\n";

  out << "enddo";

  return out.str();
}

std::string 
LoopReplacer::allocateCalls (const std::vector<ArrayVariable *> & arrayVars) const
{
  std::stringstream out;

  for (std::vector<ArrayVariable *>::const_iterator it = arrayVars.begin();
       it != arrayVars.end(); ++it)
  {
    ArrayVariable * v = *it;
    if (!v->getIsPointer())
    {
      SgArrayType * t = isSgArrayType(v->type);
      SgExpressionPtrList &dimInfo = t->get_dim_info()->get_expressions();
      int numDims = dimInfo.size();
      
      std::string bounds = "";
      for (int i = 0; i < numDims; ++i)
      {
        SgExpression * dim = dimInfo[i];
        std::string ubound("");
        std::string lbound("");

        if (isSgSubscriptExpression(dim)) // (a:b)
        {
          SgSubscriptExpression * bounds = isSgSubscriptExpression(dim);
          SgExpression * uboundExpr = bounds->get_upperBound();
          SgExpression * lboundExpr = bounds->get_lowerBound();
          
          std::string arrayName = (v->getIsPointer()) ? v->name + "_target" : v->name;

          if (isSgNullExpression(uboundExpr))
            ubound = loopBoundVarName(true, arrayName, i);
          else
            ubound = uboundExpr->unparseToString();

          if (isSgNullExpression(lboundExpr))
            lbound = loopBoundVarName(false, arrayName, i);
          else
            lbound = lboundExpr->unparseToString();
        }
        else if (isSgVarRefExp(dim) || isSgIntVal(dim) || isSgAddOp(dim) || isSgMultiplyOp(dim)) 
                // (var) | (c) | (var + var) | (var * var)
        {
          ubound = dim->unparseToString();
          lbound = "1";
        }
        else
          ASSERT(false, "unknown array dim: " + dim->unparseToString());

        bounds += lbound + ":" + ubound;
        if (numDims > 1 && i < numDims - 1)
          bounds += ", ";
      }

      out << "allocate(" << v->name << "(" << bounds << "))\n";
    }
  }

  for (std::vector<ArrayVariable *>::const_iterator it = arrayVars.begin();
       it != arrayVars.end(); ++it)
  {
    ArrayVariable * v = *it;
    if (v->getIsPointer())
      out << v->name << "=>" << v->name << "_target" << "\n";
  }

  return out.str();
}

std::string 
LoopReplacer::deallocateCalls (const std::vector<ArrayVariable *> & arrayVars) const
{
  std::stringstream out;

  for (std::vector<ArrayVariable *>::const_iterator it = arrayVars.begin();
       it != arrayVars.end(); ++it)
  {
    ArrayVariable * v = *it;
    if (!v->getIsPointer())
      out << "deallocate(" << v->name << ")\n";      
  }

  return out.str();
}

std::string
LoopReplacer::randomizeCalls(const std::vector<ArrayVariable *> & arrayVars) const
{
  std::stringstream out;
  for (std::vector<ArrayVariable *>::const_iterator it = arrayVars.begin();
       it != arrayVars.end(); ++it)
  {
    ArrayVariable * v = *it;
    if (!v->getIsPointer())
    {
      SgArrayType * t = isSgArrayType(v->type);
      SgExpressionPtrList &dimInfo = t->get_dim_info()->get_expressions();
      int numDims = dimInfo.size();
      
      std::string bounds = "";
      for (int i = 0; i < numDims; ++i)
      {
        SgExpression * dim = dimInfo[i];
        std::string ubound("");
        std::string lbound("");

        if (isSgSubscriptExpression(dim)) // (a:b)
        {
          SgSubscriptExpression * bounds = isSgSubscriptExpression(dim);
          SgExpression * uboundExpr = bounds->get_upperBound();
          SgExpression * lboundExpr = bounds->get_lowerBound();
          
          if (isSgNullExpression(uboundExpr))
            ubound = loopBoundVarName(true, v->name, i);
          else
            ubound = uboundExpr->unparseToString();

          if (isSgNullExpression(lboundExpr))
            lbound = loopBoundVarName(false, v->name, i);         
          else
            lbound = lboundExpr->unparseToString();
        }
        else if (isSgVarRefExp(dim) || isSgIntVal(dim) || isSgAddOp(dim) || isSgMultiplyOp(dim)) 
                // (var) | (c) | (var + var) | (var * var)
        {
          ubound = dim->unparseToString();
          lbound = "1";       
        }
        else
          ASSERT(false, "unknown array dim: " + t->unparseToString());
        
        bounds += ubound + " - " + lbound;
        if (numDims > 1 && i < numDims - 1)
          bounds += ", ";
      }

      out << "call randomize(" << v->name << ", " << bounds << ")\n";
    }
  }

  return out.str();
}

void
LoopReplacer::addHalideArrayArgs (SgExprListExp * halideArgs, ArrayVariable * v, SgScopeStatement * scope)
{
  Variable::UseMode mode = v->getMode();
  SgArrayType * t = isSgArrayType(v->type);
  SgType * intArrayT = SB::buildArrayType(SB::buildIntType());

  SgExpressionPtrList &dimInfo = t->get_dim_info()->get_expressions();
  int numDims = dimInfo.size();

  ASSERT(mode != Variable::Unknown, "unknown mode for array: " + v->toString());

  if (mode == Variable::Input || mode == Variable::InOut)
  {
    if (v->getIsPointer())
    {      
      SI::appendExpression(halideArgs, 
        SB::buildFunctionCallExp(SgName("ubound"), intArrayT,
                                 SB::buildExprListExp(SB::buildVarRefExp(v->name)), scope));
      
      SI::appendExpression(halideArgs, 
        SB::buildFunctionCallExp(SgName("lbound"), intArrayT,
                                 SB::buildExprListExp(SB::buildVarRefExp(v->name)), scope));
      
      SI::appendExpression(halideArgs,
        SB::buildFunctionCallExp(SgName("shape"), intArrayT,
                                 SB::buildExprListExp(SB::buildVarRefExp(v->name)), scope));         
    }
    else
    {
      SgExprListExp * extents = SB::buildExprListExp();
      SgExprListExp * mins = SB::buildExprListExp(); 
      SgExprListExp * strides = SB::buildExprListExp();

      for (int i = 0; i < numDims; ++i)
      {
        SgExpression * dim = dimInfo[i];
        SgExpression * ubound = NULL;
        SgExpression * lbound = NULL;

        if (isSgSubscriptExpression(dim)) // (a:b)
        {
          SgSubscriptExpression * bounds = isSgSubscriptExpression(dim);
          ubound = bounds->get_upperBound();
          lbound = bounds->get_lowerBound();
          
          if (isSgNullExpression(ubound))
            ubound = SB::buildFunctionCallExp(SgName("ubound"), intArrayT,
                                             SB::buildExprListExp(SB::buildVarRefExp(v->name)), scope);
          if (isSgNullExpression(lbound))
            lbound = SB::buildFunctionCallExp(SgName("lbound"), intArrayT,
                                             SB::buildExprListExp(SB::buildVarRefExp(v->name)), scope);
        }
        else if (isSgVarRefExp(dim) || isSgIntVal(dim) || isSgAddOp(dim) || isSgMultiplyOp(dim)) 
                // (var) | (c) | (var + var) | (var * var)
        {
          ubound = dim;
          lbound = SB::buildIntVal(1);
        }
        
        else
          ASSERT(false, "unknown array dim: " + dim->unparseToString() + 
                        " type: " + dim->sage_class_name());

        addArrayExprs(ubound, lbound, ubound, lbound, extents, mins, strides);
      }     

      SI::appendExpression(halideArgs, SB::buildAggregateInitializer(extents));
      SI::appendExpression(halideArgs, SB::buildAggregateInitializer(strides));
      SI::appendExpression(halideArgs, SB::buildAggregateInitializer(mins));
    } 

  }
  
  if (mode == Variable::Output || mode == Variable::InOut)
  {
    SgExprListExp * extents = SB::buildExprListExp();
    SgExprListExp * mins = SB::buildExprListExp(); 
    SgExprListExp * strides = SB::buildExprListExp();
    std::vector<SgExpression *> distances;
    
    for (unsigned int i = 0; i < numDims; ++i)
    {
      SgExpression * ubound = NULL;
      SgExpression * lbound = NULL;

      const VariableSet &indexVars = v->getIndexVars(i);
      ASSERT(indexVars.size() > 0, "no index vars found for: " + v->toString());
      if (indexVars.size() > 1)
      {
        /*
        // XXX: special case 
        for (VariableSet::iterator it = indexVars.begin();
             it != indexVars.end();)
        {
          if (dynamic_cast<IntLiteral*>(*it))
            it = indexVars.erase(*it);
          else
            ++it;
        }
        
        if (indexVars.size() > 1)
          */
        {
          std::cout << "index: " << i << "\n";
          for (VariableSet::const_iterator it = indexVars.begin();
               it != indexVars.end(); ++it)
            std::cout << "index var: " << (*it)->toString() << "\n";
          ASSERT(false, "NYI: " + v->toString());
        }
      }
      else
      {
        InductionVariable * ivar = (InductionVariable *)*indexVars.begin();
        
        std::cout << "ind var: " << ivar->name <<"\n"; 
        ExprReplacer replacer(ivar->name, ivar->getUBound());
        SgExpression * r = replacer.visit((SgExpression *)v->getIndexExpr(i));
        
        //std::cout << "to replace: " << ivar->name << " with: " << ivar->getUBound()->unparseToString() << "\n";
        //std::cout << "after replace: " << r->unparseToString() << "   " << v->getIndexExpr(i)->unparseToString() << "\n"; 
        
        ubound = r;

        ExprReplacer replacer2(ivar->name, ivar->getLBound());
        r = replacer2.visit((SgExpression *)v->getIndexExpr(i));
        std::cout << "after replace: " << r->unparseToString() << "   " << v->getIndexExpr(i)->unparseToString() << "\n"; 
        lbound = r;

        /*
        ubound = ivar->getUBound();
        lbound = ivar->getLBound();
        */
      }

      SgExpression * dim = dimInfo[i];
      SgExpression * declaredLBound = NULL;
      SgExpression * declaredUBound = NULL;

      if (v->getIsPointer())
      {
        SgType * intArrayT = SB::buildArrayType(SB::buildIntType());
        declaredUBound = 
          SB::buildFunctionCallExp(SgName("ubound"), intArrayT,
                                   SB::buildExprListExp(SB::buildVarRefExp(v->name), SB::buildIntVal(i + 1)), 
                                   scope);
      
        declaredLBound = 
          SB::buildFunctionCallExp(SgName("lbound"), intArrayT,
                                   SB::buildExprListExp(SB::buildVarRefExp(v->name), SB::buildIntVal(i + 1)),
                                   scope);
      }
      else
      {
        if (isSgSubscriptExpression(dim))
        {
          declaredUBound = isSgSubscriptExpression(dim)->get_upperBound();
          declaredLBound = isSgSubscriptExpression(dim)->get_lowerBound();
        
          if (isSgNullExpression(declaredUBound))
            declaredUBound = SB::buildFunctionCallExp(SgName("ubound"), intArrayT,
                                             SB::buildExprListExp(SB::buildVarRefExp(v->name)), scope);
          if (isSgNullExpression(declaredLBound))
            declaredLBound = SB::buildFunctionCallExp(SgName("lbound"), intArrayT,
                                             SB::buildExprListExp(SB::buildVarRefExp(v->name)), scope);
        }
        else
        {
          declaredUBound = dim;
          declaredLBound = SB::buildIntVal(1);
        }
      }
            
      SgExpression * distance = NULL; 
      if (isSgIntVal(declaredLBound) && isSgIntVal(lbound))
        distance = 
          SB::buildIntVal(isSgIntVal(lbound)->get_value() - isSgIntVal(declaredLBound)->get_value());
      else
      {
        distance = SB::buildSubtractOp(SI::deepCopy(lbound), SI::deepCopy(declaredLBound));
      }
      
      distances.push_back(distance);
      
      addArrayExprs(ubound, lbound, declaredUBound, declaredLBound, extents, mins, strides);
    }

    SI::appendExpression(halideArgs, SB::buildAggregateInitializer(extents));
    SI::appendExpression(halideArgs, SB::buildAggregateInitializer(strides));
    SI::appendExpression(halideArgs, SB::buildAggregateInitializer(mins));

    // implement column major order

    /* row major
    SgExpression * distExpr = distances[0];
    for (unsigned int i = 1; i < numDims; ++i)
    {
      distExpr = SB::buildAddOp(SI::deepCopy(distances[i]), 
                                SB::buildMultiplyOp(SI::deepCopy(strides->get_expressions()[i]), distExpr));
    }
    */

    SgExpression * distExpr = distances[numDims - 1];    
    for (int i = numDims - 2; i >= 0; --i)
    {
      distExpr = SB::buildAddOp(SI::deepCopy(distances[i]),
                                SB::buildMultiplyOp(SI::deepCopy(strides->get_expressions()[i]), distExpr));
    }


    //SI::appendExpression(halideArgs, SB::buildVarRefExp(v->name + "hostOffset"));

    unsigned int baseTypeSize = getArrayBaseTypeSize(isSgArrayType(v->type));
    
    SI::appendExpression(halideArgs, SB::buildMultiplyOp(SB::buildIntVal(baseTypeSize), distExpr)); 
  }
  
}

void
LoopReplacer::addArrayExprs (SgExpression * ubound, SgExpression * lbound, 
                             SgExpression * declaredUBound, SgExpression * declaredLBound,
                             SgExprListExp * extents, SgExprListExp * mins, 
                             SgExprListExp * strides)
{
  // w/o deepCopy a - (b - c) gets printed as a - b - c

  // extents
  if (isSgIntVal(ubound) && isSgIntVal(lbound))
    SI::appendExpression(extents, 
      SB::buildIntVal(isSgIntVal(ubound)->get_value() - isSgIntVal(lbound)->get_value() + 1));
  else
    SI::appendExpression(extents, 
      SB::buildAddOp(SB::buildSubtractOp(SI::deepCopy(ubound), SI::deepCopy(lbound)), SB::buildIntVal(1)));

  // strides
  if (isSgIntVal(declaredUBound) && isSgIntVal(declaredLBound))
  {
    SI::appendExpression(strides, 
      SB::buildIntVal(isSgIntVal(declaredUBound)->get_value() - 
                      isSgIntVal(declaredLBound)->get_value() + 1));
  }
  else
  {
    SI::appendExpression(strides, 
      SB::buildAddOp(SB::buildSubtractOp(SI::deepCopy(declaredUBound), 
                                         SI::deepCopy(declaredLBound)), SB::buildIntVal(1)));
  }
  
  // mins
  if (isSgIntVal(lbound))
    SI::appendExpression(mins, SB::buildIntVal(isSgIntVal(lbound)->get_value() - 1));
  else
    SI::appendExpression(mins, SB::buildSubtractOp(SI::deepCopy(lbound), SB::buildIntVal(1)));
}

/*
void
replaceLoop_old () 
{
  //traverseInputFiles(proj, preorder);
  traverse(loop, preorder);

  //for (std::vector<SgScopeStatement *>::const_iterator it = loops.begin();
  //     it != loops.end(); ++it)
  {
    //LoopAttribute * attr = static_cast<LoopAttribute *>((*it)->getAttribute(LoopAttribute::Name)); 
    LoopAttribute * attr = static_cast<LoopAttribute *>(loop->getAttribute(LoopAttribute::Name)); 
 
    if (attr->isTransformable)
    {
      std::string filename = this->outdirname + "/" + attr->filename;
      remove(filename.c_str());
      SgSourceFile * file = isSgSourceFile(SageBuilder::buildFile(filename, filename, proj));
      SgGlobal * global = file->get_globalScope();
      
      //SgGlobal *globalScope = SI::getFirstGlobalScope (proj);
      SB::pushScopeStack(isSgScopeStatement (global));

      // defining  int foo(int x, float)
      // build parameter list first
      SgInitializedName* arg1 = SB::buildInitializedName(SgName("x"),SB::buildIntType());
      SgInitializedName* arg2 = SB::buildInitializedName(SgName("y"),SB::buildFloatType());
      SgFunctionParameterList * params = SB::buildFunctionParameterList();
      SI::appendArg(params, arg1);  
      SI::appendArg(params, arg2);  

      //SgFunctionDeclaration * fn = SB::buildDefiningFunctionDeclaration \
      //   (SgName("foo"), SB::buildVoidType(),params);

      / *
              // build a statement inside the function body
      SgBasicBlock *fnBody = fn->get_definition ()->get_body ();
      SB::pushScopeStack (isSgScopeStatement (fnBody));

      SgVariableDeclaration *varDecl = SB::buildVariableDeclaration(SgName ("i"), SB::buildIntType());
              // Insert the statement
      SI::appendStatement (varDecl, isSgScopeStatement(global));
      SB::popScopeStack ();
              // insert the defining function
      * /
      /*  
      //SI::appendStatement (fn);
      SI::appendStatement(fn, isSgScopeStatement(global));

      // pop the final scope after all AST insertion
      SB::popScopeStack ();
      * /

      SgVariableDeclaration *varDecl = SB::buildVariableDeclaration(SgName ("i"), SB::buildIntType());
      SgProcedureHeaderStatement * fn = 
        SB::buildProcedureHeaderStatement(attr->loopName.c_str(), 
                                          SB::buildVoidType(), params,
                                          SgProcedureHeaderStatement::e_subroutine_subprogram_kind);

      SgBasicBlock * fnBody = fn->get_definition()->get_body();
      
      SB::pushScopeStack(isSgScopeStatement(fnBody));
      
      SI::appendStatement(varDecl);
      
      //SgStatement * copy = SI::copyStatement(*it);
      SgStatement * copy = SI::copyStatement(loop);
      FilenameSetter setter(filename);
      setter.traverse(copy, preorder);

      SI::appendStatement(copy);
      
      SB::popScopeStack();
      SI::appendStatement(fn, isSgScopeStatement(global));

      SB::popScopeStack();
    }
  }
}
*/

SgExpression * 
ExprReplacer::visit (SgExpression * e)
{
  if (isSgBinaryOp(e))
  {
    VariantT type = e->variantT();

    SgBinaryOp * binop = isSgBinaryOp(e);
    SgExpression * lhs = binop->get_lhs_operand();
    SgExpression * rhs = binop->get_rhs_operand();

    SgExpression * newLhs = lhs;
    SgExpression * newRhs = rhs;

    if (isSgVarRefExp(lhs))
    {
      SgVarRefExp * v = isSgVarRefExp(lhs);
      if (StencilTranslator::varName(v).compare(this->varName) == 0)
        newLhs = replaceWith;
    }

    if (isSgVarRefExp(rhs))
    {
      SgVarRefExp * v = isSgVarRefExp(rhs);
      if (StencilTranslator::varName(v).compare(this->varName) == 0)
        newRhs = replaceWith;
    }

    switch(type)
    { 
      case V_SgAddOp: return SB::buildAddOp(newLhs, newRhs);
      case V_SgSubtractOp: return SB::buildSubtractOp(newLhs, newRhs);
      case V_SgMultiplyOp: return SB::buildMultiplyOp(newLhs, newRhs); 
      case V_SgDivideOp: return SB::buildDivideOp(newLhs, newRhs);
      default: ASSERT(false, "unknown binary op: " + e->unparseToString());
    }
  }

  else if (isSgVarRefExp(e))
  {
    SgVarRefExp * v = isSgVarRefExp(e);
    if (StencilTranslator::varName(v).compare(this->varName) == 0)
      return replaceWith;
    else
      return e;
  }

  else if (isSgIntVal(e))
    return e;

  else
    ASSERT(false, "unknown expr: " + e->unparseToString() + " type: " + e->sage_class_name());
}

/* FilenameSetter */
//FilenameSetter::FilenameSetter (std::string filename) : filename(filename) {}

void
FilenameSetter::visit (SgNode * n)
{
  //n->get_file_info()->set_filenameString(filename);
  n->get_file_info()->setOutputInCodeGeneration();
}

}
