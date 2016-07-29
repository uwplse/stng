#ifndef MARK_TEMPLATE_INSTANTIATION_FOR_OUTPUT_H
#define MARK_TEMPLATE_INSTANTIATION_FOR_OUTPUT_H

// DQ (5/27/2005):
/*! \brief Fixups template instantiations generated by ROSE from template declarations.

    This function is a simplified access to the details wrapped up in the 
    MarkTemplateInstantiationsForOutput class.
 */

void markTemplateInstantiationsForOutput( SgNode* node );



//! Inherited attribute required for MarkTemplateSpecializationsForOutputSupport class.
class MarkTemplateInstantiationsForOutputSupportInheritedAttribute
   {
     public:
          bool insideDeclarationToOutput;

          MarkTemplateInstantiationsForOutputSupportInheritedAttribute();
   };

//! Synthesized attribute required for MarkTemplateSpecializationsForOutputSupport class.
class MarkTemplateInstantiationsForOutputSupportSynthesizedAttribute
   {
     public:
          MarkTemplateInstantiationsForOutputSupportSynthesizedAttribute();
   };

// DQ (6/21/2005): This class controls the output of template declarations in the generated code (by the unparser).
class MarkTemplateInstantiationsForOutputSupport
   : public SgTopDownBottomUpProcessing<MarkTemplateInstantiationsForOutputSupportInheritedAttribute,
                                        MarkTemplateInstantiationsForOutputSupportSynthesizedAttribute>
   {
     public:
      //! Saved reference to SgSourceFile (where the template instatiation data is held)
          SgSourceFile* currentFile;

       // List of declarations referenced in source code or functions and member 
       // functions marked as to be output in source code.  These are the list 
       // of required definitions.
          std::list<SgDeclarationStatement*> listOfTemplateDeclarationsToOutput;

      //! Constructor to provide access to file's backend specific template instantiation options
          MarkTemplateInstantiationsForOutputSupport(SgSourceFile* file);

       // Required traversal function
       // void visit (SgNode* node);
      //! Required traversal function
          MarkTemplateInstantiationsForOutputSupportInheritedAttribute
               evaluateInheritedAttribute ( SgNode* node, MarkTemplateInstantiationsForOutputSupportInheritedAttribute inheritedAttribute );

      //! Required traversal function
          MarkTemplateInstantiationsForOutputSupportSynthesizedAttribute
               evaluateSynthesizedAttribute ( SgNode* node,
                                              MarkTemplateInstantiationsForOutputSupportInheritedAttribute   inheritedAttribute,
                                              SubTreeSynthesizedAttributes synthesizedAttributeList );

     private:
       // Abstract details of saveing defining and non-defining declarations
          void saveDeclaration ( SgDeclarationStatement* declaration );
   };


// DQ (8/27/2005):
/*! \brief Class implementing template instantiation details in Sage III.

    Note that template declarations are instantiated to form template instantiations and
    ROSE will always output the instantiation as a specialization. Such instantiations
    are not marked as specializations.  Only templates instantiations that were explicitly
    represented as specializations in the original source code are makred as specializations.

    Template instantiations generated in either the prelink phase or as part of the initial compilation
    should be marked as compiler generated since they have no source position.  The exception is
    that any specialized template instantiation should not be marked as compiler generated.

    \implementation We have to output the declaration of the specialization after the template declaration 
    and before it's first use in the source file.  It is an error to transform the specialization in a file 
    where it is not first used (e.g. if the first use appears in a header file then the first use could appear 
    before the declaration).  Note also that only those template specializations that are transformed are output
    by ROSE.
 */

class MarkTemplateInstantiationsForOutput
   {
     public:
//        static void BuildTemplateDeclarationLists ( SgFile* file );

          static std::set<SgDeclarationStatement*> BuildSetOfRequiredTemplateDeclarations ( SgNode* node, SgSourceFile* file );

          static void ProcessClassTemplateDeclarations          ( std::set<SgDeclarationStatement*> setOfRequiredDeclarations, SgSourceFile* file );
          static void ProcessFunctionTemplateDeclarations       ( std::set<SgDeclarationStatement*> setOfRequiredDeclarations, SgSourceFile* file );
          static void ProcessMemberFunctionTemplateDeclarations ( std::set<SgDeclarationStatement*> setOfRequiredDeclarations, SgSourceFile* file );


          
   };


// endif for MARK_TEMPLATE_INSTANTIATION_FOR_OUTPUT_H
#endif
