#include "TimeInstrumentor.h"
#include "debug.h"

#include "LoopAttribute.h"

namespace StencilTranslator
{

namespace SB = SageBuilder;
namespace SI = SageInterface;

TimeInstrumentor::TimeInstrumentor () : varNum(0) {}

VarDeclSet
TimeInstrumentor::evaluateSynthesizedAttribute (SgNode * n, SynthesizedAttributesList child)
{
  VarDeclSet out;
  for (SynthesizedAttributesList::const_iterator it = child.begin();
       it != child.end(); ++it)
  {
    VarDeclSet v = *it;
    out.insert(v.begin(), v.end());
  }
  
  // transforming at the DoLoop level causes infinite loop as 
  // rose's internal iterator gets updated
  if (isSgBasicBlock(n))
  { 
    SgBasicBlock * b = isSgBasicBlock(n);
    SgStatementPtrList stmts = b->get_statements(); 

    SgFunctionDefinition * f = findEnclosingFunction(n);
    std::string fnName = f->get_declaration()->get_name().getString();

    for (SgStatementPtrList::iterator it = stmts.begin(); 
         it != stmts.end(); ++it)
    {
      SgStatement * st = *it;
      if (isSgFortranDo(st))
      {
        SgFortranDo * loop = isSgFortranDo(st);
        SgScopeStatement * scope = loop->get_scope();
       
        std::string varName = fnName + "_loopTimer" + std::to_string(varNum);
        int num = timerNum(varName);

        SgVariableDeclaration * startTimer = timerVar(varName, true, scope);
        SgVariableDeclaration * endTimer = timerVar(varName, false, scope);
    
        out.insert(startTimer);
        out.insert(endTimer);

        SgExprStatement * startCall = dateCall(startTimer, scope);
        SgExprStatement * endCall = dateCall(endTimer, scope);
        SgExprStatement * record = recordCall(num, startTimer, endTimer, scope);
    
    
        SI::insertStatementBefore(loop, startCall);
   
        std::vector<SgStatement *> toInsert;
        toInsert.push_back(endCall);
        toInsert.push_back(record);

        SI::insertStatementList(loop, toInsert, false); // insert after
      }

    }

  }   
  
  else if (isSgFunctionDefinition(n))
  {
    SgFunctionDefinition * f = isSgFunctionDefinition(n);
    std::string fnName = f->get_declaration()->get_name().getString();
    SgBasicBlock * b = f->get_body();
    SgStatementPtrList stmts = b->get_statements();

    int num = timerNum(fnName);

    SgVariableDeclaration * startTimer = timerVar(fnName, true, b);
    SgVariableDeclaration * endTimer = timerVar(fnName, false, b);
    
    out.insert(startTimer);
    // either it was inserted earlier by a RETURN or we are inserting here
    out.insert(endTimer); 

    SgExprStatement * startCall = dateCall(startTimer, b);
 
    std::vector<SgStatement *> toInsert(out.begin(), out.end());
    toInsert.push_back(startCall);


    // skip to the first actual program statement
    SgStatementPtrList::iterator it = stmts.begin();    
    while (it != stmts.end() && 
           (isSgImplicitStatement(*it) || isSgVariableDeclaration(*it) || 
            isSgUseStatement(*it)))
      ++it;

    if (it == stmts.end())
      SI::appendStatementList(toInsert, b);
    else
      SI::insertStatementList(*it, toInsert); // insert after *it

    // find the last stmt in the function
    SgStatement * lastStmt = NULL;
    if (stmts.size() > 0)
    {
      SgStatementPtrList::iterator lastIt = --stmts.end();
      lastStmt = *lastIt;
      while (isSgProcedureHeaderStatement(lastStmt) || isSgContainsStatement(lastStmt))
      {
        --lastIt;
        lastStmt = *lastIt;
      }
    }

    // insert end timer call if last stmt is not a return stmt
    if (stmts.size() == 0 || !isSgReturnStmt(lastStmt) )
    {
      SgExprStatement * endCall = dateCall(endTimer, b);
      SgExprStatement * record = recordCall(num, startTimer, endTimer, b);

      std::vector<SgStatement *> tmp;
      tmp.push_back(endCall);
      tmp.push_back(record);

      SI::insertStatementListAfter(lastStmt, tmp);
    }
  }

  else if (isSgReturnStmt(n))
  {
    SgReturnStmt * r = isSgReturnStmt(n);    
    SgScopeStatement * scope = r->get_scope();
    
    SgFunctionDefinition * f = findEnclosingFunction(r);
    std::string fnName = f->get_declaration()->get_name().getString();

    int num = timerNum(fnName);

    SgVariableDeclaration * startTimer = timerVar(fnName, true, scope);
    SgVariableDeclaration * endTimer = timerVar(fnName, false, scope);
    
    // startTimer will be inserted when we visit the function definition
    out.insert(endTimer);

    SgExprStatement * endCall = dateCall(endTimer, scope);
    SgExprStatement * record = recordCall(num, startTimer, endTimer, scope);

    std::vector<SgStatement *> toInsert;
    toInsert.push_back(endCall);
    toInsert.push_back(record);

    SI::insertStatementListBefore(r, toInsert);

    // if r is in IF and r is the only stmt then need to set to use THEN and ENDIF 
    SgIfStmt * enclosingIf = isSgIfStmt(r->get_parent()->get_parent());
    if (enclosingIf)
    {
      enclosingIf->set_use_then_keyword(true);
      enclosingIf->set_has_end_statement(true);
    }
  }

  return out;
}

int
TimeInstrumentor::timerNum (std::string name)
{
  int r;
  std::map<std::string, int, StrCmp>::iterator it = timers.find(name);
  if (it == timers.end())
  {
    timers[name] = varNum;
    r = varNum;
    ++varNum;
  }
  else
    r = it->second;

  return r;
}

SgVariableDeclaration *
TimeInstrumentor::timerVar (std::string varName, bool isStart, SgScopeStatement * scope)
{ 
  SgName name;
  if (isStart) 
    name = SgName(varName + "_start");
  else
    name = SgName(varName + "_end");

  SgExprListExp * dimInfo = SB::buildExprListExp(SB::buildIntVal(8));
  SgArrayType * arrayT = SB::buildArrayType(SB::buildIntType(), dimInfo);
  arrayT->set_rank(1);
  arrayT->set_dim_info(dimInfo);

  return SB::buildVariableDeclaration(name, arrayT, NULL, scope);
}

SgExprStatement *
TimeInstrumentor::dateCall (SgVariableDeclaration * timerVar, SgScopeStatement * scope)
{
  SgName dateTimeFn("date_and_time");
   
  SgExprListExp * args = 
    SB::buildExprListExp(SB::buildActualArgumentExpression(SgName("values"), 
                                                           SB::buildVarRefExp(timerVar)));

  return SB::buildFunctionCallStmt(dateTimeFn, SB::buildVoidType(), args, scope);
}

SgExprStatement *
TimeInstrumentor::recordCall (int num, SgVariableDeclaration * start, 
                              SgVariableDeclaration * end, SgScopeStatement * scope)
{
  SgName recordFn("recordTime");
   
  SgExprListExp * args = 
    SB::buildExprListExp(SB::buildIntVal(num), SB::buildVarRefExp(start), SB::buildVarRefExp(end));

  return SB::buildFunctionCallStmt(recordFn, SB::buildVoidType(), args, scope);
}

bool cmp(const std::pair<std::string, int>  &p1, const std::pair<std::string, int> &p2)
{
  return p1.second < p2.second;
}

void
TimeInstrumentor::generateTimerDefs (std::string outDir)
{
  std::string filename = outDir + "/timerDefs.c";
  std::ofstream out(filename, std::ios::out | std::ios::trunc);
  
  int numTimers = timers.size(); 
  out << "int numTimers = " << numTimers << ";\n\n";
  out << "double timers [] = {";

  for (int i = 0; i < numTimers; ++i)
  {
    if (numTimers > 1 && i != numTimers - 1)
      out << "0, ";
    else
      out << "0";
  }

  out << "};\n\n";

  std::vector<std::pair<std::string, int> > values;
  std::copy(timers.begin(), timers.end(), std::back_inserter(values));

  std::sort(values.begin(), values.end(), cmp);

  out << "char * values [] = {";

  for (int i = 0; i < numTimers; ++i)
  {
    if (numTimers > 1 && i != numTimers - 1)
      out << '"' << values[i].first << "\", ";
    else
      out << '"' << values[i].first << '"';
  }

  out << "};\n";

  out.close(); 
}

SgFunctionDefinition *
TimeInstrumentor::findEnclosingFunction (SgNode * n)
{
  SgFunctionDefinition * f;
  SgNode * p = n->get_parent();
  while (p && !isSgFunctionDefinition(p))
    p = p->get_parent();

  ASSERT(p, "cannot find function definition for: " + n->unparseToString());
  f = isSgFunctionDefinition(p);

  return f;
}

void
TimeInstrumentor::addTimers (std::string outDir, SgProject * project)
{
  traverse(project);
  generateTimerDefs(outDir);
}

};
