#pragma once

#include "rose.h"
#include <string>

namespace StencilTranslator
{
  /* converts a float or double literal to sketch variable
     <val> is converted to __double__<val> or __float__<val>
     with '.' replaced with '_'
   */
  std::string encodeFloat (SgFloatVal * v);
  std::string encodeFloatVal (float v);
  
  std::string encodeDouble (SgDoubleVal * v);
  std::string encodeDoubleVal (double v);

  bool isPointerToArrayType (SgType * type);

  std::string varName (SgVarRefExp * v);

  unsigned int getArrayBaseTypeSize (SgArrayType * arrayType);

  std::string toFortranType (SgType * t);
};
