/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStaticDataManagingClassStorageClassHeader.macro" */
/* JH (01/01/2006) This file is generated using ROSETTA. It should never be 
   manipulated by hand. The generation is located in buildStorageClasses.C!

    This file contains all declarations for the StorageClasses used for the ast file IO.
*/

#include "StorageClassMemoryManagement.h"

class SgSymbolTableStorageClass;
class AstSpecificDataManagingClass;

class AstSpecificDataManagingClassStorageClass
   {

    protected:
     unsigned long rootOfAst;
     unsigned long listOfAccumulatedPoolSizes [ 710 + 1 ];


     unsigned long storageOf_SgNode_globalFunctionTypeTable;
     unsigned long storageOf_SgNode_globalTypeTable;
     EasyStorage < std::map<SgNode*,std::string> > storageOf_SgNode_globalMangledNameMap;
     EasyStorage < std::map<std::string, int> > storageOf_SgNode_shortMangledNameCache;
     EasyStorage < std::map<SgNode*,std::string> > storageOf_SgNode_globalQualifiedNameMapForNames;
     EasyStorage < std::map<SgNode*,std::string> > storageOf_SgNode_globalQualifiedNameMapForTypes;
     EasyStorage < std::map<SgNode*,std::string> > storageOf_SgNode_globalTypeNameMap;
     EasyStorage < std::map<int, std::string> > storageOf_Sg_File_Info_fileidtoname_map;
     EasyStorage < std::map<std::string, int> > storageOf_Sg_File_Info_nametofileid_map;
     EasyStorage < SgTypePtrList > storageOf_SgUnparse_Info_structureTagProcessingList;
     bool storageOf_SgUnparse_Info_forceDefaultConstructorToTriggerError;
     int storageOf_SgGraph_index_counter;
     int storageOf_SgGraphNode_index_counter;
     int storageOf_SgGraphEdge_index_counter;
     unsigned long storageOf_SgTypeUnknown_builtin_type;
     unsigned long storageOf_SgTypeChar_builtin_type;
     unsigned long storageOf_SgTypeSignedChar_builtin_type;
     unsigned long storageOf_SgTypeUnsignedChar_builtin_type;
     unsigned long storageOf_SgTypeShort_builtin_type;
     unsigned long storageOf_SgTypeSignedShort_builtin_type;
     unsigned long storageOf_SgTypeUnsignedShort_builtin_type;
     unsigned long storageOf_SgTypeInt_builtin_type;
     unsigned long storageOf_SgTypeSignedInt_builtin_type;
     unsigned long storageOf_SgTypeUnsignedInt_builtin_type;
     unsigned long storageOf_SgTypeLong_builtin_type;
     unsigned long storageOf_SgTypeSignedLong_builtin_type;
     unsigned long storageOf_SgTypeUnsignedLong_builtin_type;
     unsigned long storageOf_SgTypeVoid_builtin_type;
     unsigned long storageOf_SgTypeGlobalVoid_builtin_type;
     unsigned long storageOf_SgTypeWchar_builtin_type;
     unsigned long storageOf_SgTypeFloat_builtin_type;
     unsigned long storageOf_SgTypeDouble_builtin_type;
     unsigned long storageOf_SgTypeLongLong_builtin_type;
     unsigned long storageOf_SgTypeSignedLongLong_builtin_type;
     unsigned long storageOf_SgTypeUnsignedLongLong_builtin_type;
     unsigned long storageOf_SgTypeLongDouble_builtin_type;
     unsigned long storageOf_SgTypeBool_builtin_type;
     unsigned long storageOf_SgNamedType_builtin_type;
     unsigned long storageOf_SgPartialFunctionModifierType_builtin_type;
     unsigned long storageOf_SgTypeEllipse_builtin_type;
     unsigned long storageOf_SgTypeDefault_builtin_type;
     unsigned long storageOf_SgTypeCAFTeam_builtin_type;
     unsigned long storageOf_SgTypeCrayPointer_builtin_type;
     unsigned long storageOf_SgTypeLabel_builtin_type;
     unsigned long storageOf_SgAsmTypeByte_builtin_type;
     unsigned long storageOf_SgAsmTypeWord_builtin_type;
     unsigned long storageOf_SgAsmTypeDoubleWord_builtin_type;
     unsigned long storageOf_SgAsmTypeQuadWord_builtin_type;
     unsigned long storageOf_SgAsmTypeDoubleQuadWord_builtin_type;
     unsigned long storageOf_SgAsmType80bitFloat_builtin_type;
     unsigned long storageOf_SgAsmType128bitFloat_builtin_type;
     unsigned long storageOf_SgAsmTypeSingleFloat_builtin_type;
     unsigned long storageOf_SgAsmTypeDoubleFloat_builtin_type;

/* #line 21 "/home/demo/rose/src/ROSETTA/Grammar/grammarStaticDataManagingClassStorageClassHeader.macro" */

    public:
      void pickOutIRNodeData ( AstSpecificDataManagingClass* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      friend class AstSpecificDataManagingClass;
   };

#if 0 // done in AST_FILE_IO.h
typedef AstSpecificDataManagingClass AstData;
#endif
typedef AstSpecificDataManagingClassStorageClass AstDataStorageClass;

/* #line 92 "../../../src/frontend/SageIII//StorageClasses.h" */


/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNodeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNodeStorageClass  
   {

    protected: 


/* #line 106 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_parent;
      bool storageOf_isModified;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNode* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNode;
   };
/* #line 127 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSupportStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSupportStorageClass  : public SgNodeStorageClass
   {

    protected: 


/* #line 142 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSupport* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSupport;
   };
/* #line 161 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgModifierStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 176 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgModifier;
   };
/* #line 195 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgModifierNodesStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgModifierNodesStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 210 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgModifierTypePtrVector > storageOf_nodes;
     unsigned long storageOf_next;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgModifierNodes* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgModifierNodes;
   };
/* #line 231 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgConstVolatileModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgConstVolatileModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 246 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgConstVolatileModifier::cv_modifier_enum storageOf_modifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgConstVolatileModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgConstVolatileModifier;
   };
/* #line 266 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStorageModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStorageModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 281 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgStorageModifier::storage_modifier_enum storageOf_modifier;
      bool storageOf_thread_local_storage;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStorageModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStorageModifier;
   };
/* #line 302 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAccessModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAccessModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 317 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgAccessModifier::access_modifier_enum storageOf_modifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAccessModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAccessModifier;
   };
/* #line 337 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 352 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgBitVector > storageOf_modifierVector;
      unsigned long int storageOf_gnu_attribute_constructor_destructor_priority;
       EasyStorage < std::string > storageOf_gnu_attribute_named_weak_reference;
       EasyStorage < std::string > storageOf_gnu_attribute_named_alias;
     unsigned long storageOf_opencl_vec_type;
      SgFunctionModifier::opencl_work_group_size_t storageOf_opencl_work_group_size;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionModifier;
   };
/* #line 377 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUPC_AccessModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUPC_AccessModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 392 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgUPC_AccessModifier::upc_access_modifier_enum storageOf_modifier;
      bool storageOf_isShared;
      long storageOf_layout;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUPC_AccessModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUPC_AccessModifier;
   };
/* #line 414 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSpecialFunctionModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSpecialFunctionModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 429 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgBitVector > storageOf_modifierVector;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSpecialFunctionModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSpecialFunctionModifier;
   };
/* #line 449 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgElaboratedTypeModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgElaboratedTypeModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 464 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgElaboratedTypeModifier::elaborated_type_modifier_enum storageOf_modifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgElaboratedTypeModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgElaboratedTypeModifier;
   };
/* #line 484 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLinkageModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLinkageModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 499 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgLinkageModifier::linkage_modifier_enum storageOf_modifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLinkageModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLinkageModifier;
   };
/* #line 519 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBaseClassModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBaseClassModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 534 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgBaseClassModifier::baseclass_modifier_enum storageOf_modifier;
      SgAccessModifierStorageClass storageOf_accessModifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBaseClassModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBaseClassModifier;
   };
/* #line 555 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 570 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgBitVector > storageOf_modifierVector;
      SgUPC_AccessModifierStorageClass storageOf_upcModifier;
      SgConstVolatileModifierStorageClass storageOf_constVolatileModifier;
      SgElaboratedTypeModifierStorageClass storageOf_elaboratedTypeModifier;
      SgTypeModifier::gnu_extension_machine_mode_enum storageOf_gnu_extension_machine_mode;
      unsigned long int storageOf_gnu_attribute_alignment;
      long storageOf_gnu_attribute_sentinel;
      unsigned storageOf_address_space_value;
      unsigned storageOf_vector_size;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeModifier;
   };
/* #line 598 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDeclarationModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDeclarationModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 613 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgBitVector > storageOf_modifierVector;
      SgTypeModifierStorageClass storageOf_typeModifier;
      SgAccessModifierStorageClass storageOf_accessModifier;
      SgStorageModifierStorageClass storageOf_storageModifier;
       EasyStorage < std::string > storageOf_gnu_attribute_section_name;
      SgDeclarationModifier::gnu_declaration_visability_enum storageOf_gnu_attribute_visability;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDeclarationModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDeclarationModifier;
   };
/* #line 638 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOpenclAccessModeModifierStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOpenclAccessModeModifierStorageClass  : public SgModifierStorageClass
   {

    protected: 


/* #line 653 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgOpenclAccessModeModifier::access_mode_modifier_enum storageOf_modifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOpenclAccessModeModifier* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOpenclAccessModeModifier;
   };
/* #line 673 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNameStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNameStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 688 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_char;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgName* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgName;
   };
/* #line 708 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSymbolTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSymbolTableStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 723 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
      bool storageOf_no_name;
       EasyStorage <  rose_hash_multimap* > storageOf_table;
       EasyStorage < SgNodeSet > storageOf_symbolSet;
      bool storageOf_case_insensitive;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSymbolTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSymbolTable;
   };
/* #line 747 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAttributeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAttributeStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 762 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAttribute* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAttribute;
   };
/* #line 782 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPragmaStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPragmaStorageClass  : public SgAttributeStorageClass
   {

    protected: 


/* #line 797 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_startOfConstruct;
      short storageOf_printed;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPragma* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPragma;
   };
/* #line 819 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBitAttributeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBitAttributeStorageClass  : public SgAttributeStorageClass
   {

    protected: 


/* #line 834 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned long int storageOf_bitflag;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBitAttribute* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBitAttribute;
   };
/* #line 854 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFuncDecl_attrStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFuncDecl_attrStorageClass  : public SgBitAttributeStorageClass
   {

    protected: 


/* #line 869 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFuncDecl_attr* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFuncDecl_attr;
   };
/* #line 888 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClassDecl_attrStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClassDecl_attrStorageClass  : public SgBitAttributeStorageClass
   {

    protected: 


/* #line 903 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClassDecl_attr* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClassDecl_attr;
   };
/* #line 922 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for Sg_File_InfoStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class Sg_File_InfoStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 937 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_file_id;
      int storageOf_line;
      int storageOf_col;
      unsigned int storageOf_classificationBitField;
       EasyStorage < SgFileIdList > storageOf_fileIDsToUnparse;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( Sg_File_Info* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class Sg_File_Info;
   };
/* #line 961 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFileStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFileStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 976 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_startOfConstruct;
       EasyStorage < SgStringList > storageOf_originalCommandLineArgumentList;
      int storageOf_verbose;
      bool storageOf_output_warnings;
      bool storageOf_C_only;
      bool storageOf_UPC_only;
      bool storageOf_UPCxx_only;
      int storageOf_upc_threads;
      bool storageOf_C99_only;
      bool storageOf_Cxx_only;
      bool storageOf_Fortran_only;
      bool storageOf_F77_only;
      bool storageOf_F90_only;
      bool storageOf_F95_only;
      bool storageOf_F2003_only;
      bool storageOf_CoArrayFortran_only;
      bool storageOf_Java_only;
      bool storageOf_PHP_only;
      bool storageOf_Python_only;
      bool storageOf_Cuda_only;
      bool storageOf_OpenCL_only;
      bool storageOf_requires_C_preprocessor;
      bool storageOf_binary_only;
      SgFile::outputFormatOption_enum storageOf_inputFormat;
      SgFile::outputFormatOption_enum storageOf_outputFormat;
      SgFile::outputFormatOption_enum storageOf_backendCompileFormat;
      bool storageOf_fortran_implicit_none;
      bool storageOf_openmp;
      bool storageOf_openmp_parse_only;
      bool storageOf_openmp_ast_only;
      bool storageOf_openmp_lowering;
      bool storageOf_cray_pointer_support;
      bool storageOf_output_parser_actions;
      bool storageOf_exit_after_parser;
      bool storageOf_skip_syntax_check;
      bool storageOf_relax_syntax_check;
      bool storageOf_skip_translation_from_edg_ast_to_rose_ast;
      bool storageOf_skip_transformation;
      bool storageOf_skip_unparse;
      bool storageOf_skipfinalCompileStep;
      bool storageOf_unparse_includes;
      bool storageOf_unparse_line_directives;
      bool storageOf_unparse_instruction_addresses;
      bool storageOf_unparse_raw_memory_contents;
      bool storageOf_unparse_binary_file_format;
      SgFile::outputLanguageOption_enum storageOf_outputLanguage;
       EasyStorage < std::string > storageOf_sourceFileNameWithPath;
       EasyStorage < std::string > storageOf_sourceFileNameWithoutPath;
       EasyStorage < std::string > storageOf_unparse_output_filename;
      bool storageOf_useBackendOnly;
      bool storageOf_compileOnly;
       EasyStorage < std::string > storageOf_savedEdgCommandLine;
      bool storageOf_no_implicit_templates;
      bool storageOf_no_implicit_inline_templates;
      bool storageOf_skip_commentsAndDirectives;
      bool storageOf_collectAllCommentsAndDirectives;
      bool storageOf_unparseHeaderFiles;
       EasyStorage < ROSEAttributesListContainerPtr > storageOf_preprocessorDirectivesAndCommentsList;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;
      bool storageOf_KCC_frontend;
      bool storageOf_new_frontend;
      bool storageOf_disable_edg_backend;
      bool storageOf_disable_sage_backend;
      int storageOf_testingLevel;
      bool storageOf_preinit_il;
      bool storageOf_enable_cp_backend;
      bool storageOf_markGeneratedFiles;
      bool storageOf_negative_test;
      bool storageOf_strict_language_handling;
      bool storageOf_wave;
      int storageOf_embedColorCodesInGeneratedCode;
      int storageOf_generateSourcePositionCodes;
      bool storageOf_sourceFileUsesCppFileExtension;
      bool storageOf_sourceFileUsesFortranFileExtension;
      bool storageOf_sourceFileUsesFortran77FileExtension;
      bool storageOf_sourceFileUsesFortran90FileExtension;
      bool storageOf_sourceFileUsesFortran95FileExtension;
      bool storageOf_sourceFileUsesFortran2003FileExtension;
      bool storageOf_sourceFileUsesCoArrayFortranFileExtension;
      bool storageOf_sourceFileUsesPHPFileExtension;
      bool storageOf_sourceFileUsesPythonFileExtension;
      bool storageOf_sourceFileUsesJavaFileExtension;
      bool storageOf_sourceFileUsesBinaryFileExtension;
      bool storageOf_sourceFileTypeIsUnknown;
      int storageOf_detect_dangling_pointers;
      bool storageOf_read_executable_file_format_only;
      bool storageOf_visualize_executable_file_format_skip_symbols;
      bool storageOf_visualize_dwarf_only;
      bool storageOf_read_instructions_only;
      bool storageOf_skip_unparse_asm_commands;
       EasyStorage < SgStringList > storageOf_libraryArchiveObjectFileNameList;
      bool storageOf_isLibraryArchive;
      bool storageOf_isObjectFile;
      unsigned storageOf_disassemblerSearchHeuristics;
      unsigned storageOf_partitionerSearchHeuristics;
       EasyStorage < std::string > storageOf_partitionerConfigurationFileName;
      bool storageOf_output_tokens;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFile* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFile;
   };
/* #line 1092 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSourceFileStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSourceFileStorageClass  : public SgFileStorageClass
   {

    protected: 


/* #line 1107 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_globalScope;
       EasyStorage < SgModuleStatementPtrList > storageOf_module_list;
       EasyStorage < SgTokenPtrList > storageOf_token_list;
     unsigned long storageOf_temp_holding_scope;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSourceFile* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSourceFile;
   };
/* #line 1130 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBinaryCompositeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBinaryCompositeStorageClass  : public SgFileStorageClass
   {

    protected: 


/* #line 1145 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_genericFileList;
     unsigned long storageOf_interpretations;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBinaryComposite* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBinaryComposite;
   };
/* #line 1166 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnknownFileStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnknownFileStorageClass  : public SgFileStorageClass
   {

    protected: 


/* #line 1181 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_globalScope;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnknownFile* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnknownFile;
   };
/* #line 1201 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgProjectStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgProjectStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1216 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_fileList_ptr;
       EasyStorage < SgStringList > storageOf_originalCommandLineArgumentList;
      int storageOf_frontendErrorCode;
      int storageOf_backendErrorCode;
       EasyStorage < std::string > storageOf_outputFileName;
       EasyStorage < SgStringList > storageOf_sourceFileNameList;
       EasyStorage < SgStringList > storageOf_objectFileNameList;
       EasyStorage < SgStringList > storageOf_libraryFileList;
       EasyStorage < SgStringList > storageOf_librarySpecifierList;
       EasyStorage < SgStringList > storageOf_libraryDirectorySpecifierList;
       EasyStorage < SgStringList > storageOf_includeDirectorySpecifierList;
       EasyStorage < SgStringList > storageOf_macroSpecifierList;
       EasyStorage < SgStringList > storageOf_preincludeFileList;
       EasyStorage < SgStringList > storageOf_preincludeDirectoryList;
      bool storageOf_compileOnly;
      bool storageOf_wave;
      bool storageOf_prelink;
      SgProject::template_instantiation_enum storageOf_template_instantiation_mode;
      bool storageOf_astMerge;
       EasyStorage < std::string > storageOf_astMergeCommandFile;
      bool storageOf_C_PreprocessorOnly;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;
       EasyStorage < std::string > storageOf_compilationPerformanceFile;
       EasyStorage < SgStringList > storageOf_includePathList;
       EasyStorage < SgStringList > storageOf_excludePathList;
       EasyStorage < SgStringList > storageOf_includeFileList;
       EasyStorage < SgStringList > storageOf_excludeFileList;
      bool storageOf_binary_only;
       EasyStorage < std::string > storageOf_dataBaseFilename;
     unsigned long storageOf_directoryList;
      bool storageOf_C_only;
      bool storageOf_Cxx_only;
      bool storageOf_Fortran_only;
      bool storageOf_Java_only;
      bool storageOf_openmp_linking;
       EasyStorage < std::list<std::string> > storageOf_Java_classpath;
       EasyStorage < std::list<std::string> > storageOf_Java_sourcepath;
       EasyStorage < std::string > storageOf_Java_destdir;
      bool storageOf_addCppDirectivesToAST;
       EasyStorage < std::map<std::string, std::set<PreprocessingInfo*> > > storageOf_includingPreprocessingInfosMap;
       EasyStorage < std::list<std::string> > storageOf_quotedIncludesSearchPaths;
       EasyStorage < std::list<std::string> > storageOf_bracketedIncludesSearchPaths;
       EasyStorage < std::string > storageOf_unparseHeaderFilesRootFolder;
      bool storageOf_frontendConstantFolding;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgProject* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgProject;
   };
/* #line 1279 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOptionsStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOptionsStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1294 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_debug_level;
      int storageOf_logging_level;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOptions* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOptions;
   };
/* #line 1315 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnparse_InfoStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnparse_InfoStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1330 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgBitVector > storageOf_unparse_attribute;
      int storageOf_access_attribute;
      int storageOf_nested_expression;
       EasyStorage < std::string > storageOf_operator_name;
      SgNameStorageClass storageOf_var_name;
     unsigned long storageOf_declstatement_ptr;
     unsigned long storageOf_current_context;
      SgNameStorageClass storageOf_array_index_list;
     unsigned long storageOf_current_namespace;
      bool storageOf_outputCodeGenerationFormatDelimiters;
       EasyStorage < SgQualifiedNamePtrList > storageOf_qualifiedNameList;
     unsigned long storageOf_current_function_call;
     unsigned long storageOf_current_scope;
     unsigned long storageOf_reference_node_for_qualification;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;
      int storageOf_nestingLevel;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnparse_Info* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnparse_Info;
   };
/* #line 1367 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBaseClassStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBaseClassStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1382 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_class;
      bool storageOf_isDirectBaseClass;
     unsigned long storageOf_baseClassModifier;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBaseClass* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBaseClass;
   };
/* #line 1407 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgExpBaseClassStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgExpBaseClassStorageClass  : public SgBaseClassStorageClass
   {

    protected: 


/* #line 1422 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_class_exp;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgExpBaseClass* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgExpBaseClass;
   };
/* #line 1442 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypedefSeqStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypedefSeqStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1457 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgTypePtrList > storageOf_typedefs;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypedefSeq* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypedefSeq;
   };
/* #line 1477 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateParameterStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateParameterStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1492 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgTemplateParameter::template_parameter_enum storageOf_parameterType;
     unsigned long storageOf_type;
     unsigned long storageOf_defaultTypeParameter;
     unsigned long storageOf_expression;
     unsigned long storageOf_defaultExpressionParameter;
     unsigned long storageOf_templateDeclaration;
     unsigned long storageOf_defaultTemplateDeclarationParameter;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateParameter* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateParameter;
   };
/* #line 1518 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateArgumentStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateArgumentStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1533 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgTemplateArgument::template_argument_enum storageOf_argumentType;
      bool storageOf_isArrayBoundUnknownType;
     unsigned long storageOf_type;
     unsigned long storageOf_expression;
     unsigned long storageOf_templateDeclaration;
      bool storageOf_explicitlySpecified;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateArgument* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateArgument;
   };
/* #line 1561 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDirectoryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDirectoryStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1576 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_name;
     unsigned long storageOf_fileList;
     unsigned long storageOf_directoryList;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDirectory* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDirectory;
   };
/* #line 1599 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFileListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFileListStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1614 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgFilePtrList > storageOf_listOfFiles;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFileList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFileList;
   };
/* #line 1635 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDirectoryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDirectoryListStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1650 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgDirectoryPtrList > storageOf_listOfDirectories;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDirectoryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDirectoryList;
   };
/* #line 1670 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionParameterTypeListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionParameterTypeListStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1685 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgTypePtrList > storageOf_arguments;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionParameterTypeList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionParameterTypeList;
   };
/* #line 1705 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgQualifiedNameStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgQualifiedNameStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1720 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_scope;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgQualifiedName* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgQualifiedName;
   };
/* #line 1740 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateArgumentListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateArgumentListStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1755 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgTemplateArgumentPtrList > storageOf_args;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateArgumentList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateArgumentList;
   };
/* #line 1775 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateParameterListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateParameterListStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1790 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgTemplateParameterPtrList > storageOf_args;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateParameterList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateParameterList;
   };
/* #line 1810 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGraphStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGraphStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 1825 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_name;
       EasyStorage < rose_graph_integer_node_hash_map > storageOf_node_index_to_node_map;
       EasyStorage < rose_graph_integer_edge_hash_map > storageOf_edge_index_to_edge_map;
       EasyStorage < rose_graph_integerpair_edge_hash_multimap > storageOf_node_index_pair_to_edge_multimap;
       EasyStorage < rose_graph_string_integer_hash_multimap > storageOf_string_to_node_index_multimap;
       EasyStorage < rose_graph_string_integer_hash_multimap > storageOf_string_to_edge_index_multimap;
       EasyStorage < rose_graph_integer_edge_hash_multimap > storageOf_node_index_to_edge_multimap;
      int storageOf_index;
       EasyStorage < SgBoostEdgeList > storageOf_boost_edges;
       EasyStorage < SgBoostEdgeWeightList > storageOf_boost_edge_weights;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;
       EasyStorage < std::map<int, std::string> > storageOf_properties;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGraph* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGraph;
   };
/* #line 1856 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIncidenceDirectedGraphStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIncidenceDirectedGraphStorageClass  : public SgGraphStorageClass
   {

    protected: 


/* #line 1871 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < rose_graph_integer_edge_hash_multimap > storageOf_node_index_to_edge_multimap_edgesOut;
       EasyStorage < rose_graph_integer_edge_hash_multimap > storageOf_node_index_to_edge_multimap_edgesIn;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIncidenceDirectedGraph* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIncidenceDirectedGraph;
   };
/* #line 1892 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBidirectionalGraphStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBidirectionalGraphStorageClass  : public SgIncidenceDirectedGraphStorageClass
   {

    protected: 


/* #line 1907 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBidirectionalGraph* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBidirectionalGraph;
   };
/* #line 1926 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStringKeyedBidirectionalGraphStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStringKeyedBidirectionalGraphStorageClass  : public SgBidirectionalGraphStorageClass
   {

    protected: 


/* #line 1941 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStringKeyedBidirectionalGraph* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStringKeyedBidirectionalGraph;
   };
/* #line 1960 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIntKeyedBidirectionalGraphStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIntKeyedBidirectionalGraphStorageClass  : public SgBidirectionalGraphStorageClass
   {

    protected: 


/* #line 1975 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIntKeyedBidirectionalGraph* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIntKeyedBidirectionalGraph;
   };
/* #line 1994 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIncidenceUndirectedGraphStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIncidenceUndirectedGraphStorageClass  : public SgGraphStorageClass
   {

    protected: 


/* #line 2009 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIncidenceUndirectedGraph* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIncidenceUndirectedGraph;
   };
/* #line 2028 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGraphNodeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGraphNodeStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2043 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_name;
     unsigned long storageOf_SgNode;
      int storageOf_index;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;
       EasyStorage < std::map<int, std::string> > storageOf_properties;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGraphNode* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGraphNode;
   };
/* #line 2067 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGraphEdgeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGraphEdgeStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2082 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_node_A;
     unsigned long storageOf_node_B;
       EasyStorage < std::string > storageOf_name;
      int storageOf_index;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;
       EasyStorage < std::map<int, std::string> > storageOf_properties;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGraphEdge* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGraphEdge;
   };
/* #line 2107 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDirectedGraphEdgeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDirectedGraphEdgeStorageClass  : public SgGraphEdgeStorageClass
   {

    protected: 


/* #line 2122 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDirectedGraphEdge* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDirectedGraphEdge;
   };
/* #line 2141 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUndirectedGraphEdgeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUndirectedGraphEdgeStorageClass  : public SgGraphEdgeStorageClass
   {

    protected: 


/* #line 2156 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUndirectedGraphEdge* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUndirectedGraphEdge;
   };
/* #line 2175 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGraphNodeListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGraphNodeListStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2190 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGraphNodeList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGraphNodeList;
   };
/* #line 2209 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGraphEdgeListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGraphEdgeListStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2224 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGraphEdgeList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGraphEdgeList;
   };
/* #line 2243 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeTableStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2258 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_type_table;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeTable;
   };
/* #line 2278 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNameGroupStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNameGroupStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2293 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_group_name;
       EasyStorage < SgStringList > storageOf_name_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNameGroup* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNameGroup;
   };
/* #line 2314 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDimensionObjectStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDimensionObjectStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2329 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_array;
     unsigned long storageOf_shape;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDimensionObject* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDimensionObject;
   };
/* #line 2350 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFormatItemStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFormatItemStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2365 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_repeat_specification;
     unsigned long storageOf_data;
     unsigned long storageOf_format_item_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFormatItem* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFormatItem;
   };
/* #line 2387 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFormatItemListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFormatItemListStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2402 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgFormatItemPtrList > storageOf_format_item_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFormatItemList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFormatItemList;
   };
/* #line 2422 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDataStatementGroupStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDataStatementGroupStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2437 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgDataStatementObjectPtrList > storageOf_object_list;
       EasyStorage < SgDataStatementValuePtrList > storageOf_value_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDataStatementGroup* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDataStatementGroup;
   };
/* #line 2458 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDataStatementObjectStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDataStatementObjectStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2473 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_variableReference_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDataStatementObject* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDataStatementObject;
   };
/* #line 2493 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDataStatementValueStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDataStatementValueStorageClass  : public SgSupportStorageClass
   {

    protected: 


/* #line 2508 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgDataStatementValue::data_statement_value_enum storageOf_data_initialization_format;
     unsigned long storageOf_initializer_list;
     unsigned long storageOf_repeat_expression;
     unsigned long storageOf_constant_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDataStatementValue* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDataStatementValue;
   };
/* #line 2531 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeStorageClass  : public SgNodeStorageClass
   {

    protected: 


/* #line 2546 "../../../src/frontend/SageIII//StorageClasses.h" */

      bool storageOf_isCoArray;
      int storageOf_substitutedForTemplateParam;
     unsigned long storageOf_ref_to;
     unsigned long storageOf_ptr_to;
     unsigned long storageOf_modifiers;
     unsigned long storageOf_typedefs;
     unsigned long storageOf_type_kind;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgType;
   };
/* #line 2573 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeUnknownStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeUnknownStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2588 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeUnknown* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeUnknown;
   };
/* #line 2607 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeCharStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeCharStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2622 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeChar* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeChar;
   };
/* #line 2641 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeSignedCharStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeSignedCharStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2656 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeSignedChar* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeSignedChar;
   };
/* #line 2675 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeUnsignedCharStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeUnsignedCharStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2690 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeUnsignedChar* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeUnsignedChar;
   };
/* #line 2709 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeShortStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeShortStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2724 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeShort* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeShort;
   };
/* #line 2743 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeSignedShortStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeSignedShortStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2758 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeSignedShort* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeSignedShort;
   };
/* #line 2777 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeUnsignedShortStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeUnsignedShortStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2792 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeUnsignedShort* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeUnsignedShort;
   };
/* #line 2811 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeIntStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeIntStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2826 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_field_size;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeInt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeInt;
   };
/* #line 2846 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeSignedIntStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeSignedIntStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2861 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeSignedInt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeSignedInt;
   };
/* #line 2880 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeUnsignedIntStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeUnsignedIntStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2895 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeUnsignedInt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeUnsignedInt;
   };
/* #line 2914 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeLongStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeLongStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2929 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeLong* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeLong;
   };
/* #line 2948 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeSignedLongStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeSignedLongStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2963 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeSignedLong* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeSignedLong;
   };
/* #line 2982 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeUnsignedLongStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeUnsignedLongStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 2997 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeUnsignedLong* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeUnsignedLong;
   };
/* #line 3016 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeVoidStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeVoidStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3031 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeVoid* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeVoid;
   };
/* #line 3050 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeGlobalVoidStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeGlobalVoidStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3065 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeGlobalVoid* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeGlobalVoid;
   };
/* #line 3084 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeWcharStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeWcharStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3099 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeWchar* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeWchar;
   };
/* #line 3118 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeFloatStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeFloatStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3133 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeFloat* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeFloat;
   };
/* #line 3152 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeDoubleStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeDoubleStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3167 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeDouble* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeDouble;
   };
/* #line 3186 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeLongLongStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeLongLongStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3201 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeLongLong* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeLongLong;
   };
/* #line 3220 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeSignedLongLongStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeSignedLongLongStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3235 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeSignedLongLong* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeSignedLongLong;
   };
/* #line 3254 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeUnsignedLongLongStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeUnsignedLongLongStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3269 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeUnsignedLongLong* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeUnsignedLongLong;
   };
/* #line 3288 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeLongDoubleStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeLongDoubleStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3303 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeLongDouble* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeLongDouble;
   };
/* #line 3322 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeStringStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeStringStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3337 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_lengthExpression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeString* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeString;
   };
/* #line 3357 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeBoolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeBoolStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3372 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeBool* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeBool;
   };
/* #line 3391 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPointerTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPointerTypeStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3406 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPointerType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPointerType;
   };
/* #line 3426 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPointerMemberTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPointerMemberTypeStorageClass  : public SgPointerTypeStorageClass
   {

    protected: 


/* #line 3441 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_class_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPointerMemberType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPointerMemberType;
   };
/* #line 3461 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgReferenceTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgReferenceTypeStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3476 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgReferenceType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgReferenceType;
   };
/* #line 3496 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNamedTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNamedTypeStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3511 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;
      bool storageOf_autonomous_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNamedType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNamedType;
   };
/* #line 3532 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClassTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClassTypeStorageClass  : public SgNamedTypeStorageClass
   {

    protected: 


/* #line 3547 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClassType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClassType;
   };
/* #line 3566 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaParameterizedTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaParameterizedTypeStorageClass  : public SgNamedTypeStorageClass
   {

    protected: 


/* #line 3581 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_raw_type;
     unsigned long storageOf_type_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaParameterizedType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaParameterizedType;
   };
/* #line 3602 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEnumTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEnumTypeStorageClass  : public SgNamedTypeStorageClass
   {

    protected: 


/* #line 3617 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEnumType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEnumType;
   };
/* #line 3636 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypedefTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypedefTypeStorageClass  : public SgNamedTypeStorageClass
   {

    protected: 


/* #line 3651 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_parent_scope;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypedefType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypedefType;
   };
/* #line 3671 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgModifierTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgModifierTypeStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3686 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_type;
      SgTypeModifierStorageClass storageOf_typeModifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgModifierType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgModifierType;
   };
/* #line 3707 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionTypeStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3722 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_return_type;
      bool storageOf_has_ellipses;
     unsigned long storageOf_orig_return_type;
     unsigned long storageOf_argument_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionType;
   };
/* #line 3745 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMemberFunctionTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMemberFunctionTypeStorageClass  : public SgFunctionTypeStorageClass
   {

    protected: 


/* #line 3760 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_class_type;
      unsigned int storageOf_mfunc_specifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMemberFunctionType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMemberFunctionType;
   };
/* #line 3781 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPartialFunctionTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPartialFunctionTypeStorageClass  : public SgMemberFunctionTypeStorageClass
   {

    protected: 


/* #line 3796 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPartialFunctionType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPartialFunctionType;
   };
/* #line 3815 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPartialFunctionModifierTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPartialFunctionModifierTypeStorageClass  : public SgPartialFunctionTypeStorageClass
   {

    protected: 


/* #line 3830 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPartialFunctionModifierType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPartialFunctionModifierType;
   };
/* #line 3849 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgArrayTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgArrayTypeStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3864 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_type;
     unsigned long storageOf_index;
     unsigned long storageOf_dim_info;
      int storageOf_rank;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgArrayType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgArrayType;
   };
/* #line 3887 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeEllipseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeEllipseStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3902 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeEllipse* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeEllipse;
   };
/* #line 3921 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateTypeStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3936 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateType;
   };
/* #line 3955 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgQualifiedNameTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgQualifiedNameTypeStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 3970 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_type;
       EasyStorage < SgQualifiedNamePtrList > storageOf_qualifiedNameList;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgQualifiedNameType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgQualifiedNameType;
   };
/* #line 3991 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeComplexStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeComplexStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 4006 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeComplex* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeComplex;
   };
/* #line 4026 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeImaginaryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeImaginaryStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 4041 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeImaginary* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeImaginary;
   };
/* #line 4061 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeDefaultStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeDefaultStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 4076 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeDefault* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeDefault;
   };
/* #line 4096 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeCAFTeamStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeCAFTeamStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 4111 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeCAFTeam* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeCAFTeam;
   };
/* #line 4130 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeCrayPointerStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeCrayPointerStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 4145 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeCrayPointer* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeCrayPointer;
   };
/* #line 4164 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeLabelStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeLabelStorageClass  : public SgTypeStorageClass
   {

    protected: 


/* #line 4179 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeLabel* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeLabel;
   };
/* #line 4199 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLocatedNodeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLocatedNodeStorageClass  : public SgNodeStorageClass
   {

    protected: 


/* #line 4214 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_startOfConstruct;
     unsigned long storageOf_endOfConstruct;
       EasyStorage < AttachedPreprocessingInfoType* > storageOf_attachedPreprocessingInfoPtr;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLocatedNode* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLocatedNode;
   };
/* #line 4237 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLocatedNodeSupportStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLocatedNodeSupportStorageClass  : public SgLocatedNodeStorageClass
   {

    protected: 


/* #line 4252 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLocatedNodeSupport* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLocatedNodeSupport;
   };
/* #line 4271 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCommonBlockObjectStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCommonBlockObjectStorageClass  : public SgLocatedNodeSupportStorageClass
   {

    protected: 


/* #line 4286 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_block_name;
     unsigned long storageOf_variable_reference_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCommonBlockObject* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCommonBlockObject;
   };
/* #line 4307 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgInitializedNameStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgInitializedNameStorageClass  : public SgLocatedNodeSupportStorageClass
   {

    protected: 


/* #line 4322 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
     unsigned long storageOf_typeptr;
     unsigned long storageOf_initptr;
     unsigned long storageOf_prev_decl_item;
      bool storageOf_is_initializer;
     unsigned long storageOf_declptr;
     unsigned long storageOf_storageModifier;
     unsigned long storageOf_scope;
      SgInitializedName::preinitialization_enum storageOf_preinitialization;
      bool storageOf_isCoArray;
      SgInitializedName::asm_register_name_enum storageOf_register_name_code;
      SgInitializedName::excess_specifier_enum storageOf_excess_specifier;
       EasyStorage < std::string > storageOf_register_name_string;
      bool storageOf_requiresGlobalNameQualificationOnType;
      bool storageOf_shapeDeferred;
      bool storageOf_initializationDeferred;
       EasyStorage < SgBitVector > storageOf_gnu_attribute_modifierVector;
      unsigned long int storageOf_gnu_attribute_initialization_priority;
       EasyStorage < std::string > storageOf_gnu_attribute_named_weak_reference;
       EasyStorage < std::string > storageOf_gnu_attribute_named_alias;
       EasyStorage < std::string > storageOf_gnu_attribute_cleanup_function;
       EasyStorage < std::string > storageOf_gnu_attribute_section_name;
      unsigned long int storageOf_gnu_attribute_alignment;
      SgDeclarationModifier::gnu_declaration_visability_enum storageOf_gnu_attribute_visability;
      bool storageOf_protected_declaration;
      int storageOf_name_qualification_length_for_type;
      bool storageOf_type_elaboration_required_for_type;
      bool storageOf_global_qualification_required_for_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgInitializedName* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgInitializedName;
   };
/* #line 4369 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgInterfaceBodyStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgInterfaceBodyStorageClass  : public SgLocatedNodeSupportStorageClass
   {

    protected: 


/* #line 4384 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_function_name;
     unsigned long storageOf_functionDeclaration;
      bool storageOf_use_function_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgInterfaceBody* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgInterfaceBody;
   };
/* #line 4406 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgHeaderFileBodyStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgHeaderFileBodyStorageClass  : public SgLocatedNodeSupportStorageClass
   {

    protected: 


/* #line 4421 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgHeaderFileBody* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgHeaderFileBody;
   };
/* #line 4440 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgRenamePairStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgRenamePairStorageClass  : public SgLocatedNodeSupportStorageClass
   {

    protected: 


/* #line 4455 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_local_name;
      SgNameStorageClass storageOf_use_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgRenamePair* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgRenamePair;
   };
/* #line 4476 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpClauseStorageClass  : public SgLocatedNodeSupportStorageClass
   {

    protected: 


/* #line 4491 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpClause;
   };
/* #line 4510 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpOrderedClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpOrderedClauseStorageClass  : public SgOmpClauseStorageClass
   {

    protected: 


/* #line 4525 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpOrderedClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpOrderedClause;
   };
/* #line 4544 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpNowaitClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpNowaitClauseStorageClass  : public SgOmpClauseStorageClass
   {

    protected: 


/* #line 4559 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpNowaitClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpNowaitClause;
   };
/* #line 4578 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpUntiedClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpUntiedClauseStorageClass  : public SgOmpClauseStorageClass
   {

    protected: 


/* #line 4593 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpUntiedClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpUntiedClause;
   };
/* #line 4612 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpDefaultClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpDefaultClauseStorageClass  : public SgOmpClauseStorageClass
   {

    protected: 


/* #line 4627 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgOmpClause::omp_default_option_enum storageOf_data_sharing;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpDefaultClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpDefaultClause;
   };
/* #line 4647 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpExpressionClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpExpressionClauseStorageClass  : public SgOmpClauseStorageClass
   {

    protected: 


/* #line 4662 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpExpressionClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpExpressionClause;
   };
/* #line 4682 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpCollapseClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpCollapseClauseStorageClass  : public SgOmpExpressionClauseStorageClass
   {

    protected: 


/* #line 4697 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpCollapseClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpCollapseClause;
   };
/* #line 4716 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpIfClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpIfClauseStorageClass  : public SgOmpExpressionClauseStorageClass
   {

    protected: 


/* #line 4731 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpIfClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpIfClause;
   };
/* #line 4750 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpNumThreadsClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpNumThreadsClauseStorageClass  : public SgOmpExpressionClauseStorageClass
   {

    protected: 


/* #line 4765 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpNumThreadsClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpNumThreadsClause;
   };
/* #line 4784 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpVariablesClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpVariablesClauseStorageClass  : public SgOmpClauseStorageClass
   {

    protected: 


/* #line 4799 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgVarRefExpPtrList > storageOf_variables;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpVariablesClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpVariablesClause;
   };
/* #line 4819 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpCopyprivateClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpCopyprivateClauseStorageClass  : public SgOmpVariablesClauseStorageClass
   {

    protected: 


/* #line 4834 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpCopyprivateClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpCopyprivateClause;
   };
/* #line 4853 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpPrivateClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpPrivateClauseStorageClass  : public SgOmpVariablesClauseStorageClass
   {

    protected: 


/* #line 4868 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpPrivateClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpPrivateClause;
   };
/* #line 4887 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpFirstprivateClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpFirstprivateClauseStorageClass  : public SgOmpVariablesClauseStorageClass
   {

    protected: 


/* #line 4902 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpFirstprivateClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpFirstprivateClause;
   };
/* #line 4921 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpSharedClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpSharedClauseStorageClass  : public SgOmpVariablesClauseStorageClass
   {

    protected: 


/* #line 4936 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpSharedClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpSharedClause;
   };
/* #line 4955 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpCopyinClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpCopyinClauseStorageClass  : public SgOmpVariablesClauseStorageClass
   {

    protected: 


/* #line 4970 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpCopyinClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpCopyinClause;
   };
/* #line 4989 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpLastprivateClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpLastprivateClauseStorageClass  : public SgOmpVariablesClauseStorageClass
   {

    protected: 


/* #line 5004 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpLastprivateClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpLastprivateClause;
   };
/* #line 5023 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpReductionClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpReductionClauseStorageClass  : public SgOmpVariablesClauseStorageClass
   {

    protected: 


/* #line 5038 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgOmpClause::omp_reduction_operator_enum storageOf_operation;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpReductionClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpReductionClause;
   };
/* #line 5058 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpScheduleClauseStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpScheduleClauseStorageClass  : public SgOmpClauseStorageClass
   {

    protected: 


/* #line 5073 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgOmpClause::omp_schedule_kind_enum storageOf_kind;
     unsigned long storageOf_chunk_size;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpScheduleClause* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpScheduleClause;
   };
/* #line 5094 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStatementStorageClass  : public SgLocatedNodeStorageClass
   {

    protected: 


/* #line 5109 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_numeric_label;
      int storageOf_source_sequence_value;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStatement;
   };
/* #line 5130 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgScopeStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgScopeStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 5145 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_symbol_table;
     unsigned long storageOf_type_table;
       EasyStorage < std::set<SgSymbol*> > storageOf_type_elaboration_list;
       EasyStorage < std::set<SgSymbol*> > storageOf_hidden_type_list;
       EasyStorage < std::set<SgSymbol*> > storageOf_hidden_declaration_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgScopeStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgScopeStatement;
   };
/* #line 5169 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGlobalStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGlobalStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5184 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgDeclarationStatementPtrList > storageOf_declarations;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGlobal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGlobal;
   };
/* #line 5204 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBasicBlockStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBasicBlockStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5219 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgStatementPtrList > storageOf_statements;
       EasyStorage < std::string > storageOf_asm_function_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBasicBlock* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBasicBlock;
   };
/* #line 5240 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIfStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIfStmtStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5255 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_conditional;
     unsigned long storageOf_true_body;
     unsigned long storageOf_false_body;
     unsigned long storageOf_else_numeric_label;
       EasyStorage < std::string > storageOf_string_label;
     unsigned long storageOf_end_numeric_label;
      bool storageOf_has_end_statement;
      bool storageOf_use_then_keyword;
      bool storageOf_is_else_if_statement;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIfStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIfStmt;
   };
/* #line 5283 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgForStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgForStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5298 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_for_init_stmt;
     unsigned long storageOf_test;
     unsigned long storageOf_increment;
     unsigned long storageOf_loop_body;
     unsigned long storageOf_else_body;
       EasyStorage < std::string > storageOf_string_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgForStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgForStatement;
   };
/* #line 5323 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionDefinitionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionDefinitionStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5338 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;
       EasyStorage < std::map<SgNode*,int> > storageOf_scope_number_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionDefinition* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionDefinition;
   };
/* #line 5359 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateFunctionDefinitionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateFunctionDefinitionStorageClass  : public SgFunctionDefinitionStorageClass
   {

    protected: 


/* #line 5374 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateFunctionDefinition* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateFunctionDefinition;
   };
/* #line 5393 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClassDefinitionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClassDefinitionStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5408 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgDeclarationStatementPtrList > storageOf_members;
       EasyStorage < SgBaseClassPtrList > storageOf_inheritances;
      unsigned int storageOf_packingAlignment;
      bool storageOf_isSequence;
      bool storageOf_isPrivate;
      bool storageOf_isAbstract;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClassDefinition* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClassDefinition;
   };
/* #line 5433 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateInstantiationDefnStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateInstantiationDefnStorageClass  : public SgClassDefinitionStorageClass
   {

    protected: 


/* #line 5448 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateInstantiationDefn* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateInstantiationDefn;
   };
/* #line 5467 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateClassDefinitionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateClassDefinitionStorageClass  : public SgClassDefinitionStorageClass
   {

    protected: 


/* #line 5482 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateClassDefinition* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateClassDefinition;
   };
/* #line 5501 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgWhileStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgWhileStmtStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5516 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_condition;
     unsigned long storageOf_body;
     unsigned long storageOf_else_body;
     unsigned long storageOf_end_numeric_label;
       EasyStorage < std::string > storageOf_string_label;
      bool storageOf_has_end_statement;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgWhileStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgWhileStmt;
   };
/* #line 5541 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDoWhileStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDoWhileStmtStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5556 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;
     unsigned long storageOf_condition;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDoWhileStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDoWhileStmt;
   };
/* #line 5577 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSwitchStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSwitchStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5592 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_item_selector;
     unsigned long storageOf_body;
     unsigned long storageOf_end_numeric_label;
       EasyStorage < std::string > storageOf_string_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSwitchStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSwitchStatement;
   };
/* #line 5615 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCatchOptionStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCatchOptionStmtStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5630 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_condition;
     unsigned long storageOf_body;
     unsigned long storageOf_trystmt;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCatchOptionStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCatchOptionStmt;
   };
/* #line 5652 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNamespaceDefinitionStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNamespaceDefinitionStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5667 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgDeclarationStatementPtrList > storageOf_declarations;
     unsigned long storageOf_namespaceDeclaration;
     unsigned long storageOf_previousNamepaceDefinition;
     unsigned long storageOf_nextNamepaceDefinition;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNamespaceDefinitionStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNamespaceDefinitionStatement;
   };
/* #line 5690 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBlockDataStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBlockDataStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5705 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBlockDataStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBlockDataStatement;
   };
/* #line 5725 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAssociateStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAssociateStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5740 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_variable_declaration;
     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAssociateStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAssociateStatement;
   };
/* #line 5761 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFortranDoStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFortranDoStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5776 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_initialization;
     unsigned long storageOf_bound;
     unsigned long storageOf_increment;
     unsigned long storageOf_body;
     unsigned long storageOf_end_numeric_label;
       EasyStorage < std::string > storageOf_string_label;
      bool storageOf_old_style;
      bool storageOf_has_end_statement;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFortranDo* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFortranDo;
   };
/* #line 5803 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFortranNonblockedDoStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFortranNonblockedDoStorageClass  : public SgFortranDoStorageClass
   {

    protected: 


/* #line 5818 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_end_statement;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFortranNonblockedDo* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFortranNonblockedDo;
   };
/* #line 5838 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgForAllStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgForAllStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5853 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_forall_header;
     unsigned long storageOf_body;
      bool storageOf_has_end_statement;
       EasyStorage < std::string > storageOf_string_label;
     unsigned long storageOf_end_numeric_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgForAllStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgForAllStatement;
   };
/* #line 5877 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcForAllStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcForAllStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5892 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_for_init_stmt;
     unsigned long storageOf_test;
     unsigned long storageOf_increment;
     unsigned long storageOf_affinity;
     unsigned long storageOf_loop_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcForAllStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcForAllStatement;
   };
/* #line 5916 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCAFWithTeamStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCAFWithTeamStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5931 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_teamId;
     unsigned long storageOf_body;
      bool storageOf_endHasTeamId;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCAFWithTeamStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCAFWithTeamStatement;
   };
/* #line 5953 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaForEachStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaForEachStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 5968 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_element;
     unsigned long storageOf_collection;
     unsigned long storageOf_loop_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaForEachStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaForEachStatement;
   };
/* #line 5990 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaLabelStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaLabelStatementStorageClass  : public SgScopeStatementStorageClass
   {

    protected: 


/* #line 6005 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_label;
     unsigned long storageOf_statement;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaLabelStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaLabelStatement;
   };
/* #line 6026 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionTypeTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionTypeTableStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 6041 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_function_type_table;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionTypeTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionTypeTable;
   };
/* #line 6061 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDeclarationStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDeclarationStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 6076 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned int storageOf_decl_attributes;
       EasyStorage < std::string > storageOf_linkage;
      SgDeclarationModifierStorageClass storageOf_declarationModifier;
      bool storageOf_nameOnly;
      bool storageOf_forward;
      bool storageOf_externBrace;
      bool storageOf_skipElaborateType;
     unsigned long storageOf_definingDeclaration;
     unsigned long storageOf_firstNondefiningDeclaration;
       EasyStorage < SgQualifiedNamePtrList > storageOf_qualifiedNameList;
       EasyStorage < std::string > storageOf_binding_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDeclarationStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDeclarationStatement;
   };
/* #line 6106 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionParameterListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionParameterListStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6121 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgInitializedNamePtrList > storageOf_args;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionParameterList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionParameterList;
   };
/* #line 6141 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVariableDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVariableDeclarationStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6156 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_baseTypeDefiningDeclaration;
       EasyStorage < SgInitializedNamePtrList > storageOf_variables;
      bool storageOf_variableDeclarationContainsBaseTypeDefiningDeclaration;
      SgDeclarationStatement::template_specialization_enum storageOf_specialization;
      bool storageOf_requiresGlobalNameQualificationOnType;
       EasyStorage < std::string > storageOf_gnu_extension_section;
       EasyStorage < std::string > storageOf_gnu_extension_alias;
      unsigned short storageOf_gnu_extension_initialization_priority;
      unsigned long storageOf_gnu_extension_alignment;
      SgDeclarationStatement::gnu_extension_visability_attribute_enum storageOf_gnu_extension_visability;
      SgVariableDeclaration::gnu_extension_declaration_attributes_enum storageOf_gnu_extension_declaration_attribute;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVariableDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVariableDeclaration;
   };
/* #line 6189 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVariableDefinitionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVariableDefinitionStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6204 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_vardefn;
     unsigned long storageOf_bitfield;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVariableDefinition* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVariableDefinition;
   };
/* #line 6225 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClinkageDeclarationStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClinkageDeclarationStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6240 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_languageSpecifier;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClinkageDeclarationStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClinkageDeclarationStatement;
   };
/* #line 6260 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClinkageStartStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClinkageStartStatementStorageClass  : public SgClinkageDeclarationStatementStorageClass
   {

    protected: 


/* #line 6275 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClinkageStartStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClinkageStartStatement;
   };
/* #line 6294 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClinkageEndStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClinkageEndStatementStorageClass  : public SgClinkageDeclarationStatementStorageClass
   {

    protected: 


/* #line 6309 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClinkageEndStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClinkageEndStatement;
   };
/* #line 6328 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEnumDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEnumDeclarationStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6343 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
      bool storageOf_embedded;
     unsigned long storageOf_type;
       EasyStorage < SgInitializedNamePtrList > storageOf_enumerators;
     unsigned long storageOf_scope;
      bool storageOf_isUnNamed;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEnumDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEnumDeclaration;
   };
/* #line 6368 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmStmtStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6383 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_assemblyCode;
      bool storageOf_useGnuExtendedFormat;
       EasyStorage < SgExpressionPtrList > storageOf_operands;
       EasyStorage < SgAsmStmt::AsmRegisterNameList > storageOf_clobberRegisterList;
      bool storageOf_isVolatile;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmStmt;
   };
/* #line 6407 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAttributeSpecificationStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAttributeSpecificationStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6422 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgStringList > storageOf_name_list;
      SgAttributeSpecificationStatement::attribute_spec_enum storageOf_attribute_kind;
      int storageOf_intent;
     unsigned long storageOf_parameter_list;
       EasyStorage < SgDataStatementGroupPtrList > storageOf_data_statement_group_list;
     unsigned long storageOf_bind_list;
       EasyStorage < SgDimensionObjectPtrList > storageOf_dimension_object_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAttributeSpecificationStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAttributeSpecificationStatement;
   };
/* #line 6448 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFormatStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFormatStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6463 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_format_item_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFormatStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFormatStatement;
   };
/* #line 6483 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateDeclarationStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6498 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
      SgNameStorageClass storageOf_string;
      SgTemplateDeclaration::template_type_enum storageOf_template_kind;
       EasyStorage < SgTemplateParameterPtrList > storageOf_templateParameters;
     unsigned long storageOf_scope;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateDeclaration;
   };
/* #line 6522 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateClassDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateClassDeclarationStorageClass  : public SgTemplateDeclarationStorageClass
   {

    protected: 


/* #line 6537 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_definition;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateClassDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateClassDeclaration;
   };
/* #line 6557 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateFunctionDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateFunctionDeclarationStorageClass  : public SgTemplateDeclarationStorageClass
   {

    protected: 


/* #line 6572 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_definition;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateFunctionDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateFunctionDeclaration;
   };
/* #line 6592 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateMemberFunctionDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateMemberFunctionDeclarationStorageClass  : public SgTemplateFunctionDeclarationStorageClass
   {

    protected: 


/* #line 6607 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateMemberFunctionDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateMemberFunctionDeclaration;
   };
/* #line 6626 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateInstantiationDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateInstantiationDirectiveStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6641 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateInstantiationDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateInstantiationDirectiveStatement;
   };
/* #line 6661 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUseStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUseStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6676 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
      bool storageOf_only_option;
       EasyStorage < SgRenamePairPtrList > storageOf_rename_list;
     unsigned long storageOf_module;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUseStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUseStatement;
   };
/* #line 6699 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgParameterStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgParameterStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6714 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgParameterStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgParameterStatement;
   };
/* #line 6733 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNamespaceDeclarationStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNamespaceDeclarationStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6748 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
     unsigned long storageOf_definition;
      bool storageOf_isUnnamedNamespace;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNamespaceDeclarationStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNamespaceDeclarationStatement;
   };
/* #line 6770 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEquivalenceStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEquivalenceStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6785 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_equivalence_set_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEquivalenceStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEquivalenceStatement;
   };
/* #line 6805 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgInterfaceStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgInterfaceStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6820 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
      SgInterfaceStatement::generic_spec_enum storageOf_generic_spec;
       EasyStorage < SgInterfaceBodyPtrList > storageOf_interface_body_list;
     unsigned long storageOf_end_numeric_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgInterfaceStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgInterfaceStatement;
   };
/* #line 6843 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNamespaceAliasDeclarationStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNamespaceAliasDeclarationStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6858 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
     unsigned long storageOf_namespaceDeclaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNamespaceAliasDeclarationStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNamespaceAliasDeclarationStatement;
   };
/* #line 6879 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCommonBlockStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCommonBlockStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6894 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgCommonBlockObjectPtrList > storageOf_block_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCommonBlock* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCommonBlock;
   };
/* #line 6914 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypedefDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypedefDeclarationStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6929 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
     unsigned long storageOf_base_type;
     unsigned long storageOf_type;
     unsigned long storageOf_declaration;
     unsigned long storageOf_parent_scope;
      bool storageOf_typedefBaseTypeContainsDefiningDeclaration;
     unsigned long storageOf_scope;
      bool storageOf_requiresGlobalNameQualificationOnType;
      int storageOf_name_qualification_length_for_base_type;
      bool storageOf_type_elaboration_required_for_base_type;
      bool storageOf_global_qualification_required_for_base_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypedefDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypedefDeclaration;
   };
/* #line 6959 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStatementFunctionStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStatementFunctionStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 6974 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_function;
     unsigned long storageOf_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStatementFunctionStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStatementFunctionStatement;
   };
/* #line 6995 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCtorInitializerListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCtorInitializerListStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7010 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgInitializedNamePtrList > storageOf_ctors;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCtorInitializerList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCtorInitializerList;
   };
/* #line 7030 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPragmaDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPragmaDeclarationStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7045 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_pragma;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPragmaDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPragmaDeclaration;
   };
/* #line 7065 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUsingDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUsingDirectiveStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7080 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_namespaceDeclaration;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUsingDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUsingDirectiveStatement;
   };
/* #line 7103 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClassDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClassDeclarationStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7118 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
      SgClassDeclaration::class_types storageOf_class_type;
     unsigned long storageOf_type;
     unsigned long storageOf_definition;
     unsigned long storageOf_scope;
      SgDeclarationStatement::template_specialization_enum storageOf_specialization;
      bool storageOf_from_template;
      bool storageOf_fixupScope;
      bool storageOf_isUnNamed;
      bool storageOf_explicit_interface;
     unsigned long storageOf_decoratorList;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClassDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClassDeclaration;
   };
/* #line 7151 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateInstantiationDeclStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateInstantiationDeclStorageClass  : public SgClassDeclarationStorageClass
   {

    protected: 


/* #line 7166 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_templateName;
      SgNameStorageClass storageOf_templateHeader;
     unsigned long storageOf_templateDeclaration;
       EasyStorage < SgTemplateArgumentPtrList > storageOf_templateArguments;
      bool storageOf_nameResetFromMangledForm;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateInstantiationDecl* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateInstantiationDecl;
   };
/* #line 7190 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDerivedTypeStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDerivedTypeStatementStorageClass  : public SgClassDeclarationStorageClass
   {

    protected: 


/* #line 7205 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_end_numeric_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDerivedTypeStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDerivedTypeStatement;
   };
/* #line 7225 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgModuleStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgModuleStatementStorageClass  : public SgClassDeclarationStorageClass
   {

    protected: 


/* #line 7240 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_end_numeric_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgModuleStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgModuleStatement;
   };
/* #line 7260 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgImplicitStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgImplicitStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7275 "../../../src/frontend/SageIII//StorageClasses.h" */

      bool storageOf_implicit_none;
       EasyStorage < SgInitializedNamePtrList > storageOf_variables;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgImplicitStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgImplicitStatement;
   };
/* #line 7296 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUsingDeclarationStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUsingDeclarationStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7311 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;
     unsigned long storageOf_initializedName;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUsingDeclarationStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUsingDeclarationStatement;
   };
/* #line 7335 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNamelistStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNamelistStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7350 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgNameGroupPtrList > storageOf_group_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNamelistStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNamelistStatement;
   };
/* #line 7370 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgImportStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgImportStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7385 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgExpressionPtrList > storageOf_import_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgImportStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgImportStatement;
   };
/* #line 7405 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionDeclarationStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7420 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
     unsigned long storageOf_parameterList;
      SgFunctionModifierStorageClass storageOf_functionModifier;
      SgSpecialFunctionModifierStorageClass storageOf_specialFunctionModifier;
       EasyStorage < SgTypePtrList > storageOf_exceptionSpecification;
      bool storageOf_named_in_end_statement;
       EasyStorage < std::string > storageOf_asm_name;
     unsigned long storageOf_decoratorList;
     unsigned long storageOf_type;
     unsigned long storageOf_definition;
      bool storageOf_oldStyleDefinition;
     unsigned long storageOf_scope;
      SgDeclarationStatement::template_specialization_enum storageOf_specialization;
      bool storageOf_requiresNameQualificationOnReturnType;
       EasyStorage < std::string > storageOf_gnu_extension_section;
       EasyStorage < std::string > storageOf_gnu_extension_alias;
      SgDeclarationStatement::gnu_extension_visability_attribute_enum storageOf_gnu_extension_visability;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;
      int storageOf_name_qualification_length_for_return_type;
      bool storageOf_type_elaboration_required_for_return_type;
      bool storageOf_global_qualification_required_for_return_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionDeclaration;
   };
/* #line 7462 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMemberFunctionDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMemberFunctionDeclarationStorageClass  : public SgFunctionDeclarationStorageClass
   {

    protected: 


/* #line 7477 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_CtorInitializerList;
     unsigned long storageOf_associatedClassDeclaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMemberFunctionDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMemberFunctionDeclaration;
   };
/* #line 7498 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateInstantiationMemberFunctionDeclStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateInstantiationMemberFunctionDeclStorageClass  : public SgMemberFunctionDeclarationStorageClass
   {

    protected: 


/* #line 7513 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_templateName;
     unsigned long storageOf_templateDeclaration;
       EasyStorage < SgTemplateArgumentPtrList > storageOf_templateArguments;
      bool storageOf_nameResetFromMangledForm;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateInstantiationMemberFunctionDecl* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateInstantiationMemberFunctionDecl;
   };
/* #line 7536 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateInstantiationFunctionDeclStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateInstantiationFunctionDeclStorageClass  : public SgFunctionDeclarationStorageClass
   {

    protected: 


/* #line 7551 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_templateName;
     unsigned long storageOf_templateDeclaration;
       EasyStorage < SgTemplateArgumentPtrList > storageOf_templateArguments;
      bool storageOf_nameResetFromMangledForm;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateInstantiationFunctionDecl* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateInstantiationFunctionDecl;
   };
/* #line 7574 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgProgramHeaderStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgProgramHeaderStatementStorageClass  : public SgFunctionDeclarationStorageClass
   {

    protected: 


/* #line 7589 "../../../src/frontend/SageIII//StorageClasses.h" */

      bool storageOf_program_statement_explicit;
     unsigned long storageOf_end_numeric_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgProgramHeaderStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgProgramHeaderStatement;
   };
/* #line 7610 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgProcedureHeaderStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgProcedureHeaderStatementStorageClass  : public SgFunctionDeclarationStorageClass
   {

    protected: 


/* #line 7625 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgProcedureHeaderStatement::subprogram_kind_enum storageOf_subprogram_kind;
     unsigned long storageOf_end_numeric_label;
     unsigned long storageOf_result_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgProcedureHeaderStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgProcedureHeaderStatement;
   };
/* #line 7647 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEntryStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEntryStatementStorageClass  : public SgFunctionDeclarationStorageClass
   {

    protected: 


/* #line 7662 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_result_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEntryStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEntryStatement;
   };
/* #line 7682 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgContainsStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgContainsStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7697 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgContainsStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgContainsStatement;
   };
/* #line 7716 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgC_PreprocessorDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgC_PreprocessorDirectiveStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 7731 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_directiveString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgC_PreprocessorDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgC_PreprocessorDirectiveStatement;
   };
/* #line 7751 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIncludeDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIncludeDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 7766 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_headerFileBody;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIncludeDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIncludeDirectiveStatement;
   };
/* #line 7786 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDefineDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDefineDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 7801 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDefineDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDefineDirectiveStatement;
   };
/* #line 7820 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUndefDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUndefDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 7835 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUndefDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUndefDirectiveStatement;
   };
/* #line 7854 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIfdefDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIfdefDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 7869 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIfdefDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIfdefDirectiveStatement;
   };
/* #line 7888 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIfndefDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIfndefDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 7903 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIfndefDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIfndefDirectiveStatement;
   };
/* #line 7922 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIfDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIfDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 7937 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIfDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIfDirectiveStatement;
   };
/* #line 7956 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDeadIfDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDeadIfDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 7971 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDeadIfDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDeadIfDirectiveStatement;
   };
/* #line 7990 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgElseDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgElseDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8005 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgElseDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgElseDirectiveStatement;
   };
/* #line 8024 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgElseifDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgElseifDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8039 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgElseifDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgElseifDirectiveStatement;
   };
/* #line 8058 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEndifDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEndifDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8073 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEndifDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEndifDirectiveStatement;
   };
/* #line 8092 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLineDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLineDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8107 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLineDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLineDirectiveStatement;
   };
/* #line 8126 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgWarningDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgWarningDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8141 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgWarningDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgWarningDirectiveStatement;
   };
/* #line 8160 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgErrorDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgErrorDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8175 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgErrorDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgErrorDirectiveStatement;
   };
/* #line 8194 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEmptyDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEmptyDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8209 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEmptyDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEmptyDirectiveStatement;
   };
/* #line 8228 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIncludeNextDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIncludeNextDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8243 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIncludeNextDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIncludeNextDirectiveStatement;
   };
/* #line 8262 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIdentDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIdentDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8277 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIdentDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIdentDirectiveStatement;
   };
/* #line 8296 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLinemarkerDirectiveStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLinemarkerDirectiveStatementStorageClass  : public SgC_PreprocessorDirectiveStatementStorageClass
   {

    protected: 


/* #line 8311 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_linenumber;
       EasyStorage < std::string > storageOf_filename;
       EasyStorage < SgUnsignedCharList > storageOf_flaglist;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLinemarkerDirectiveStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLinemarkerDirectiveStatement;
   };
/* #line 8333 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpThreadprivateStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpThreadprivateStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 8348 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgVarRefExpPtrList > storageOf_variables;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpThreadprivateStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpThreadprivateStatement;
   };
/* #line 8368 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFortranIncludeLineStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFortranIncludeLineStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 8383 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_filename;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFortranIncludeLine* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFortranIncludeLine;
   };
/* #line 8403 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaImportStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaImportStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 8418 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_path;
      bool storageOf_containsWildCard;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaImportStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaImportStatement;
   };
/* #line 8439 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStmtDeclarationStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStmtDeclarationStatementStorageClass  : public SgDeclarationStatementStorageClass
   {

    protected: 


/* #line 8454 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_statement;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStmtDeclarationStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStmtDeclarationStatement;
   };
/* #line 8474 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgExprStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgExprStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8489 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgExprStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgExprStatement;
   };
/* #line 8509 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLabelStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLabelStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8524 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_label;
     unsigned long storageOf_scope;
     unsigned long storageOf_statement;
      bool storageOf_gnu_extension_unused;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLabelStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLabelStatement;
   };
/* #line 8547 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCaseOptionStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCaseOptionStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8562 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_key;
     unsigned long storageOf_body;
     unsigned long storageOf_key_range_end;
       EasyStorage < std::string > storageOf_case_construct_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCaseOptionStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCaseOptionStmt;
   };
/* #line 8585 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTryStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTryStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8600 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;
     unsigned long storageOf_catch_statement_seq_root;
     unsigned long storageOf_else_body;
     unsigned long storageOf_finally_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTryStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTryStmt;
   };
/* #line 8623 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDefaultOptionStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDefaultOptionStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8638 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;
       EasyStorage < std::string > storageOf_default_construct_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDefaultOptionStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDefaultOptionStmt;
   };
/* #line 8659 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBreakStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBreakStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8674 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_do_string_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBreakStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBreakStmt;
   };
/* #line 8694 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgContinueStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgContinueStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8709 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_do_string_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgContinueStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgContinueStmt;
   };
/* #line 8729 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgReturnStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgReturnStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8744 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgReturnStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgReturnStmt;
   };
/* #line 8764 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGotoStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGotoStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8779 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_label;
     unsigned long storageOf_label_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGotoStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGotoStatement;
   };
/* #line 8800 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSpawnStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSpawnStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8815 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_the_func;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSpawnStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSpawnStmt;
   };
/* #line 8835 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNullStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNullStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8850 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNullStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNullStatement;
   };
/* #line 8869 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVariantStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVariantStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8884 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVariantStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVariantStatement;
   };
/* #line 8903 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgForInitStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgForInitStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8918 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgStatementPtrList > storageOf_init_stmt;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgForInitStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgForInitStatement;
   };
/* #line 8938 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCatchStatementSeqStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCatchStatementSeqStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8953 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgStatementPtrList > storageOf_catch_statement_seq;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCatchStatementSeq* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCatchStatementSeq;
   };
/* #line 8973 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStopOrPauseStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStopOrPauseStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 8988 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgStopOrPauseStatement::stop_or_pause_enum storageOf_stop_or_pause;
     unsigned long storageOf_code;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStopOrPauseStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStopOrPauseStatement;
   };
/* #line 9009 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIOStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIOStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9024 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgIOStatement::io_statement_enum storageOf_io_statement;
     unsigned long storageOf_io_stmt_list;
     unsigned long storageOf_unit;
     unsigned long storageOf_iostat;
     unsigned long storageOf_err;
     unsigned long storageOf_iomsg;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIOStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIOStatement;
   };
/* #line 9049 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPrintStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPrintStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9064 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_format;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPrintStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPrintStatement;
   };
/* #line 9084 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgReadStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgReadStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9099 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_format;
     unsigned long storageOf_rec;
     unsigned long storageOf_end;
     unsigned long storageOf_namelist;
     unsigned long storageOf_advance;
     unsigned long storageOf_size;
     unsigned long storageOf_eor;
     unsigned long storageOf_asynchronous;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgReadStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgReadStatement;
   };
/* #line 9126 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgWriteStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgWriteStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9141 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_format;
     unsigned long storageOf_rec;
     unsigned long storageOf_namelist;
     unsigned long storageOf_advance;
     unsigned long storageOf_asynchronous;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgWriteStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgWriteStatement;
   };
/* #line 9165 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOpenStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOpenStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9180 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_file;
     unsigned long storageOf_status;
     unsigned long storageOf_access;
     unsigned long storageOf_form;
     unsigned long storageOf_recl;
     unsigned long storageOf_blank;
     unsigned long storageOf_position;
     unsigned long storageOf_action;
     unsigned long storageOf_delim;
     unsigned long storageOf_pad;
     unsigned long storageOf_round;
     unsigned long storageOf_sign;
     unsigned long storageOf_asynchronous;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOpenStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOpenStatement;
   };
/* #line 9212 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCloseStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCloseStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9227 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_status;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCloseStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCloseStatement;
   };
/* #line 9247 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgInquireStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgInquireStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9262 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_file;
     unsigned long storageOf_access;
     unsigned long storageOf_form;
     unsigned long storageOf_recl;
     unsigned long storageOf_blank;
     unsigned long storageOf_exist;
     unsigned long storageOf_opened;
     unsigned long storageOf_number;
     unsigned long storageOf_named;
     unsigned long storageOf_name;
     unsigned long storageOf_sequential;
     unsigned long storageOf_direct;
     unsigned long storageOf_formatted;
     unsigned long storageOf_unformatted;
     unsigned long storageOf_nextrec;
     unsigned long storageOf_position;
     unsigned long storageOf_action;
     unsigned long storageOf_read;
     unsigned long storageOf_write;
     unsigned long storageOf_readwrite;
     unsigned long storageOf_delim;
     unsigned long storageOf_pad;
     unsigned long storageOf_asynchronous;
     unsigned long storageOf_decimal;
     unsigned long storageOf_stream;
     unsigned long storageOf_size;
     unsigned long storageOf_pending;
     unsigned long storageOf_iolengthExp;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgInquireStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgInquireStatement;
   };
/* #line 9309 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFlushStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFlushStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9324 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFlushStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFlushStatement;
   };
/* #line 9343 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBackspaceStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBackspaceStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9358 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBackspaceStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBackspaceStatement;
   };
/* #line 9377 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgRewindStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgRewindStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9392 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgRewindStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgRewindStatement;
   };
/* #line 9411 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEndfileStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEndfileStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9426 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEndfileStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEndfileStatement;
   };
/* #line 9445 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgWaitStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgWaitStatementStorageClass  : public SgIOStatementStorageClass
   {

    protected: 


/* #line 9460 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgWaitStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgWaitStatement;
   };
/* #line 9479 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgWhereStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgWhereStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9494 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_condition;
     unsigned long storageOf_body;
     unsigned long storageOf_elsewhere;
     unsigned long storageOf_end_numeric_label;
       EasyStorage < std::string > storageOf_string_label;
      bool storageOf_has_end_statement;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgWhereStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgWhereStatement;
   };
/* #line 9519 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgElseWhereStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgElseWhereStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9534 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_condition;
     unsigned long storageOf_body;
     unsigned long storageOf_elsewhere;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgElseWhereStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgElseWhereStatement;
   };
/* #line 9556 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNullifyStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNullifyStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9571 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_pointer_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNullifyStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNullifyStatement;
   };
/* #line 9591 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgArithmeticIfStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgArithmeticIfStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9606 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_conditional;
     unsigned long storageOf_less_label;
     unsigned long storageOf_equal_label;
     unsigned long storageOf_greater_label;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgArithmeticIfStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgArithmeticIfStatement;
   };
/* #line 9629 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAssignStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAssignStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9644 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_label;
     unsigned long storageOf_value;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAssignStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAssignStatement;
   };
/* #line 9665 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgComputedGotoStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgComputedGotoStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9680 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_labelList;
     unsigned long storageOf_label_index;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgComputedGotoStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgComputedGotoStatement;
   };
/* #line 9701 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAssignedGotoStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAssignedGotoStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9716 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_targets;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAssignedGotoStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAssignedGotoStatement;
   };
/* #line 9736 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAllocateStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAllocateStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9751 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expr_list;
     unsigned long storageOf_stat_expression;
     unsigned long storageOf_errmsg_expression;
     unsigned long storageOf_source_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAllocateStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAllocateStatement;
   };
/* #line 9774 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDeallocateStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDeallocateStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9789 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expr_list;
     unsigned long storageOf_stat_expression;
     unsigned long storageOf_errmsg_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDeallocateStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDeallocateStatement;
   };
/* #line 9811 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcNotifyStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcNotifyStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9826 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_notify_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcNotifyStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcNotifyStatement;
   };
/* #line 9846 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcWaitStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcWaitStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9861 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_wait_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcWaitStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcWaitStatement;
   };
/* #line 9881 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcBarrierStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcBarrierStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9896 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_barrier_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcBarrierStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcBarrierStatement;
   };
/* #line 9916 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcFenceStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcFenceStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9931 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcFenceStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcFenceStatement;
   };
/* #line 9950 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpBarrierStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpBarrierStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9965 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpBarrierStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpBarrierStatement;
   };
/* #line 9984 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpTaskwaitStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpTaskwaitStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 9999 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpTaskwaitStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpTaskwaitStatement;
   };
/* #line 10018 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpFlushStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpFlushStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10033 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgVarRefExpPtrList > storageOf_variables;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpFlushStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpFlushStatement;
   };
/* #line 10053 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpBodyStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpBodyStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10068 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpBodyStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpBodyStatement;
   };
/* #line 10088 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpAtomicStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpAtomicStatementStorageClass  : public SgOmpBodyStatementStorageClass
   {

    protected: 


/* #line 10103 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpAtomicStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpAtomicStatement;
   };
/* #line 10122 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpMasterStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpMasterStatementStorageClass  : public SgOmpBodyStatementStorageClass
   {

    protected: 


/* #line 10137 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpMasterStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpMasterStatement;
   };
/* #line 10156 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpOrderedStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpOrderedStatementStorageClass  : public SgOmpBodyStatementStorageClass
   {

    protected: 


/* #line 10171 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpOrderedStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpOrderedStatement;
   };
/* #line 10190 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpCriticalStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpCriticalStatementStorageClass  : public SgOmpBodyStatementStorageClass
   {

    protected: 


/* #line 10205 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpCriticalStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpCriticalStatement;
   };
/* #line 10225 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpSectionStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpSectionStatementStorageClass  : public SgOmpBodyStatementStorageClass
   {

    protected: 


/* #line 10240 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpSectionStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpSectionStatement;
   };
/* #line 10259 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpWorkshareStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpWorkshareStatementStorageClass  : public SgOmpBodyStatementStorageClass
   {

    protected: 


/* #line 10274 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpWorkshareStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpWorkshareStatement;
   };
/* #line 10293 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpClauseBodyStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpClauseBodyStatementStorageClass  : public SgOmpBodyStatementStorageClass
   {

    protected: 


/* #line 10308 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgOmpClausePtrList > storageOf_clauses;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpClauseBodyStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpClauseBodyStatement;
   };
/* #line 10328 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpParallelStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpParallelStatementStorageClass  : public SgOmpClauseBodyStatementStorageClass
   {

    protected: 


/* #line 10343 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpParallelStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpParallelStatement;
   };
/* #line 10362 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpSingleStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpSingleStatementStorageClass  : public SgOmpClauseBodyStatementStorageClass
   {

    protected: 


/* #line 10377 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpSingleStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpSingleStatement;
   };
/* #line 10396 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpTaskStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpTaskStatementStorageClass  : public SgOmpClauseBodyStatementStorageClass
   {

    protected: 


/* #line 10411 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpTaskStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpTaskStatement;
   };
/* #line 10430 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpForStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpForStatementStorageClass  : public SgOmpClauseBodyStatementStorageClass
   {

    protected: 


/* #line 10445 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpForStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpForStatement;
   };
/* #line 10464 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpDoStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpDoStatementStorageClass  : public SgOmpClauseBodyStatementStorageClass
   {

    protected: 


/* #line 10479 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpDoStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpDoStatement;
   };
/* #line 10498 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOmpSectionsStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOmpSectionsStatementStorageClass  : public SgOmpClauseBodyStatementStorageClass
   {

    protected: 


/* #line 10513 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOmpSectionsStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOmpSectionsStatement;
   };
/* #line 10532 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSequenceStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSequenceStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10547 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSequenceStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSequenceStatement;
   };
/* #line 10566 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgWithStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgWithStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10581 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;
     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgWithStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgWithStatement;
   };
/* #line 10602 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPythonPrintStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPythonPrintStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10617 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_destination;
     unsigned long storageOf_values;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPythonPrintStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPythonPrintStmt;
   };
/* #line 10638 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPassStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPassStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10653 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPassStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPassStatement;
   };
/* #line 10672 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAssertStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAssertStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10687 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_test;
     unsigned long storageOf_exception_argument;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAssertStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAssertStmt;
   };
/* #line 10708 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgExecStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgExecStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10723 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_executable;
     unsigned long storageOf_globals;
     unsigned long storageOf_locals;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgExecStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgExecStatement;
   };
/* #line 10745 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPythonGlobalStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPythonGlobalStmtStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10760 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgInitializedNamePtrList > storageOf_names;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPythonGlobalStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPythonGlobalStmt;
   };
/* #line 10780 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaThrowStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaThrowStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10795 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_throwOp;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaThrowStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaThrowStatement;
   };
/* #line 10815 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaSynchronizedStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaSynchronizedStatementStorageClass  : public SgStatementStorageClass
   {

    protected: 


/* #line 10830 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;
     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaSynchronizedStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaSynchronizedStatement;
   };
/* #line 10851 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgExpressionStorageClass  : public SgLocatedNodeStorageClass
   {

    protected: 


/* #line 10866 "../../../src/frontend/SageIII//StorageClasses.h" */

      bool storageOf_need_paren;
      bool storageOf_lvalue;
      bool storageOf_global_qualified_name;
     unsigned long storageOf_operatorPosition;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgExpression;
   };
/* #line 10889 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnaryOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnaryOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 10904 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand_i;
     unsigned long storageOf_expression_type;
      SgUnaryOp::Sgop_mode storageOf_mode;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnaryOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnaryOp;
   };
/* #line 10926 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgExpressionRootStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgExpressionRootStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 10941 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgExpressionRoot* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgExpressionRoot;
   };
/* #line 10960 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMinusOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMinusOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 10975 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMinusOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMinusOp;
   };
/* #line 10994 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnaryAddOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnaryAddOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11009 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnaryAddOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnaryAddOp;
   };
/* #line 11028 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNotOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNotOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11043 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNotOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNotOp;
   };
/* #line 11062 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPointerDerefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPointerDerefExpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11077 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPointerDerefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPointerDerefExp;
   };
/* #line 11096 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAddressOfOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAddressOfOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11111 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAddressOfOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAddressOfOp;
   };
/* #line 11130 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMinusMinusOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMinusMinusOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11145 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMinusMinusOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMinusMinusOp;
   };
/* #line 11164 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPlusPlusOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPlusPlusOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11179 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPlusPlusOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPlusPlusOp;
   };
/* #line 11198 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBitComplementOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBitComplementOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11213 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBitComplementOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBitComplementOp;
   };
/* #line 11232 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCastExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCastExpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11247 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgCastExp::cast_type_enum storageOf_cast_type;
     unsigned long storageOf_originalExpressionTree;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCastExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCastExp;
   };
/* #line 11271 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgThrowOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgThrowOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11286 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgThrowOp::e_throw_kind storageOf_throwKind;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgThrowOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgThrowOp;
   };
/* #line 11306 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgRealPartOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgRealPartOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11321 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgRealPartOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgRealPartOp;
   };
/* #line 11340 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgImagPartOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgImagPartOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11355 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgImagPartOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgImagPartOp;
   };
/* #line 11374 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgConjugateOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgConjugateOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11389 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgConjugateOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgConjugateOp;
   };
/* #line 11408 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUserDefinedUnaryOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUserDefinedUnaryOpStorageClass  : public SgUnaryOpStorageClass
   {

    protected: 


/* #line 11423 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_operator_name;
     unsigned long storageOf_symbol;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUserDefinedUnaryOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUserDefinedUnaryOp;
   };
/* #line 11444 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBinaryOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBinaryOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 11459 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_lhs_operand_i;
     unsigned long storageOf_rhs_operand_i;
     unsigned long storageOf_expression_type;
     unsigned long storageOf_originalExpressionTree;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBinaryOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBinaryOp;
   };
/* #line 11482 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgArrowExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgArrowExpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11497 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgArrowExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgArrowExp;
   };
/* #line 11516 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDotExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDotExpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11531 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDotExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDotExp;
   };
/* #line 11550 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDotStarOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDotStarOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11565 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDotStarOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDotStarOp;
   };
/* #line 11584 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgArrowStarOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgArrowStarOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11599 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgArrowStarOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgArrowStarOp;
   };
/* #line 11618 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEqualityOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEqualityOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11633 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEqualityOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEqualityOp;
   };
/* #line 11652 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLessThanOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLessThanOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11667 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLessThanOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLessThanOp;
   };
/* #line 11686 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGreaterThanOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGreaterThanOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11701 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGreaterThanOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGreaterThanOp;
   };
/* #line 11720 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNotEqualOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNotEqualOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11735 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNotEqualOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNotEqualOp;
   };
/* #line 11754 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLessOrEqualOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLessOrEqualOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11769 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLessOrEqualOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLessOrEqualOp;
   };
/* #line 11788 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgGreaterOrEqualOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgGreaterOrEqualOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11803 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgGreaterOrEqualOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgGreaterOrEqualOp;
   };
/* #line 11822 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAddOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAddOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11837 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAddOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAddOp;
   };
/* #line 11856 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSubtractOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSubtractOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11871 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSubtractOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSubtractOp;
   };
/* #line 11890 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMultiplyOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMultiplyOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11905 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMultiplyOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMultiplyOp;
   };
/* #line 11924 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDivideOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDivideOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11939 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDivideOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDivideOp;
   };
/* #line 11958 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIntegerDivideOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIntegerDivideOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 11973 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIntegerDivideOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIntegerDivideOp;
   };
/* #line 11992 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgModOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgModOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12007 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgModOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgModOp;
   };
/* #line 12026 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAndOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAndOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12041 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAndOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAndOp;
   };
/* #line 12060 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgOrOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgOrOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12075 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgOrOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgOrOp;
   };
/* #line 12094 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBitXorOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBitXorOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12109 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBitXorOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBitXorOp;
   };
/* #line 12128 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBitAndOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBitAndOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12143 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBitAndOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBitAndOp;
   };
/* #line 12162 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBitOrOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBitOrOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12177 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBitOrOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBitOrOp;
   };
/* #line 12196 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCommaOpExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCommaOpExpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12211 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCommaOpExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCommaOpExp;
   };
/* #line 12230 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLshiftOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLshiftOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12245 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLshiftOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLshiftOp;
   };
/* #line 12264 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgRshiftOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgRshiftOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12279 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgRshiftOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgRshiftOp;
   };
/* #line 12298 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPntrArrRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPntrArrRefExpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12313 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPntrArrRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPntrArrRefExp;
   };
/* #line 12332 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgScopeOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgScopeOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12347 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgScopeOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgScopeOp;
   };
/* #line 12366 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAssignOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12381 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAssignOp;
   };
/* #line 12400 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgExponentiationOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgExponentiationOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12415 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgExponentiationOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgExponentiationOp;
   };
/* #line 12434 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaUnsignedRshiftOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaUnsignedRshiftOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12449 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaUnsignedRshiftOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaUnsignedRshiftOp;
   };
/* #line 12468 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgConcatenationOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgConcatenationOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12483 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgConcatenationOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgConcatenationOp;
   };
/* #line 12502 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPointerAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPointerAssignOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12517 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPointerAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPointerAssignOp;
   };
/* #line 12536 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUserDefinedBinaryOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUserDefinedBinaryOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12551 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_operator_name;
     unsigned long storageOf_symbol;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUserDefinedBinaryOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUserDefinedBinaryOp;
   };
/* #line 12572 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCompoundAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCompoundAssignOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 12587 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCompoundAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCompoundAssignOp;
   };
/* #line 12606 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPlusAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPlusAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12621 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPlusAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPlusAssignOp;
   };
/* #line 12640 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMinusAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMinusAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12655 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMinusAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMinusAssignOp;
   };
/* #line 12674 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAndAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAndAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12689 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAndAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAndAssignOp;
   };
/* #line 12708 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIorAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIorAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12723 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIorAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIorAssignOp;
   };
/* #line 12742 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMultAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMultAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12757 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMultAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMultAssignOp;
   };
/* #line 12776 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDivAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDivAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12791 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDivAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDivAssignOp;
   };
/* #line 12810 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgModAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgModAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12825 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgModAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgModAssignOp;
   };
/* #line 12844 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgXorAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgXorAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12859 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgXorAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgXorAssignOp;
   };
/* #line 12878 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLshiftAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLshiftAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12893 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLshiftAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLshiftAssignOp;
   };
/* #line 12912 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgRshiftAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgRshiftAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12927 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgRshiftAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgRshiftAssignOp;
   };
/* #line 12946 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaUnsignedRshiftAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaUnsignedRshiftAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12961 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaUnsignedRshiftAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaUnsignedRshiftAssignOp;
   };
/* #line 12980 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIntegerDivideAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIntegerDivideAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 12995 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIntegerDivideAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIntegerDivideAssignOp;
   };
/* #line 13014 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgExponentiationAssignOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgExponentiationAssignOpStorageClass  : public SgCompoundAssignOpStorageClass
   {

    protected: 


/* #line 13029 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgExponentiationAssignOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgExponentiationAssignOp;
   };
/* #line 13048 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMembershipOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMembershipOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 13063 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMembershipOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMembershipOp;
   };
/* #line 13082 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNonMembershipOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNonMembershipOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 13097 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNonMembershipOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNonMembershipOp;
   };
/* #line 13116 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIsOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIsOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 13131 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIsOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIsOp;
   };
/* #line 13150 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIsNotOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIsNotOpStorageClass  : public SgBinaryOpStorageClass
   {

    protected: 


/* #line 13165 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIsNotOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIsNotOp;
   };
/* #line 13184 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgExprListExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgExprListExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 13199 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgExpressionPtrList > storageOf_expressions;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgExprListExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgExprListExp;
   };
/* #line 13219 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgListExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgListExpStorageClass  : public SgExprListExpStorageClass
   {

    protected: 


/* #line 13234 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgListExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgListExp;
   };
/* #line 13253 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTupleExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTupleExpStorageClass  : public SgExprListExpStorageClass
   {

    protected: 


/* #line 13268 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTupleExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTupleExp;
   };
/* #line 13287 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVarRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVarRefExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 13302 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_symbol;
     unsigned long storageOf_originalExpressionTree;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVarRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVarRefExp;
   };
/* #line 13326 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClassNameRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClassNameRefExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 13341 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_symbol;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClassNameRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClassNameRefExp;
   };
/* #line 13361 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionRefExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 13376 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_symbol_i;
     unsigned long storageOf_function_type;
     unsigned long storageOf_originalExpressionTree;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionRefExp;
   };
/* #line 13401 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMemberFunctionRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMemberFunctionRefExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 13416 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_symbol_i;
      int storageOf_virtual_call;
     unsigned long storageOf_function_type;
      int storageOf_need_qualifier;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMemberFunctionRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMemberFunctionRefExp;
   };
/* #line 13442 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgValueExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgValueExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 13457 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_originalExpressionTree;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgValueExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgValueExp;
   };
/* #line 13477 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgBoolValExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgBoolValExpStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13492 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_value;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgBoolValExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgBoolValExp;
   };
/* #line 13512 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStringValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStringValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13527 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_value;
      bool storageOf_wcharString;
      bool storageOf_usesSingleQuotes;
      bool storageOf_usesDoubleQuotes;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStringVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStringVal;
   };
/* #line 13550 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgShortValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgShortValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13565 "../../../src/frontend/SageIII//StorageClasses.h" */

      short storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgShortVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgShortVal;
   };
/* #line 13586 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCharValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCharValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13601 "../../../src/frontend/SageIII//StorageClasses.h" */

      char storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCharVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCharVal;
   };
/* #line 13622 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnsignedCharValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnsignedCharValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13637 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned char storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnsignedCharVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnsignedCharVal;
   };
/* #line 13658 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgWcharValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgWcharValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13673 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned long storageOf_valueUL;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgWcharVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgWcharVal;
   };
/* #line 13694 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnsignedShortValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnsignedShortValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13709 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned short storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnsignedShortVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnsignedShortVal;
   };
/* #line 13730 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIntValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIntValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13745 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIntVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIntVal;
   };
/* #line 13766 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEnumValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEnumValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13781 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_value;
     unsigned long storageOf_declaration;
      SgNameStorageClass storageOf_name;
      bool storageOf_requiresNameQualification;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEnumVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEnumVal;
   };
/* #line 13807 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnsignedIntValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnsignedIntValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13822 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned int storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnsignedIntVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnsignedIntVal;
   };
/* #line 13843 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLongIntValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLongIntValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13858 "../../../src/frontend/SageIII//StorageClasses.h" */

      long int storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLongIntVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLongIntVal;
   };
/* #line 13879 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLongLongIntValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLongLongIntValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13894 "../../../src/frontend/SageIII//StorageClasses.h" */

      long long int storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLongLongIntVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLongLongIntVal;
   };
/* #line 13915 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnsignedLongLongIntValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnsignedLongLongIntValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13930 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned long long int storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnsignedLongLongIntVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnsignedLongLongIntVal;
   };
/* #line 13951 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnsignedLongValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnsignedLongValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 13966 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned long storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnsignedLongVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnsignedLongVal;
   };
/* #line 13987 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFloatValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFloatValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 14002 "../../../src/frontend/SageIII//StorageClasses.h" */

      float storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFloatVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFloatVal;
   };
/* #line 14023 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDoubleValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDoubleValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 14038 "../../../src/frontend/SageIII//StorageClasses.h" */

      double storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDoubleVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDoubleVal;
   };
/* #line 14059 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLongDoubleValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLongDoubleValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 14074 "../../../src/frontend/SageIII//StorageClasses.h" */

      long double storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLongDoubleVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLongDoubleVal;
   };
/* #line 14095 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgComplexValStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgComplexValStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 14110 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_real_value;
     unsigned long storageOf_imaginary_value;
     unsigned long storageOf_precisionType;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgComplexVal* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgComplexVal;
   };
/* #line 14133 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcThreadsStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcThreadsStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 14148 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcThreads* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcThreads;
   };
/* #line 14169 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcMythreadStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcMythreadStorageClass  : public SgValueExpStorageClass
   {

    protected: 


/* #line 14184 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_value;
       EasyStorage < std::string > storageOf_valueString;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcMythread* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcMythread;
   };
/* #line 14205 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCallExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCallExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14220 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_function;
     unsigned long storageOf_args;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCallExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCallExpression;
   };
/* #line 14242 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionCallExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionCallExpStorageClass  : public SgCallExpressionStorageClass
   {

    protected: 


/* #line 14257 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionCallExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionCallExp;
   };
/* #line 14276 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSizeOfOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSizeOfOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14291 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand_expr;
     unsigned long storageOf_operand_type;
     unsigned long storageOf_expression_type;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSizeOfOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSizeOfOp;
   };
/* #line 14316 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcLocalsizeofExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcLocalsizeofExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14331 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;
     unsigned long storageOf_operand_type;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcLocalsizeofExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcLocalsizeofExpression;
   };
/* #line 14353 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcBlocksizeofExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcBlocksizeofExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14368 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;
     unsigned long storageOf_operand_type;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcBlocksizeofExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcBlocksizeofExpression;
   };
/* #line 14390 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUpcElemsizeofExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUpcElemsizeofExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14405 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;
     unsigned long storageOf_operand_type;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUpcElemsizeofExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUpcElemsizeofExpression;
   };
/* #line 14427 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaInstanceOfOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaInstanceOfOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14442 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand_expr;
     unsigned long storageOf_operand_type;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaInstanceOfOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaInstanceOfOp;
   };
/* #line 14464 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSuperExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSuperExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14479 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_class_symbol;
      int storageOf_pobj_super;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSuperExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSuperExp;
   };
/* #line 14500 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypeIdOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypeIdOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14515 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand_expr;
     unsigned long storageOf_operand_type;
     unsigned long storageOf_expression_type;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypeIdOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypeIdOp;
   };
/* #line 14540 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgConditionalExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgConditionalExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14555 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_conditional_exp;
     unsigned long storageOf_true_exp;
     unsigned long storageOf_false_exp;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgConditionalExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgConditionalExp;
   };
/* #line 14578 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNewExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNewExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14593 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_specified_type;
     unsigned long storageOf_placement_args;
     unsigned long storageOf_constructor_args;
     unsigned long storageOf_builtin_args;
      short storageOf_need_global_specifier;
     unsigned long storageOf_newOperatorDeclaration;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNewExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNewExp;
   };
/* #line 14621 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDeleteExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDeleteExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14636 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_variable;
      short storageOf_is_array;
      short storageOf_need_global_specifier;
     unsigned long storageOf_deleteOperatorDeclaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDeleteExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDeleteExp;
   };
/* #line 14659 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgThisExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgThisExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14674 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_class_symbol;
      int storageOf_pobj_this;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgThisExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgThisExp;
   };
/* #line 14695 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgRefExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14710 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_type_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgRefExp;
   };
/* #line 14730 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgInitializerStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgInitializerStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14745 "../../../src/frontend/SageIII//StorageClasses.h" */

      bool storageOf_is_explicit_cast;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgInitializer* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgInitializer;
   };
/* #line 14765 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAggregateInitializerStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAggregateInitializerStorageClass  : public SgInitializerStorageClass
   {

    protected: 


/* #line 14780 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_initializers;
     unsigned long storageOf_expression_type;
      bool storageOf_need_explicit_braces;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAggregateInitializer* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAggregateInitializer;
   };
/* #line 14802 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCompoundInitializerStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCompoundInitializerStorageClass  : public SgInitializerStorageClass
   {

    protected: 


/* #line 14817 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_initializers;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCompoundInitializer* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCompoundInitializer;
   };
/* #line 14838 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgConstructorInitializerStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgConstructorInitializerStorageClass  : public SgInitializerStorageClass
   {

    protected: 


/* #line 14853 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;
     unsigned long storageOf_args;
     unsigned long storageOf_expression_type;
      bool storageOf_need_name;
      bool storageOf_need_qualifier;
      bool storageOf_need_parenthesis_after_name;
      bool storageOf_associated_class_unknown;
      int storageOf_name_qualification_length;
      bool storageOf_type_elaboration_required;
      bool storageOf_global_qualification_required;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgConstructorInitializer* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgConstructorInitializer;
   };
/* #line 14882 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAssignInitializerStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAssignInitializerStorageClass  : public SgInitializerStorageClass
   {

    protected: 


/* #line 14897 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand_i;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAssignInitializer* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAssignInitializer;
   };
/* #line 14918 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDesignatedInitializerStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDesignatedInitializerStorageClass  : public SgInitializerStorageClass
   {

    protected: 


/* #line 14933 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_designatorList;
     unsigned long storageOf_memberInit;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDesignatedInitializer* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDesignatedInitializer;
   };
/* #line 14954 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVarArgStartOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVarArgStartOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 14969 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_lhs_operand;
     unsigned long storageOf_rhs_operand;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVarArgStartOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVarArgStartOp;
   };
/* #line 14991 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVarArgOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVarArgOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15006 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand_expr;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVarArgOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVarArgOp;
   };
/* #line 15027 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVarArgEndOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVarArgEndOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15042 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand_expr;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVarArgEndOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVarArgEndOp;
   };
/* #line 15063 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVarArgCopyOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVarArgCopyOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15078 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_lhs_operand;
     unsigned long storageOf_rhs_operand;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVarArgCopyOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVarArgCopyOp;
   };
/* #line 15100 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVarArgStartOneOperandOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVarArgStartOneOperandOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15115 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand_expr;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVarArgStartOneOperandOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVarArgStartOneOperandOp;
   };
/* #line 15136 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNullExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNullExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15151 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNullExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNullExpression;
   };
/* #line 15170 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVariantExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVariantExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15185 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVariantExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVariantExpression;
   };
/* #line 15204 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSubscriptExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSubscriptExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15219 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_lowerBound;
     unsigned long storageOf_upperBound;
     unsigned long storageOf_stride;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSubscriptExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSubscriptExpression;
   };
/* #line 15241 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgColonShapeExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgColonShapeExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15256 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgColonShapeExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgColonShapeExp;
   };
/* #line 15275 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsteriskShapeExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsteriskShapeExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15290 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsteriskShapeExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsteriskShapeExp;
   };
/* #line 15309 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgImpliedDoStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgImpliedDoStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15324 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_do_var_initialization;
     unsigned long storageOf_last_val;
     unsigned long storageOf_increment;
     unsigned long storageOf_object_list;
     unsigned long storageOf_implied_do_scope;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgImpliedDo* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgImpliedDo;
   };
/* #line 15348 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIOItemExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIOItemExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15363 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
     unsigned long storageOf_io_item;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIOItemExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIOItemExpression;
   };
/* #line 15384 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStatementExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStatementExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15399 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_statement;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStatementExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStatementExpression;
   };
/* #line 15419 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15434 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgAsmOp::asm_operand_constraint_enum storageOf_constraint;
      SgAsmOp::asm_operand_modifier_enum storageOf_modifiers;
     unsigned long storageOf_expression;
      bool storageOf_recordRawAsmOperandDescriptions;
      bool storageOf_isOutputOperand;
       EasyStorage < std::string > storageOf_constraintString;
       EasyStorage < std::string > storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmOp;
   };
/* #line 15460 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLabelRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLabelRefExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15475 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_symbol;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLabelRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLabelRefExp;
   };
/* #line 15495 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgActualArgumentExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgActualArgumentExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15510 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_argument_name;
     unsigned long storageOf_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgActualArgumentExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgActualArgumentExpression;
   };
/* #line 15531 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgUnknownArrayOrFunctionReferenceStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgUnknownArrayOrFunctionReferenceStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15546 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_name;
     unsigned long storageOf_named_reference;
     unsigned long storageOf_expression_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgUnknownArrayOrFunctionReference* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgUnknownArrayOrFunctionReference;
   };
/* #line 15568 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgPseudoDestructorRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgPseudoDestructorRefExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15583 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_object_type;
     unsigned long storageOf_expression_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgPseudoDestructorRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgPseudoDestructorRefExp;
   };
/* #line 15604 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCAFCoExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCAFCoExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15619 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_teamId;
     unsigned long storageOf_teamRank;
     unsigned long storageOf_referData;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCAFCoExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCAFCoExpression;
   };
/* #line 15641 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCudaKernelCallExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCudaKernelCallExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15656 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_function;
     unsigned long storageOf_args;
     unsigned long storageOf_exec_config;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCudaKernelCallExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCudaKernelCallExp;
   };
/* #line 15678 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCudaKernelExecConfigStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCudaKernelExecConfigStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15693 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_grid;
     unsigned long storageOf_blocks;
     unsigned long storageOf_shared;
     unsigned long storageOf_stream;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCudaKernelExecConfig* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCudaKernelExecConfig;
   };
/* #line 15716 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLambdaRefExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLambdaRefExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15731 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_functionDeclaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLambdaRefExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLambdaRefExp;
   };
/* #line 15751 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDictionaryExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDictionaryExpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15766 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgKeyDatumPairPtrList > storageOf_key_datum_pairs;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDictionaryExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDictionaryExp;
   };
/* #line 15786 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgKeyDatumPairStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgKeyDatumPairStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15801 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_key;
     unsigned long storageOf_datum;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgKeyDatumPair* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgKeyDatumPair;
   };
/* #line 15822 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgComprehensionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgComprehensionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15837 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_target;
     unsigned long storageOf_iter;
     unsigned long storageOf_filters;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgComprehension* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgComprehension;
   };
/* #line 15859 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgListComprehensionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgListComprehensionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15874 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_element;
     unsigned long storageOf_generators;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgListComprehension* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgListComprehension;
   };
/* #line 15895 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSetComprehensionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSetComprehensionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15910 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_element;
     unsigned long storageOf_generators;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSetComprehension* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSetComprehension;
   };
/* #line 15931 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDictionaryComprehensionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDictionaryComprehensionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15946 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_element;
     unsigned long storageOf_generators;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDictionaryComprehension* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDictionaryComprehension;
   };
/* #line 15967 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNaryOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNaryOpStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 15982 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgExpressionPtrList > storageOf_operands;
       EasyStorage < VariantTList > storageOf_operators;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNaryOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNaryOp;
   };
/* #line 16003 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNaryBooleanOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNaryBooleanOpStorageClass  : public SgNaryOpStorageClass
   {

    protected: 


/* #line 16018 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNaryBooleanOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNaryBooleanOp;
   };
/* #line 16037 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNaryComparisonOpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNaryComparisonOpStorageClass  : public SgNaryOpStorageClass
   {

    protected: 


/* #line 16052 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNaryComparisonOp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNaryComparisonOp;
   };
/* #line 16071 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgStringConversionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgStringConversionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 16086 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_expression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgStringConversion* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgStringConversion;
   };
/* #line 16106 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgYieldExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgYieldExpressionStorageClass  : public SgExpressionStorageClass
   {

    protected: 


/* #line 16121 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_value;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgYieldExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgYieldExpression;
   };
/* #line 16141 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTokenStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTokenStorageClass  : public SgLocatedNodeStorageClass
   {

    protected: 


/* #line 16156 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_lexeme_string;
      unsigned int storageOf_classification_code;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgToken* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgToken;
   };
/* #line 16177 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgSymbolStorageClass  : public SgNodeStorageClass
   {

    protected: 


/* #line 16192 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgSymbol;
   };
/* #line 16212 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgVariableSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgVariableSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16227 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgVariableSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgVariableSymbol;
   };
/* #line 16247 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16262 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionSymbol;
   };
/* #line 16282 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgMemberFunctionSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgMemberFunctionSymbolStorageClass  : public SgFunctionSymbolStorageClass
   {

    protected: 


/* #line 16297 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgMemberFunctionSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgMemberFunctionSymbol;
   };
/* #line 16316 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgRenameSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgRenameSymbolStorageClass  : public SgFunctionSymbolStorageClass
   {

    protected: 


/* #line 16331 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_original_symbol;
      SgNameStorageClass storageOf_new_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgRenameSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgRenameSymbol;
   };
/* #line 16352 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgFunctionTypeSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgFunctionTypeSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16367 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
     unsigned long storageOf_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgFunctionTypeSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgFunctionTypeSymbol;
   };
/* #line 16388 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgClassSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgClassSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16403 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgClassSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgClassSymbol;
   };
/* #line 16423 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTemplateSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTemplateSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16438 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTemplateSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTemplateSymbol;
   };
/* #line 16458 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEnumSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEnumSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16473 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEnumSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEnumSymbol;
   };
/* #line 16493 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgEnumFieldSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgEnumFieldSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16508 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgEnumFieldSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgEnumFieldSymbol;
   };
/* #line 16528 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgTypedefSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgTypedefSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16543 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgTypedefSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgTypedefSymbol;
   };
/* #line 16563 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgLabelSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgLabelSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16578 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;
     unsigned long storageOf_fortran_statement;
     unsigned long storageOf_fortran_alternate_return_parameter;
      int storageOf_numeric_label_value;
      SgLabelSymbol::label_type_enum storageOf_label_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgLabelSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgLabelSymbol;
   };
/* #line 16602 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgDefaultSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgDefaultSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16617 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgDefaultSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgDefaultSymbol;
   };
/* #line 16637 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgNamespaceSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgNamespaceSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16652 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_name;
     unsigned long storageOf_declaration;
     unsigned long storageOf_aliasDeclaration;
      bool storageOf_isAlias;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgNamespaceSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgNamespaceSymbol;
   };
/* #line 16675 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgIntrinsicSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgIntrinsicSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16690 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgIntrinsicSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgIntrinsicSymbol;
   };
/* #line 16710 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgModuleSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgModuleSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16725 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgModuleSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgModuleSymbol;
   };
/* #line 16745 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgInterfaceSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgInterfaceSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16760 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgInterfaceSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgInterfaceSymbol;
   };
/* #line 16780 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgCommonSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgCommonSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16795 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgCommonSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgCommonSymbol;
   };
/* #line 16815 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAliasSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAliasSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16830 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_alias;
      bool storageOf_isRenamed;
      SgNameStorageClass storageOf_new_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAliasSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAliasSymbol;
   };
/* #line 16852 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryAddressSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryAddressSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16867 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_address_name;
     unsigned long storageOf_address;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryAddressSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryAddressSymbol;
   };
/* #line 16888 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryDataSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryDataSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16903 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgNameStorageClass storageOf_variable_name;
     unsigned long storageOf_address;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryDataSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryDataSymbol;
   };
/* #line 16924 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgJavaLabelSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgJavaLabelSymbolStorageClass  : public SgSymbolStorageClass
   {

    protected: 


/* #line 16939 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_declaration;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgJavaLabelSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgJavaLabelSymbol;
   };
/* #line 16959 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNodeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNodeStorageClass  : public SgNodeStorageClass
   {

    protected: 


/* #line 16974 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < AttachedPreprocessingInfoType* > storageOf_attachedPreprocessingInfoPtr;
       EasyStorage < AstAttributeMechanism* > storageOf_asmAttributeMechanism;
       EasyStorage < AstAttributeMechanism* > storageOf_attributeMechanism;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNode* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNode;
   };
/* #line 16996 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmStatementStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmStatementStorageClass  : public SgAsmNodeStorageClass
   {

    protected: 


/* #line 17011 "../../../src/frontend/SageIII//StorageClasses.h" */

      rose_addr_t storageOf_address;
       EasyStorage < std::string > storageOf_comment;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmStatement* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmStatement;
   };
/* #line 17032 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmFunctionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmFunctionStorageClass  : public SgAsmStatementStorageClass
   {

    protected: 


/* #line 17047 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_name;
      unsigned storageOf_reason;
      SgAsmFunction::function_kind_enum storageOf_function_kind;
      SgAsmFunction::MayReturn storageOf_may_return;
       EasyStorage < std::string > storageOf_name_md5;
       EasyStorage < SgAsmStatementPtrList > storageOf_statementList;
       EasyStorage < SgAsmStatementPtrList > storageOf_dest;
      rose_addr_t storageOf_entry_va;
     unsigned long storageOf_symbol_table;
      size_t storageOf_cached_vertex;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmFunction* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmFunction;
   };
/* #line 17076 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBlockStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBlockStorageClass  : public SgAsmStatementStorageClass
   {

    protected: 


/* #line 17091 "../../../src/frontend/SageIII//StorageClasses.h" */

      rose_addr_t storageOf_next_block_true_address;
      rose_addr_t storageOf_next_block_false_address;
      rose_addr_t storageOf_id;
      unsigned storageOf_reason;
       EasyStorage < SgAsmStatementPtrList > storageOf_statementList;
       EasyStorage < SgAsmIntegerValuePtrList > storageOf_successors;
      bool storageOf_successors_complete;
     unsigned long storageOf_immediate_dominator;
      size_t storageOf_cached_vertex;
      double storageOf_code_likelihood;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBlock* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBlock;
   };
/* #line 17120 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmInstructionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmInstructionStorageClass  : public SgAsmStatementStorageClass
   {

    protected: 


/* #line 17135 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_mnemonic;
       EasyStorage < SgUnsignedCharList > storageOf_raw_bytes;
     unsigned long storageOf_operandList;
       EasyStorage < SgAsmStatementPtrList > storageOf_sources;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmInstruction* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmInstruction;
   };
/* #line 17158 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmx86InstructionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmx86InstructionStorageClass  : public SgAsmInstructionStorageClass
   {

    protected: 


/* #line 17173 "../../../src/frontend/SageIII//StorageClasses.h" */

      X86InstructionKind storageOf_kind;
      X86InstructionSize storageOf_baseSize;
      X86InstructionSize storageOf_operandSize;
      X86InstructionSize storageOf_addressSize;
      bool storageOf_lockPrefix;
      X86RepeatPrefix storageOf_repeatPrefix;
      X86BranchPrediction storageOf_branchPrediction;
      X86SegmentRegister storageOf_segmentOverride;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmx86Instruction* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmx86Instruction;
   };
/* #line 17200 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmArmInstructionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmArmInstructionStorageClass  : public SgAsmInstructionStorageClass
   {

    protected: 


/* #line 17215 "../../../src/frontend/SageIII//StorageClasses.h" */

      ArmInstructionKind storageOf_kind;
      ArmInstructionCondition storageOf_condition;
      int storageOf_positionOfConditionInMnemonic;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmArmInstruction* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmArmInstruction;
   };
/* #line 17237 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPowerpcInstructionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPowerpcInstructionStorageClass  : public SgAsmInstructionStorageClass
   {

    protected: 


/* #line 17252 "../../../src/frontend/SageIII//StorageClasses.h" */

      PowerpcInstructionKind storageOf_kind;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPowerpcInstruction* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPowerpcInstruction;
   };
/* #line 17272 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmStaticDataStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmStaticDataStorageClass  : public SgAsmStatementStorageClass
   {

    protected: 


/* #line 17287 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgUnsignedCharList > storageOf_raw_bytes;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmStaticData* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmStaticData;
   };
/* #line 17307 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmExpressionStorageClass  : public SgAsmNodeStorageClass
   {

    protected: 


/* #line 17322 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_replacement;
       EasyStorage < std::string > storageOf_comment;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmExpression;
   };
/* #line 17343 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmValueExpressionStorageClass  : public SgAsmExpressionStorageClass
   {

    protected: 


/* #line 17358 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_unfolded_expression_tree;
      unsigned short storageOf_bit_offset;
      unsigned short storageOf_bit_size;
     unsigned long storageOf_symbol;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmValueExpression;
   };
/* #line 17381 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmIntegerValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmIntegerValueExpressionStorageClass  : public SgAsmValueExpressionStorageClass
   {

    protected: 


/* #line 17396 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_base_node;
      uint64_t storageOf_relative_value;
      size_t storageOf_significant_bits;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmIntegerValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmIntegerValueExpression;
   };
/* #line 17418 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmByteValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmByteValueExpressionStorageClass  : public SgAsmIntegerValueExpressionStorageClass
   {

    protected: 


/* #line 17433 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmByteValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmByteValueExpression;
   };
/* #line 17452 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmWordValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmWordValueExpressionStorageClass  : public SgAsmIntegerValueExpressionStorageClass
   {

    protected: 


/* #line 17467 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmWordValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmWordValueExpression;
   };
/* #line 17486 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDoubleWordValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDoubleWordValueExpressionStorageClass  : public SgAsmIntegerValueExpressionStorageClass
   {

    protected: 


/* #line 17501 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDoubleWordValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDoubleWordValueExpression;
   };
/* #line 17520 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmQuadWordValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmQuadWordValueExpressionStorageClass  : public SgAsmIntegerValueExpressionStorageClass
   {

    protected: 


/* #line 17535 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmQuadWordValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmQuadWordValueExpression;
   };
/* #line 17554 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmSingleFloatValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmSingleFloatValueExpressionStorageClass  : public SgAsmValueExpressionStorageClass
   {

    protected: 


/* #line 17569 "../../../src/frontend/SageIII//StorageClasses.h" */

      float storageOf_value;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmSingleFloatValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmSingleFloatValueExpression;
   };
/* #line 17589 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDoubleFloatValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDoubleFloatValueExpressionStorageClass  : public SgAsmValueExpressionStorageClass
   {

    protected: 


/* #line 17604 "../../../src/frontend/SageIII//StorageClasses.h" */

      double storageOf_value;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDoubleFloatValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDoubleFloatValueExpression;
   };
/* #line 17624 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmVectorValueExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmVectorValueExpressionStorageClass  : public SgAsmValueExpressionStorageClass
   {

    protected: 


/* #line 17639 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned int storageOf_size;
     unsigned long storageOf_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmVectorValueExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmVectorValueExpression;
   };
/* #line 17660 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryExpressionStorageClass  : public SgAsmExpressionStorageClass
   {

    protected: 


/* #line 17675 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_lhs;
     unsigned long storageOf_rhs;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryExpression;
   };
/* #line 17696 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryAddStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryAddStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17711 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryAdd* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryAdd;
   };
/* #line 17730 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinarySubtractStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinarySubtractStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17745 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinarySubtract* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinarySubtract;
   };
/* #line 17764 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryMultiplyStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryMultiplyStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17779 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryMultiply* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryMultiply;
   };
/* #line 17798 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryDivideStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryDivideStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17813 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryDivide* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryDivide;
   };
/* #line 17832 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryModStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryModStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17847 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryMod* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryMod;
   };
/* #line 17866 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryAddPreupdateStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryAddPreupdateStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17881 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryAddPreupdate* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryAddPreupdate;
   };
/* #line 17900 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinarySubtractPreupdateStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinarySubtractPreupdateStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17915 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinarySubtractPreupdate* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinarySubtractPreupdate;
   };
/* #line 17934 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryAddPostupdateStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryAddPostupdateStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17949 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryAddPostupdate* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryAddPostupdate;
   };
/* #line 17968 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinarySubtractPostupdateStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinarySubtractPostupdateStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 17983 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinarySubtractPostupdate* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinarySubtractPostupdate;
   };
/* #line 18002 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryLslStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryLslStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 18017 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryLsl* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryLsl;
   };
/* #line 18036 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryLsrStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryLsrStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 18051 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryLsr* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryLsr;
   };
/* #line 18070 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryAsrStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryAsrStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 18085 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryAsr* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryAsr;
   };
/* #line 18104 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBinaryRorStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBinaryRorStorageClass  : public SgAsmBinaryExpressionStorageClass
   {

    protected: 


/* #line 18119 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBinaryRor* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBinaryRor;
   };
/* #line 18138 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmUnaryExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmUnaryExpressionStorageClass  : public SgAsmExpressionStorageClass
   {

    protected: 


/* #line 18153 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_operand;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmUnaryExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmUnaryExpression;
   };
/* #line 18173 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmUnaryPlusStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmUnaryPlusStorageClass  : public SgAsmUnaryExpressionStorageClass
   {

    protected: 


/* #line 18188 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmUnaryPlus* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmUnaryPlus;
   };
/* #line 18207 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmUnaryMinusStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmUnaryMinusStorageClass  : public SgAsmUnaryExpressionStorageClass
   {

    protected: 


/* #line 18222 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmUnaryMinus* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmUnaryMinus;
   };
/* #line 18241 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmUnaryRrxStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmUnaryRrxStorageClass  : public SgAsmUnaryExpressionStorageClass
   {

    protected: 


/* #line 18256 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmUnaryRrx* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmUnaryRrx;
   };
/* #line 18275 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmUnaryArmSpecialRegisterListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmUnaryArmSpecialRegisterListStorageClass  : public SgAsmUnaryExpressionStorageClass
   {

    protected: 


/* #line 18290 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmUnaryArmSpecialRegisterList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmUnaryArmSpecialRegisterList;
   };
/* #line 18309 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmMemoryReferenceExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmMemoryReferenceExpressionStorageClass  : public SgAsmExpressionStorageClass
   {

    protected: 


/* #line 18324 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_address;
     unsigned long storageOf_segment;
     unsigned long storageOf_type;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmMemoryReferenceExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmMemoryReferenceExpression;
   };
/* #line 18346 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmRegisterReferenceExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmRegisterReferenceExpressionStorageClass  : public SgAsmExpressionStorageClass
   {

    protected: 


/* #line 18361 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_type;
      RegisterDescriptor storageOf_descriptor;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmRegisterReferenceExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmRegisterReferenceExpression;
   };
/* #line 18382 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmx86RegisterReferenceExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmx86RegisterReferenceExpressionStorageClass  : public SgAsmRegisterReferenceExpressionStorageClass
   {

    protected: 


/* #line 18397 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmx86RegisterReferenceExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmx86RegisterReferenceExpression;
   };
/* #line 18416 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmArmRegisterReferenceExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmArmRegisterReferenceExpressionStorageClass  : public SgAsmRegisterReferenceExpressionStorageClass
   {

    protected: 


/* #line 18431 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_psr_mask;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmArmRegisterReferenceExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmArmRegisterReferenceExpression;
   };
/* #line 18451 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPowerpcRegisterReferenceExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPowerpcRegisterReferenceExpressionStorageClass  : public SgAsmRegisterReferenceExpressionStorageClass
   {

    protected: 


/* #line 18466 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPowerpcRegisterReferenceExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPowerpcRegisterReferenceExpression;
   };
/* #line 18485 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmControlFlagsExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmControlFlagsExpressionStorageClass  : public SgAsmExpressionStorageClass
   {

    protected: 


/* #line 18500 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned long storageOf_bit_flags;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmControlFlagsExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmControlFlagsExpression;
   };
/* #line 18520 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmCommonSubExpressionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmCommonSubExpressionStorageClass  : public SgAsmExpressionStorageClass
   {

    protected: 


/* #line 18535 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_subexpression;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmCommonSubExpression* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmCommonSubExpression;
   };
/* #line 18555 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmExprListExpStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmExprListExpStorageClass  : public SgAsmExpressionStorageClass
   {

    protected: 


/* #line 18570 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmExpressionPtrList > storageOf_expressions;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmExprListExp* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmExprListExp;
   };
/* #line 18590 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmInterpretationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmInterpretationStorageClass  : public SgAsmNodeStorageClass
   {

    protected: 


/* #line 18605 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_dwarf_info;
     unsigned long storageOf_headers;
     unsigned long storageOf_global_block;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmInterpretation* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmInterpretation;
   };
/* #line 18627 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmOperandListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmOperandListStorageClass  : public SgAsmNodeStorageClass
   {

    protected: 


/* #line 18642 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmExpressionPtrList > storageOf_operands;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmOperandList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmOperandList;
   };
/* #line 18662 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeStorageClass  : public SgAsmNodeStorageClass
   {

    protected: 


/* #line 18677 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmType;
   };
/* #line 18696 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeByteStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeByteStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18711 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmTypeByte* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmTypeByte;
   };
/* #line 18730 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeWordStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeWordStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18745 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmTypeWord* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmTypeWord;
   };
/* #line 18764 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeDoubleWordStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeDoubleWordStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18779 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmTypeDoubleWord* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmTypeDoubleWord;
   };
/* #line 18798 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeQuadWordStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeQuadWordStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18813 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmTypeQuadWord* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmTypeQuadWord;
   };
/* #line 18832 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeDoubleQuadWordStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeDoubleQuadWordStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18847 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmTypeDoubleQuadWord* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmTypeDoubleQuadWord;
   };
/* #line 18866 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmType80bitFloatStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmType80bitFloatStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18881 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmType80bitFloat* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmType80bitFloat;
   };
/* #line 18900 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmType128bitFloatStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmType128bitFloatStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18915 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmType128bitFloat* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmType128bitFloat;
   };
/* #line 18934 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeSingleFloatStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeSingleFloatStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18949 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmTypeSingleFloat* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmTypeSingleFloat;
   };
/* #line 18968 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeDoubleFloatStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeDoubleFloatStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 18983 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmTypeDoubleFloat* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmTypeDoubleFloat;
   };
/* #line 19002 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmTypeVectorStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmTypeVectorStorageClass  : public SgAsmTypeStorageClass
   {

    protected: 


/* #line 19017 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_elementCount;
     unsigned long storageOf_elementType;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmTypeVector* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmTypeVector;
   };
/* #line 19038 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmExecutableFileFormatStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmExecutableFileFormatStorageClass  : public SgAsmNodeStorageClass
   {

    protected: 


/* #line 19053 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmExecutableFileFormat* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmExecutableFileFormat;
   };
/* #line 19072 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericDLLStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericDLLStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 19087 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_name;
       EasyStorage < SgStringList > storageOf_symbols;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericDLL* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericDLL;
   };
/* #line 19108 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericFormatStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericFormatStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 19123 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgAsmGenericFormat::ExecFamily storageOf_family;
      SgAsmGenericFormat::ExecPurpose storageOf_purpose;
      SgAsmGenericFormat::ByteOrder storageOf_sex;
      unsigned storageOf_version;
      bool storageOf_is_current_version;
      SgAsmGenericFormat::ExecABI storageOf_abi;
      unsigned storageOf_abi_version;
      size_t storageOf_word_size;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericFormat* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericFormat;
   };
/* #line 19150 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericDLLListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericDLLListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 19165 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmGenericDLLPtrList > storageOf_dlls;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericDLLList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericDLLList;
   };
/* #line 19185 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfEHFrameEntryFDStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfEHFrameEntryFDStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 19200 "../../../src/frontend/SageIII//StorageClasses.h" */

      rose_rva_t storageOf_begin_rva;
      rose_addr_t storageOf_size;
       EasyStorage < SgUnsignedCharList > storageOf_augmentation_data;
       EasyStorage < SgUnsignedCharList > storageOf_instructions;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfEHFrameEntryFD* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfEHFrameEntryFD;
   };
/* #line 19223 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericFileStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericFileStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 19238 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_name;
      int storageOf_fd;
      SgAsmGenericFormat::fileDetails storageOf_sb;
       EasyStorage < SgFileContentList > storageOf_data;
     unsigned long storageOf_headers;
     unsigned long storageOf_holes;
      bool storageOf_truncate_zeros;
      bool storageOf_tracking_references;
       EasyStorage < ExtentMap > storageOf_referenced_extents;
      bool storageOf_neuter;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericFile* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericFile;
   };
/* #line 19267 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericSectionStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 19282 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_file;
     unsigned long storageOf_header;
      rose_addr_t storageOf_size;
      rose_addr_t storageOf_offset;
      rose_addr_t storageOf_file_alignment;
       EasyStorage < SgFileContentList > storageOf_data;
      SgAsmGenericSection::SectionPurpose storageOf_purpose;
      bool storageOf_synthesized;
      int storageOf_id;
     unsigned long storageOf_name;
       EasyStorage < std::string > storageOf_short_name;
      rose_addr_t storageOf_mapped_preferred_rva;
      rose_addr_t storageOf_mapped_size;
      rose_addr_t storageOf_mapped_alignment;
      bool storageOf_mapped_rperm;
      bool storageOf_mapped_wperm;
      bool storageOf_mapped_xperm;
      bool storageOf_contains_code;
      rose_addr_t storageOf_mapped_actual_va;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericSection;
   };
/* #line 19320 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericHeaderStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericHeaderStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 19335 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_exec_format;
       EasyStorage < SgCharList > storageOf_magic;
      SgAsmGenericFormat::InsSetArchitecture storageOf_isa;
      rose_addr_t storageOf_base_va;
       EasyStorage < SgRVAList > storageOf_entry_rvas;
     unsigned long storageOf_dlls;
     unsigned long storageOf_sections;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericHeader* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericHeader;
   };
/* #line 19361 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEFileHeaderStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEFileHeaderStorageClass  : public SgAsmGenericHeaderStorageClass
   {

    protected: 


/* #line 19376 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_e_cpu_type;
      unsigned storageOf_e_nsections;
      unsigned storageOf_e_time;
      rose_addr_t storageOf_e_coff_symtab;
      rose_addr_t storageOf_e_nt_hdr_size;
      unsigned storageOf_e_coff_nsyms;
      unsigned storageOf_e_flags;
      unsigned storageOf_e_opt_magic;
      unsigned storageOf_e_lmajor;
      unsigned storageOf_e_lminor;
      unsigned storageOf_e_code_size;
      unsigned storageOf_e_data_size;
      unsigned storageOf_e_bss_size;
      rose_rva_t storageOf_e_code_rva;
      rose_rva_t storageOf_e_data_rva;
      unsigned storageOf_e_section_align;
      unsigned storageOf_e_file_align;
      unsigned storageOf_e_os_major;
      unsigned storageOf_e_os_minor;
      unsigned storageOf_e_user_major;
      unsigned storageOf_e_user_minor;
      unsigned storageOf_e_subsys_major;
      unsigned storageOf_e_subsys_minor;
      unsigned storageOf_e_reserved9;
      unsigned storageOf_e_image_size;
      unsigned storageOf_e_header_size;
      unsigned storageOf_e_file_checksum;
      unsigned storageOf_e_subsystem;
      unsigned storageOf_e_dll_flags;
      unsigned storageOf_e_stack_reserve_size;
      unsigned storageOf_e_stack_commit_size;
      unsigned storageOf_e_heap_reserve_size;
      unsigned storageOf_e_heap_commit_size;
      unsigned storageOf_e_loader_flags;
      unsigned storageOf_e_num_rvasize_pairs;
     unsigned long storageOf_rvasize_pairs;
     unsigned long storageOf_section_table;
     unsigned long storageOf_coff_symtab;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEFileHeader* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEFileHeader;
   };
/* #line 19433 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLEFileHeaderStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLEFileHeaderStorageClass  : public SgAsmGenericHeaderStorageClass
   {

    protected: 


/* #line 19448 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_e_byte_order;
      unsigned storageOf_e_word_order;
      unsigned storageOf_e_format_level;
      unsigned storageOf_e_cpu_type;
      unsigned storageOf_e_os_type;
      unsigned storageOf_e_module_version;
      unsigned storageOf_e_flags;
      unsigned storageOf_e_eip_section;
      unsigned storageOf_e_esp_section;
      unsigned storageOf_e_last_page_size;
      unsigned storageOf_e_page_offset_shift;
      unsigned storageOf_e_fixup_sect_cksum;
      unsigned storageOf_e_loader_sect_cksum;
      unsigned storageOf_e_secttab_nentries;
      unsigned storageOf_e_rsrctab_nentries;
      unsigned storageOf_e_fmtdirtab_nentries;
      unsigned storageOf_e_import_modtab_nentries;
      unsigned storageOf_e_preload_npages;
      unsigned storageOf_e_nonresnametab_size;
      unsigned storageOf_e_nonresnametab_cksum;
      unsigned storageOf_e_auto_ds_section;
      unsigned storageOf_e_debug_info_size;
      unsigned storageOf_e_num_instance_preload;
      unsigned storageOf_e_num_instance_demand;
      unsigned storageOf_e_heap_size;
      rose_addr_t storageOf_e_npages;
      rose_addr_t storageOf_e_eip;
      rose_addr_t storageOf_e_esp;
      rose_addr_t storageOf_e_page_size;
      rose_addr_t storageOf_e_fixup_sect_size;
      rose_addr_t storageOf_e_loader_sect_size;
      rose_addr_t storageOf_e_secttab_rfo;
      rose_addr_t storageOf_e_pagetab_rfo;
      rose_addr_t storageOf_e_iterpages_offset;
      rose_addr_t storageOf_e_rsrctab_rfo;
      rose_addr_t storageOf_e_resnametab_rfo;
      rose_addr_t storageOf_e_entrytab_rfo;
      rose_addr_t storageOf_e_fmtdirtab_rfo;
      rose_addr_t storageOf_e_fixup_pagetab_rfo;
      rose_addr_t storageOf_e_fixup_rectab_rfo;
      rose_addr_t storageOf_e_import_modtab_rfo;
      rose_addr_t storageOf_e_import_proctab_rfo;
      rose_addr_t storageOf_e_ppcksumtab_rfo;
      rose_addr_t storageOf_e_data_pages_offset;
      rose_addr_t storageOf_e_nonresnametab_offset;
      rose_addr_t storageOf_e_debug_info_rfo;
     unsigned long storageOf_dos2_header;
     unsigned long storageOf_section_table;
     unsigned long storageOf_page_table;
     unsigned long storageOf_resname_table;
     unsigned long storageOf_nonresname_table;
     unsigned long storageOf_entry_table;
     unsigned long storageOf_reloc_table;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLEFileHeader* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLEFileHeader;
   };
/* #line 19520 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNEFileHeaderStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNEFileHeaderStorageClass  : public SgAsmGenericHeaderStorageClass
   {

    protected: 


/* #line 19535 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_e_linker_major;
      unsigned storageOf_e_linker_minor;
      unsigned storageOf_e_checksum;
      unsigned storageOf_e_flags1;
      unsigned storageOf_e_autodata_sn;
      unsigned storageOf_e_bss_size;
      unsigned storageOf_e_stack_size;
      unsigned storageOf_e_csip;
      unsigned storageOf_e_sssp;
      unsigned storageOf_e_nsections;
      unsigned storageOf_e_nmodrefs;
      unsigned storageOf_e_nnonresnames;
      unsigned storageOf_e_nmovable_entries;
      unsigned storageOf_e_sector_align;
      unsigned storageOf_e_nresources;
      unsigned storageOf_e_exetype;
      unsigned storageOf_e_flags2;
      unsigned storageOf_e_res1;
      unsigned storageOf_e_winvers;
      rose_addr_t storageOf_e_entrytab_rfo;
      rose_addr_t storageOf_e_entrytab_size;
      rose_addr_t storageOf_e_sectab_rfo;
      rose_addr_t storageOf_e_rsrctab_rfo;
      rose_addr_t storageOf_e_resnametab_rfo;
      rose_addr_t storageOf_e_modreftab_rfo;
      rose_addr_t storageOf_e_importnametab_rfo;
      rose_addr_t storageOf_e_nonresnametab_offset;
      rose_addr_t storageOf_e_fastload_sector;
      rose_addr_t storageOf_e_fastload_nsectors;
     unsigned long storageOf_dos2_header;
     unsigned long storageOf_section_table;
     unsigned long storageOf_resname_table;
     unsigned long storageOf_nonresname_table;
     unsigned long storageOf_module_table;
     unsigned long storageOf_entry_table;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNEFileHeader* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNEFileHeader;
   };
/* #line 19589 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDOSFileHeaderStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDOSFileHeaderStorageClass  : public SgAsmGenericHeaderStorageClass
   {

    protected: 


/* #line 19604 "../../../src/frontend/SageIII//StorageClasses.h" */

      uint16_t storageOf_e_last_page_size;
      uint16_t storageOf_e_total_pages;
      uint16_t storageOf_e_nrelocs;
      uint16_t storageOf_e_header_paragraphs;
      uint16_t storageOf_e_minalloc;
      uint16_t storageOf_e_maxalloc;
      uint16_t storageOf_e_ss;
      uint16_t storageOf_e_sp;
      uint16_t storageOf_e_cksum;
      uint16_t storageOf_e_ip;
      uint16_t storageOf_e_cs;
      uint16_t storageOf_e_overlay;
      rose_addr_t storageOf_e_relocs_offset;
      unsigned storageOf_e_res1;
     unsigned long storageOf_relocs;
     unsigned long storageOf_rm_section;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDOSFileHeader* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDOSFileHeader;
   };
/* #line 19639 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfFileHeaderStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfFileHeaderStorageClass  : public SgAsmGenericHeaderStorageClass
   {

    protected: 


/* #line 19654 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned char storageOf_e_ident_file_class;
      unsigned char storageOf_e_ident_data_encoding;
      unsigned char storageOf_e_ident_file_version;
       EasyStorage < SgUnsignedCharList > storageOf_e_ident_padding;
      unsigned long storageOf_e_type;
      unsigned long storageOf_e_machine;
      unsigned long storageOf_e_flags;
      unsigned long storageOf_e_ehsize;
      unsigned long storageOf_phextrasz;
      unsigned long storageOf_e_phnum;
      unsigned long storageOf_shextrasz;
      unsigned long storageOf_e_shnum;
      unsigned long storageOf_e_shstrndx;
     unsigned long storageOf_section_table;
     unsigned long storageOf_segment_table;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfFileHeader* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfFileHeader;
   };
/* #line 19688 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSectionStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 19703 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_linked_section;
     unsigned long storageOf_section_entry;
     unsigned long storageOf_segment_entry;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSection;
   };
/* #line 19725 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymbolSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymbolSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 19740 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_symbols;
      bool storageOf_is_dynamic;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymbolSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymbolSection;
   };
/* #line 19761 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfRelocSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfRelocSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 19776 "../../../src/frontend/SageIII//StorageClasses.h" */

      bool storageOf_uses_addend;
     unsigned long storageOf_target_section;
     unsigned long storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfRelocSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfRelocSection;
   };
/* #line 19798 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfDynamicSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfDynamicSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 19813 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfDynamicSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfDynamicSection;
   };
/* #line 19833 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfStringSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfStringSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 19848 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_strtab;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfStringSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfStringSection;
   };
/* #line 19868 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfNoteSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfNoteSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 19883 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfNoteSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfNoteSection;
   };
/* #line 19903 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfEHFrameSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfEHFrameSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 19918 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_ci_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfEHFrameSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfEHFrameSection;
   };
/* #line 19938 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 19953 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverSection;
   };
/* #line 19973 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverDefinedSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverDefinedSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 19988 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverDefinedSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverDefinedSection;
   };
/* #line 20008 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverNeededSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverNeededSectionStorageClass  : public SgAsmElfSectionStorageClass
   {

    protected: 


/* #line 20023 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverNeededSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverNeededSection;
   };
/* #line 20043 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSectionTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSectionTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20058 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSectionTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSectionTable;
   };
/* #line 20077 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSegmentTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSegmentTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20092 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSegmentTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSegmentTable;
   };
/* #line 20111 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPESectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPESectionStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20126 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_section_entry;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPESection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPESection;
   };
/* #line 20146 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEImportSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEImportSectionStorageClass  : public SgAsmPESectionStorageClass
   {

    protected: 


/* #line 20161 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_import_directories;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEImportSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEImportSection;
   };
/* #line 20181 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEExportSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEExportSectionStorageClass  : public SgAsmPESectionStorageClass
   {

    protected: 


/* #line 20196 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_export_dir;
     unsigned long storageOf_exports;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEExportSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEExportSection;
   };
/* #line 20217 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEStringSectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEStringSectionStorageClass  : public SgAsmPESectionStorageClass
   {

    protected: 


/* #line 20232 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_strtab;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEStringSection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEStringSection;
   };
/* #line 20252 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPESectionTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPESectionTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20267 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPESectionTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPESectionTable;
   };
/* #line 20286 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDOSExtendedHeaderStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDOSExtendedHeaderStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20301 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_e_res1;
      unsigned storageOf_e_oemid;
      unsigned storageOf_e_oeminfo;
      unsigned storageOf_e_res2;
      unsigned storageOf_e_res3;
      unsigned storageOf_e_res4;
      unsigned storageOf_e_res5;
      unsigned storageOf_e_res6;
      rose_addr_t storageOf_e_lfanew;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDOSExtendedHeader* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDOSExtendedHeader;
   };
/* #line 20329 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmCoffSymbolTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmCoffSymbolTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20344 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_strtab;
     unsigned long storageOf_symbols;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmCoffSymbolTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmCoffSymbolTable;
   };
/* #line 20365 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNESectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNESectionStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20380 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_st_entry;
     unsigned long storageOf_reloc_table;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNESection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNESection;
   };
/* #line 20401 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNESectionTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNESectionTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20416 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_flags;
      unsigned storageOf_sector;
      rose_addr_t storageOf_physical_size;
      rose_addr_t storageOf_virtual_size;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNESectionTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNESectionTable;
   };
/* #line 20439 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNENameTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNENameTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20454 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgStringList > storageOf_names;
       EasyStorage < SgUnsignedList > storageOf_ordinals;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNENameTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNENameTable;
   };
/* #line 20475 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNEModuleTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNEModuleTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20490 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_strtab;
       EasyStorage < SgAddressList > storageOf_name_offsets;
       EasyStorage < SgStringList > storageOf_names;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNEModuleTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNEModuleTable;
   };
/* #line 20512 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNEStringTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNEStringTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20527 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNEStringTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNEStringTable;
   };
/* #line 20546 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNEEntryTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNEEntryTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20561 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgSizeTList > storageOf_bundle_sizes;
       EasyStorage < SgAsmNEEntryPointPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNEEntryTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNEEntryTable;
   };
/* #line 20582 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNERelocTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNERelocTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20597 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmNERelocEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNERelocTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNERelocTable;
   };
/* #line 20617 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLESectionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLESectionStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20632 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_st_entry;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLESection* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLESection;
   };
/* #line 20652 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLESectionTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLESectionTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20667 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLESectionTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLESectionTable;
   };
/* #line 20686 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLENameTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLENameTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20701 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgStringList > storageOf_names;
       EasyStorage < SgUnsignedList > storageOf_ordinals;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLENameTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLENameTable;
   };
/* #line 20722 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLEPageTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLEPageTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20737 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmLEPageTableEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLEPageTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLEPageTable;
   };
/* #line 20757 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLEEntryTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLEEntryTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20772 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgSizeTList > storageOf_bundle_sizes;
       EasyStorage < SgAsmLEEntryPointPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLEEntryTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLEEntryTable;
   };
/* #line 20793 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLERelocTableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLERelocTableStorageClass  : public SgAsmGenericSectionStorageClass
   {

    protected: 


/* #line 20808 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmLERelocEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLERelocTable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLERelocTable;
   };
/* #line 20828 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericSymbolStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 20843 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgAsmGenericSymbol::SymbolDefState storageOf_def_state;
      SgAsmGenericSymbol::SymbolBinding storageOf_binding;
      SgAsmGenericSymbol::SymbolType storageOf_type;
      rose_addr_t storageOf_value;
      rose_addr_t storageOf_size;
     unsigned long storageOf_bound;
     unsigned long storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericSymbol;
   };
/* #line 20869 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmCoffSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmCoffSymbolStorageClass  : public SgAsmGenericSymbolStorageClass
   {

    protected: 


/* #line 20884 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_st_name;
      rose_addr_t storageOf_st_name_offset;
      int storageOf_st_section_num;
      unsigned storageOf_st_type;
      unsigned storageOf_st_storage_class;
      unsigned storageOf_st_num_aux_entries;
       EasyStorage < SgUnsignedCharList > storageOf_aux_data;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmCoffSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmCoffSymbol;
   };
/* #line 20910 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymbolStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymbolStorageClass  : public SgAsmGenericSymbolStorageClass
   {

    protected: 


/* #line 20925 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned char storageOf_st_info;
      unsigned char storageOf_st_res1;
      unsigned storageOf_st_shndx;
      rose_addr_t storageOf_st_size;
       EasyStorage < SgUnsignedCharList > storageOf_extra;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymbol* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymbol;
   };
/* #line 20949 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericStrtabStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericStrtabStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 20964 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_container;
       EasyStorage < SgAsmGenericStrtab::referenced_t > storageOf_storage_list;
       EasyStorage < ExtentMap > storageOf_freelist;
     unsigned long storageOf_dont_free;
      size_t storageOf_num_freed;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericStrtab* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericStrtab;
   };
/* #line 20988 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfStrtabStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfStrtabStorageClass  : public SgAsmGenericStrtabStorageClass
   {

    protected: 


/* #line 21003 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfStrtab* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfStrtab;
   };
/* #line 21022 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmCoffStrtabStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmCoffStrtabStorageClass  : public SgAsmGenericStrtabStorageClass
   {

    protected: 


/* #line 21037 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmCoffStrtab* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmCoffStrtab;
   };
/* #line 21056 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericSymbolListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericSymbolListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21071 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmGenericSymbolPtrList > storageOf_symbols;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericSymbolList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericSymbolList;
   };
/* #line 21091 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericSectionListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericSectionListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21106 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmGenericSectionPtrList > storageOf_sections;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericSectionList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericSectionList;
   };
/* #line 21126 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericHeaderListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericHeaderListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21141 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmGenericHeaderPtrList > storageOf_headers;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericHeaderList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericHeaderList;
   };
/* #line 21161 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericStringStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericStringStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21176 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericString* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericString;
   };
/* #line 21195 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmBasicStringStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmBasicStringStorageClass  : public SgAsmGenericStringStorageClass
   {

    protected: 


/* #line 21210 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_string;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmBasicString* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmBasicString;
   };
/* #line 21230 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmStoredStringStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmStoredStringStorageClass  : public SgAsmGenericStringStorageClass
   {

    protected: 


/* #line 21245 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_storage;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmStoredString* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmStoredString;
   };
/* #line 21265 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSectionTableEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSectionTableEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21280 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_sh_name;
      SgAsmElfSectionTableEntry::SectionType storageOf_sh_type;
      unsigned long storageOf_sh_link;
      unsigned long storageOf_sh_info;
      uint64_t storageOf_sh_flags;
      rose_addr_t storageOf_sh_addr;
      rose_addr_t storageOf_sh_offset;
      rose_addr_t storageOf_sh_size;
      rose_addr_t storageOf_sh_addralign;
      rose_addr_t storageOf_sh_entsize;
       EasyStorage < SgUnsignedCharList > storageOf_extra;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSectionTableEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSectionTableEntry;
   };
/* #line 21310 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSegmentTableEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSegmentTableEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21325 "../../../src/frontend/SageIII//StorageClasses.h" */

      size_t storageOf_index;
      SgAsmElfSegmentTableEntry::SegmentType storageOf_type;
      SgAsmElfSegmentTableEntry::SegmentFlags storageOf_flags;
      rose_addr_t storageOf_offset;
      rose_addr_t storageOf_vaddr;
      rose_addr_t storageOf_paddr;
      rose_addr_t storageOf_filesz;
      rose_addr_t storageOf_memsz;
      rose_addr_t storageOf_align;
       EasyStorage < SgUnsignedCharList > storageOf_extra;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSegmentTableEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSegmentTableEntry;
   };
/* #line 21354 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymbolListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymbolListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21369 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfSymbolPtrList > storageOf_symbols;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymbolList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymbolList;
   };
/* #line 21389 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfRelocEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfRelocEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21404 "../../../src/frontend/SageIII//StorageClasses.h" */

      rose_addr_t storageOf_r_offset;
      rose_addr_t storageOf_r_addend;
      unsigned long storageOf_sym;
      SgAsmElfRelocEntry::RelocType storageOf_type;
       EasyStorage < SgUnsignedCharList > storageOf_extra;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfRelocEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfRelocEntry;
   };
/* #line 21428 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfRelocEntryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfRelocEntryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21443 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfRelocEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfRelocEntryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfRelocEntryList;
   };
/* #line 21463 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEExportEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEExportEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21478 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_name;
      unsigned storageOf_ordinal;
      rose_rva_t storageOf_export_rva;
     unsigned long storageOf_forwarder;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEExportEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEExportEntry;
   };
/* #line 21501 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEExportEntryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEExportEntryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21516 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmPEExportEntryPtrList > storageOf_exports;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEExportEntryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEExportEntryList;
   };
/* #line 21536 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfDynamicEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfDynamicEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21551 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgAsmElfDynamicEntry::EntryType storageOf_d_tag;
      rose_rva_t storageOf_d_val;
     unsigned long storageOf_name;
       EasyStorage < SgUnsignedCharList > storageOf_extra;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfDynamicEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfDynamicEntry;
   };
/* #line 21574 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfDynamicEntryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfDynamicEntryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21589 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfDynamicEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfDynamicEntryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfDynamicEntryList;
   };
/* #line 21609 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSegmentTableEntryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSegmentTableEntryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21624 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfSegmentTableEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSegmentTableEntryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSegmentTableEntryList;
   };
/* #line 21644 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmStringStorageStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmStringStorageStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21659 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_strtab;
       EasyStorage < std::string > storageOf_string;
      rose_addr_t storageOf_offset;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmStringStorage* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmStringStorage;
   };
/* #line 21681 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfNoteEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfNoteEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21696 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_type;
     unsigned long storageOf_name;
       EasyStorage < SgUnsignedCharList > storageOf_payload;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfNoteEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfNoteEntry;
   };
/* #line 21718 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfNoteEntryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfNoteEntryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21733 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfNoteEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfNoteEntryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfNoteEntryList;
   };
/* #line 21753 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21768 "../../../src/frontend/SageIII//StorageClasses.h" */

      size_t storageOf_value;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverEntry;
   };
/* #line 21788 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverEntryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverEntryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21803 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfSymverEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverEntryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverEntryList;
   };
/* #line 21823 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverDefinedEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverDefinedEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21838 "../../../src/frontend/SageIII//StorageClasses.h" */

      size_t storageOf_version;
      int storageOf_flags;
      size_t storageOf_index;
      uint32_t storageOf_hash;
     unsigned long storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverDefinedEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverDefinedEntry;
   };
/* #line 21862 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverDefinedEntryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverDefinedEntryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21877 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfSymverDefinedEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverDefinedEntryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverDefinedEntryList;
   };
/* #line 21897 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverDefinedAuxStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverDefinedAuxStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21912 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverDefinedAux* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverDefinedAux;
   };
/* #line 21932 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverDefinedAuxListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverDefinedAuxListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21947 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfSymverDefinedAuxPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverDefinedAuxList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverDefinedAuxList;
   };
/* #line 21967 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverNeededEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverNeededEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 21982 "../../../src/frontend/SageIII//StorageClasses.h" */

      size_t storageOf_version;
     unsigned long storageOf_file_name;
     unsigned long storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverNeededEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverNeededEntry;
   };
/* #line 22004 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverNeededEntryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverNeededEntryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22019 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfSymverNeededEntryPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverNeededEntryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverNeededEntryList;
   };
/* #line 22039 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverNeededAuxStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverNeededAuxStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22054 "../../../src/frontend/SageIII//StorageClasses.h" */

      uint32_t storageOf_hash;
      int storageOf_flags;
      size_t storageOf_other;
     unsigned long storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverNeededAux* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverNeededAux;
   };
/* #line 22077 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfSymverNeededAuxListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfSymverNeededAuxListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22092 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfSymverNeededAuxPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfSymverNeededAuxList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfSymverNeededAuxList;
   };
/* #line 22112 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEImportDirectoryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEImportDirectoryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22127 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_dll_name;
      rose_rva_t storageOf_dll_name_rva;
      size_t storageOf_dll_name_nalloc;
      time_t storageOf_time;
      unsigned storageOf_forwarder_chain;
      rose_rva_t storageOf_ilt_rva;
      size_t storageOf_ilt_nalloc;
      rose_rva_t storageOf_iat_rva;
      size_t storageOf_iat_nalloc;
     unsigned long storageOf_imports;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEImportDirectory* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEImportDirectory;
   };
/* #line 22156 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPESectionTableEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPESectionTableEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22171 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_name;
      rose_addr_t storageOf_virtual_size;
      rose_addr_t storageOf_rva;
      rose_addr_t storageOf_physical_size;
      rose_addr_t storageOf_physical_offset;
      unsigned storageOf_coff_line_nums;
      unsigned storageOf_n_relocs;
      unsigned storageOf_n_coff_line_nums;
      unsigned storageOf_flags;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPESectionTableEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPESectionTableEntry;
   };
/* #line 22199 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEExportDirectoryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEExportDirectoryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22214 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_res1;
      time_t storageOf_timestamp;
      unsigned storageOf_vmajor;
      unsigned storageOf_vminor;
      rose_rva_t storageOf_name_rva;
      unsigned storageOf_ord_base;
      size_t storageOf_expaddr_n;
      size_t storageOf_nameptr_n;
      rose_rva_t storageOf_expaddr_rva;
      rose_rva_t storageOf_nameptr_rva;
      rose_rva_t storageOf_ordinals_rva;
     unsigned long storageOf_name;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEExportDirectory* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEExportDirectory;
   };
/* #line 22245 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPERVASizePairStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPERVASizePairStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22260 "../../../src/frontend/SageIII//StorageClasses.h" */

      rose_rva_t storageOf_e_rva;
      rose_addr_t storageOf_e_size;
     unsigned long storageOf_section;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPERVASizePair* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPERVASizePair;
   };
/* #line 22282 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmCoffSymbolListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmCoffSymbolListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22297 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmCoffSymbolPtrList > storageOf_symbols;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmCoffSymbolList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmCoffSymbolList;
   };
/* #line 22317 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPERVASizePairListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPERVASizePairListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22332 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmPERVASizePairPtrList > storageOf_pairs;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPERVASizePairList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPERVASizePairList;
   };
/* #line 22352 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfEHFrameEntryCIStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfEHFrameEntryCIStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22367 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_version;
       EasyStorage < std::string > storageOf_augmentation_string;
      uint64_t storageOf_code_alignment_factor;
      int64_t storageOf_data_alignment_factor;
      uint64_t storageOf_augmentation_data_length;
      int storageOf_lsda_encoding;
      int storageOf_prh_encoding;
      unsigned storageOf_prh_arg;
      rose_addr_t storageOf_prh_addr;
      int storageOf_addr_encoding;
      bool storageOf_sig_frame;
       EasyStorage < SgUnsignedCharList > storageOf_instructions;
     unsigned long storageOf_fd_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfEHFrameEntryCI* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfEHFrameEntryCI;
   };
/* #line 22399 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEImportDirectoryListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEImportDirectoryListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22414 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmPEImportDirectoryPtrList > storageOf_vector;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEImportDirectoryList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEImportDirectoryList;
   };
/* #line 22434 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNEEntryPointStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNEEntryPointStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22449 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgAsmNEEntryPoint::NEEntryFlags storageOf_flags;
      unsigned storageOf_int3f;
      unsigned storageOf_section_idx;
      unsigned storageOf_section_offset;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNEEntryPoint* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNEEntryPoint;
   };
/* #line 22472 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNERelocEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNERelocEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22487 "../../../src/frontend/SageIII//StorageClasses.h" */

      SgAsmNERelocEntry::NERelocSrcType storageOf_src_type;
      SgAsmNERelocEntry::NERelocModifiers storageOf_modifier;
      SgAsmNERelocEntry::NERelocTgtType storageOf_tgt_type;
      SgAsmNERelocEntry::NERelocFlags storageOf_flags;
      rose_addr_t storageOf_src_offset;
      SgAsmNERelocEntry::iref_type storageOf_iref;
      SgAsmNERelocEntry::iord_type storageOf_iord;
      SgAsmNERelocEntry::iname_type storageOf_iname;
      SgAsmNERelocEntry::osfixup_type storageOf_osfixup;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNERelocEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNERelocEntry;
   };
/* #line 22515 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmNESectionTableEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmNESectionTableEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22530 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_flags;
      unsigned storageOf_sector;
      rose_addr_t storageOf_physical_size;
      rose_addr_t storageOf_virtual_size;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmNESectionTableEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmNESectionTableEntry;
   };
/* #line 22553 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfEHFrameEntryCIListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfEHFrameEntryCIListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22568 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfEHFrameEntryCIPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfEHFrameEntryCIList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfEHFrameEntryCIList;
   };
/* #line 22588 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLEPageTableEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLEPageTableEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22603 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_pageno;
      unsigned storageOf_flags;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLEPageTableEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLEPageTableEntry;
   };
/* #line 22624 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLEEntryPointStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLEEntryPointStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22639 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmLEEntryPointPtrList > storageOf_entries;
      unsigned storageOf_flags;
      unsigned storageOf_objnum;
      unsigned storageOf_entry_type;
      unsigned storageOf_res1;
      rose_addr_t storageOf_entry_offset;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLEEntryPoint* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLEEntryPoint;
   };
/* #line 22664 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmLESectionTableEntryStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmLESectionTableEntryStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22679 "../../../src/frontend/SageIII//StorageClasses.h" */

      unsigned storageOf_flags;
      unsigned storageOf_pagemap_index;
      unsigned storageOf_pagemap_nentries;
      unsigned storageOf_res1;
      rose_addr_t storageOf_mapped_size;
      rose_addr_t storageOf_base_addr;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmLESectionTableEntry* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmLESectionTableEntry;
   };
/* #line 22704 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmElfEHFrameEntryFDListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmElfEHFrameEntryFDListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22719 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmElfEHFrameEntryFDPtrList > storageOf_entries;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmElfEHFrameEntryFDList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmElfEHFrameEntryFDList;
   };
/* #line 22739 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfInformationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfInformationStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 22754 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfInformation* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfInformation;
   };
/* #line 22773 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfMacroStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfMacroStorageClass  : public SgAsmDwarfInformationStorageClass
   {

    protected: 


/* #line 22788 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_macro_string;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfMacro* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfMacro;
   };
/* #line 22808 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfMacroListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfMacroListStorageClass  : public SgAsmDwarfInformationStorageClass
   {

    protected: 


/* #line 22823 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmDwarfMacroPtrList > storageOf_macro_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfMacroList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfMacroList;
   };
/* #line 22843 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfLineStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfLineStorageClass  : public SgAsmDwarfInformationStorageClass
   {

    protected: 


/* #line 22858 "../../../src/frontend/SageIII//StorageClasses.h" */

      uint64_t storageOf_address;
      int storageOf_file_id;
      int storageOf_line;
      int storageOf_column;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfLine* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfLine;
   };
/* #line 22881 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfLineListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfLineListStorageClass  : public SgAsmDwarfInformationStorageClass
   {

    protected: 


/* #line 22896 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmDwarfLinePtrList > storageOf_line_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfLineList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfLineList;
   };
/* #line 22916 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfCompilationUnitListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfCompilationUnitListStorageClass  : public SgAsmDwarfInformationStorageClass
   {

    protected: 


/* #line 22931 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmDwarfCompilationUnitPtrList > storageOf_cu_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfCompilationUnitList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfCompilationUnitList;
   };
/* #line 22951 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfConstructStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfConstructStorageClass  : public SgAsmDwarfInformationStorageClass
   {

    protected: 


/* #line 22966 "../../../src/frontend/SageIII//StorageClasses.h" */

      int storageOf_nesting_level;
      uint64_t storageOf_offset;
      uint64_t storageOf_overall_offset;
       EasyStorage < std::string > storageOf_name;
     unsigned long storageOf_source_position;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfConstruct* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfConstruct;
   };
/* #line 22990 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfArrayTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfArrayTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23005 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfArrayType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfArrayType;
   };
/* #line 23025 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfClassTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfClassTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23040 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfClassType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfClassType;
   };
/* #line 23060 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfEntryPointStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfEntryPointStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23075 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfEntryPoint* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfEntryPoint;
   };
/* #line 23094 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfEnumerationTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfEnumerationTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23109 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfEnumerationType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfEnumerationType;
   };
/* #line 23129 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfFormalParameterStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfFormalParameterStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23144 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfFormalParameter* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfFormalParameter;
   };
/* #line 23163 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfImportedDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfImportedDeclarationStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23178 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfImportedDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfImportedDeclaration;
   };
/* #line 23197 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfLabelStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfLabelStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23212 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfLabel* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfLabel;
   };
/* #line 23231 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfLexicalBlockStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfLexicalBlockStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23246 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfLexicalBlock* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfLexicalBlock;
   };
/* #line 23266 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfMemberStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfMemberStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23281 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfMember* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfMember;
   };
/* #line 23300 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfPointerTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfPointerTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23315 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfPointerType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfPointerType;
   };
/* #line 23334 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfReferenceTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfReferenceTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23349 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfReferenceType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfReferenceType;
   };
/* #line 23368 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfCompilationUnitStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfCompilationUnitStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23383 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < std::string > storageOf_producer;
       EasyStorage < std::string > storageOf_language;
      uint64_t storageOf_low_pc;
      uint64_t storageOf_hi_pc;
      int storageOf_version_stamp;
      uint64_t storageOf_abbrev_offset;
      uint64_t storageOf_address_size;
      uint64_t storageOf_offset_length;
     unsigned long storageOf_line_info;
     unsigned long storageOf_language_constructs;
     unsigned long storageOf_macro_info;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfCompilationUnit* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfCompilationUnit;
   };
/* #line 23413 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfStringTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfStringTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23428 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfStringType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfStringType;
   };
/* #line 23447 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfStructureTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfStructureTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23462 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfStructureType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfStructureType;
   };
/* #line 23482 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfSubroutineTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfSubroutineTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23497 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfSubroutineType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfSubroutineType;
   };
/* #line 23517 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfTypedefStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfTypedefStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23532 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfTypedef* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfTypedef;
   };
/* #line 23551 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfUnionTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfUnionTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23566 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfUnionType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfUnionType;
   };
/* #line 23586 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfUnspecifiedParametersStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfUnspecifiedParametersStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23601 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfUnspecifiedParameters* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfUnspecifiedParameters;
   };
/* #line 23620 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfVariantStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfVariantStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23635 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfVariant* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfVariant;
   };
/* #line 23654 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfCommonBlockStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfCommonBlockStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23669 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfCommonBlock* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfCommonBlock;
   };
/* #line 23689 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfCommonInclusionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfCommonInclusionStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23704 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfCommonInclusion* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfCommonInclusion;
   };
/* #line 23723 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfInheritanceStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfInheritanceStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23738 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfInheritance* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfInheritance;
   };
/* #line 23757 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfInlinedSubroutineStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfInlinedSubroutineStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23772 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfInlinedSubroutine* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfInlinedSubroutine;
   };
/* #line 23792 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfModuleStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfModuleStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23807 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfModule* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfModule;
   };
/* #line 23826 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfPtrToMemberTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfPtrToMemberTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23841 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfPtrToMemberType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfPtrToMemberType;
   };
/* #line 23860 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfSetTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfSetTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23875 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfSetType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfSetType;
   };
/* #line 23894 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfSubrangeTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfSubrangeTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23909 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfSubrangeType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfSubrangeType;
   };
/* #line 23928 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfWithStmtStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfWithStmtStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23943 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfWithStmt* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfWithStmt;
   };
/* #line 23962 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfAccessDeclarationStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfAccessDeclarationStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 23977 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfAccessDeclaration* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfAccessDeclaration;
   };
/* #line 23996 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfBaseTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfBaseTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24011 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfBaseType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfBaseType;
   };
/* #line 24030 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfCatchBlockStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfCatchBlockStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24045 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfCatchBlock* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfCatchBlock;
   };
/* #line 24064 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfConstTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfConstTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24079 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfConstType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfConstType;
   };
/* #line 24098 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfConstantStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfConstantStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24113 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfConstant* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfConstant;
   };
/* #line 24132 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfEnumeratorStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfEnumeratorStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24147 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfEnumerator* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfEnumerator;
   };
/* #line 24166 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfFileTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfFileTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24181 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfFileType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfFileType;
   };
/* #line 24200 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfFriendStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfFriendStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24215 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfFriend* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfFriend;
   };
/* #line 24234 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfNamelistStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfNamelistStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24249 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfNamelist* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfNamelist;
   };
/* #line 24268 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfNamelistItemStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfNamelistItemStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24283 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfNamelistItem* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfNamelistItem;
   };
/* #line 24302 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfPackedTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfPackedTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24317 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfPackedType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfPackedType;
   };
/* #line 24336 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfSubprogramStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfSubprogramStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24351 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfSubprogram* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfSubprogram;
   };
/* #line 24371 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfTemplateTypeParameterStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfTemplateTypeParameterStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24386 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfTemplateTypeParameter* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfTemplateTypeParameter;
   };
/* #line 24405 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfTemplateValueParameterStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfTemplateValueParameterStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24420 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfTemplateValueParameter* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfTemplateValueParameter;
   };
/* #line 24439 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfThrownTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfThrownTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24454 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfThrownType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfThrownType;
   };
/* #line 24473 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfTryBlockStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfTryBlockStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24488 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfTryBlock* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfTryBlock;
   };
/* #line 24507 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfVariantPartStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfVariantPartStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24522 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfVariantPart* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfVariantPart;
   };
/* #line 24541 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfVariableStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfVariableStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24556 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfVariable* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfVariable;
   };
/* #line 24575 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfVolatileTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfVolatileTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24590 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfVolatileType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfVolatileType;
   };
/* #line 24609 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfDwarfProcedureStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfDwarfProcedureStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24624 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfDwarfProcedure* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfDwarfProcedure;
   };
/* #line 24643 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfRestrictTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfRestrictTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24658 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfRestrictType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfRestrictType;
   };
/* #line 24677 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfInterfaceTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfInterfaceTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24692 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfInterfaceType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfInterfaceType;
   };
/* #line 24711 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfNamespaceStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfNamespaceStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24726 "../../../src/frontend/SageIII//StorageClasses.h" */

     unsigned long storageOf_body;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfNamespace* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfNamespace;
   };
/* #line 24746 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfImportedModuleStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfImportedModuleStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24761 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfImportedModule* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfImportedModule;
   };
/* #line 24780 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfUnspecifiedTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfUnspecifiedTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24795 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfUnspecifiedType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfUnspecifiedType;
   };
/* #line 24814 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfPartialUnitStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfPartialUnitStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24829 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfPartialUnit* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfPartialUnit;
   };
/* #line 24848 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfImportedUnitStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfImportedUnitStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24863 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfImportedUnit* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfImportedUnit;
   };
/* #line 24882 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfMutableTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfMutableTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24897 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfMutableType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfMutableType;
   };
/* #line 24916 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfConditionStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfConditionStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24931 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfCondition* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfCondition;
   };
/* #line 24950 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfSharedTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfSharedTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24965 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfSharedType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfSharedType;
   };
/* #line 24984 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfFormatLabelStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfFormatLabelStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 24999 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfFormatLabel* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfFormatLabel;
   };
/* #line 25018 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfFunctionTemplateStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfFunctionTemplateStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 25033 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfFunctionTemplate* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfFunctionTemplate;
   };
/* #line 25052 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfClassTemplateStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfClassTemplateStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 25067 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfClassTemplate* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfClassTemplate;
   };
/* #line 25086 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfUpcSharedTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfUpcSharedTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 25101 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfUpcSharedType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfUpcSharedType;
   };
/* #line 25120 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfUpcStrictTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfUpcStrictTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 25135 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfUpcStrictType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfUpcStrictType;
   };
/* #line 25154 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfUpcRelaxedTypeStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfUpcRelaxedTypeStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 25169 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfUpcRelaxedType* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfUpcRelaxedType;
   };
/* #line 25188 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfUnknownConstructStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfUnknownConstructStorageClass  : public SgAsmDwarfConstructStorageClass
   {

    protected: 


/* #line 25203 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfUnknownConstruct* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfUnknownConstruct;
   };
/* #line 25222 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmDwarfConstructListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmDwarfConstructListStorageClass  : public SgAsmDwarfInformationStorageClass
   {

    protected: 


/* #line 25237 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmDwarfConstructPtrList > storageOf_list;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmDwarfConstructList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmDwarfConstructList;
   };
/* #line 25257 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEImportItemStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEImportItemStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 25272 "../../../src/frontend/SageIII//StorageClasses.h" */

      bool storageOf_by_ordinal;
      unsigned storageOf_ordinal;
      unsigned storageOf_hint;
     unsigned long storageOf_name;
      rose_rva_t storageOf_hintname_rva;
      size_t storageOf_hintname_nalloc;
      rose_rva_t storageOf_bound_rva;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEImportItem* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEImportItem;
   };
/* #line 25298 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmPEImportItemListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmPEImportItemListStorageClass  : public SgAsmExecutableFileFormatStorageClass
   {

    protected: 


/* #line 25313 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmPEImportItemPtrList > storageOf_vector;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmPEImportItemList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmPEImportItemList;
   };
/* #line 25333 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmInterpretationListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmInterpretationListStorageClass  : public SgAsmNodeStorageClass
   {

    protected: 


/* #line 25348 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmInterpretationPtrList > storageOf_interpretations;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmInterpretationList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmInterpretationList;
   };
/* #line 25368 "../../../src/frontend/SageIII//StorageClasses.h" */



/* #line 1 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */
/* 
   JH (01/01/2006) ROSETTA generated class declarations for SgAsmGenericFileListStorageClass 
   used for the ast file IO. Do not chance by hand! 
*/
class SgAsmGenericFileListStorageClass  : public SgAsmNodeStorageClass
   {

    protected: 


/* #line 25383 "../../../src/frontend/SageIII//StorageClasses.h" */

       EasyStorage < SgAsmGenericFilePtrList > storageOf_files;


/* #line 10 "/home/demo/rose/src/ROSETTA/Grammar/grammarStorageClassDeclatationMacros.macro" */


    public:
      void pickOutIRNodeData ( SgAsmGenericFileList* source );
      static void arrangeStaticDataOfEasyStorageClassesInOneBlock ( );
      static void deleteStaticDataOfEasyStorageClasses ( );
      static void pickOutStaticDataMembers ( );
      static void rebuildStaticDataMembers ( );
      static void writeEasyStorageDataToFile (std::ostream& out);
      static void readEasyStorageDataFromFile (std::istream& in);
      static void writeStaticDataToFile (std::ostream& out );
      static void readStaticDataFromFile (std::istream& in );
      friend class SgAsmGenericFileList;
   };
/* #line 25403 "../../../src/frontend/SageIII//StorageClasses.h" */


