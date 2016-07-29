#pragma once

#include "LoopAttribute.h"
#include "rose.h"

#include <boost/regex.hpp>

namespace StencilTranslator
{
  class HalideCodeGenerator //: public AstSimpleProcessing
  {
    protected:
      static const std::string headerContents; 
      static const std::string implContents;

      static const boost::regex halideFnNameRegex;
      static const boost::regex halideGlueFnNameRegex;
      static const boost::regex paramsRegex;
      static const boost::regex arrayDefsRegex;
      static const boost::regex halideFnActualsRegex;
      static const boost::regex halideFnFormalsRegex;

      static const unsigned int NumHalideDims = 4;

      std::string generateHeader (LoopAttribute * attr);
      std::string generateImpl (LoopAttribute * attr);
      
      std::string generateArrayDefs (ArrayVariable * v, bool genInput);
      /*
      std::string halideFnParams (const std::vector<std::string> &arrayInputs, 
                                  const std::vector<std::string> &scalarInputs,
                                  const std::vector<std::string> &arrayOutputs, bool needActuals) const;
      */
      std::string halideFnParams (const std::vector<Variable *> &arrayInputs, 
                                  const std::vector<Variable *> &scalarInputs,
                                  const std::vector<Variable *> &arrayOutputs, 
                                  const std::vector<Variable *> &scalarOutputs,
                                  bool needActuals) const;

      std::string toCDecl (const std::vector<Variable *> &vars);
      std::string translateType (SgType * type, bool isArray = false) const;

      //std::string hostOffset (int numDims, const std::string &arrayName) const;

      std::string bufferName (std::string varName, bool isInput) const;
      std::string extentArrName (Variable * v, bool genInput) const;
      std::string strideArrName (Variable * v, bool genInput) const;
      std::string minArrName (Variable * v, bool genInput) const;
      std::string hostOffset (Variable * v) const;
     
    /*
    protected:
      void visit (SgNode *n);
      */

    public:
      void generateGlueFiles (std::string outdirname, SgProject * project);
  };
}
