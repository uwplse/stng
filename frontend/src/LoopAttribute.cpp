#include "LoopAttribute.h"

#include "debug.h"
#include "util.h"

namespace StencilTranslator
{
/* Variable class */
std::string
Variable::toString () const
{
  std::stringstream o;
  //o << name << ":" << type->unparseToString() << " " << type->sage_class_name();
  o << name << ":" << type->get_mangled().str() ;
  
  //if (isSgArrayType(type))      
    //o << " dim: " << ((SgArrayType *)type)->get_dim_info()->unparseToString();
  //  o << " dim: " << ((SgArrayType *)type)->get_dim_info()->get_mangled().str();
  return o.str();   
}

std::ostream &
operator<< (std::ostream &o, Variable &v)
{
  o << v.toString();
  return o;
}

void Variable::setMode (UseMode m) { this->mode = m; }
Variable::UseMode Variable::getMode () const { return this->mode; }
std::string Variable::getName () const { return name; }

/* InductionVariable class */

InductionVariable::InductionVariable (std::string name, SgType * type, unsigned int loopDepth,
                                      SgExpression * lbound, SgExpression * ubound) :
  Variable(name, type, loopDepth), lbound(lbound), ubound(ubound) {}

SgExpression * InductionVariable::getLBound () const { return lbound; }
SgExpression * InductionVariable::getUBound () const { return ubound; }

/* segfaults
std::string
InductionVariable::toString () const
{  
  std::stringstream o;
  if (lbound)
    //o << Variable::toString() << " [" << lbound->unparseToString() << " : "
    o << Variable::toString() << " [" << lbound->unparseToString() << " : "
      << ubound->unparseToString() << "]";
  else
    o << Variable::toString() << " [NULL: NULL]";
  
  return o.str();   
}
*/

/* IntLiteral class */

IntLiteral::IntLiteral (SgIntVal * e, unsigned int loopDepth) : 
  Variable("", e->get_type(), loopDepth), value(e) 
{}

int
IntLiteral::getValue () const
{
  return value->get_value();
}

/* ArrayVariable class */

ArrayVariable::ArrayVariable (std::string name, SgArrayType * arrayType, unsigned int loopDepth,
                              bool isPointer) :
  Variable(name, arrayType, loopDepth), 
  indexVars(arrayType->get_dim_info()->get_expressions().size()), 
  indexExprs(arrayType->get_dim_info()->get_expressions().size()), 
  isPointer(isPointer)
{}

void
ArrayVariable::addIndexVar (unsigned int index, Variable * v, SgExpression * e) 
{ 
  std::cout << "insert: " << name << " index: " << index << " v: " << *v << "\n";
  indexVars[index].insert(v); 
  indexExprs[index] = e;
}

const VariableSet &
ArrayVariable::getIndexVars (unsigned int index) const { return indexVars[index]; }

bool
ArrayVariable::getIsPointer () const { return isPointer; }

/* LoopAttribute class */ 
const std::string LoopAttribute::Name = "LoopAttribute";
    
LoopAttribute::LoopAttribute () : 
  isTransformable(false), hasConditional(false), hasCall(false), 
  loopDepth(0), usePointer(false), useArray(false),
  fileName(""), loopName(""), irFilename("")
{}

void LoopAttribute::setIsTransformable (bool isTransformable) 
{ this->isTransformable = isTransformable; }

bool LoopAttribute::getIsTransformable () const { return isTransformable; }

void LoopAttribute::setHasCall (bool hasCall) { this->hasCall = hasCall; }

bool LoopAttribute::getHasCall () const { return hasCall; }

void LoopAttribute::setLoopDepth (unsigned int depth) { this->loopDepth = depth; }

unsigned int LoopAttribute::getLoopDepth () const { return loopDepth; }

// returns whether this loop is nested in another loop
bool LoopAttribute::getIsInLoop () const { return loopDepth > 1; }

void LoopAttribute::setHasConditional (bool hasConditional) 
{ this->hasConditional = hasConditional; }

bool LoopAttribute::getHasConditional () const { return hasConditional; }

void LoopAttribute::setUseArray (bool useArray) { this->useArray = useArray; }

bool LoopAttribute::getUseArray () const { return useArray; }

void LoopAttribute::setUsePointer (bool usePointer) { this->usePointer = usePointer; }

bool LoopAttribute::getUsePointer () const { return usePointer; }

void LoopAttribute::setHasComplexArrayAssign (bool v) { this->hasComplexArrayAssign = v; }

bool LoopAttribute::getHasComplexArrayAssign () const { return hasComplexArrayAssign; }

void LoopAttribute::addUsedVar (Variable * v) { usedVars.insert(v); }

void LoopAttribute::addSketchVar (Variable * v) { sketchVars.insert(v); }

void LoopAttribute::addInductionVar (Variable * v) { inductionVars.insert(v); }

const VariableSet & LoopAttribute::getUsedVars () const { return usedVars; }

const VariableSet & LoopAttribute::getSketchVars () const { return sketchVars; }

const VariableSet & LoopAttribute::getInductionVars () const { return inductionVars; }

bool
LoopAttribute::isInductionVar (Variable * v) const
{
  return inductionVars.find(v) != inductionVars.end();
}

Variable * 
LoopAttribute::findVar (SgVarRefExp * e) const
{
  std::string name = varName(e);
  SgType * type = e->get_type();

  for (VariableSet::iterator it = getUsedVars().begin(); 
       it != getUsedVars().end(); ++it)
  {
    Variable * v = *it;
    //std::cout << "find: " << name << " t: " << type->unparseToString() << " cur: " << v->name << " curT: " << v->type->unparseToString() << "\n";

    if (v->name.compare(name) == 0)
    {
      if (v->type == type || v->type == isSgPointerType(type)->get_base_type())
        return v;    
    }
  }

  for (VariableSet::iterator it = getInductionVars().begin(); 
       it != getInductionVars().end(); ++it)
  {
    Variable * v = *it;
    //std::cout << "find indvar: " << name << " t: " << type->unparseToString() << " cur: " << v->name << " curT: " << v->type->unparseToString() << "\n";
    if (v->name.compare(name) == 0 && v->type == type)
      return v;
  }

  ASSERT(false, "cannot find var: " + e->unparseToString());
}

bool
LoopAttribute::hasUnknownUsedVars () const
{
  for (VariableSet::const_iterator it = usedVars.begin(); 
       it != usedVars.end(); ++it)
  {
    if ( (*it)->getMode() == Variable::Unknown)
      return true;
  }
  return false;
}

void
LoopAttribute::setNames (std::string loopName, std::string fileName, std::string irName)
{
  this->loopName = loopName;
  this->fileName = fileName;
  this->benchmarkFnName = loopName + "_benchmark";
  this->irFilename = irName;
  this->halideModuleName = loopName + "_halide_mod";
  this->halideFnName = loopName + "_halide";
  this->halideGlueFnName = loopName + "_halideglue";
  this->moduleName = loopName + "_mod";
  this->fnName = loopName;
}

const std::string & LoopAttribute::getLoopName () const { return loopName; }
const std::string & LoopAttribute::getFilename () const { return fileName; }
const std::string & LoopAttribute::getBenchmarkFilename () const { return benchmarkFnName; }
const std::string & LoopAttribute::getIrFilename () const { return irFilename; }
const std::string & LoopAttribute::getHalideModuleName () const { return halideModuleName; }
const std::string & LoopAttribute::getModuleName () const { return moduleName; }
const std::string & LoopAttribute::getHalideFnName () const { return halideFnName; }

const std::string & LoopAttribute::getFnName () const { return fnName; }
const std::string & LoopAttribute::getHalideGlueFnName () const { return halideGlueFnName; }

std::string
loopBoundVarName (bool isUpper, std::string arrayName, int dim)
{
  std::string suffix = (isUpper) ? "_upper" : "_lower";
  std::stringstream ss;
  ss << arrayName << "_" << dim << suffix;
  return ss.str();
}

}
