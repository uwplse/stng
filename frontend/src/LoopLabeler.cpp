#include "LoopLabeler.h"
#include "LoopAttribute.h"
#include "debug.h"

#include <boost/filesystem/path.hpp>

namespace StencilTranslator
{

void
LoopLabeler::labelLoops (SgProject * proj) 
{ 
  std::vector<SgFortranDo*> doLoops = 
    SageInterface::querySubTree<SgFortranDo>(proj, V_SgFortranDo);
  
  long long count = 0;
  for (std::vector<SgFortranDo*>::const_iterator it = doLoops.begin(); 
       it != doLoops.end(); ++it)
  {
    LoopAttribute * attr = static_cast<LoopAttribute *>((*it)->getAttribute(LoopAttribute::Name));
   
    if (!attr->getIsInLoop() && !attr->getHasConditional() && !attr->getHasCall() && 
         attr->getUseArray() && !attr->getUsePointer())
    {
      boost::filesystem::path boostPath((*it)->get_file_info()->get_filenameString());
      std::string stem = boostPath.stem().generic_string();

      std::string loopName = stem + "_loop" + std::to_string(count++);
      attr->setNames(loopName,              // loop name
                     loopName + ".f90",     // loop code file name 
                                            // (capital F to enable -cpp in gfortran)
                     loopName + ".ir");     // loop code IR name

      attr->setIsTransformable(true);
    }

    std::cout << "loop: " << (*it)->unparseToString() << " is transformable: " 
             << attr->getIsTransformable() 
             << " isInLoop: " << attr->getIsInLoop() << " hasConditional: " << attr->getHasConditional() 
             << " hasCall: " << attr->getHasCall() << " useArray: " << attr->getUseArray() 
             << " usePointer: " << attr->getUsePointer()             
             << "\n";
  }

  
  for (std::vector<SgFortranDo*>::const_iterator it = doLoops.begin(); 
       it != doLoops.end(); ++it)
  {
    LoopAttribute * attr = static_cast<LoopAttribute *>((*it)->getAttribute(LoopAttribute::Name));
   
    if (attr->getIsTransformable() && attr->getHasComplexArrayAssign())
    {
      std::cout << "undo loop labeling for: " << attr->getLoopName() << "\n";
      std::cout << "loop name: " << attr->getLoopName() << " contents: " << (*it)->unparseToString() << "\n";
      attr->setIsTransformable(false);
    }

  }



}

}
