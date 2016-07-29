#pragma once

#include "rose.h"
#include "dataflow.h"
#include "lattice.h"
#include "liveDeadVarAnalysis.h"
#include "VariableStateTransfer.h"

namespace StencilTranslator
{

class TaintLattice : public FiniteLattice
{
  public:
    typedef enum { Uninitialized, NonArray, Array } Taint;

  protected:
    Taint taint;
  
  public:
    TaintLattice ();
    TaintLattice (const TaintLattice &o);
    
    // required virtual functions
    void initialize ();
    Lattice * copy () const;
    void copy (Lattice * o);
    bool operator== (Lattice * o);
         
    bool meetUpdate (Lattice * o);
        
    std::string str (std::string indent=""); 

    friend std::ostream& operator<< (std::ostream &o, TaintLattice &t);

    Taint getTaint ();
    void setTaint (Taint t); 
};

class ArrayIndexAnalysis;
class TaintAnalysisVisitor : public VariableStateTransfer<TaintLattice>
{
  protected:
    ArrayIndexAnalysis * aia;

  public:
    TaintAnalysisVisitor (const Function &f, const DataflowNode &n, NodeState &s, 
                          const std::vector<Lattice *> &dfInfo, ArrayIndexAnalysis * aia);
    bool finish ();
    void visit (SgBinaryOp * op);
    void visit (SgPntrArrRefExp * op);
    void visit (SgValueExp * lit);
    void visit (SgAssignOp * op);
    void visit (SgUnaryOp * op);
    void visit (SgExpression * e);
    void visit (SgNullExpression * lit);
};

class ArrayIndexAnalysis : public IntraFWDataflow
{
  protected:
    LiveDeadVarsAnalysis * ldva;
    std::map<SgNode *, TaintLattice::Taint> taints;

  friend class TaintAnalysisVisitor;

  public:
    ArrayIndexAnalysis (LiveDeadVarsAnalysis * ldva);

    void genInitState (const Function &f, const DataflowNode &n, const NodeState &s, 
                       std::vector<Lattice *> &initLattices, std::vector<NodeFact *> &initFacts);    

    bool transfer (const Function &f, const DataflowNode &n, NodeState &s, 
                   const std::vector<Lattice *> &dfInfo);

    boost::shared_ptr<IntraDFTransferVisitor> getTransferVisitor (const Function &f, 
                                    const DataflowNode &n, NodeState &s, 
                                    const std::vector< Lattice * > &dfInfo);

    void printResults ();
    TaintLattice::Taint getTaint (SgNode * n);
};

}
