#pragma once

#include "rose.h"

namespace StencilTranslator
{

class AttributeInitializer : public AstSimpleProcessing
{
  protected:
    void visit (SgNode * n);

  public:
    AttributeInitializer ();
    void initialize (SgProject * proj);
};

}
