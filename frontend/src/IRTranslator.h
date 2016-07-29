#pragma once

#include "rose.h"

namespace StencilTranslator
{
  class IRTranslator
  {
    public:
      void translateLoops (std::string outDirname, SgProject * proj);
  };

  class IRNode;
  class LoopAttribute;

  class LoopVisitor : public AstBottomUpProcessing<IRNode *> 
  {
    protected:
      LoopAttribute * attr;  // needed to look up use mode

      IRNode * visitVarRefExp (SgVarRefExp *n) const;
      IRNode * visitValueExp (SgValueExp *n) const;
      IRNode * visitPntrArrRefExp (SgPntrArrRefExp * n, SynthesizedAttributesList c) const;     
      IRNode * visitBasicBinaryOp (SgBinaryOp * n, SynthesizedAttributesList c) const;
      IRNode * visitExponentiationOp (SgExponentiationOp * n, SynthesizedAttributesList c) const;
      IRNode * visitFunctionRefExp (SgFunctionRefExp * n, SynthesizedAttributesList c) const;
      IRNode * visitFunctionCallExp (SgFunctionCallExp * n, SynthesizedAttributesList c) const;
      IRNode * visitUnaryOp (SgUnaryOp * n, SynthesizedAttributesList c) const;
      IRNode * visitAssignOp (SgAssignOp * n, SynthesizedAttributesList c) const;
      IRNode * visitFortranDo (SgFortranDo * n, SynthesizedAttributesList c) const;
      IRNode * visitBasicBlock (SgBasicBlock * n, SynthesizedAttributesList c) const;
      IRNode * visitSgExprListExp (SgExprListExp * n, SynthesizedAttributesList children) const;

      IRNode * visitNode (SgNode * n, SynthesizedAttributesList children) const;

      std::string translateType (SgType * type, bool addQuotes = true) const;

    public:
      IRNode * evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList c);
      std::string generateMetadata (SgScopeStatement * loop) const;
      LoopVisitor (LoopAttribute * attr);
  };
}
