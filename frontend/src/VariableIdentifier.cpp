#include "VariableIdentifier.h"
#include "LoopAttribute.h"
#include "util.h"
#include "debug.h"

namespace StencilTranslator
{

void 
VariableIdentifier::computeVariables (SgProject * project)
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
      traverse(loop, attr);    
  }
}

LoopAttribute *
VariableIdentifier::evaluateInheritedAttribute (SgNode* n, LoopAttribute * attr)
{
  if (isSgFortranDo(n))
  {
    SgFortranDo * loop = isSgFortranDo(n);
    LoopAttribute * a = static_cast<LoopAttribute *>(n->getAttribute(LoopAttribute::Name));

    SgInitializedName * loopVar = SageInterface::getLoopIndexVariable(loop);

    SgExpression * lbound = isSgAssignOp(loop->get_initialization())->get_rhs_operand();
    SgExpression * ubound = loop->get_bound();

    Variable * v = new InductionVariable(loopVar->get_name().getString(),
                                         loopVar->get_type(), a->getLoopDepth(), lbound, ubound);    

    std::cout << "found induction var: " << *v << " depth: " << a->getLoopDepth() 
              << " bound: [" << lbound->unparseToString() << ":" 
              << ubound->unparseToString() << "]\n";

    attr->addInductionVar(v);
  }

  else if (isSgVarRefExp(n))
  {
    SgVarRefExp * var = static_cast<SgVarRefExp *>(n);
    std::string varName = var->get_symbol()->get_name().getString();
    Variable * v = new Variable(varName, var->get_type(), attr->getLoopDepth());

    if (!attr->isInductionVar(v))
    {
      // check if pointer to array, if so find its base dimensions
      SgType * baseType = var->get_type();
      while (isSgPointerType(baseType))
        baseType = isSgPointerType(baseType)->get_base_type();
        
      SgArrayType * arrayType = isSgArrayType(baseType);
      if (arrayType)
      {
        delete v;
        v = new ArrayVariable(varName, arrayType, attr->getLoopDepth(), isSgPointerType(var->get_type()));
        //v = new Variable(varName, var->get_type(), attr->getLoopDepth());

        SgExpressionPtrList &dimInfo = arrayType->get_dim_info()->get_expressions();
        int numDims = dimInfo.size();
        for (int i = 0; i < numDims; ++i)
        {
          SgExpression * dim = dimInfo[i];
          if (isSgSubscriptExpression(dim)) // (a:b)
          {
            SgSubscriptExpression * bounds = isSgSubscriptExpression(dim);
            if (isSgNullExpression(bounds->get_upperBound())) // (:)
            {
              //std::cout << " need to create for : " << i << "\n";
              Variable * upperBoundVar = 
                new Variable(loopBoundVarName(true, varName, i), 
                             SageBuilder::buildIntType(), attr->getLoopDepth());
              attr->addSketchVar(upperBoundVar);
            }
            // else must be either constants or variable, for which 
            // we don't need to create new variables for
            else
            {
              VariableIdentifier v;
              v.traverse(bounds->get_upperBound(), attr);
            }

            if (isSgNullExpression(bounds->get_lowerBound()))
            {
              Variable * lowerBoundVar = 
                new Variable(loopBoundVarName(false, varName, i), 
                             SageBuilder::buildIntType(), attr->getLoopDepth());
              attr->addSketchVar(lowerBoundVar);
            }
            // else must be either constants or variable, for which 
            // we don't need to create new variables for
            else
            {
              VariableIdentifier v;
              v.traverse(bounds->get_lowerBound(), attr);
            }
          
          }
          
          // else it is of the form (10) or (var name)
          else
          {
            VariableIdentifier v;
            v.traverse(dim, attr);
          }

        } 
      }
      
      attr->addUsedVar(v);
      std::cout << "found use var: " << *v << "\n";
    }
  }

  else if (isSgDoubleVal(n))
  {
    SgDoubleVal * d = isSgDoubleVal(n);
    Variable * v = new Variable(encodeDouble(d), d->get_type(), attr->getLoopDepth());
    attr->addSketchVar(v);
  }

  else if (isSgFloatVal(n))
  {
    SgFloatVal * f = isSgFloatVal(n);
    Variable * v = new Variable(encodeFloat(f), f->get_type(), attr->getLoopDepth());
    attr->addSketchVar(v);
  }

  return attr;
}

}
