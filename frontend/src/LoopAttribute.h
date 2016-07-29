#pragma once

#include "rose.h"

namespace StencilTranslator
{
  class Variable
  {
    public:
      enum UseMode { Unknown, Input, Output, InOut };

      std::string name;
      SgType * type;
      unsigned int loopDepth; 
      UseMode mode;  
    
      Variable (std::string name, SgType * type, unsigned int loopDepth) : 
        name(name), type(type), loopDepth(loopDepth), mode(Unknown) {}
      
      void setMode (UseMode m);
      UseMode getMode () const;
      
      std::string getName () const;

      virtual std::string toString () const;
      friend std::ostream & operator<< (std::ostream &o, Variable &v);
  };

  struct VarCmp
  {
    bool operator() (Variable * l, Variable * r) const
    {   
      // ignores loop depth    
      return l->toString() < r->toString(); 
    }
  };

  typedef std::set<Variable *, VarCmp> VariableSet;

  class ArrayVariable : public Variable
  {
    protected:
      std::vector<VariableSet> indexVars;
      std::vector<SgExpression *> indexExprs; // to handle (indexVar - k) kind of expr
      bool isPointer;
    
    public:
      ArrayVariable (std::string name, SgArrayType * type, unsigned int loopDepth, bool isPointer);
      
      void addIndexVar (unsigned int index, Variable * v, SgExpression * e);
      const VariableSet & getIndexVars (unsigned int index) const;
      const SgExpression * getIndexExpr (unsigned int index) const { return indexExprs[index]; }
      bool getIsPointer () const;
  };

  class InductionVariable : public Variable
  {
    protected:
      SgExpression * lbound;
      SgExpression * ubound;

    public:
      InductionVariable (std::string name, SgType * type, unsigned int loopDepth,
                         SgExpression * lbound, SgExpression * ubound); 

      SgExpression * getLBound () const;
      SgExpression * getUBound () const;

      //std::string toString () const;
  };

  class IntLiteral : public Variable
  {
    protected:
      SgIntVal * value;

    public:
      IntLiteral (SgIntVal * e, unsigned int loopDepth);

      int getValue () const;
  };


  class LoopAttribute : public AstAttribute
  {
    protected:
      bool isTransformable;
      
      bool hasConditional;
      bool hasCall;
      bool useArray;
      bool usePointer;
      unsigned int loopDepth; // 0 means not in a loop
      bool hasComplexArrayAssign; // whether it has arr(x + 1, y)

      VariableSet usedVars;
      VariableSet sketchVars;
      VariableSet inductionVars;

      std::string loopName; // for output generation
      std::string fileName;
      std::string irFilename;
      std::string halideFnName;
      std::string halideGlueFnName;
      std::string fnName;
      std::string benchmarkFnName;
      std::string halideModuleName;
      std::string moduleName;
      
    public:
      static const std::string Name;

      LoopAttribute ();
      
      void setIsTransformable (bool isTransformable);
      bool getIsTransformable () const;
      void setHasCall (bool hasCall);
      bool getHasCall () const;
      void setIsInLoop (bool isInLoop);
      bool getIsInLoop () const;
      void setLoopDepth (unsigned int depth);
      unsigned int getLoopDepth () const;
      void setHasConditional (bool hasConditional);
      bool getHasConditional () const;
      void setUseArray (bool useArray);
      bool getUseArray () const;
      void setUsePointer (bool usePointer);
      bool getUsePointer () const;
      void setHasComplexArrayAssign (bool v);
      bool getHasComplexArrayAssign () const;
      bool hasUnknownUsedVars () const;

      void addUsedVar (Variable * v);
      void addSketchVar (Variable * v);
      void addInductionVar (Variable * v);
      bool isInductionVar (Variable * v) const;

      const VariableSet & getUsedVars () const;
      const VariableSet & getSketchVars () const;
      const VariableSet & getInductionVars () const;

      Variable * findVar (SgVarRefExp * e) const; 

      void setNames (std::string loopName, std::string fileName, std::string irName);
      const std::string &getLoopName () const;
      const std::string &getFilename () const;
      const std::string &getBenchmarkFilename () const;
      const std::string &getIrFilename () const;
      const std::string &getHalideModuleName () const;
      const std::string &getModuleName () const;
      const std::string &getFnName () const;
      const std::string &getHalideFnName () const;
      
      const std::string &getHalideGlueFnName () const;
  };

  std::string loopBoundVarName (bool isUpper, std::string arrayName, int dim);
}
