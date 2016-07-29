#pragma once

#include "rose.h"

namespace StencilTranslator
{
  class LoopLabeler
  {
    public:
      void labelLoops (SgProject * proj);
  };
}
