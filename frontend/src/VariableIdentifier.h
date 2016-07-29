#pragma once

#include "rose.h"

namespace StencilTranslator
{
  class LoopAttribute;
  class VariableIdentifier : public AstTopDownProcessing<LoopAttribute *> 
  {
    protected:
      LoopAttribute * evaluateInheritedAttribute (SgNode* n, LoopAttribute * attr);

    public:
      void computeVariables (SgProject * project);
  };
}
