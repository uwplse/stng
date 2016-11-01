#pragma once

#include "rose.h"

namespace StencilTranslator
{
  class StructureAnalyzer
  {
    public:
      void analyze (SgProject * project);
  };

  struct LoopDepthVisitor : public AstTopDownProcessing<unsigned int>
  {
    //bool evaluateInheritedAttribute(SgNode* n, bool isInLoop);
    unsigned int evaluateInheritedAttribute(SgNode* n, unsigned int loopDepth);
  };

  struct ConditionalVisitor : public AstBottomUpProcessing<bool>
  {
    bool evaluateSynthesizedAttribute (SgNode* n, SynthesizedAttributesList c);
  };

  struct CallVisitor : public AstBottomUpProcessing<bool>
  {
    bool evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList c);
    bool isHandledCall (SgCallExpression * call);
  };

  struct UseArrayVisitor : public AstBottomUpProcessing<bool>
  {
    bool evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList c);
  };

  struct UsePointerVisitor : public AstBottomUpProcessing<bool>
  {
    bool evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList c);
    bool isPointerType (SgType * t);
  };

  struct DataDepVisitor : public AstBottomUpProcessing<bool>
  {
    bool evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList c);
    bool hasRAW (SgType * t);
  };

  struct ComplexArrayAssignVisitor : public AstBottomUpProcessing<bool>
  {
    bool evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList c);
  };
}
