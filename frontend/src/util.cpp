#include "util.h"
#include "debug.h"

namespace StencilTranslator
{

std::string
encodeFloat (SgFloatVal * v)
{
  return encodeFloatVal(v->get_value());
}

std::string
encodeFloatVal (float v)
{
  std::ostringstream o;
  o << "__float__" << v;

  std::string ret = o.str();
  std::replace(ret.begin(), ret.end(), '.', '_');
  return ret;
}

std::string
encodeDouble (SgDoubleVal * v)
{
  return encodeDoubleVal(v->get_value());
}

std::string
encodeDoubleVal (double v) 
{
  std::ostringstream o;
  o << "__double__" << v;

  std::string ret = o.str();
  std::replace(ret.begin(), ret.end(), '.', '_');
  return ret;
}

bool
isPointerToArrayType (SgType * type)
{
  if (!isSgPointerType(type))
    return isSgArrayType(type);
  else
    return isSgPointerType(type)->get_base_type();
}

std::string
varName (SgVarRefExp * v)
{
  return v->get_symbol()->get_name().getString();
}

unsigned int 
getArrayBaseTypeSize (SgArrayType * arrayType)
{
  unsigned int baseTypeSize = -1;
  SgType * baseType = arrayType->get_base_type();            
  while (isSgPointerType(baseType))
    baseType = isSgPointerType(baseType)->get_base_type();
  VariantT t = baseType->variantT();

  switch (t)
  {
  case V_SgTypeInt:     baseTypeSize = 4; break;
  case V_SgTypeFloat:   baseTypeSize = 8; break;
  case V_SgTypeDouble:  baseTypeSize = 8; break; 
  default: ASSERT(false, "unknown array base type: " + baseType->unparseToString());
  }

  return baseTypeSize; 
}

std::string
toFortranType (SgType * t)
{
  if (isSgTypeInt(t))
    return "integer";
  else if (isSgTypeFloat(t) || isSgTypeDouble(t))
    return "real(kind=8)";
  else
    ASSERT(false, "unknown type: " + t->unparseToString() + "\n");
}


}
