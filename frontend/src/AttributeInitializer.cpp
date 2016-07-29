#include "AttributeInitializer.h"
#include "LoopAttribute.h"

#include "debug.h"

namespace StencilTranslator
{

AttributeInitializer::AttributeInitializer () {} 

void
AttributeInitializer::visit (SgNode * n)
{
  if (isSgExpression(n))
  {
    SgExpression * e = isSgExpression(n);
    std::cout << "visit: " << e->unparseToString() << " t: " << e->sage_class_name()
      << " t: " << e->get_type()->sage_class_name()
      << " p: " << e->get_parent()->sage_class_name() 
      << "\n";
  }
  else if (isSgStatement(n))
  {
    SgStatement * e = isSgStatement(n);
    std::cout << "visit: " << e->unparseToString() << " t: " << e->sage_class_name()
      << " p: " << e->get_parent()->sage_class_name() 
      << "\n";
  }

  /*  
  if (isSgStatement(n))
    std::cout << " scope: " << isSgStatement(n)->get_scope()->sage_class_name() << "\n";
  */

  VariantT type = n->variantT();
  if (type == V_SgFortranDo)
  {
    LoopAttribute * attr = new LoopAttribute();
    n->addNewAttribute(LoopAttribute::Name, attr); 
  }
}

void
AttributeInitializer::initialize (SgProject * proj)
{
  traverseInputFiles(proj, preorder);
}

}
