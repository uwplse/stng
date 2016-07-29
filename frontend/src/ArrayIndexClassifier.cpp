#include "ArrayIndexClassifier.h"
#include "debug.h"

namespace StencilTranslator
{


TaintLattice::TaintLattice ()
{
  this->taint = Uninitialized;
}

TaintLattice::TaintLattice (const TaintLattice & o)
{
  this->taint = o.taint;
}

void TaintLattice::initialize () {}

Lattice * 
TaintLattice::copy () const
{
  return new TaintLattice(*this);
}

void
TaintLattice::copy (Lattice * o)
{
  TaintLattice * other = dynamic_cast<TaintLattice *>(o);
  this->taint = other->taint; 
}

bool
TaintLattice::operator== (Lattice * o)
{
  TaintLattice * other = dynamic_cast<TaintLattice *>(o);
  return (other->taint == this->taint);
}

std::string
TaintLattice::str (std::string indent)
{
  std::ostringstream out;
  out << indent;

  switch (taint)
  {
  case Uninitialized: { out << "[Uninitialized]"; break; }
  case NonArray: { out << "[Non Array]"; break; }
  case Array: { out << "[Array]"; break; }
  default: { ASSERT(false, "unknown taint value: " + taint); break; }
  }
 
  return out.str();
}

std::ostream& 
operator<< (std::ostream &o, TaintLattice &t)
{
  o << t.str("");
  return o;
}


bool
TaintLattice::meetUpdate (Lattice * o)
{
  TaintLattice * other = dynamic_cast<TaintLattice *>(o);
  Taint otherTaint = other->taint;
  bool modified;

  if (taint == Uninitialized)
  {
    if (otherTaint == Uninitialized)
      modified = false;
    else
    {
      this->taint = otherTaint;
      modified = true;
    }
  }

  else if (taint == NonArray)
  {
    if (otherTaint == NonArray)
      modified = false;
    else if (otherTaint == Array)
    {
      this->taint = Array;
      modified = true;
    }
    else
      ASSERT(false, "unknown taint value: " + otherTaint);
  }

  else if (taint == Array)
    modified = false;
 
  else
    ASSERT(false, "unknown taint value: " + taint);

  return modified;
}

TaintLattice::Taint TaintLattice::getTaint () { return this->taint; }
void TaintLattice::setTaint (Taint t) { this->taint = t; }

/* ArrayIndexAnalysis */

ArrayIndexAnalysis::ArrayIndexAnalysis (LiveDeadVarsAnalysis * ldva) : 
  ldva(ldva)
{ }

void
ArrayIndexAnalysis::genInitState (const Function &f, const DataflowNode &n, const NodeState &state,
                                  std::vector<Lattice *> &initLattices, std::vector<NodeFact *> &initFacts)
{
  std::map<varID, Lattice *> emptyM;
  FiniteVarsExprsProductLattice * l = new FiniteVarsExprsProductLattice((Lattice*) new TaintLattice(), emptyM, 
                                                                        (Lattice*) NULL, ldva, n, state);
  initLattices.push_back(l);

  this->taints[n.getNode()] = TaintLattice::Uninitialized;

  //std::cout << "init called on: " << n.getNode()->sage_class_name() 
  //         << " v: " << n.getNode()->unparseToString() << "\n";
}


bool 
ArrayIndexAnalysis::transfer (const Function &f, const DataflowNode &n, NodeState &state, 
                              const std::vector<Lattice *> &dfInfo)
{
  /*
  FiniteVarsExprsProductLattice * prodLat = dynamic_cast<FiniteVarsExprsProductLattice *>(*(dfInfo.begin()));

  const std::vector<Lattice *> &lattices = prodLat->getLattices();
  for (std::vector<Lattice *>::const_iterator it = lattices.begin(); it != lattices.end(); ++it)
    (dynamic_cast<TaintLattice *>(*it))->initialize();

  std::cout << "running analysis on: " << n.getNode()->sage_class_name() << " v: " 
           << n.getNode()->unparseToString() 
           << " lat: " << prodLat->getLattices().size() << "\n";
  


  if (isSgExpression(n.getNode()))
  {
    varID id = SgExpr2Var(isSgExpression(n.getNode()));
    TaintLattice * taint = dynamic_cast<TaintLattice *>(prodLat->getVarLattice(id));
    std::cout << "taint: " << taint << "\n";
  }
  
  return false;
  */
   
  assert(0);
  
  /*
  std::cout << "transfer on: " << n.getNode()->sage_class_name() << " v: " 
           << n.getNode()->unparseToString() << "\n";
  std::cout << "transfer A prodLat="<<(*dfInfo.begin()) <<"="<< (*dfInfo.begin())->str("    ")<<"\n";
  return false;
  */
}

boost::shared_ptr<IntraDFTransferVisitor>
ArrayIndexAnalysis::getTransferVisitor (const Function &f, const DataflowNode &n, NodeState &s, 
                                        const std::vector<Lattice *> &dfInfo)
{
  //std::cout << "get transfer called\n";
  return boost::shared_ptr<IntraDFTransferVisitor>(new TaintAnalysisVisitor(f, n, s, dfInfo, this));
  //return IntraFWDataflow::getTransferVisitor(f, n, s, dfInfo);
}


/* TaintAnalysisVisitor */

int debugLevel = 2;

TaintAnalysisVisitor::TaintAnalysisVisitor (const Function &f, const DataflowNode &n, NodeState &s, 
                                        const std::vector<Lattice *> &dfInfo, ArrayIndexAnalysis * aia) :
  VariableStateTransfer<TaintLattice>(f, n, s, dfInfo, debugLevel), aia(aia) 
{
  
  //std::cout << "transfer A prodLat="<<(*dfInfo.begin()) <<"="<< (*dfInfo.begin())->str("    ")<<"\n";
}

bool 
TaintAnalysisVisitor::finish ()
{
  return modified;
}


void
TaintAnalysisVisitor::visit (SgAssignOp * op)
{
  TaintLattice * lhs = getLattice(op->get_lhs_operand());
  TaintLattice * rhs = getLattice(op->get_rhs_operand());
  TaintLattice * r = getLattice(op);
  
  std::cout << "lhs: " << lhs << " v: " << op->get_lhs_operand()->unparseToString() 
           << " type: " << op->get_lhs_operand()->sage_class_name() << "\n";
  if (lhs)
  {
    lhs->setTaint(rhs->getTaint());
    aia->taints[op->get_lhs_operand()] = rhs->getTaint();
    modified = true;
    std::cout << "assign lhs result: " << *lhs << " v: " << op->unparseToString() << "\n";
  }
  else
    std::cout << "assign lhs (dead) " << op->unparseToString() << "\n";

  if (r != rhs)
  {
    r->setTaint(rhs->getTaint());
    aia->taints[op] = rhs->getTaint();
    modified = true;
  }
  else
    modified = false;
 
  if (r) 
    std::cout << "assign result: " << *r << " v: " << op->unparseToString() << "\n";
  else
    std::cout << "assign result: (dead) v: " << op->unparseToString() << "\n";
}

void
TaintAnalysisVisitor::visit (SgPntrArrRefExp * arr)
{
  TaintLattice * r = getLattice(arr);
  if (r && r->getTaint() != TaintLattice::Array)
  {
    r->setTaint(TaintLattice::Array);
    aia->taints[arr] = TaintLattice::Array;
    modified = true;
  }
  else 
    modified = false;
 
  if (r) 
    std::cout << "arr access result: " << *r << " v: " << arr->unparseToString() << "\n";
  else
    std::cout << "arr access result (dead) v: " << arr->unparseToString() << "\n";
}

void
TaintAnalysisVisitor::visit (SgValueExp * lit)
{
  TaintLattice * r = getLattice(lit);
  if (r && r->getTaint() != TaintLattice::NonArray)
  {
    r->setTaint(TaintLattice::NonArray);
    aia->taints[lit] = TaintLattice::NonArray;
    modified = true;
  }
  else
    modified = false;
  
  if (r)
    std::cout << "lit result: " << *r << " v: " << lit->unparseToString() << "\n";
  else
    std::cout << "lit result: (dead)  v: " << lit->unparseToString() << "\n";
}

void
TaintAnalysisVisitor::visit (SgNullExpression * lit)
{
  TaintLattice * r = getLattice(lit);
  if (r && r->getTaint() != TaintLattice::NonArray)
  {
    r->setTaint(TaintLattice::NonArray);
    aia->taints[lit] = TaintLattice::NonArray;
    modified = true;
  }
  else
    modified = false;
  
  if (r)
    std::cout << "null result: " << *r << " v: " << lit->unparseToString() << "\n";
  else
    std::cout << "null result: (dead)  v: " << lit->unparseToString() << "\n";
}

void
TaintAnalysisVisitor::visit (SgBinaryOp * op)
{
  TaintLattice * lhs = getLattice(op->get_lhs_operand());
  TaintLattice * rhs = getLattice(op->get_rhs_operand());
  TaintLattice * r = getLattice(op);
  
  if (isSgAddOp(op) || isSgAndOp(op) || isSgBitAndOp(op) || isSgBitOrOp(op) ||
      isSgBitXorOp(op) || isSgConcatenationOp(op) || isSgDivideOp(op) || 
      isSgEqualityOp(op) || isSgExponentiationOp(op) || isSgGreaterThanOp(op) || 
      isSgIntegerDivideOp(op) || isSgIsNotOp(op) || isSgIsOp(op) || 
      isSgLessOrEqualOp(op) || isSgLessThanOp(op) || isSgLshiftOp(op) || 
      isSgMembershipOp(op) || isSgModOp(op) || isSgMultiplyOp(op) || 
      isSgNonMembershipOp(op) || isSgNotEqualOp(op) || isSgOrOp(op) ||
      isSgRshiftOp(op) || isSgSubtractOp(op))
  {
    if ( r && (lhs->getTaint() == TaintLattice::Array || rhs->getTaint() == TaintLattice::Array) &&
         r->getTaint() != TaintLattice::Array)
    {
      r->setTaint(TaintLattice::Array);
      aia->taints[op] = TaintLattice::Array;
      modified = true;
    }
    else
      modified = false;
  }

  else
    ASSERT(0, "unknown binary op: " + op->unparseToString());

  if (r)
    std::cout << "binop result: " << *r << " v: " << op->unparseToString() << "\n";
  else
    std::cout << "binop result (dead) v: " << op->unparseToString() << "\n";


  //std::cout << "assign: " << assign->unparseToString() << " lhs: " << assign->get_lhs_operand()->unparseToString() << " rhs: " << assign->get_rhs_operand()->unparseToString() << "\n";
  //std::cout << "lhs: " << lhs << " rhs: " << rhs << "\n";
}

void 
TaintAnalysisVisitor::visit (SgUnaryOp * op)
{
  TaintLattice * operand = getLattice(op->get_operand());
  TaintLattice * r = getLattice(op);
  
  if (isSgBitComplementOp(op) || isSgCastExp(op) || isSgMinusMinusOp(op) || 
      isSgMinusOp(op) || isSgNotOp(op) || isSgPlusPlusOp(op) || isSgUnaryAddOp(op))
  {
    if (r && operand->getTaint() != r->getTaint())
    {
      r->setTaint(operand->getTaint());
      aia->taints[op] = operand->getTaint();
      modified = true;
    }
    else
      modified = false;
  }

  else
    ASSERT(0, "unknown unary op: " + op->unparseToString());

  if (r)
    std::cout << "unop result: " << *r << " v: " << op->unparseToString() << "\n";
  else
    std::cout << "unop result (dead) v: " << op->unparseToString() << "\n";
}

void
TaintAnalysisVisitor::visit (SgExpression * e)
{
  if (! (isSgVarRefExp(e) || isSgExprListExp(e)) )
    ASSERT(0, "unknown exp: " + e->unparseToString() + " type: " + e->sage_class_name());
  //ROSE_VisitorPatternDefaultBase::visit((SgExpression*)e);
}

void
ArrayIndexAnalysis::printResults ()
{
  for (std::map<SgNode *, TaintLattice::Taint>::const_iterator it = taints.begin(); it != taints.end(); ++it)
  {
    SgNode * k = it->first;
    TaintLattice::Taint t = it->second;
    std::cout << "key: " << k->unparseToString() << " v: " << t << "\n";
  }
}

TaintLattice::Taint
ArrayIndexAnalysis::getTaint (SgNode * n)
{
  if (taints.find(n) == taints.end())
    ASSERT(0, "cannot find taint for: " + n->unparseToString());
  else
    return taints[n];
}

}
