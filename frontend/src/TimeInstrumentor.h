#pragma once

#include "rose.h"

namespace StencilTranslator
{
  /*
  class TimeInstrumentor : public AstSimpleProcessing
  {
    protected:
      std::vector<SgStatement *> timeDecls;
      long long varNum;
      int loopNum;

    protected:    
      void visit (SgNode * n);
      SgVariableDeclaration * timerVar (SgScopeStatement * scope);
      SgExprStatement * dateCall (SgVariableDeclaration * timerVar, SgScopeStatement * scope);
      SgExprStatement * recordCall (int num, SgVariableDeclaration * start, 
                                    SgVariableDeclaration * end, SgScopeStatement * scope);

    public:
      TimeInstrumentor ();
      void addTimers (SgProject * project);
  };
  */

  struct StrCmp
  {
    bool operator() (std::string l, std::string r) const
    {
      return l < r; 
    }
  };

  struct VarDeclCmp
  {
    bool operator() (SgVariableDeclaration * l, SgVariableDeclaration * r) const
    {
      return l->get_variables()[0]->get_name().getString() < r->get_variables()[0]->get_name().getString();
    }
  };
  
  typedef std::set<SgVariableDeclaration *, VarDeclCmp> VarDeclSet;

  class TimeInstrumentor : public AstBottomUpProcessing<VarDeclSet>
  {
    protected:
      long long varNum;
      std::map<std::string, int, StrCmp> timers;

    protected:    
      VarDeclSet evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList in);

      void generateTimerDefs (std::string outDir);
      int timerNum (std::string name);
      SgVariableDeclaration * timerVar (std::string name, bool isStart, SgScopeStatement * s);
      SgExprStatement * dateCall (SgVariableDeclaration * timerVar, SgScopeStatement * scope);
      SgExprStatement * recordCall (int num, SgVariableDeclaration * start, 
                                    SgVariableDeclaration * end, SgScopeStatement * scope);
      SgFunctionDefinition * findEnclosingFunction (SgNode * n);

    public:
      TimeInstrumentor ();
      void addTimers (std::string outDir, SgProject * project);
  };


};
