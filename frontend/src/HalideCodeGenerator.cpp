#include "HalideCodeGenerator.h"
#include "LoopAttribute.h"
#include "debug.h"
#include "util.h"

namespace StencilTranslator
{
  namespace SB = SageBuilder;

  const std::string HalideCodeGenerator::headerContents = 
"#pragma once                  \n\
#ifndef BUFFER_T_DEFINED      \n\
#define BUFFER_T_DEFINED      \n\
#include <stdint.h>           \n\
typedef struct buffer_t {     \n\
    uint64_t dev;             \n\
    uint8_t* host;            \n\
    int32_t extent[4];        \n\
    int32_t stride[4];        \n\
    int32_t min[4];           \n\
    int32_t elem_size;        \n\
    bool host_dirty;          \n\
    bool dev_dirty;           \n\
} buffer_t;                   \n\
#endif                        \n\
#ifndef HALIDE_FUNCTION_ATTRS \n\
#define HALIDE_FUNCTION_ATTRS \n\
#endif                        \n\
#ifdef __cplusplus            \n\
extern \"C\"                  \n\
#endif                        \n\
int $HALIDE_FN_NAME$ ($HALIDE_FN_FORMALS$) HALIDE_FUNCTION_ATTRS;";


  const std::string HalideCodeGenerator::implContents = 
"#include \"$HALIDE_GLUE_FN_NAME$.h\"    \n\
extern \"C\" {                \n\
                              \n\
void $HALIDE_GLUE_FN_NAME$_ ($PARAMS$) {   \n\
$ARRAY_DEFS$                              \n\
  $HALIDE_FN_NAME$($HALIDE_FN_ACTUALS$);  \n\
                                          \n\
}                                         \n\
}";

const boost::regex HalideCodeGenerator::halideFnNameRegex("\\$HALIDE_FN_NAME\\$");
const boost::regex HalideCodeGenerator::halideGlueFnNameRegex("\\$HALIDE_GLUE_FN_NAME\\$");
const boost::regex HalideCodeGenerator::paramsRegex("\\$PARAMS\\$");
const boost::regex HalideCodeGenerator::arrayDefsRegex("\\$ARRAY_DEFS\\$");
const boost::regex HalideCodeGenerator::halideFnActualsRegex("\\$HALIDE_FN_ACTUALS\\$");
const boost::regex HalideCodeGenerator::halideFnFormalsRegex("\\$HALIDE_FN_FORMALS\\$");

std::string
HalideCodeGenerator::generateHeader (LoopAttribute * attr)
{
  std::cout << "processing loop: " << attr->getHalideFnName() << "\n";

  std::string tmp = boost::regex_replace(headerContents, halideFnNameRegex, attr->getHalideFnName());
  
  std::vector<Variable *> arrayInputs;
  std::vector<Variable *> scalarInputs;
  std::vector<Variable *> arrayOutputs;
  std::vector<Variable *> scalarOutputs;
   
  const VariableSet & usedVars = attr->getUsedVars();
  for (VariableSet::const_iterator it = usedVars.begin();
       it != usedVars.end(); ++it)
  {
    Variable * v = *it;
    Variable::UseMode mode = v->getMode();
    if (isSgArrayType(v->type))
    {
      if (mode == Variable::Input || mode == Variable::InOut)
        arrayInputs.push_back(v);
        
      if (mode == Variable::Output || mode == Variable::InOut)
        arrayOutputs.push_back(v);
    }

    else 
    {
      if (mode == Variable::Input || mode == Variable::InOut)
        scalarInputs.push_back(v);

      if (mode == Variable::Output || mode == Variable::InOut)
        scalarOutputs.push_back(v);
    }
  }
  
  tmp = boost::regex_replace(tmp, halideFnFormalsRegex,
                             halideFnParams(arrayInputs, scalarInputs, arrayOutputs, scalarOutputs, false));
  
  return tmp;
}

std::string
HalideCodeGenerator::generateImpl (LoopAttribute * attr)
{
  std::vector<Variable *> params;

  const VariableSet & inductionVars = attr->getInductionVars(); 
  for (VariableSet::const_iterator it = inductionVars.begin(); 
       it != inductionVars.end(); ++it)
    params.push_back(*it);     

  const VariableSet & usedVars = attr->getUsedVars();
  SgArrayType * intArrayType = SB::buildArrayType((SB::buildIntType()));

  for (VariableSet::const_iterator it = usedVars.begin(); 
       it != usedVars.end(); ++it)
  {      
    Variable * v = *it;
    params.push_back(v);

    if (isSgArrayType(v->type))
    {
      Variable::UseMode mode = v->getMode();
      ASSERT(mode != Variable::Unknown, 
             "unknown use mode for array: " + v->type->unparseToString());

      if (mode == Variable::Input || mode == Variable::InOut)
      {
        params.push_back(new Variable(extentArrName(v, true), intArrayType, 0));
        params.push_back(new Variable(strideArrName(v, true), intArrayType, 0));
        params.push_back(new Variable(minArrName(v, true), intArrayType, 0));
      }
      
      if (mode == Variable::Output || mode == Variable::InOut)
      {
        params.push_back(new Variable(extentArrName(v, false), intArrayType, 0));
        params.push_back(new Variable(strideArrName(v, false), intArrayType, 0));
        params.push_back(new Variable(minArrName(v, false), intArrayType, 0));
        params.push_back(new Variable(hostOffset(v), SB::buildIntType(), 0));
      }
     
    }
  }

  std::string tmp = boost::regex_replace(implContents, halideFnNameRegex, attr->getHalideFnName());

  std::string paramsStr = toCDecl(params);
  tmp = boost::regex_replace(tmp, paramsRegex, paramsStr);

  tmp = boost::regex_replace(tmp, halideGlueFnNameRegex, attr->getHalideGlueFnName());

  std::vector<Variable *> arrayInputs;
  std::vector<Variable *> scalarInputs;
  std::vector<Variable *> arrayOutputs;
  std::vector<Variable *> scalarOutputs;

  std::stringstream ss;
  for (VariableSet::const_iterator it = usedVars.begin();
       it != usedVars.end(); ++it)
  {
    Variable * v = *it;
    Variable::UseMode mode = v->getMode();
    ASSERT(mode != Variable::Unknown, "unknown use mode for: " + v->name);
   
    if (isSgArrayType(v->type))
    {
      std::string arrayDefs;
      if (mode == Variable::InOut)
      {
        arrayDefs = generateArrayDefs((ArrayVariable *)v, true);
        std::cout << arrayDefs << "\n";
        ss << arrayDefs << "\n";

        arrayDefs = generateArrayDefs((ArrayVariable *)v, false);
        std::cout << arrayDefs << "\n";
        ss << arrayDefs << "\n";
      }
      else // Input / Output
      {
        arrayDefs = generateArrayDefs((ArrayVariable *)v, mode == Variable::Input);
        std::cout << arrayDefs << "\n";
        ss << arrayDefs << "\n";
      }

      if (mode == Variable::Input || mode == Variable::InOut)
        arrayInputs.push_back(v);
        //arrayInputs.push_back(bufferName(v->name, true));
        
      if (mode == Variable::Output || mode == Variable::InOut)
        arrayOutputs.push_back(v);
        //arrayOutputs.push_back(bufferName(v->name, false));
    }

    else 
    {
      if (mode == Variable::Input || mode == Variable::InOut)
        scalarInputs.push_back(v);
      
      if (mode == Variable::Output || mode == Variable::InOut)
        scalarOutputs.push_back(v);

      //scalarInputs.push_back(v->name);
    }
  }

  std::sort(arrayInputs.begin(), arrayInputs.end(), VarCmp());
  std::sort(scalarInputs.begin(), scalarInputs.end(), VarCmp());
  std::sort(arrayOutputs.begin(), arrayOutputs.end(), VarCmp());
  std::sort(scalarOutputs.begin(), scalarOutputs.end(), VarCmp());
  
  std::string actuals = halideFnParams(arrayInputs, scalarInputs, arrayOutputs, scalarOutputs, true);

  tmp = boost::regex_replace(tmp, arrayDefsRegex, ss.str());
  return boost::regex_replace(tmp, halideFnActualsRegex, actuals); 
}

std::string
HalideCodeGenerator::toCDecl (const std::vector<Variable *> &vars)
{
  std::stringstream ss;
  
  for (std::vector<Variable *>::const_iterator it = vars.begin(); 
       it != vars.end(); ++it)
  {
    Variable * v = *it;
    
    ss << translateType(v->type) << " " << v->name;

    std::vector<Variable *>::const_iterator it2 = it;
    ++it2;
    if (vars.size() > 1 && it2 != vars.end())
      ss << ", ";
  }

  return ss.str();
}
 
std::string
HalideCodeGenerator::translateType (SgType * type, bool isArray) const
{
  VariantT t = type->variantT();
  std::string typeName;
  switch (t)
  {
  case V_SgTypeInt: typeName = isArray ? "int" : "int *"; break;
  case V_SgTypeFloat: typeName = isArray ? "float" : "float *"; break;   
  case V_SgTypeDouble: typeName = isArray ? "double" : "double *"; break;

  case V_SgArrayType:
  {
    SgArrayType * arrayT = static_cast<SgArrayType *>(type);
    typeName = translateType(arrayT->get_base_type(), true) + " *";
    break;
  }
  
  /*
  // silently drop the pointer, assuming operation is on base values
  case V_SgPointerType:
  {
    SgPointerType * pT = static_cast<SgPointerType *>(type);
    typeName = translateType(pT->get_base_type());
    break;
  }
  */

  default: ASSERT(false, "unhandled type: " + type->class_name());
  }

  return typeName;
}

void
HalideCodeGenerator::generateGlueFiles (std::string outdirname, SgProject * project)
{
  std::vector<SgFortranDo*> loops = 
    SageInterface::querySubTree<SgFortranDo>(project, V_SgFortranDo);

  for (std::vector<SgFortranDo *>::const_iterator it = loops.begin();
       it != loops.end(); ++it)
  {
    SgFortranDo * loop = *it;
    LoopAttribute * attr = 
      static_cast<LoopAttribute *>(loop->getAttribute(LoopAttribute::Name)); 
 
    if (attr->getIsTransformable())
    {
      std::cout << "processing loop: " << loop->unparseToString() << "\n";
      std::string headerFilename = attr->getHalideGlueFnName() + ".h";
      std::string implFilename = attr->getHalideGlueFnName() + ".cpp";
     
      std::ofstream headerFile;
      headerFile.open(outdirname + "/" + headerFilename);
      headerFile << generateHeader(attr);
      headerFile.close(); 
      
      std::ofstream implFile;
      implFile.open(outdirname + "/" + implFilename);
      implFile << generateImpl(attr);
      implFile.close();
    }
  }
}

std::string
HalideCodeGenerator::generateArrayDefs (ArrayVariable * v, bool genInput)
{
  std::cout << "array: " << v->name << " mode: " << v->getMode() << "\n";
  
  Variable::UseMode mode = v->getMode();
  
  std::string bufName;
  if (genInput && (mode == Variable::Input || mode == Variable::InOut))
    bufName = bufferName(v->name, true);
  else if (!genInput && (mode == Variable::Output || mode == Variable::InOut))
    bufName = bufferName(v->name, false);
  else
    ASSERT(false, "mode mismatch");

  SgArrayType * arrayType = isSgArrayType(v->type);     
  SgExpressionPtrList &dimInfo = arrayType->get_dim_info()->get_expressions();
  int numDims = dimInfo.size();
      
  std::stringstream ss;
  ss << "  buffer_t " << bufName << ";\n"; 
  for (int i = 0; i < NumHalideDims; ++i)
  {
    ss << "  " << bufName + ".extent[" << i << "] = ";
    if (i < numDims)
      //ss << extentArrName << "[" << i << "] - 1;\n";
      ss << extentArrName(v, genInput) << "[" << i << "];\n";
    else
      ss << "0;\n";
  }

  for (int i = 0; i < NumHalideDims; ++i)
  {
    ss << "  " << bufName << ".stride[" << i << "] = ";
    if (i < numDims)
    {
      if (i == 0)
        ss << "1;\n";
      else
      {
        for (int j = 0; j < i; ++j)
        {
          ss << "(" << strideArrName(v, genInput) << "[" << j << "])";
          if (i > 1 && j != i-1)
            ss << " * ";
        }
        ss << ";\n";
      }
    }

    else
      ss << "0;\n";
  }

  for (int i = 0; i < NumHalideDims; ++i)
  {
    ss << "  " << bufName << ".min[" << i << "] = ";
    if (i < numDims)
      //ss << minArrName << "[" << i << "] - 1;\n"; 
      ss << minArrName(v, genInput) << "[" << i << "];\n"; 
    else
      ss << "0;\n";
  }

  unsigned int baseTypeSize = getArrayBaseTypeSize(arrayType);

  ss << "  " << bufName << ".host = (uint8_t*)" << v->name;

  if (!genInput && (mode == Variable::Output || mode == Variable::InOut))
    ss << " + *" << hostOffset(v); 
    //ss << v->name << " + " << hostOffset(numDims, v->name);
  
  ss << ";\n";

  ss << "  " << bufName << ".elem_size = (int32_t)" << baseTypeSize << ";\n"
     << "  " << bufName << ".dev = -1;\n"
     << "  " << bufName << ".host_dirty = false;\n"
     << "  " << bufName << ".dev_dirty = false;\n";
  
  return ss.str();
}

/*
// deprecated
std::string
HalideCodeGenerator::hostOffset (int numDims, const std::string &arrayName) const
{
  std::string strideArrName = arrayName + "_stride";
  std::string minArrName = arrayName + "_min";
  std::string affectedArrName = arrayName + "_affected";

  std::string current("");

  for (int i = 0; i < numDims; ++i)
  {
    std::stringstream s2;
    s2 << "(" << affectedArrName + "[" << i << "] - " << minArrName << "[" << i << "])";
    std::string dist = s2.str();

    if (i == 0)
      current = dist;
    else
    {
      std::stringstream ss;
      ss << "(" << dist << " + " << strideArrName << "[" << i << "] * " << current << ")";
      current = ss.str();
    }
  }

  return current;
}
*/

std::string 
HalideCodeGenerator::halideFnParams (const std::vector<Variable *> &arrayInputs, 
                                     const std::vector<Variable *> &scalarInputs,
                                     const std::vector<Variable *> &arrayOutputs, 
                                     const std::vector<Variable *> &scalarOutputs, 
                                     bool needActuals) const
{
  std::stringstream ss;
  
  int numArrayInputs = arrayInputs.size();
  for (int i = 0; i < numArrayInputs; ++i)
  {
    if (needActuals)
      ss << "&" << bufferName(arrayInputs[i]->name, true);
    else
      ss << "buffer_t * " << bufferName(arrayInputs[i]->name, true);

    if (numArrayInputs > 1 && i != numArrayInputs - 1)
      ss << ", ";
  }

  int numScalarInputs = scalarInputs.size();
  if (numScalarInputs > 0 && numArrayInputs > 0)
    ss << ", ";

  for (int i = 0; i < numScalarInputs; ++i)
  {
    if (needActuals)
      ss << "*" << scalarInputs[i]->name;
    else
      ss << scalarInputs[i]->type->unparseToString() << " " << scalarInputs[i]->name;
    // assume scalar types translate directly

    if (numScalarInputs > 1 && i != numScalarInputs - 1)
      ss << ", ";
  }

  int numArrayOutputs = arrayOutputs.size();
  //ASSERT(size > 0, "no array outputs found");
  if (numArrayOutputs > 0 && (numArrayInputs > 0 || numScalarInputs > 0))
    ss << ", ";

  for (int i = 0; i < numArrayOutputs; ++i)
  {
    if (needActuals)
      ss << "&" << bufferName(arrayOutputs[i]->name, false);
    else
      ss << "buffer_t * " << bufferName(arrayOutputs[i]->name, false);

    if (numArrayOutputs > 1 && i != numArrayOutputs - 1)
      ss << ", ";
  }

  int numScalarOutputs = scalarOutputs.size();
  if (numScalarOutputs > 0 && (numArrayInputs > 0 || numScalarInputs > 0 || numArrayOutputs > 0))
    ss << ", ";

  for (int i = 0; i < numScalarOutputs; ++i)
  {
    if (needActuals)
      ss << scalarOutputs[i]->name; // they are passed by address
    else // add back the address declaration
      ss << scalarOutputs[i]->type->unparseToString() << " * " << scalarOutputs[i]->name + "_out";
    // assume scalar types translate directly

    if (numScalarOutputs > 1 && i != numScalarOutputs - 1)
      ss << ", ";
  }

  return ss.str();
}

std::string 
HalideCodeGenerator::bufferName (std::string varName, bool isInput) const
{
  if (isInput)
    return varName + "_in";
  else
    return varName + "_out";
}

std::string
HalideCodeGenerator::extentArrName (Variable * v, bool genInput) const
{ return bufferName(v->name, genInput) + "_extent"; }

std::string
HalideCodeGenerator::strideArrName (Variable * v, bool genInput) const
{ return bufferName(v->name, genInput) + "_stride"; }

std::string
HalideCodeGenerator::minArrName (Variable * v, bool genInput) const
{ return bufferName(v->name, genInput) + "_min"; }

std::string 
HalideCodeGenerator::hostOffset (Variable * v) const
{ return bufferName(v->name, false) + "_hostOffset"; }


}
