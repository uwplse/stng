#include "IRTranslator.h"
#include "LoopAttribute.h"
#include "stencil_ir.h"

namespace StencilTranslator
{

void
IRTranslator::translateLoops (std::string outdirname, SgProject * project)
{
  std::vector<SgFortranDo*> loops = 
    SageInterface::querySubTree<SgFortranDo>(project, V_SgFortranDo);

  for (std::vector<SgFortranDo *>::const_iterator it = loops.begin();
       it != loops.end(); ++it)
  {
    SgFortranDo * loop = *it;
    LoopAttribute * attr = 
      static_cast<LoopAttribute *>(loop->getAttribute(LoopAttribute::Name)); 

    std::cout << "processing loop: " << loop->unparseToString() << " is transformable: " 
              << attr->getIsTransformable() << "\n";
    if (attr->getIsTransformable())
    {
      LoopVisitor visitor(attr);
      IRNode * r = visitor.traverse(loop);

      std::string filename = outdirname + "/" + attr->getIrFilename();
      std::ofstream out(filename, ios::out | ios::trunc);
      
      out << visitor.generateMetadata(loop);    
      out << r->unparse();   
      out.close();
    
      delete r;
    }
  }
}


/* LoopVisitor */
LoopVisitor::LoopVisitor (LoopAttribute * attr) : attr(attr) {}

IRNode*
LoopVisitor::evaluateSynthesizedAttribute (SgNode* n, SynthesizedAttributesList children) 
{
  std::cout << "Converting " << n->sage_class_name() << ":" << n->unparseToString() << "\n";
  IRNode * r = visitNode(n, children);
  return r;
}

IRNode *
LoopVisitor::visitNode (SgNode * n, SynthesizedAttributesList children) const
{
  IRNode * r;

  // variable
  if (isSgVarRefExp(n)) 
    r = visitVarRefExp(static_cast<SgVarRefExp *>(n));

  // number or boolean
  else if (isSgValueExp(n)) 
    r = visitValueExp(static_cast<SgValueExp *>(n));

  // array ref
  else if (isSgPntrArrRefExp(n)) 
    r = visitPntrArrRefExp(static_cast<SgPntrArrRefExp *>(n), children);

  // array ref RHS
  else if (isSgExprListExp(n))
    r = visitSgExprListExp(static_cast<SgExprListExp *>(n), children);

  // assignment
  else if (isSgAssignOp(n)) 
    r = visitAssignOp(static_cast<SgAssignOp *>(n), children);

  else if (isSgExponentiationOp(n))
    r = visitExponentiationOp(isSgExponentiationOp(n), children);

  // binary expression that is not assign / array / exp
  else if (isSgBinaryOp(n)) 
    r = visitBasicBinaryOp(static_cast<SgBinaryOp *>(n), children);
  
  // unary expression
  else if (isSgUnaryOp(n))
    r = visitUnaryOp(static_cast<SgUnaryOp *>(n), children);

  // function calls that we understand
  else if (isSgFunctionRefExp(n))
    r = visitFunctionRefExp(static_cast<SgFunctionRefExp *>(n), children);
  
  else if (isSgFunctionCallExp(n))
    r = visitFunctionCallExp(static_cast<SgFunctionCallExp *>(n), children);

  // do .. end do
  else if (isSgFortranDo(n))
    r = visitFortranDo(static_cast<SgFortranDo *>(n), children);

  // block
  else if (isSgBasicBlock(n))
    r = visitBasicBlock(static_cast<SgBasicBlock *>(n), children);

  // the rest of these are "dumb" returns to propagate information up the hierarchy
  else if (isSgExprStatement(n))
    r = children[0];

  else if (isSgNullExpression(n))
    r = NULL;
  
  else
    ASSERT(false, "unknown expr: " << n->class_name() << " " << n->unparseToString());

  /*
  std::cout << "\tProblem with converting " << n->class_name() << ":" << n->unparseToString() << "\n";
  return new VarNode("ERRROR");
  */

  return r;
}
  
IRNode *
LoopVisitor::visitVarRefExp (SgVarRefExp * n) const
{
  Variable * v = attr->findVar(n);
  return new VarNode(varName(n), n->get_type(), v->getMode());
}

IRNode *
LoopVisitor::visitValueExp (SgValueExp * n) const
{
  if (isSgIntVal(n))
    return new NumNode(static_cast<SgIntVal*>(n)->get_value());
  if (isSgDoubleVal(n))
    return new NumNode(static_cast<SgDoubleVal*>(n)->get_value());
  if (isSgFloatVal(n))
    return new NumNode(static_cast<SgFloatVal*>(n)->get_value());
  else
    ASSERT(false, "unknown SgValueExpr: " + n->class_name() + " " + n->unparseToString());
}

IRNode *
LoopVisitor::visitPntrArrRefExp (SgPntrArrRefExp * n, SynthesizedAttributesList children) const
{  
  return new ArrExp(dynamic_cast<VarNode*>(children[SgPntrArrRefExp_lhs_operand_i]), 
                    dynamic_cast<Exp*>(children[SgPntrArrRefExp_rhs_operand_i]));
}

IRNode *
LoopVisitor::visitBasicBinaryOp (SgBinaryOp * n, SynthesizedAttributesList children) const
{
  BinExp::Op op;  
  if (isSgSubtractOp(n))
    op = BinExp::Minus;
  else if (isSgAddOp(n))
    op = BinExp::Plus;
  else if (isSgMultiplyOp(n))
    op = BinExp::Mult;
  else if (isSgDivideOp(n))
    op = BinExp::Div;
  /*
  else if (isSgLessOrEqualOp(n))
    op = new string("<=");
  else if (isSgLessThanOp(n))
    op = new string("<");
  else if (isSgGreaterOrEqualOp(n))
    op = new string(">=");
  else if (isSgGreaterThanOp(n))
    op = new string(">");
  else {
    std::cout << "\tProblem converting " << n->unparseToString() << "\n";
    return new VarNode("ERRROR");
  }
  */
  else
    ASSERT(false, "unknown binary exp: " + n->unparseToString() + ":" + n->class_name());

  return new BinExp(dynamic_cast<Exp*>(children[SgBinaryOp_lhs_operand_i]), op, 
                    dynamic_cast<Exp*>(children[SgBinaryOp_rhs_operand_i]));
}

IRNode *
LoopVisitor::visitUnaryOp (SgUnaryOp * n, SynthesizedAttributesList children) const
{
  UnaryExp::Op op;

  if (isSgMinusOp(n))
    op = UnaryExp::Neg;
  else if (isSgUnaryAddOp(n))
    op = UnaryExp::Pos;
  else
    ASSERT(false, "unknown unary exp: " + n->unparseToString() + ":" + n->class_name());  

  return new UnaryExp(dynamic_cast<Exp*>(children[SgUnaryOp_operand_i]), op);
}

IRNode *
LoopVisitor::visitFunctionRefExp (SgFunctionRefExp * n, 
                                  SynthesizedAttributesList children) const
{   
  std::string name = n->get_symbol()->get_name().getString();
  if (name == "min" || name == "max")
    return new VarNode(name, n->get_type());
  else
    ASSERT(false, "unknown function call: " + n->unparseToString());
}

IRNode *
LoopVisitor::visitFunctionCallExp (SgFunctionCallExp * n,
                                   SynthesizedAttributesList children) const
{
  std::string name = dynamic_cast<VarNode *>(children[0])->getName();
  if (name == "min" || name == "max")
  {
    std::vector<Exp *> actuals;
    actuals.push_back(dynamic_cast<Exp*>(children[1]));
    actuals.push_back(dynamic_cast<Exp*>(children[2]));

    return new UnintpFnCall(name, actuals);
  }
  else
    ASSERT(false, "unknown function call: " + n->unparseToString());
}

IRNode * 
LoopVisitor::visitExponentiationOp (SgExponentiationOp * n, 
                                    SynthesizedAttributesList children) const
{
  std::vector<Exp *> actuals;
  actuals.push_back(dynamic_cast<Exp*>(children[SgExponentiationOp_lhs_operand_i]));
  actuals.push_back(dynamic_cast<Exp*>(children[SgExponentiationOp_rhs_operand_i]));

  return new UnintpFnCall("exp", actuals);
}


IRNode *
LoopVisitor::visitAssignOp (SgAssignOp * n, SynthesizedAttributesList children) const
{
  return new AssignStmt(dynamic_cast<Exp*>(children[SgAssignOp_lhs_operand_i]), 
                        dynamic_cast<Exp*>(children[SgAssignOp_rhs_operand_i]));
}

IRNode *
LoopVisitor::visitFortranDo (SgFortranDo * n, SynthesizedAttributesList children) const
{
  // we construct a block of two statements: one for the loop var initialization, one for the while loop
  SgInitializedName * loopvar = SageInterface::getLoopIndexVariable(n);
  string loopvarName = loopvar->get_name().getString();
  Block * body = dynamic_cast<Block*>(children[SgFortranDo_body]);
  Exp* increment_rhs = NULL;
  vector<Stmt*> b;

  // add increment as a statement to the loop body
  if (!(increment_rhs = dynamic_cast<Exp*>(children[SgFortranDo_increment])))
    increment_rhs = new BinExp(new VarNode(loopvarName, loopvar->get_type()), 
                               BinExp::Plus, new NumNode(1));
  body->getBody().push_back(new AssignStmt(new VarNode(loopvarName, loopvar->get_type()), increment_rhs));

  b.push_back(dynamic_cast<Stmt*>(children[SgFortranDo_initialization]));

  b.push_back(new WhileLoop(new VarNode(loopvarName, loopvar->get_type()),
                            new BinExp(new VarNode(loopvarName, loopvar->get_type()), 
                                       BinExp::LT, 
                                       dynamic_cast<Exp*>(children[SgFortranDo_bound])),
                            body));
  return new Block(b);
}

IRNode *
LoopVisitor::visitBasicBlock (SgBasicBlock * n, SynthesizedAttributesList children) const
{
  vector<Stmt*> b;
  for (SynthesizedAttributesList::const_iterator it = children.begin();
       it != children.end(); ++it)
    b.push_back(dynamic_cast<Stmt*>(*it));

  return new Block(b);
}

IRNode *
LoopVisitor::visitSgExprListExp (SgExprListExp * n, SynthesizedAttributesList children) const
{
  if (isSgPntrArrRefExp(n->get_parent()))
  {
    SgExpression * arrayVar = 
      (SgExpression*)isSgPntrArrRefExp(n->get_parent())->get_lhs_operand();
    
    SgType * arrayType = arrayVar->get_type();
    while (!isSgArrayType(arrayType))
    {
      if (isSgPointerType(arrayType))
        arrayType = isSgPointerType(arrayType)->get_base_type();
      else
        ASSERT(false, "unknown type: " + arrayType->class_name());
    }
                
    SgExpressionPtrList dimInfo = 
      isSgArrayType(arrayType)->get_dim_info()->get_expressions();
    

    // assume row major layout
    // implement the exp: n_d + (N_d * (n_{d-1} + N_{d-1} * (n_{d-2} + (N_{d-3} * ...
    // where n_d = n-dim index, and N_d = size of the Nth dimension
    
    int numChildren = children.size(); 
    /* row major
    Exp * ret = dynamic_cast<Exp*>(children[0]);    
    for (int i = 1; i < numChildren; ++i)
      */

    // column major
    Exp * ret = dynamic_cast<Exp*>(children[numChildren - 1]);
    for (int i = numChildren - 2; i >= 0; --i)
    {     
      SgExpression * dim = dimInfo[i];
      Exp * dimension;
      LoopVisitor v(attr);

      if (isSgSubscriptExpression(dim))
      {
        SgSubscriptExpression * bounds = isSgSubscriptExpression(dim);

        Exp * upperBoundExp;
        Exp * lowerBoundExp;
      
        std::cout << "bounds is: " << bounds << "\n"; 
        if (isSgNullExpression(bounds->get_upperBound())) // (:) expression
        {
          SgVarRefExp * arrayVar = 
            isSgVarRefExp(isSgPntrArrRefExp(n->get_parent())->get_lhs_operand());
          std::string arrayVarName = 
            loopBoundVarName(true, varName(arrayVar), i);
          upperBoundExp = new VarNode(arrayVarName, new SgTypeInt());
        }
        else // (a:b) expression 
          upperBoundExp = (Exp *)v.traverse(bounds->get_upperBound());

        if (isSgNullExpression(bounds->get_lowerBound()))
        {
          SgVarRefExp * arrayVar = 
            isSgVarRefExp(isSgPntrArrRefExp(n->get_parent())->get_lhs_operand());
          std::string arrayVarName = 
            loopBoundVarName(false, varName(arrayVar), i);
          lowerBoundExp = new VarNode(arrayVarName, new SgTypeInt());
        }
        else
          lowerBoundExp = (Exp *)v.traverse(bounds->get_lowerBound());
      
        dimension = new BinExp(upperBoundExp, BinExp::Minus, lowerBoundExp);
      }
      
      else if (isSgIntVal(dim))
        dimension = (Exp *)v.traverse(isSgIntVal(dim));
      
      else if (isSgVarRefExp(dim))
        dimension = (Exp *)v.traverse(isSgVarRefExp(dim));
      
      else if (isSgAddOp(dim))
        dimension = (Exp *)v.traverse(isSgAddOp(dim));

      else
        ASSERT(false, "unknown type of array bound expr: " + dim->unparseToString() +
                      " class: " + dim->class_name());
     
      
      ret = new BinExp((Exp*)children[i], BinExp::Plus, 
                       new BinExp(dimension, BinExp::Mult, ret));
    }
                     
    return ret;    
  }
  else
    return children[0]; 
    //ASSERT(false, "unknown expr list parent: " + n->get_parent()->class_name() + ":" +
    //              n->get_parent()->unparseToString());
}

bool 
depthSort (Variable * v1, Variable * v2)
{
  return v1->loopDepth < v2->loopDepth; 
}

std::string
LoopVisitor::generateMetadata (SgScopeStatement * loop) const
{
  LoopAttribute * attr = static_cast<LoopAttribute *>(loop->getAttribute(LoopAttribute::Name));
  std::stringstream ss;

  ss << "#INFO: { \"loopvars\": [";
  const VariableSet & inductionVars = attr->getInductionVars();

  // sort the induction variables according to their loop depths
  std::vector<Variable *> sortedIndVars(inductionVars.begin(), inductionVars.end());
  std::sort(sortedIndVars.begin(), sortedIndVars.end(), depthSort); 
  
  //for (VariableSet::const_iterator it = inductionVars.begin(); 
  //     it != inductionVars.end(); ++it)

  for (std::vector<Variable *>::const_iterator it = sortedIndVars.begin(); 
       it != sortedIndVars.end(); ++it)
  {
    Variable * v = *it;
    ss << "\"" << v->name << "\"";
    //VariableSet::const_iterator it2 = it; 
    std::vector<Variable *>::const_iterator it2 = it; 
    ++it2;
    
    //if (inductionVars.size() > 1 && it2 != inductionVars.end())
    if (sortedIndVars.size() > 1 && it2 != sortedIndVars.end())
      ss << ", ";          
  }
   
  ss << "], \"inputs\": [";
  
  const VariableSet & usedVars = attr->getUsedVars();
  for (VariableSet::const_iterator it = usedVars.begin();
       it != usedVars.end(); ++it)
  {
    Variable * v = *it;
    VariantT t = v->type->variantT();
 
    ss << "[\"" << v->name << "\", " << translateType(v->type) << "]";
   
    if (v->getMode() == Variable::InOut)
      ss << ",[\"" << v->name << "_out\", " << translateType(v->type) << "]";

    VariableSet::const_iterator it2 = it; 
    ++it2;
    if (usedVars.size() > 1 && it2 != usedVars.end()) 
      ss << ", ";      
  }

  const VariableSet & sketchVars = attr->getSketchVars();

  if (sketchVars.size() > 0)
    ss << ", ";

  for (VariableSet::const_iterator it = sketchVars.begin();
       it != sketchVars.end(); ++it)
  {
    Variable * v = *it;
    VariantT t = v->type->variantT();
 
    ss << "[\"" << v->name << "\", " << translateType(v->type) << "]";
  
    VariableSet::const_iterator it2 = it; 
    ++it2;
    if (sketchVars.size() > 1 && it2 != sketchVars.end())
      ss << ", ";      
  }

  ss << "] }\n\n";
  return ss.str();
}

std::string
LoopVisitor::translateType (SgType * type, bool addQuote) const
{
  VariantT t = type->variantT();
  std::string typeName;
  switch (t)
  {
  case V_SgTypeInt: typeName = addQuote ? "\"int\"" : "int"; break;
  case V_SgTypeFloat: typeName = addQuote ? "\"double\"" : "double"; break;   
  // Fortran REAL is represented as float
  case V_SgTypeDouble: typeName = addQuote ? "\"double\"" : "double"; break;

  case V_SgArrayType:
  {
    SgArrayType * arrayT = static_cast<SgArrayType *>(type);
    std::string baseTStr = translateType(arrayT->get_base_type(), false);

    SgExprListExp * dim = arrayT->get_dim_info();
      
    std::stringstream ss;
    if (addQuote)
      ss << "\"" << baseTStr << "[";
    else
      ss << baseTStr << "[";
    
    for (int i = 0; i < dim->get_expressions().size(); ++i)
    {
      ss << "_N";
      if (i < dim->get_expressions().size() -1)
        ss << "*";
    }

    if (addQuote)
      ss << "]\"";
    else
      ss << "]";

    typeName = ss.str();
    break;
  }
  
  // silently drop the pointer, assuming operation is on base values
  case V_SgPointerType:
  {
    SgPointerType * pT = static_cast<SgPointerType *>(type);
    typeName = translateType(pT->get_base_type());
    break;
  }
  
  default: ASSERT(false, "unhandled type: " + type->class_name());
  }

  return typeName;
}

}
