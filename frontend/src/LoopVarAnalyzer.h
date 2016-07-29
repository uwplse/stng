#pragma once

#include "rose.h"

namespace StencilTranslator
{
  class LoopAttribute;
  class InductionVariable;
  class LoopVarAnalyzer
  {
    public:
      void analyzeLoops (SgProject * project);
  };

  class InductionVarFinder : public AstBottomUpProcessing<std::set<InductionVariable *> >
  {
    protected:
      LoopAttribute * attr;

    public:
      InductionVarFinder(LoopAttribute * attr) : attr(attr) {}
      std::set<InductionVariable *> 
        evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList l);
  };

  class VarUseIdentifier : public AstBottomUpProcessing<std::set<SgVarRefExp *> >
  {
    protected:
      LoopAttribute * attr;

    public:
      VarUseIdentifier(LoopAttribute * attr) : attr(attr) {}
      //void visit (SgNode * n);
      std::set<SgVarRefExp *> evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList l);
  };

  class SetInputVisitor : public AstSimpleProcessing
  {
    protected:
      LoopAttribute * attr;

    public:
      SetInputVisitor (LoopAttribute * attr) : attr(attr) {}

      void visit (SgNode * n);
  };

  class ArrayIndexChecker : public AstSimpleProcessing
  {
    protected:
      LoopAttribute * attr;

    public:
      ArrayIndexChecker (LoopAttribute * attr) : attr(attr) {}

      void visit (SgNode * n);
  };

  void setMode (SgVarRefExp * e, bool isOutput, LoopAttribute * attr);
}
