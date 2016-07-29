#pragma once

#include "rose.h"

namespace StencilTranslator
{
  class ArrayVariable;
  class LoopAttribute;

  class LoopReplacer : public AstSimpleProcessing
  {
    protected:
      // store the generated call statements to generate benchmark code
      std::map<LoopAttribute *, std::string> fortranCalls;
      std::map<LoopAttribute *, std::string> halideCalls;

      void visit (SgNode *n);
      void generateLoopFunctions (std::string outdirname, SgProject * project);
      void generateBenchmarkFunctions (std::vector<SgFortranDo*> loops, std::string outdirname, SgProject * project);
      //void generateHalideWrapperFunction (std::string outdirname, SgProject * project);

      void addHalideArrayArgs (SgExprListExp * halideArgs, ArrayVariable * v, SgScopeStatement * s = NULL);
      void addArrayExprs (SgExpression * ubound, SgExpression * lbound, 
                          SgExpression * declaredUBound, SgExpression * declaredLBound,
                          SgExprListExp * extents, SgExprListExp * mins, 
                          SgExprListExp * strides);

      // for benchmark code gen
      std::string randomizeCalls(const std::vector<ArrayVariable *> & arrays) const;
      std::string measureLoop (LoopAttribute * attr, bool callFortran);
      std::string allocateCalls (const std::vector<ArrayVariable *> & arrays) const;
      std::string deallocateCalls (const std::vector<ArrayVariable *> & arrays) const;

    public:
      void replaceLoops (std::string outdirname, SgProject * project);
  };

  class ExprReplacer 
  {
    protected:
      std::string varName;
      SgExpression * replaceWith;

    public:
      ExprReplacer (std::string varName, SgExpression * replaceWith) :
        varName(varName), replaceWith(replaceWith) {}

      SgExpression * visit (SgExpression * e);
  };

  class FilenameSetter : public AstSimpleProcessing
  {
    protected:
      void visit (SgNode *n);
  };
}
