#pragma once

#include "LoopAttribute.h"
#include "util.h"
#include "debug.h"
#include "rose.h"

#include <string>
#include <sstream>
#include <vector>

using namespace std;

namespace StencilTranslator {

struct IRNode {
  virtual string unparse(bool isLVal = false) const = 0;
  virtual ~IRNode() { };
};

struct Exp : public IRNode {
  virtual string unparse(bool isLVal) const = 0;
  ~Exp() { };
};

struct Stmt : public IRNode {
  virtual string unparse(bool isLVal) const = 0;
  ~Stmt() { }
};

/* Expressions */
class VarNode : public Exp 
{
  protected:
    string name;
    SgType * type;
    Variable::UseMode mode; 

  public:
    VarNode(string n, SgType * t, Variable::UseMode m = Variable::Input) : name(n), type(t), mode(m) { }

    virtual string unparse(bool isLVal) const 
    { 
      if (isLVal && (isSgArrayType(type) || isPointerToArrayType(type)) && 
          mode == Variable::InOut)
        return name + "_out"; // append _out if LHS of array assignments
        //return name;
      else
        return name;
    }

    std::string getName() const { return name; }
    ~VarNode() { }
};

class NumNode : public Exp 
{
  protected:
    enum NumType { Int, Double, Float };

    NumType type;
    int intVal;
    double doubleVal;
    float floatVal;

  public:
    NumNode(int n) : intVal(n), type(Int) {}
    NumNode(double n) : doubleVal(n), type(Double) {}
    NumNode(float n) : floatVal(n), type(Float) {}
    ~NumNode() { }

    string unparse(bool isLVal) const 
    {
      string ret;
      switch (type)
      {
      case Int:
      {  ret =  static_cast<ostringstream*>( &(ostringstream() << intVal) )->str(); break; }
      
      case Double:
      {  
        ret = encodeDoubleVal(doubleVal);
        break;
      }

      case Float:
      {
        ret = encodeFloatVal(floatVal);
        break;
      }
      
      default:  { ASSERT(false, "unknown type: " + type); }
      }

      return ret;
    }
};

class BinExp : public Exp 
{
  public:    
    enum Op { Plus, Minus, Mult, Div, LT };

  protected:
    Exp* left;
    Exp* right;
    BinExp::Op op;     

  public:
    BinExp(Exp* l, BinExp::Op op, Exp* r) : left(l), right(r), op(op) {}
    ~BinExp() { delete left; delete right; }

    string unparse(bool isLVal) const 
    {
      string opStr;
      switch (op) 
      {
      case Plus: opStr = "+"; break;
      case Minus: opStr = "-"; break;
      case Mult: opStr = "*"; break;
      case Div: opStr = "/"; break;
      case LT: opStr = "<"; break; 
      default: ASSERT(false, "unknown binop: " + op);
      }
      
      return "(" + left->unparse(isLVal) + " " + opStr + " " + right->unparse(isLVal) + ")";
    }
};

class UnaryExp : public Exp
{
  public:    
    enum Op { Neg, Pos };

  protected:
    Exp * child;
    UnaryExp::Op op;

  public:
    UnaryExp (Exp * child, UnaryExp::Op op) : child(child), op(op) {}
    ~UnaryExp () { delete child; }

    string unparse(bool isLVal) const
    {
      string opStr;
      switch (op)
      {
      case Neg: opStr = "-"; break;
      case Pos: opStr = "+"; break;
      default: ASSERT(false, "unknown unary op: " + op);
      }

      return opStr + child->unparse(isLVal);
    }
};

class ArrExp : public Exp 
{
  protected:
    VarNode* name;
    Exp* loc;
  
  public:
    ArrExp(VarNode* n, Exp* l) : name(n), loc(l) { }
    ~ArrExp() { delete name; delete loc; }

    string unparse(bool isLVal) const 
    {
      if (isLVal && dynamic_cast<VarNode *>(name))        
        return name->unparse(true) + "[" + loc->unparse(isLVal) + "]";
      else
        return name->unparse(isLVal) + "[" + loc->unparse(isLVal) + "]";
    }

};

// sketch uninterpreted function call
class UnintpFnCall : public Exp
{
  protected:
    string name;
    vector<Exp *> actuals;

  public:
    UnintpFnCall (string name, const vector<Exp*> &actuals) : 
      name(name), actuals(actuals) {}
      /*
    {
      for (int i = 0; i < actuals.size(); ++i)
        this->actuals.push_back(actuals[i]);
    }
*/

    ~UnintpFnCall () { actuals.clear(); }

    string unparse (bool isLVal) const
    {
      stringstream ss;
      ss << name + "(";
      int numActuals = actuals.size();
      for (int i = 0; i < numActuals; ++i)
      {
        ss << actuals[i]->unparse(isLVal);
        if (numActuals > 1 && i < actuals.size() - 1)
          ss << ", ";
      }
      ss << ")";
      return ss.str();
    }
};

/* Statements */
class AssignStmt : public Stmt 
{
  protected:
    Exp* lval;
    Exp* rval;

  public:
    AssignStmt(Exp* l, Exp* r) : lval(l), rval(r) { }
    ~AssignStmt() { delete lval; delete rval; }

    string unparse(bool isLVal) const {
      return lval->unparse(true) + " = " + rval->unparse(isLVal);
    }

};

class Block : public Stmt 
{
  protected:
    vector<Stmt*> body;

  public:
    Block() { }
    Block(vector<Stmt*> b) : body(b) { }
    ~Block() { body.clear(); }
    vector<Stmt*>&  getBody() { return body; }

    string unparse(bool isLVal) const 
    {
      string ret = "";
      for (vector<Stmt*>::const_iterator it = body.begin(); 
           it != body.end(); ++it)
        ret += (*it)->unparse(isLVal) + "\n";

      return ret;
    }
};

class WhileLoop : public Stmt 
{
  protected:
    VarNode* iter_var;
    Exp* test;
    Block* body;

  public:
    WhileLoop(VarNode* i, Exp* t, Block* b) : iter_var(i), test(t), body(b) { }
    ~WhileLoop() { delete iter_var; delete test; delete body; }

    string unparse(bool isLVal) const 
    {
      string ret = "while {" + iter_var->unparse(isLVal) + ", " + test->unparse(isLVal) + "}\n{\n";
      ret += body->unparse(isLVal) + "}\n";
      return ret;
    }
};


}
