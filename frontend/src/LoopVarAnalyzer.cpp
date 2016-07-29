#include "LoopVarAnalyzer.h"
#include "LoopAttribute.h"
#include "debug.h"
#include "util.h"

namespace StencilTranslator
{

void 
LoopVarAnalyzer::analyzeLoops (SgProject * project)
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
      VarUseIdentifier identifier(attr);
      //identifier.traverse(loop, preorder);    
      identifier.traverse(loop);

      // set bound vars to be inputs, i.e., y, z in x=1, y+z
      SgExpression * bound = loop->get_bound();
      SetInputVisitor v(attr);
      v.traverse(bound, preorder);

      ArrayIndexChecker checker(attr);
      checker.traverse(loop, preorder);
    }

  }
}

void
SetInputVisitor::visit (SgNode * n)
{
  if (isSgVarRefExp(n)) 
  {
    setMode(isSgVarRefExp(n), false, attr);
  }
}

void
ArrayIndexChecker::visit (SgNode * n)
{ 
  if (isSgAssignOp(n))
  {
    SgAssignOp * assign = isSgAssignOp(n);
    SgExpression * assignee = assign->get_lhs_operand();

    if (isSgPntrArrRefExp(assignee))
    {
      SgPntrArrRefExp * arrayExp = isSgPntrArrRefExp(assignee);
      ArrayVariable * arrayVar = (ArrayVariable *)attr->findVar(isSgVarRefExp(arrayExp->get_lhs_operand()));
      
      int numDims = isSgArrayType(arrayVar->type)->get_dim_info()->get_expressions().size();
      for (unsigned int i = 0; i < numDims; ++i)
      {
        if (arrayVar->getIndexVars(i).size() == 0 && attr->getIsTransformable())
        {
          std::cout << "marking loop untransformable: " << assign->unparseToString() << "\n";
          std::cout << "array var: " << arrayVar->toString() << " index: " << i << "\n";
          attr->setIsTransformable(false);
        }
      }
    } 
  }
}

std::set<SgVarRefExp *>
VarUseIdentifier::evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList l)
{
  if (isSgAssignOp(n))
  {
    SgAssignOp * assign = isSgAssignOp(n);
    SgExpression * assignee = assign->get_lhs_operand();
    if (isSgVarRefExp(assignee) && isSgArrayType(assignee->get_type()))
      ASSERT(false, "does not support direct array assignment: " + n->unparseToString());

    std::set<SgVarRefExp *> outputs = l[0];
    std::set<SgVarRefExp *> inputs = l[1];
    
    for (std::set<SgVarRefExp *>::const_iterator it = outputs.begin();
         it != outputs.end(); ++it)
    {
      SgType * varType = (*it)->get_type();
      if (outputs.size() > 1) // can only assign to one var if not array
        setMode(*it, isSgArrayType(varType) || isPointerToArrayType(varType), attr);
      else
        setMode(*it, true, attr);
    }

    for (std::set<SgVarRefExp *>::const_iterator it = inputs.begin();
         it != inputs.end(); ++it)
    {
      std::cout << "setting v: " << (*it)->unparseToString() << "\n";
      setMode(*it, false, attr);
    }
  
    if (isSgPntrArrRefExp(assignee))
    {
      SgPntrArrRefExp * arrayExp = isSgPntrArrRefExp(assignee);
 
      SgExpressionPtrList &indices = isSgExprListExp(arrayExp->get_rhs_operand())->get_expressions();
      
      ArrayVariable * arrayVar = (ArrayVariable *)attr->findVar(isSgVarRefExp(arrayExp->get_lhs_operand()));
      for (int i = 0; i < indices.size(); ++i)
      {
        //SgVarRefExp * index = isSgVarRefExp(indices[i]);
        SgExpression * e = indices[i];
        InductionVarFinder finder(attr);
        std::set<InductionVariable *> inductionVars = finder.traverse(e);
       
        if (inductionVars.size() > 0)
        {
          for (std::set<InductionVariable *>::const_iterator it = inductionVars.begin();
               it != inductionVars.end(); ++it)
          {
            std::cout << "array: " << arrayVar->getName() << " i: " << i << " ivar: " << **it << "\n";
            arrayVar->addIndexVar(i, *it, e);
          }
        }

        // no induction variable was found in array access, error if it is not a literal
        else if (isSgIntVal(e))
        {
          SgIntVal * intLit = isSgIntVal(e);
          arrayVar->addIndexVar(i, new IntLiteral(intLit, attr->getLoopDepth()), e);
          std::cout << "i: " << i << " lit: " << intLit->unparseToString() << "\n";
        }

        // ASSERT(e, "array access index is not a simple variable: " + assignee->unparseToString());
      }
    }
  
    return std::set<SgVarRefExp *>();
  }

  else 
  {
    std::set<SgVarRefExp *> result;
    for (SynthesizedAttributesList::const_iterator it = l.begin(); it != l.end(); ++it)
    {
      std::set<SgVarRefExp *> s = *it;
      result.insert(s.begin(), s.end());
    }

    if (isSgVarRefExp(n))
    {
     // std::cout << "adding: " << isSgVarRefExp(n)->unparseToString() << "\n";

      // set all vars in array declaration to be inputs
      SgArrayType * arrayType = isSgArrayType(isSgVarRefExp(n)->get_type());
      
      if (arrayType)
      {
        SgExpressionPtrList &dimInfo = arrayType->get_dim_info()->get_expressions();
        for (int i = 0; i < dimInfo.size(); ++i)
        {
          SetInputVisitor v(attr);
          v.traverse(dimInfo[i], preorder);
        }
      }

      result.insert(isSgVarRefExp(n));
    }
    
    else 
    {
      //std::cout << "find: " << n->unparseToString() << " class: " << n->sage_class_name()
      //          << " num: " << l.size() << "\n";

      if (isSgFortranDo(n))
      {
        SgFortranDo * loop = isSgFortranDo(n);
        
        std::set<SgVarRefExp *> s = l[loop->get_childIndex(loop->get_initialization())];
        for (std::set<SgVarRefExp *>::const_iterator it = s.begin(); it != s.end(); ++it)
        {
          setMode(isSgVarRefExp(*it), false, attr);
          //std::cout << "var: " << (*it)->unparseToString() << "\n"; 
        }     
        
        s = l[loop->get_childIndex(loop->get_increment())];
        for (std::set<SgVarRefExp *>::const_iterator it = s.begin(); it != s.end(); ++it)
          setMode(isSgVarRefExp(*it), false, attr);

        s = l[loop->get_childIndex(loop->get_bound())];
        for (std::set<SgVarRefExp *>::const_iterator it = s.begin(); it != s.end(); ++it)
          setMode(isSgVarRefExp(*it), false, attr);
      }
    }
     
    return result;
  }
}

std::set<InductionVariable *>
InductionVarFinder::evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList l)
{
  std::set<InductionVariable *> result;
  for (SynthesizedAttributesList::const_iterator it = l.begin(); it != l.end(); ++it)
  {
    std::set<InductionVariable *> s = *it;
    result.insert(s.begin(), s.end());
  }
 
  if (isSgVarRefExp(n))
  {
    Variable * v = attr->findVar(isSgVarRefExp(n));
    InductionVariable * inductionVar = dynamic_cast<InductionVariable *>(v);
    if (inductionVar)
      result.insert(inductionVar);
  }

  return result;
}



void
setMode (SgVarRefExp * e, bool isOutput, LoopAttribute * attr)
{
  Variable * v = attr->findVar(e);
  Variable::UseMode mode = v->getMode();
  if (isOutput)
  {
    if (mode == Variable::Input)
      v->setMode(Variable::InOut);
    else if (mode != Variable::InOut)
      v->setMode(Variable::Output);
    // else it is already Output
  }
  else
  {
    if (mode == Variable::Output)
      v->setMode(Variable::InOut);
    else if (mode != Variable::InOut)
      v->setMode(Variable::Input);
  }
}

/*
  SgAssignOp * e = isSgAssignOp(n);

  std::string var("");
  bool isOutput = false;

  if (isSgPntrArrRefExp(n))   
  {
    SgPntrArrRefExp * arrayRef = isSgPntrArrRefExp(n);
    var = varName(static_cast<SgVarRefExp *>(arrayRef->get_lhs_operand()));
    
    if (isSgAssignOp(arrayRef->get_parent())) // a(i) = x
      isOutput = true;
    // else it is just a use
  }

  else if (isSgVarRefExp(n))
  {
    var = varName(static_cast<SgVarRefExp *>(n));
    if (isSgAssignOp(n->get_parent()))
    {      
      isOutput = true;
      if (isSgArrayType(isSgExpression(n)->get_type())) // a = x where a, x are arrays
        ASSERT(false, "does not support direct array assignment");
    }
    // else it is just a use
  }

  if (var.compare("") != 0)
  {
    for (VariableSet::iterator it = attr->getUsedVars().begin(); 
         it != attr->getUsedVars().end(); ++it)
    {
      Variable * v = *it;
      if (v->name.compare(var) == 0)
      {
        Variable::UseMode mode = v->getMode();
        if (isOutput)
        {
          if (mode == Variable::Input)
            v->setMode(Variable::InOut);
          else if (mode != Variable::InOut)
            v->setMode(Variable::Output);
          // else it is already Output
        }
        else
        {
          if (mode == Variable::Output)
            v->setMode(Variable::InOut);
          else if (mode != Variable::InOut)
            v->setMode(Variable::Input);
        }
        
        std::cout << "var: " << v->name << " mode: " << v->getMode() << "\n";
        break;
      }
    }
  }  
}
*/

/*
LoopAttribute *
LoopVarAnalyzer::evaluateInheritedAttribute (SgNode* n, LoopAttribute * attr)
{
  if (isSgFortranDo(n))
  {
    LoopAttribute * a = static_cast<LoopAttribute *>(n->getAttribute(LoopAttribute::Name));

    SgInitializedName * loopVar = SageInterface::getLoopIndexVariable(n);
    Variable * v = new Variable(loopVar->get_name().getString(),
                                loopVar->get_type(), a->getLoopDepth());    

    debug(1) << "found induction var: " << *v << " depth: " << a->getLoopDepth() << "\n";
    attr->addInductionVar(v);
  }

*/


}
