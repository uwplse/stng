#include "StructureAnalyzer.h"
#include "LoopAttribute.h"
#include "debug.h"

#include <algorithm>
#include <numeric>

namespace StencilTranslator
{

void
StructureAnalyzer::analyze (SgProject * project)
{
  LoopDepthVisitor lpVisitor;
  //lpVisitor.traverse(project, false);
  lpVisitor.traverse(project, 0);

  ConditionalVisitor cVisitor;
  cVisitor.traverse(project);

  CallVisitor callVisitor;
  callVisitor.traverse(project);

  UseArrayVisitor uaVisitor;
  uaVisitor.traverse(project);

  UsePointerVisitor upVisitor;
  upVisitor.traverse(project);

  ComplexArrayAssignVisitor caVisitor;
  caVisitor.traverse(project);
}

/* LoopDepthVisitor */
unsigned int
LoopDepthVisitor::evaluateInheritedAttribute (SgNode * n, unsigned int depth)
{
  if (isSgFortranDo(n))
  {
    LoopAttribute * attr = static_cast<LoopAttribute *>(n->getAttribute(LoopAttribute::Name));

    std::cout << "depth for: " << n->unparseToString() << ": " << (depth + 1) << "\n";
    unsigned int newDepth = depth + 1;
    attr->setLoopDepth(newDepth);

    return newDepth;
  }
  
  else
    return depth;
}

/* HasConditionalVisitor */
bool
ConditionalVisitor::evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList child)
{
  bool hasConditional = 
    std::accumulate(child.begin(), child.end(), false , std::logical_or<bool>());
  
  // conditional exp only available in C 
  if (isSgIfStmt(n) || isSgSwitchStatement(n) || isSgConditionalExp(n))
    hasConditional = true;
  
  else if (isSgFortranDo(n))
  {
    LoopAttribute * attr = static_cast<LoopAttribute *>(n->getAttribute(LoopAttribute::Name));
    std::cout << n->unparseToString() << " has conditional: " << hasConditional << "\n";
    attr->setHasConditional(hasConditional);

    // propagate if we are part of a loop
    if (!attr->getIsInLoop())
      hasConditional = false;
  }

  return hasConditional;
}

/* CallVisitor */
bool
CallVisitor::evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList child)
{
  bool hasCall = 
    std::accumulate(child.begin(), child.end(), false , std::logical_or<bool>());
 
  if (isSgCallExpression(n) && !isHandledCall(isSgCallExpression(n)) || isSgIOStatement(n))  
  {
    std::cout << "StructureAnalyzer: found call: " << n->unparseToString() << "\n";
    hasCall = true;
  }

  else if (isSgFortranDo(n))
  {
    LoopAttribute * attr = static_cast<LoopAttribute *>(n->getAttribute(LoopAttribute::Name));
    std::cout << n->unparseToString() << " has call: " << hasCall << "\n";
    attr->setHasCall(hasCall);

    // propagate if we are part of a loop
    if (!attr->getIsInLoop())
      hasCall = false;
  }

  return hasCall;
}

bool
CallVisitor::isHandledCall (SgCallExpression * call)
{
  SgFunctionRefExp * fnExp = isSgFunctionRefExp(call->get_function());
  if (fnExp)
  {
    std::string name = fnExp->get_symbol()->get_name().getString();
    return (name == "min" || name == "max");
  }
  else
    return false;
}


/* UseArrayVisitor */
bool
UseArrayVisitor::evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList child)
{
  bool useArray = 
    std::accumulate(child.begin(), child.end(), false , std::logical_or<bool>());
  
  if (isSgPntrArrRefExp(n)) 
    useArray = true;
  
  else if (isSgFortranDo(n))
  {
    LoopAttribute * attr = static_cast<LoopAttribute *>(n->getAttribute(LoopAttribute::Name));
    std::cout << n->unparseToString() << " uses array: " << useArray << "\n";
    attr->setUseArray(useArray);

    // propagate if we are part of a loop
    if (!attr->getIsInLoop())
      useArray = false;
  }

  return useArray;
}

/* ComplexArrayAssignVisitor */
bool
ComplexArrayAssignVisitor::evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList child)
{
  bool hasComplexArrayAssign = 
    std::accumulate(child.begin(), child.end(), false , std::logical_or<bool>());
 
  if (isSgAssignOp(n))
  {
    SgExpression * assignee = isSgAssignOp(n)->get_lhs_operand();
    if (isSgPntrArrRefExp(assignee))
    {            
      SgPntrArrRefExp * arrayExp = isSgPntrArrRefExp(assignee);
      SgExpressionPtrList &indices = isSgExprListExp(arrayExp->get_rhs_operand())->get_expressions();
      for (int i = 0; i < indices.size(); ++i)
      {
        //SgVarRefExp * index = isSgVarRefExp(indices[i]);
        //SgFunctionCallExp * index = isSgFunctionCallExp(indices[i]);
        if (isSgFunctionCallExp(indices[i]) || isSgPntrArrRefExp(indices[i]))
        {
          std::cout << "found qqq: " << indices[i]->unparseToString() << "\n";
          hasComplexArrayAssign = true;
          break;
        }
      }
    }
  }

  else if (isSgFortranDo(n))
  {
    LoopAttribute * attr = static_cast<LoopAttribute *>(n->getAttribute(LoopAttribute::Name));
    std::cout << n->unparseToString() << " has complex array assign: " << hasComplexArrayAssign << "\n";
    attr->setHasComplexArrayAssign(hasComplexArrayAssign);

    // propagate if we are part of a loop
    if (!attr->getIsInLoop())
      hasComplexArrayAssign = false;

  }

  return hasComplexArrayAssign;
}


/* UsePointerVisitor */
bool
UsePointerVisitor::evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList child)
{
  bool usePointer = 
    std::accumulate(child.begin(), child.end(), false , std::logical_or<bool>());
  
  if (isSgDotExp(n)) 
    usePointer = true;
  
  /*
  else if (isSgExpression(n))
  { 
    SgExpression * e = isSgExpression(n);
    usePointer = isPointerType(e->get_type());    
  }
  */
  else if (isSgPointerAssignOp(n))
    usePointer = true;

  else if (isSgFortranDo(n))
  {
    LoopAttribute * attr = static_cast<LoopAttribute *>(n->getAttribute(LoopAttribute::Name));
    std::cout << n->unparseToString() << " uses pointer: " << usePointer << "\n";
    attr->setUsePointer(usePointer);

    // propagate if we are part of a loop
    if (!attr->getIsInLoop())
      usePointer = false;
  }

  return usePointer;
}

bool
UsePointerVisitor::isPointerType (SgType * t)
{
  if (isSgArrayType(t))
    return isPointerType((isSgArrayType(t))->get_base_type());
  else return isSgPointerType(t);
}



}
