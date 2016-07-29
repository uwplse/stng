// GENERATED HEADER FILE --- DO NOT MODIFY!

enum E_SgSourceFile 
{
SgSourceFile_globalScope, SgSourceFile_package, SgSourceFile_import_list, SgSourceFile_class_list};
enum E_SgBinaryComposite 
{
SgBinaryComposite_genericFileList, SgBinaryComposite_interpretations};
enum E_SgUnknownFile 
{
SgUnknownFile_globalScope};
enum E_SgProject 
{
SgProject_fileList_ptr};
enum E_SgExpBaseClass 
{
SgExpBaseClass_base_class, SgExpBaseClass_base_class_exp};
enum E_SgBaseClass 
{
SgBaseClass_base_class};
enum E_SgTemplateParameter 
{
SgTemplateParameter_expression, SgTemplateParameter_defaultExpressionParameter, SgTemplateParameter_templateDeclaration, SgTemplateParameter_defaultTemplateDeclarationParameter, SgTemplateParameter_initializedName};
enum E_SgTemplateArgument 
{
SgTemplateArgument_expression, SgTemplateArgument_templateDeclaration, SgTemplateArgument_initializedName};
enum E_SgDirectory 
{
SgDirectory_fileList, SgDirectory_directoryList};
enum E_SgFileList 
{
SgFileList_listOfFiles};
enum E_SgDirectoryList 
{
SgDirectoryList_listOfDirectories};
enum E_SgTemplateArgumentList 
{
SgTemplateArgumentList_args};
enum E_SgTemplateParameterList 
{
SgTemplateParameterList_args};
enum E_SgJavaImportStatementList 
{
SgJavaImportStatementList_java_import_list};
enum E_SgJavaClassDeclarationList 
{
SgJavaClassDeclarationList_java_class_list};
enum E_SgTypeUnknown 
{
SgTypeUnknown_type_kind, SgTypeUnknown_builtin_type};
enum E_SgTypeChar 
{
SgTypeChar_type_kind, SgTypeChar_builtin_type};
enum E_SgTypeSignedChar 
{
SgTypeSignedChar_type_kind, SgTypeSignedChar_builtin_type};
enum E_SgTypeUnsignedChar 
{
SgTypeUnsignedChar_type_kind, SgTypeUnsignedChar_builtin_type};
enum E_SgTypeShort 
{
SgTypeShort_type_kind, SgTypeShort_builtin_type};
enum E_SgTypeSignedShort 
{
SgTypeSignedShort_type_kind, SgTypeSignedShort_builtin_type};
enum E_SgTypeUnsignedShort 
{
SgTypeUnsignedShort_type_kind, SgTypeUnsignedShort_builtin_type};
enum E_SgTypeInt 
{
SgTypeInt_type_kind, SgTypeInt_builtin_type};
enum E_SgTypeSignedInt 
{
SgTypeSignedInt_type_kind, SgTypeSignedInt_builtin_type};
enum E_SgTypeUnsignedInt 
{
SgTypeUnsignedInt_type_kind, SgTypeUnsignedInt_builtin_type};
enum E_SgTypeLong 
{
SgTypeLong_type_kind, SgTypeLong_builtin_type};
enum E_SgTypeSignedLong 
{
SgTypeSignedLong_type_kind, SgTypeSignedLong_builtin_type};
enum E_SgTypeUnsignedLong 
{
SgTypeUnsignedLong_type_kind, SgTypeUnsignedLong_builtin_type};
enum E_SgTypeVoid 
{
SgTypeVoid_type_kind, SgTypeVoid_builtin_type};
enum E_SgTypeGlobalVoid 
{
SgTypeGlobalVoid_type_kind, SgTypeGlobalVoid_builtin_type};
enum E_SgTypeWchar 
{
SgTypeWchar_type_kind, SgTypeWchar_builtin_type};
enum E_SgTypeFloat 
{
SgTypeFloat_type_kind, SgTypeFloat_builtin_type};
enum E_SgTypeDouble 
{
SgTypeDouble_type_kind, SgTypeDouble_builtin_type};
enum E_SgTypeLongLong 
{
SgTypeLongLong_type_kind, SgTypeLongLong_builtin_type};
enum E_SgTypeSignedLongLong 
{
SgTypeSignedLongLong_type_kind, SgTypeSignedLongLong_builtin_type};
enum E_SgTypeUnsignedLongLong 
{
SgTypeUnsignedLongLong_type_kind, SgTypeUnsignedLongLong_builtin_type};
enum E_SgTypeSigned128bitInteger 
{
SgTypeSigned128bitInteger_type_kind, SgTypeSigned128bitInteger_builtin_type};
enum E_SgTypeUnsigned128bitInteger 
{
SgTypeUnsigned128bitInteger_type_kind, SgTypeUnsigned128bitInteger_builtin_type};
enum E_SgTypeLongDouble 
{
SgTypeLongDouble_type_kind, SgTypeLongDouble_builtin_type};
enum E_SgTypeString 
{
SgTypeString_type_kind, SgTypeString_lengthExpression};
enum E_SgTypeBool 
{
SgTypeBool_type_kind, SgTypeBool_builtin_type};
enum E_SgPointerMemberType 
{
SgPointerMemberType_type_kind, SgPointerMemberType_base_type};
enum E_SgPointerType 
{
SgPointerType_type_kind, SgPointerType_base_type};
enum E_SgReferenceType 
{
SgReferenceType_type_kind};
enum E_SgJavaParameterType 
{
SgJavaParameterType_type_kind, SgJavaParameterType_builtin_type, SgJavaParameterType_declaration};
enum E_SgClassType 
{
SgClassType_type_kind, SgClassType_builtin_type, SgClassType_declaration};
enum E_SgJavaParameterizedType 
{
SgJavaParameterizedType_type_kind, SgJavaParameterizedType_builtin_type, SgJavaParameterizedType_declaration};
enum E_SgJavaQualifiedType 
{
SgJavaQualifiedType_type_kind, SgJavaQualifiedType_builtin_type, SgJavaQualifiedType_declaration};
enum E_SgEnumType 
{
SgEnumType_type_kind, SgEnumType_builtin_type, SgEnumType_declaration};
enum E_SgTypedefType 
{
SgTypedefType_type_kind, SgTypedefType_builtin_type, SgTypedefType_declaration};
enum E_SgJavaWildcardType 
{
SgJavaWildcardType_type_kind, SgJavaWildcardType_builtin_type, SgJavaWildcardType_declaration};
enum E_SgNamedType 
{
SgNamedType_type_kind, SgNamedType_builtin_type, SgNamedType_declaration};
enum E_SgModifierType 
{
SgModifierType_type_kind, SgModifierType_base_type};
enum E_SgPartialFunctionModifierType 
{
SgPartialFunctionModifierType_type_kind, SgPartialFunctionModifierType_return_type, SgPartialFunctionModifierType_orig_return_type, SgPartialFunctionModifierType_builtin_type};
enum E_SgPartialFunctionType 
{
SgPartialFunctionType_type_kind, SgPartialFunctionType_return_type, SgPartialFunctionType_orig_return_type};
enum E_SgMemberFunctionType 
{
SgMemberFunctionType_type_kind, SgMemberFunctionType_return_type, SgMemberFunctionType_orig_return_type};
enum E_SgFunctionType 
{
SgFunctionType_type_kind, SgFunctionType_return_type, SgFunctionType_orig_return_type};
enum E_SgArrayType 
{
SgArrayType_type_kind, SgArrayType_index, SgArrayType_dim_info};
enum E_SgTypeEllipse 
{
SgTypeEllipse_type_kind, SgTypeEllipse_builtin_type};
enum E_SgTemplateType 
{
SgTemplateType_type_kind};
enum E_SgQualifiedNameType 
{
SgQualifiedNameType_type_kind};
enum E_SgTypeComplex 
{
SgTypeComplex_type_kind};
enum E_SgTypeImaginary 
{
SgTypeImaginary_type_kind};
enum E_SgTypeDefault 
{
SgTypeDefault_type_kind, SgTypeDefault_builtin_type};
enum E_SgTypeCAFTeam 
{
SgTypeCAFTeam_type_kind, SgTypeCAFTeam_builtin_type};
enum E_SgTypeCrayPointer 
{
SgTypeCrayPointer_type_kind, SgTypeCrayPointer_builtin_type};
enum E_SgTypeLabel 
{
SgTypeLabel_type_kind, SgTypeLabel_builtin_type};
enum E_SgJavaUnionType 
{
SgJavaUnionType_type_kind};
enum E_SgRvalueReferenceType 
{
SgRvalueReferenceType_type_kind};
enum E_SgTypeNullptr 
{
SgTypeNullptr_type_kind, SgTypeNullptr_builtin_type};
enum E_SgDeclType 
{
SgDeclType_type_kind};
enum E_SgTypeOfType 
{
SgTypeOfType_type_kind};
enum E_SgTypeMatrix 
{
SgTypeMatrix_type_kind, SgTypeMatrix_builtin_type};
enum E_SgTypeTuple 
{
SgTypeTuple_type_kind, SgTypeTuple_builtin_type};
enum E_SgType 
{
SgType_type_kind};
enum E_SgCommonBlockObject 
{
SgCommonBlockObject_variable_reference_list};
enum E_SgInitializedName 
{
SgInitializedName_initptr};
enum E_SgJavaMemberValuePair 
{
SgJavaMemberValuePair_value};
enum E_SgOmpCollapseClause 
{
SgOmpCollapseClause_expression};
enum E_SgOmpIfClause 
{
SgOmpIfClause_expression};
enum E_SgOmpNumThreadsClause 
{
SgOmpNumThreadsClause_expression};
enum E_SgOmpDeviceClause 
{
SgOmpDeviceClause_expression};
enum E_SgOmpSafelenClause 
{
SgOmpSafelenClause_expression};
enum E_SgOmpExpressionClause 
{
SgOmpExpressionClause_expression};
enum E_SgOmpCopyprivateClause 
{
SgOmpCopyprivateClause_variables};
enum E_SgOmpPrivateClause 
{
SgOmpPrivateClause_variables};
enum E_SgOmpFirstprivateClause 
{
SgOmpFirstprivateClause_variables};
enum E_SgOmpSharedClause 
{
SgOmpSharedClause_variables};
enum E_SgOmpCopyinClause 
{
SgOmpCopyinClause_variables};
enum E_SgOmpLastprivateClause 
{
SgOmpLastprivateClause_variables};
enum E_SgOmpReductionClause 
{
SgOmpReductionClause_variables};
enum E_SgOmpMapClause 
{
SgOmpMapClause_variables};
enum E_SgOmpLinearClause 
{
SgOmpLinearClause_variables};
enum E_SgOmpUniformClause 
{
SgOmpUniformClause_variables};
enum E_SgOmpAlignedClause 
{
SgOmpAlignedClause_variables};
enum E_SgOmpVariablesClause 
{
SgOmpVariablesClause_variables};
enum E_SgOmpScheduleClause 
{
SgOmpScheduleClause_chunk_size};
enum E_SgUntypedUnaryOperator 
{
SgUntypedUnaryOperator_operand};
enum E_SgUntypedBinaryOperator 
{
SgUntypedBinaryOperator_lhs_operand, SgUntypedBinaryOperator_rhs_operand};
enum E_SgUntypedVariableDeclaration 
{
SgUntypedVariableDeclaration_parameters};
enum E_SgUntypedProgramHeaderDeclaration 
{
SgUntypedProgramHeaderDeclaration_parameters, SgUntypedProgramHeaderDeclaration_scope, SgUntypedProgramHeaderDeclaration_end_statement};
enum E_SgUntypedSubroutineDeclaration 
{
SgUntypedSubroutineDeclaration_parameters, SgUntypedSubroutineDeclaration_scope, SgUntypedSubroutineDeclaration_end_statement};
enum E_SgUntypedFunctionDeclaration 
{
SgUntypedFunctionDeclaration_parameters, SgUntypedFunctionDeclaration_scope, SgUntypedFunctionDeclaration_end_statement};
enum E_SgUntypedModuleDeclaration 
{
SgUntypedModuleDeclaration_scope, SgUntypedModuleDeclaration_end_statement};
enum E_SgUntypedAssignmentStatement 
{
SgUntypedAssignmentStatement_lhs_operand, SgUntypedAssignmentStatement_rhs_operand};
enum E_SgUntypedBlockStatement 
{
SgUntypedBlockStatement_scope};
enum E_SgUntypedFunctionScope 
{
SgUntypedFunctionScope_declaration_list, SgUntypedFunctionScope_statement_list, SgUntypedFunctionScope_function_list};
enum E_SgUntypedModuleScope 
{
SgUntypedModuleScope_declaration_list, SgUntypedModuleScope_statement_list, SgUntypedModuleScope_function_list};
enum E_SgUntypedGlobalScope 
{
SgUntypedGlobalScope_declaration_list, SgUntypedGlobalScope_statement_list, SgUntypedGlobalScope_function_list};
enum E_SgUntypedScope 
{
SgUntypedScope_declaration_list, SgUntypedScope_statement_list, SgUntypedScope_function_list};
enum E_SgUntypedArrayType 
{
SgUntypedArrayType_type_kind};
enum E_SgUntypedType 
{
SgUntypedType_type_kind};
enum E_SgUntypedFile 
{
SgUntypedFile_scope};
enum E_SgUntypedStatementList 
{
SgUntypedStatementList_stmt_list};
enum E_SgUntypedDeclarationStatementList 
{
SgUntypedDeclarationStatementList_decl_list};
enum E_SgUntypedFunctionDeclarationList 
{
SgUntypedFunctionDeclarationList_func_list};
enum E_SgUntypedInitializedNameList 
{
SgUntypedInitializedNameList_name_list};
enum E_SgLambdaCapture 
{
SgLambdaCapture_capture_variable, SgLambdaCapture_source_closure_variable, SgLambdaCapture_closure_variable};
enum E_SgLambdaCaptureList 
{
SgLambdaCaptureList_capture_list};
enum E_SgGlobal 
{
SgGlobal_declarations};
enum E_SgBasicBlock 
{
SgBasicBlock_statements};
enum E_SgIfStmt 
{
SgIfStmt_conditional, SgIfStmt_true_body, SgIfStmt_false_body};
enum E_SgForStatement 
{
SgForStatement_for_init_stmt, SgForStatement_test, SgForStatement_increment, SgForStatement_loop_body, SgForStatement_else_body};
enum E_SgTemplateFunctionDefinition 
{
SgTemplateFunctionDefinition_body};
enum E_SgFunctionDefinition 
{
SgFunctionDefinition_body};
enum E_SgTemplateInstantiationDefn 
{
SgTemplateInstantiationDefn_members};
enum E_SgTemplateClassDefinition 
{
SgTemplateClassDefinition_members};
enum E_SgClassDefinition 
{
SgClassDefinition_members};
enum E_SgWhileStmt 
{
SgWhileStmt_condition, SgWhileStmt_body, SgWhileStmt_else_body};
enum E_SgDoWhileStmt 
{
SgDoWhileStmt_body, SgDoWhileStmt_condition};
enum E_SgSwitchStatement 
{
SgSwitchStatement_item_selector, SgSwitchStatement_body};
enum E_SgCatchOptionStmt 
{
SgCatchOptionStmt_condition, SgCatchOptionStmt_body};
enum E_SgNamespaceDefinitionStatement 
{
SgNamespaceDefinitionStatement_declarations};
enum E_SgAssociateStatement 
{
SgAssociateStatement_variable_declaration, SgAssociateStatement_body};
enum E_SgFortranNonblockedDo 
{
SgFortranNonblockedDo_initialization, SgFortranNonblockedDo_bound, SgFortranNonblockedDo_increment, SgFortranNonblockedDo_body};
enum E_SgFortranDo 
{
SgFortranDo_initialization, SgFortranDo_bound, SgFortranDo_increment, SgFortranDo_body};
enum E_SgForAllStatement 
{
SgForAllStatement_forall_header, SgForAllStatement_body};
enum E_SgUpcForAllStatement 
{
SgUpcForAllStatement_for_init_stmt, SgUpcForAllStatement_test, SgUpcForAllStatement_increment, SgUpcForAllStatement_affinity, SgUpcForAllStatement_loop_body};
enum E_SgCAFWithTeamStatement 
{
SgCAFWithTeamStatement_body};
enum E_SgJavaForEachStatement 
{
SgJavaForEachStatement_element, SgJavaForEachStatement_collection, SgJavaForEachStatement_loop_body};
enum E_SgJavaLabelStatement 
{
SgJavaLabelStatement_statement};
enum E_SgMatlabForStatement 
{
SgMatlabForStatement_index, SgMatlabForStatement_range, SgMatlabForStatement_body};
enum E_SgFunctionParameterList 
{
SgFunctionParameterList_args};
enum E_SgTemplateVariableDeclaration 
{
SgTemplateVariableDeclaration_baseTypeDefiningDeclaration, SgTemplateVariableDeclaration_variables};
enum E_SgVariableDeclaration 
{
SgVariableDeclaration_baseTypeDefiningDeclaration, SgVariableDeclaration_variables};
enum E_SgVariableDefinition 
{
SgVariableDefinition_vardefn, SgVariableDefinition_bitfield};
enum E_SgEnumDeclaration 
{
SgEnumDeclaration_enumerators};
enum E_SgAsmStmt 
{
SgAsmStmt_operands};
enum E_SgTemplateInstantiationDirectiveStatement 
{
SgTemplateInstantiationDirectiveStatement_declaration};
enum E_SgUseStatement 
{
SgUseStatement_rename_list};
enum E_SgNamespaceDeclarationStatement 
{
SgNamespaceDeclarationStatement_definition};
enum E_SgInterfaceStatement 
{
SgInterfaceStatement_interface_body_list};
enum E_SgCommonBlock 
{
SgCommonBlock_block_list};
enum E_SgTemplateTypedefDeclaration 
{
SgTemplateTypedefDeclaration_declaration};
enum E_SgTemplateInstantiationTypedefDeclaration 
{
SgTemplateInstantiationTypedefDeclaration_declaration};
enum E_SgTypedefDeclaration 
{
SgTypedefDeclaration_declaration};
enum E_SgStatementFunctionStatement 
{
SgStatementFunctionStatement_function, SgStatementFunctionStatement_expression};
enum E_SgCtorInitializerList 
{
SgCtorInitializerList_ctors};
enum E_SgPragmaDeclaration 
{
SgPragmaDeclaration_pragma};
enum E_SgTemplateClassDeclaration 
{
SgTemplateClassDeclaration_definition, SgTemplateClassDeclaration_decoratorList};
enum E_SgTemplateInstantiationDecl 
{
SgTemplateInstantiationDecl_definition, SgTemplateInstantiationDecl_decoratorList};
enum E_SgDerivedTypeStatement 
{
SgDerivedTypeStatement_definition, SgDerivedTypeStatement_decoratorList};
enum E_SgModuleStatement 
{
SgModuleStatement_definition, SgModuleStatement_decoratorList};
enum E_SgJavaPackageDeclaration 
{
SgJavaPackageDeclaration_definition, SgJavaPackageDeclaration_decoratorList};
enum E_SgClassDeclaration 
{
SgClassDeclaration_definition, SgClassDeclaration_decoratorList};
enum E_SgImplicitStatement 
{
SgImplicitStatement_variables};
enum E_SgTemplateFunctionDeclaration 
{
SgTemplateFunctionDeclaration_parameterList, SgTemplateFunctionDeclaration_decoratorList, SgTemplateFunctionDeclaration_definition};
enum E_SgTemplateMemberFunctionDeclaration 
{
SgTemplateMemberFunctionDeclaration_parameterList, SgTemplateMemberFunctionDeclaration_decoratorList, SgTemplateMemberFunctionDeclaration_definition, SgTemplateMemberFunctionDeclaration_CtorInitializerList};
enum E_SgTemplateInstantiationMemberFunctionDecl 
{
SgTemplateInstantiationMemberFunctionDecl_parameterList, SgTemplateInstantiationMemberFunctionDecl_decoratorList, SgTemplateInstantiationMemberFunctionDecl_definition, SgTemplateInstantiationMemberFunctionDecl_CtorInitializerList};
enum E_SgMemberFunctionDeclaration 
{
SgMemberFunctionDeclaration_parameterList, SgMemberFunctionDeclaration_decoratorList, SgMemberFunctionDeclaration_definition, SgMemberFunctionDeclaration_CtorInitializerList};
enum E_SgTemplateInstantiationFunctionDecl 
{
SgTemplateInstantiationFunctionDecl_parameterList, SgTemplateInstantiationFunctionDecl_decoratorList, SgTemplateInstantiationFunctionDecl_definition};
enum E_SgProgramHeaderStatement 
{
SgProgramHeaderStatement_parameterList, SgProgramHeaderStatement_decoratorList, SgProgramHeaderStatement_definition};
enum E_SgProcedureHeaderStatement 
{
SgProcedureHeaderStatement_parameterList, SgProcedureHeaderStatement_decoratorList, SgProcedureHeaderStatement_definition, SgProcedureHeaderStatement_result_name};
enum E_SgEntryStatement 
{
SgEntryStatement_parameterList, SgEntryStatement_decoratorList, SgEntryStatement_definition, SgEntryStatement_result_name};
enum E_SgFunctionDeclaration 
{
SgFunctionDeclaration_parameterList, SgFunctionDeclaration_decoratorList, SgFunctionDeclaration_definition};
enum E_SgIncludeDirectiveStatement 
{
SgIncludeDirectiveStatement_headerFileBody};
enum E_SgOmpThreadprivateStatement 
{
SgOmpThreadprivateStatement_variables};
enum E_SgStmtDeclarationStatement 
{
SgStmtDeclarationStatement_statement};
enum E_SgExprStatement 
{
SgExprStatement_expression};
enum E_SgCaseOptionStmt 
{
SgCaseOptionStmt_key, SgCaseOptionStmt_body, SgCaseOptionStmt_key_range_end};
enum E_SgTryStmt 
{
SgTryStmt_body, SgTryStmt_catch_statement_seq_root, SgTryStmt_else_body, SgTryStmt_finally_body};
enum E_SgDefaultOptionStmt 
{
SgDefaultOptionStmt_body};
enum E_SgReturnStmt 
{
SgReturnStmt_expression};
enum E_SgSpawnStmt 
{
SgSpawnStmt_the_func};
enum E_SgForInitStatement 
{
SgForInitStatement_init_stmt};
enum E_SgCatchStatementSeq 
{
SgCatchStatementSeq_catch_statement_seq};
enum E_SgPrintStatement 
{
SgPrintStatement_io_stmt_list, SgPrintStatement_unit, SgPrintStatement_iostat, SgPrintStatement_err, SgPrintStatement_iomsg, SgPrintStatement_format};
enum E_SgReadStatement 
{
SgReadStatement_io_stmt_list, SgReadStatement_unit, SgReadStatement_iostat, SgReadStatement_err, SgReadStatement_iomsg, SgReadStatement_format, SgReadStatement_rec, SgReadStatement_end, SgReadStatement_namelist, SgReadStatement_advance, SgReadStatement_size, SgReadStatement_eor, SgReadStatement_asynchronous};
enum E_SgWriteStatement 
{
SgWriteStatement_io_stmt_list, SgWriteStatement_unit, SgWriteStatement_iostat, SgWriteStatement_err, SgWriteStatement_iomsg, SgWriteStatement_format, SgWriteStatement_rec, SgWriteStatement_namelist, SgWriteStatement_advance, SgWriteStatement_asynchronous};
enum E_SgOpenStatement 
{
SgOpenStatement_io_stmt_list, SgOpenStatement_unit, SgOpenStatement_iostat, SgOpenStatement_err, SgOpenStatement_iomsg, SgOpenStatement_file, SgOpenStatement_status, SgOpenStatement_access, SgOpenStatement_form, SgOpenStatement_recl, SgOpenStatement_blank, SgOpenStatement_position, SgOpenStatement_action, SgOpenStatement_delim, SgOpenStatement_pad, SgOpenStatement_round, SgOpenStatement_sign, SgOpenStatement_asynchronous};
enum E_SgCloseStatement 
{
SgCloseStatement_io_stmt_list, SgCloseStatement_unit, SgCloseStatement_iostat, SgCloseStatement_err, SgCloseStatement_iomsg, SgCloseStatement_status};
enum E_SgInquireStatement 
{
SgInquireStatement_io_stmt_list, SgInquireStatement_unit, SgInquireStatement_iostat, SgInquireStatement_err, SgInquireStatement_iomsg};
enum E_SgFlushStatement 
{
SgFlushStatement_io_stmt_list, SgFlushStatement_unit, SgFlushStatement_iostat, SgFlushStatement_err, SgFlushStatement_iomsg};
enum E_SgBackspaceStatement 
{
SgBackspaceStatement_io_stmt_list, SgBackspaceStatement_unit, SgBackspaceStatement_iostat, SgBackspaceStatement_err, SgBackspaceStatement_iomsg};
enum E_SgRewindStatement 
{
SgRewindStatement_io_stmt_list, SgRewindStatement_unit, SgRewindStatement_iostat, SgRewindStatement_err, SgRewindStatement_iomsg};
enum E_SgEndfileStatement 
{
SgEndfileStatement_io_stmt_list, SgEndfileStatement_unit, SgEndfileStatement_iostat, SgEndfileStatement_err, SgEndfileStatement_iomsg};
enum E_SgWaitStatement 
{
SgWaitStatement_io_stmt_list, SgWaitStatement_unit, SgWaitStatement_iostat, SgWaitStatement_err, SgWaitStatement_iomsg};
enum E_SgIOStatement 
{
SgIOStatement_io_stmt_list, SgIOStatement_unit, SgIOStatement_iostat, SgIOStatement_err, SgIOStatement_iomsg};
enum E_SgWhereStatement 
{
SgWhereStatement_condition, SgWhereStatement_body, SgWhereStatement_elsewhere};
enum E_SgElseWhereStatement 
{
SgElseWhereStatement_condition, SgElseWhereStatement_body, SgElseWhereStatement_elsewhere};
enum E_SgNullifyStatement 
{
SgNullifyStatement_pointer_list};
enum E_SgArithmeticIfStatement 
{
SgArithmeticIfStatement_conditional};
enum E_SgAssignStatement 
{
SgAssignStatement_value};
enum E_SgComputedGotoStatement 
{
SgComputedGotoStatement_labelList, SgComputedGotoStatement_label_index};
enum E_SgAssignedGotoStatement 
{
SgAssignedGotoStatement_targets};
enum E_SgAllocateStatement 
{
SgAllocateStatement_expr_list, SgAllocateStatement_stat_expression, SgAllocateStatement_errmsg_expression, SgAllocateStatement_source_expression};
enum E_SgDeallocateStatement 
{
SgDeallocateStatement_expr_list, SgDeallocateStatement_stat_expression, SgDeallocateStatement_errmsg_expression};
enum E_SgUpcNotifyStatement 
{
SgUpcNotifyStatement_notify_expression};
enum E_SgUpcWaitStatement 
{
SgUpcWaitStatement_wait_expression};
enum E_SgUpcBarrierStatement 
{
SgUpcBarrierStatement_barrier_expression};
enum E_SgOmpFlushStatement 
{
SgOmpFlushStatement_variables};
enum E_SgOmpAtomicStatement 
{
SgOmpAtomicStatement_body};
enum E_SgOmpMasterStatement 
{
SgOmpMasterStatement_body};
enum E_SgOmpOrderedStatement 
{
SgOmpOrderedStatement_body};
enum E_SgOmpCriticalStatement 
{
SgOmpCriticalStatement_body};
enum E_SgOmpSectionStatement 
{
SgOmpSectionStatement_body};
enum E_SgOmpWorkshareStatement 
{
SgOmpWorkshareStatement_body};
enum E_SgOmpParallelStatement 
{
SgOmpParallelStatement_body, SgOmpParallelStatement_clauses};
enum E_SgOmpSingleStatement 
{
SgOmpSingleStatement_body, SgOmpSingleStatement_clauses};
enum E_SgOmpTaskStatement 
{
SgOmpTaskStatement_body, SgOmpTaskStatement_clauses};
enum E_SgOmpForStatement 
{
SgOmpForStatement_body, SgOmpForStatement_clauses};
enum E_SgOmpDoStatement 
{
SgOmpDoStatement_body, SgOmpDoStatement_clauses};
enum E_SgOmpSectionsStatement 
{
SgOmpSectionsStatement_body, SgOmpSectionsStatement_clauses};
enum E_SgOmpTargetStatement 
{
SgOmpTargetStatement_body, SgOmpTargetStatement_clauses};
enum E_SgOmpTargetDataStatement 
{
SgOmpTargetDataStatement_body, SgOmpTargetDataStatement_clauses};
enum E_SgOmpSimdStatement 
{
SgOmpSimdStatement_body, SgOmpSimdStatement_clauses};
enum E_SgOmpClauseBodyStatement 
{
SgOmpClauseBodyStatement_body, SgOmpClauseBodyStatement_clauses};
enum E_SgOmpBodyStatement 
{
SgOmpBodyStatement_body};
enum E_SgWithStatement 
{
SgWithStatement_expression, SgWithStatement_body};
enum E_SgPythonPrintStmt 
{
SgPythonPrintStmt_destination, SgPythonPrintStmt_values};
enum E_SgAssertStmt 
{
SgAssertStmt_test, SgAssertStmt_exception_argument};
enum E_SgExecStatement 
{
SgExecStatement_executable, SgExecStatement_globals, SgExecStatement_locals};
enum E_SgPythonGlobalStmt 
{
SgPythonGlobalStmt_names};
enum E_SgJavaSynchronizedStatement 
{
SgJavaSynchronizedStatement_expression, SgJavaSynchronizedStatement_body};
enum E_SgAsyncStmt 
{
SgAsyncStmt_body};
enum E_SgFinishStmt 
{
SgFinishStmt_body};
enum E_SgAtStmt 
{
SgAtStmt_expression, SgAtStmt_body};
enum E_SgAtomicStmt 
{
SgAtomicStmt_body};
enum E_SgWhenStmt 
{
SgWhenStmt_expression, SgWhenStmt_body};
enum E_SgExpressionRoot 
{
SgExpressionRoot_operand_i};
enum E_SgMinusOp 
{
SgMinusOp_operand_i};
enum E_SgUnaryAddOp 
{
SgUnaryAddOp_operand_i};
enum E_SgNotOp 
{
SgNotOp_operand_i};
enum E_SgPointerDerefExp 
{
SgPointerDerefExp_operand_i};
enum E_SgAddressOfOp 
{
SgAddressOfOp_operand_i};
enum E_SgMinusMinusOp 
{
SgMinusMinusOp_operand_i};
enum E_SgPlusPlusOp 
{
SgPlusPlusOp_operand_i};
enum E_SgBitComplementOp 
{
SgBitComplementOp_operand_i};
enum E_SgCastExp 
{
SgCastExp_operand_i};
enum E_SgThrowOp 
{
SgThrowOp_operand_i};
enum E_SgRealPartOp 
{
SgRealPartOp_operand_i};
enum E_SgImagPartOp 
{
SgImagPartOp_operand_i};
enum E_SgConjugateOp 
{
SgConjugateOp_operand_i};
enum E_SgUserDefinedUnaryOp 
{
SgUserDefinedUnaryOp_operand_i};
enum E_SgMatrixTransposeOp 
{
SgMatrixTransposeOp_operand_i};
enum E_SgUnaryOp 
{
SgUnaryOp_operand_i};
enum E_SgArrowExp 
{
SgArrowExp_lhs_operand_i, SgArrowExp_rhs_operand_i};
enum E_SgDotExp 
{
SgDotExp_lhs_operand_i, SgDotExp_rhs_operand_i};
enum E_SgDotStarOp 
{
SgDotStarOp_lhs_operand_i, SgDotStarOp_rhs_operand_i};
enum E_SgArrowStarOp 
{
SgArrowStarOp_lhs_operand_i, SgArrowStarOp_rhs_operand_i};
enum E_SgEqualityOp 
{
SgEqualityOp_lhs_operand_i, SgEqualityOp_rhs_operand_i};
enum E_SgLessThanOp 
{
SgLessThanOp_lhs_operand_i, SgLessThanOp_rhs_operand_i};
enum E_SgGreaterThanOp 
{
SgGreaterThanOp_lhs_operand_i, SgGreaterThanOp_rhs_operand_i};
enum E_SgNotEqualOp 
{
SgNotEqualOp_lhs_operand_i, SgNotEqualOp_rhs_operand_i};
enum E_SgLessOrEqualOp 
{
SgLessOrEqualOp_lhs_operand_i, SgLessOrEqualOp_rhs_operand_i};
enum E_SgGreaterOrEqualOp 
{
SgGreaterOrEqualOp_lhs_operand_i, SgGreaterOrEqualOp_rhs_operand_i};
enum E_SgAddOp 
{
SgAddOp_lhs_operand_i, SgAddOp_rhs_operand_i};
enum E_SgSubtractOp 
{
SgSubtractOp_lhs_operand_i, SgSubtractOp_rhs_operand_i};
enum E_SgMultiplyOp 
{
SgMultiplyOp_lhs_operand_i, SgMultiplyOp_rhs_operand_i};
enum E_SgDivideOp 
{
SgDivideOp_lhs_operand_i, SgDivideOp_rhs_operand_i};
enum E_SgIntegerDivideOp 
{
SgIntegerDivideOp_lhs_operand_i, SgIntegerDivideOp_rhs_operand_i};
enum E_SgModOp 
{
SgModOp_lhs_operand_i, SgModOp_rhs_operand_i};
enum E_SgAndOp 
{
SgAndOp_lhs_operand_i, SgAndOp_rhs_operand_i};
enum E_SgOrOp 
{
SgOrOp_lhs_operand_i, SgOrOp_rhs_operand_i};
enum E_SgBitXorOp 
{
SgBitXorOp_lhs_operand_i, SgBitXorOp_rhs_operand_i};
enum E_SgBitAndOp 
{
SgBitAndOp_lhs_operand_i, SgBitAndOp_rhs_operand_i};
enum E_SgBitOrOp 
{
SgBitOrOp_lhs_operand_i, SgBitOrOp_rhs_operand_i};
enum E_SgCommaOpExp 
{
SgCommaOpExp_lhs_operand_i, SgCommaOpExp_rhs_operand_i};
enum E_SgLshiftOp 
{
SgLshiftOp_lhs_operand_i, SgLshiftOp_rhs_operand_i};
enum E_SgRshiftOp 
{
SgRshiftOp_lhs_operand_i, SgRshiftOp_rhs_operand_i};
enum E_SgPntrArrRefExp 
{
SgPntrArrRefExp_lhs_operand_i, SgPntrArrRefExp_rhs_operand_i};
enum E_SgScopeOp 
{
SgScopeOp_lhs_operand_i, SgScopeOp_rhs_operand_i};
enum E_SgAssignOp 
{
SgAssignOp_lhs_operand_i, SgAssignOp_rhs_operand_i};
enum E_SgExponentiationOp 
{
SgExponentiationOp_lhs_operand_i, SgExponentiationOp_rhs_operand_i};
enum E_SgJavaUnsignedRshiftOp 
{
SgJavaUnsignedRshiftOp_lhs_operand_i, SgJavaUnsignedRshiftOp_rhs_operand_i};
enum E_SgConcatenationOp 
{
SgConcatenationOp_lhs_operand_i, SgConcatenationOp_rhs_operand_i};
enum E_SgPointerAssignOp 
{
SgPointerAssignOp_lhs_operand_i, SgPointerAssignOp_rhs_operand_i};
enum E_SgUserDefinedBinaryOp 
{
SgUserDefinedBinaryOp_lhs_operand_i, SgUserDefinedBinaryOp_rhs_operand_i};
enum E_SgPlusAssignOp 
{
SgPlusAssignOp_lhs_operand_i, SgPlusAssignOp_rhs_operand_i};
enum E_SgMinusAssignOp 
{
SgMinusAssignOp_lhs_operand_i, SgMinusAssignOp_rhs_operand_i};
enum E_SgAndAssignOp 
{
SgAndAssignOp_lhs_operand_i, SgAndAssignOp_rhs_operand_i};
enum E_SgIorAssignOp 
{
SgIorAssignOp_lhs_operand_i, SgIorAssignOp_rhs_operand_i};
enum E_SgMultAssignOp 
{
SgMultAssignOp_lhs_operand_i, SgMultAssignOp_rhs_operand_i};
enum E_SgDivAssignOp 
{
SgDivAssignOp_lhs_operand_i, SgDivAssignOp_rhs_operand_i};
enum E_SgModAssignOp 
{
SgModAssignOp_lhs_operand_i, SgModAssignOp_rhs_operand_i};
enum E_SgXorAssignOp 
{
SgXorAssignOp_lhs_operand_i, SgXorAssignOp_rhs_operand_i};
enum E_SgLshiftAssignOp 
{
SgLshiftAssignOp_lhs_operand_i, SgLshiftAssignOp_rhs_operand_i};
enum E_SgRshiftAssignOp 
{
SgRshiftAssignOp_lhs_operand_i, SgRshiftAssignOp_rhs_operand_i};
enum E_SgJavaUnsignedRshiftAssignOp 
{
SgJavaUnsignedRshiftAssignOp_lhs_operand_i, SgJavaUnsignedRshiftAssignOp_rhs_operand_i};
enum E_SgIntegerDivideAssignOp 
{
SgIntegerDivideAssignOp_lhs_operand_i, SgIntegerDivideAssignOp_rhs_operand_i};
enum E_SgExponentiationAssignOp 
{
SgExponentiationAssignOp_lhs_operand_i, SgExponentiationAssignOp_rhs_operand_i};
enum E_SgCompoundAssignOp 
{
SgCompoundAssignOp_lhs_operand_i, SgCompoundAssignOp_rhs_operand_i};
enum E_SgMembershipOp 
{
SgMembershipOp_lhs_operand_i, SgMembershipOp_rhs_operand_i};
enum E_SgNonMembershipOp 
{
SgNonMembershipOp_lhs_operand_i, SgNonMembershipOp_rhs_operand_i};
enum E_SgIsOp 
{
SgIsOp_lhs_operand_i, SgIsOp_rhs_operand_i};
enum E_SgIsNotOp 
{
SgIsNotOp_lhs_operand_i, SgIsNotOp_rhs_operand_i};
enum E_SgDotDotExp 
{
SgDotDotExp_lhs_operand_i, SgDotDotExp_rhs_operand_i};
enum E_SgElementwiseMultiplyOp 
{
SgElementwiseMultiplyOp_lhs_operand_i, SgElementwiseMultiplyOp_rhs_operand_i};
enum E_SgElementwisePowerOp 
{
SgElementwisePowerOp_lhs_operand_i, SgElementwisePowerOp_rhs_operand_i};
enum E_SgElementwiseLeftDivideOp 
{
SgElementwiseLeftDivideOp_lhs_operand_i, SgElementwiseLeftDivideOp_rhs_operand_i};
enum E_SgElementwiseDivideOp 
{
SgElementwiseDivideOp_lhs_operand_i, SgElementwiseDivideOp_rhs_operand_i};
enum E_SgElementwiseAddOp 
{
SgElementwiseAddOp_lhs_operand_i, SgElementwiseAddOp_rhs_operand_i};
enum E_SgElementwiseSubtractOp 
{
SgElementwiseSubtractOp_lhs_operand_i, SgElementwiseSubtractOp_rhs_operand_i};
enum E_SgElementwiseOp 
{
SgElementwiseOp_lhs_operand_i, SgElementwiseOp_rhs_operand_i};
enum E_SgPowerOp 
{
SgPowerOp_lhs_operand_i, SgPowerOp_rhs_operand_i};
enum E_SgLeftDivideOp 
{
SgLeftDivideOp_lhs_operand_i, SgLeftDivideOp_rhs_operand_i};
enum E_SgBinaryOp 
{
SgBinaryOp_lhs_operand_i, SgBinaryOp_rhs_operand_i};
enum E_SgListExp 
{
SgListExp_expressions};
enum E_SgTupleExp 
{
SgTupleExp_expressions};
enum E_SgMatrixExp 
{
SgMatrixExp_expressions};
enum E_SgExprListExp 
{
SgExprListExp_expressions};
enum E_SgComplexVal 
{
SgComplexVal_real_value, SgComplexVal_imaginary_value};
enum E_SgCudaKernelCallExp 
{
SgCudaKernelCallExp_function, SgCudaKernelCallExp_args, SgCudaKernelCallExp_exec_config};
enum E_SgFunctionCallExp 
{
SgFunctionCallExp_function, SgFunctionCallExp_args};
enum E_SgCallExpression 
{
SgCallExpression_function, SgCallExpression_args};
enum E_SgSizeOfOp 
{
SgSizeOfOp_operand_expr};
enum E_SgUpcLocalsizeofExpression 
{
SgUpcLocalsizeofExpression_expression};
enum E_SgUpcBlocksizeofExpression 
{
SgUpcBlocksizeofExpression_expression};
enum E_SgUpcElemsizeofExpression 
{
SgUpcElemsizeofExpression_expression};
enum E_SgJavaInstanceOfOp 
{
SgJavaInstanceOfOp_operand_expr};
enum E_SgTypeIdOp 
{
SgTypeIdOp_operand_expr};
enum E_SgConditionalExp 
{
SgConditionalExp_conditional_exp, SgConditionalExp_true_exp, SgConditionalExp_false_exp};
enum E_SgNewExp 
{
SgNewExp_placement_args, SgNewExp_constructor_args, SgNewExp_builtin_args};
enum E_SgDeleteExp 
{
SgDeleteExp_variable};
enum E_SgAggregateInitializer 
{
SgAggregateInitializer_initializers};
enum E_SgCompoundInitializer 
{
SgCompoundInitializer_initializers};
enum E_SgConstructorInitializer 
{
SgConstructorInitializer_args};
enum E_SgAssignInitializer 
{
SgAssignInitializer_operand_i};
enum E_SgDesignatedInitializer 
{
SgDesignatedInitializer_designatorList, SgDesignatedInitializer_memberInit};
enum E_SgVarArgStartOp 
{
SgVarArgStartOp_lhs_operand, SgVarArgStartOp_rhs_operand};
enum E_SgVarArgOp 
{
SgVarArgOp_operand_expr};
enum E_SgVarArgEndOp 
{
SgVarArgEndOp_operand_expr};
enum E_SgVarArgCopyOp 
{
SgVarArgCopyOp_lhs_operand, SgVarArgCopyOp_rhs_operand};
enum E_SgVarArgStartOneOperandOp 
{
SgVarArgStartOneOperandOp_operand_expr};
enum E_SgSubscriptExpression 
{
SgSubscriptExpression_lowerBound, SgSubscriptExpression_upperBound, SgSubscriptExpression_stride};
enum E_SgImpliedDo 
{
SgImpliedDo_do_var_initialization, SgImpliedDo_last_val, SgImpliedDo_increment, SgImpliedDo_object_list};
enum E_SgIOItemExpression 
{
SgIOItemExpression_io_item};
enum E_SgStatementExpression 
{
SgStatementExpression_statement};
enum E_SgAsmOp 
{
SgAsmOp_expression};
enum E_SgActualArgumentExpression 
{
SgActualArgumentExpression_expression};
enum E_SgUnknownArrayOrFunctionReference 
{
SgUnknownArrayOrFunctionReference_named_reference, SgUnknownArrayOrFunctionReference_expression_list};
enum E_SgCAFCoExpression 
{
SgCAFCoExpression_referData};
enum E_SgCudaKernelExecConfig 
{
SgCudaKernelExecConfig_grid, SgCudaKernelExecConfig_blocks, SgCudaKernelExecConfig_shared, SgCudaKernelExecConfig_stream};
enum E_SgLambdaRefExp 
{
SgLambdaRefExp_functionDeclaration};
enum E_SgDictionaryExp 
{
SgDictionaryExp_key_datum_pairs};
enum E_SgKeyDatumPair 
{
SgKeyDatumPair_key, SgKeyDatumPair_datum};
enum E_SgComprehension 
{
SgComprehension_target, SgComprehension_iter, SgComprehension_filters};
enum E_SgListComprehension 
{
SgListComprehension_element, SgListComprehension_generators};
enum E_SgSetComprehension 
{
SgSetComprehension_element, SgSetComprehension_generators};
enum E_SgDictionaryComprehension 
{
SgDictionaryComprehension_element, SgDictionaryComprehension_generators};
enum E_SgNaryBooleanOp 
{
SgNaryBooleanOp_operands};
enum E_SgNaryComparisonOp 
{
SgNaryComparisonOp_operands};
enum E_SgNaryOp 
{
SgNaryOp_operands};
enum E_SgStringConversion 
{
SgStringConversion_expression};
enum E_SgYieldExpression 
{
SgYieldExpression_value};
enum E_SgAlignOfOp 
{
SgAlignOfOp_operand_expr};
enum E_SgRangeExp 
{
SgRangeExp_start, SgRangeExp_end, SgRangeExp_stride};
enum E_SgJavaSingleMemberAnnotation 
{
SgJavaSingleMemberAnnotation_value};
enum E_SgJavaNormalAnnotation 
{
SgJavaNormalAnnotation_value_pair_list};
enum E_SgFunctionParameterRefExp 
{
SgFunctionParameterRefExp_parameter_expression};
enum E_SgLambdaExp 
{
SgLambdaExp_lambda_capture_list, SgLambdaExp_lambda_function};
enum E_SgHereExp 
{
SgHereExp_expression};
enum E_SgAtExp 
{
SgAtExp_expression, SgAtExp_body};
enum E_SgFinishExp 
{
SgFinishExp_expression, SgFinishExp_body};
enum E_SgNoexceptOp 
{
SgNoexceptOp_operand_expr};
enum E_SgTemplateMemberFunctionSymbol 
{
SgTemplateMemberFunctionSymbol_declaration};
enum E_SgMemberFunctionSymbol 
{
SgMemberFunctionSymbol_declaration};
enum E_SgTemplateFunctionSymbol 
{
SgTemplateFunctionSymbol_declaration};
enum E_SgRenameSymbol 
{
SgRenameSymbol_declaration, SgRenameSymbol_original_symbol};
enum E_SgFunctionSymbol 
{
SgFunctionSymbol_declaration};
enum E_SgTemplateClassSymbol 
{
SgTemplateClassSymbol_declaration};
enum E_SgClassSymbol 
{
SgClassSymbol_declaration};
enum E_SgTemplateSymbol 
{
SgTemplateSymbol_declaration};
enum E_SgEnumSymbol 
{
SgEnumSymbol_declaration};
enum E_SgTemplateTypedefSymbol 
{
SgTemplateTypedefSymbol_declaration};
enum E_SgTypedefSymbol 
{
SgTypedefSymbol_declaration};
enum E_SgLabelSymbol 
{
SgLabelSymbol_declaration};
enum E_SgNamespaceSymbol 
{
SgNamespaceSymbol_declaration, SgNamespaceSymbol_aliasDeclaration};
enum E_SgModuleSymbol 
{
SgModuleSymbol_declaration};
enum E_SgAliasSymbol 
{
SgAliasSymbol_alias};
enum E_SgJavaLabelSymbol 
{
SgJavaLabelSymbol_declaration};
enum E_SgAsmFunction 
{
SgAsmFunction_statementList};
enum E_SgAsmBlock 
{
SgAsmBlock_statementList};
enum E_SgAsmX86Instruction 
{
SgAsmX86Instruction_operandList, SgAsmX86Instruction_semantics};
enum E_SgAsmArmInstruction 
{
SgAsmArmInstruction_operandList, SgAsmArmInstruction_semantics};
enum E_SgAsmPowerpcInstruction 
{
SgAsmPowerpcInstruction_operandList, SgAsmPowerpcInstruction_semantics};
enum E_SgAsmMipsInstruction 
{
SgAsmMipsInstruction_operandList, SgAsmMipsInstruction_semantics};
enum E_SgAsmM68kInstruction 
{
SgAsmM68kInstruction_operandList, SgAsmM68kInstruction_semantics};
enum E_SgAsmInstruction 
{
SgAsmInstruction_operandList, SgAsmInstruction_semantics};
enum E_SgAsmIntegerValueExpression 
{
SgAsmIntegerValueExpression_unfolded_expression_tree};
enum E_SgAsmFloatValueExpression 
{
SgAsmFloatValueExpression_unfolded_expression_tree};
enum E_SgAsmConstantExpression 
{
SgAsmConstantExpression_unfolded_expression_tree};
enum E_SgAsmValueExpression 
{
SgAsmValueExpression_unfolded_expression_tree};
enum E_SgAsmBinaryAdd 
{
SgAsmBinaryAdd_lhs, SgAsmBinaryAdd_rhs};
enum E_SgAsmBinarySubtract 
{
SgAsmBinarySubtract_lhs, SgAsmBinarySubtract_rhs};
enum E_SgAsmBinaryMultiply 
{
SgAsmBinaryMultiply_lhs, SgAsmBinaryMultiply_rhs};
enum E_SgAsmBinaryDivide 
{
SgAsmBinaryDivide_lhs, SgAsmBinaryDivide_rhs};
enum E_SgAsmBinaryMod 
{
SgAsmBinaryMod_lhs, SgAsmBinaryMod_rhs};
enum E_SgAsmBinaryAddPreupdate 
{
SgAsmBinaryAddPreupdate_lhs, SgAsmBinaryAddPreupdate_rhs};
enum E_SgAsmBinarySubtractPreupdate 
{
SgAsmBinarySubtractPreupdate_lhs, SgAsmBinarySubtractPreupdate_rhs};
enum E_SgAsmBinaryAddPostupdate 
{
SgAsmBinaryAddPostupdate_lhs, SgAsmBinaryAddPostupdate_rhs};
enum E_SgAsmBinarySubtractPostupdate 
{
SgAsmBinarySubtractPostupdate_lhs, SgAsmBinarySubtractPostupdate_rhs};
enum E_SgAsmBinaryLsl 
{
SgAsmBinaryLsl_lhs, SgAsmBinaryLsl_rhs};
enum E_SgAsmBinaryLsr 
{
SgAsmBinaryLsr_lhs, SgAsmBinaryLsr_rhs};
enum E_SgAsmBinaryAsr 
{
SgAsmBinaryAsr_lhs, SgAsmBinaryAsr_rhs};
enum E_SgAsmBinaryRor 
{
SgAsmBinaryRor_lhs, SgAsmBinaryRor_rhs};
enum E_SgAsmBinaryExpression 
{
SgAsmBinaryExpression_lhs, SgAsmBinaryExpression_rhs};
enum E_SgAsmUnaryPlus 
{
SgAsmUnaryPlus_operand};
enum E_SgAsmUnaryMinus 
{
SgAsmUnaryMinus_operand};
enum E_SgAsmUnaryRrx 
{
SgAsmUnaryRrx_operand};
enum E_SgAsmUnaryArmSpecialRegisterList 
{
SgAsmUnaryArmSpecialRegisterList_operand};
enum E_SgAsmUnaryExpression 
{
SgAsmUnaryExpression_operand};
enum E_SgAsmMemoryReferenceExpression 
{
SgAsmMemoryReferenceExpression_address, SgAsmMemoryReferenceExpression_segment};
enum E_SgAsmCommonSubExpression 
{
SgAsmCommonSubExpression_subexpression};
enum E_SgAsmExprListExp 
{
SgAsmExprListExp_expressions};
enum E_SgAsmRegisterNames 
{
SgAsmRegisterNames_registers};
enum E_SgAsmRiscOperation 
{
SgAsmRiscOperation_operands};
enum E_SgAsmInterpretation 
{
SgAsmInterpretation_global_block};
enum E_SgAsmOperandList 
{
SgAsmOperandList_operands};
enum E_SgAsmGenericDLL 
{
SgAsmGenericDLL_name};
enum E_SgAsmGenericFile 
{
SgAsmGenericFile_dwarf_info, SgAsmGenericFile_headers, SgAsmGenericFile_holes};
enum E_SgAsmPEFileHeader 
{
SgAsmPEFileHeader_exec_format, SgAsmPEFileHeader_dlls, SgAsmPEFileHeader_sections, SgAsmPEFileHeader_rvasize_pairs};
enum E_SgAsmLEFileHeader 
{
SgAsmLEFileHeader_exec_format, SgAsmLEFileHeader_dlls, SgAsmLEFileHeader_sections, SgAsmLEFileHeader_dos2_header, SgAsmLEFileHeader_page_table, SgAsmLEFileHeader_resname_table, SgAsmLEFileHeader_nonresname_table, SgAsmLEFileHeader_entry_table, SgAsmLEFileHeader_reloc_table};
enum E_SgAsmNEFileHeader 
{
SgAsmNEFileHeader_exec_format, SgAsmNEFileHeader_dlls, SgAsmNEFileHeader_sections, SgAsmNEFileHeader_dos2_header, SgAsmNEFileHeader_resname_table, SgAsmNEFileHeader_nonresname_table, SgAsmNEFileHeader_module_table, SgAsmNEFileHeader_entry_table};
enum E_SgAsmDOSFileHeader 
{
SgAsmDOSFileHeader_exec_format, SgAsmDOSFileHeader_dlls, SgAsmDOSFileHeader_sections, SgAsmDOSFileHeader_relocs};
enum E_SgAsmElfFileHeader 
{
SgAsmElfFileHeader_exec_format, SgAsmElfFileHeader_dlls, SgAsmElfFileHeader_sections};
enum E_SgAsmGenericHeader 
{
SgAsmGenericHeader_exec_format, SgAsmGenericHeader_dlls, SgAsmGenericHeader_sections};
enum E_SgAsmElfSymbolSection 
{
SgAsmElfSymbolSection_section_entry, SgAsmElfSymbolSection_segment_entry, SgAsmElfSymbolSection_symbols};
enum E_SgAsmElfRelocSection 
{
SgAsmElfRelocSection_section_entry, SgAsmElfRelocSection_segment_entry, SgAsmElfRelocSection_entries};
enum E_SgAsmElfDynamicSection 
{
SgAsmElfDynamicSection_section_entry, SgAsmElfDynamicSection_segment_entry, SgAsmElfDynamicSection_entries};
enum E_SgAsmElfStringSection 
{
SgAsmElfStringSection_section_entry, SgAsmElfStringSection_segment_entry};
enum E_SgAsmElfNoteSection 
{
SgAsmElfNoteSection_section_entry, SgAsmElfNoteSection_segment_entry, SgAsmElfNoteSection_entries};
enum E_SgAsmElfEHFrameSection 
{
SgAsmElfEHFrameSection_section_entry, SgAsmElfEHFrameSection_segment_entry, SgAsmElfEHFrameSection_ci_entries};
enum E_SgAsmElfSymverSection 
{
SgAsmElfSymverSection_section_entry, SgAsmElfSymverSection_segment_entry, SgAsmElfSymverSection_entries};
enum E_SgAsmElfSymverDefinedSection 
{
SgAsmElfSymverDefinedSection_section_entry, SgAsmElfSymverDefinedSection_segment_entry, SgAsmElfSymverDefinedSection_entries};
enum E_SgAsmElfSymverNeededSection 
{
SgAsmElfSymverNeededSection_section_entry, SgAsmElfSymverNeededSection_segment_entry, SgAsmElfSymverNeededSection_entries};
enum E_SgAsmElfSection 
{
SgAsmElfSection_section_entry, SgAsmElfSection_segment_entry};
enum E_SgAsmPEImportSection 
{
SgAsmPEImportSection_section_entry, SgAsmPEImportSection_import_directories};
enum E_SgAsmPEExportSection 
{
SgAsmPEExportSection_section_entry, SgAsmPEExportSection_export_dir, SgAsmPEExportSection_exports};
enum E_SgAsmPEStringSection 
{
SgAsmPEStringSection_section_entry};
enum E_SgAsmPESection 
{
SgAsmPESection_section_entry};
enum E_SgAsmCoffSymbolTable 
{
SgAsmCoffSymbolTable_symbols};
enum E_SgAsmNESection 
{
SgAsmNESection_st_entry, SgAsmNESection_reloc_table};
enum E_SgAsmNEModuleTable 
{
SgAsmNEModuleTable_strtab};
enum E_SgAsmNEEntryTable 
{
SgAsmNEEntryTable_entries};
enum E_SgAsmNERelocTable 
{
SgAsmNERelocTable_entries};
enum E_SgAsmLESection 
{
SgAsmLESection_st_entry};
enum E_SgAsmLEPageTable 
{
SgAsmLEPageTable_entries};
enum E_SgAsmLEEntryTable 
{
SgAsmLEEntryTable_entries};
enum E_SgAsmLERelocTable 
{
SgAsmLERelocTable_entries};
enum E_SgAsmCoffSymbol 
{
SgAsmCoffSymbol_name};
enum E_SgAsmElfSymbol 
{
SgAsmElfSymbol_name};
enum E_SgAsmGenericSymbol 
{
SgAsmGenericSymbol_name};
enum E_SgAsmGenericSectionList 
{
SgAsmGenericSectionList_sections};
enum E_SgAsmGenericHeaderList 
{
SgAsmGenericHeaderList_headers};
enum E_SgAsmElfSymbolList 
{
SgAsmElfSymbolList_symbols};
enum E_SgAsmElfRelocEntryList 
{
SgAsmElfRelocEntryList_entries};
enum E_SgAsmPEExportEntry 
{
SgAsmPEExportEntry_name, SgAsmPEExportEntry_forwarder};
enum E_SgAsmPEExportEntryList 
{
SgAsmPEExportEntryList_exports};
enum E_SgAsmElfDynamicEntry 
{
SgAsmElfDynamicEntry_name};
enum E_SgAsmElfSegmentTableEntryList 
{
SgAsmElfSegmentTableEntryList_entries};
enum E_SgAsmElfNoteEntry 
{
SgAsmElfNoteEntry_name};
enum E_SgAsmElfSymverEntryList 
{
SgAsmElfSymverEntryList_entries};
enum E_SgAsmElfSymverDefinedEntry 
{
SgAsmElfSymverDefinedEntry_entries};
enum E_SgAsmElfSymverDefinedEntryList 
{
SgAsmElfSymverDefinedEntryList_entries};
enum E_SgAsmElfSymverDefinedAux 
{
SgAsmElfSymverDefinedAux_name};
enum E_SgAsmElfSymverDefinedAuxList 
{
SgAsmElfSymverDefinedAuxList_entries};
enum E_SgAsmElfSymverNeededEntry 
{
SgAsmElfSymverNeededEntry_file_name, SgAsmElfSymverNeededEntry_entries};
enum E_SgAsmElfSymverNeededEntryList 
{
SgAsmElfSymverNeededEntryList_entries};
enum E_SgAsmElfSymverNeededAux 
{
SgAsmElfSymverNeededAux_name};
enum E_SgAsmElfSymverNeededAuxList 
{
SgAsmElfSymverNeededAuxList_entries};
enum E_SgAsmPEImportDirectory 
{
SgAsmPEImportDirectory_dll_name, SgAsmPEImportDirectory_imports};
enum E_SgAsmPEExportDirectory 
{
SgAsmPEExportDirectory_name};
enum E_SgAsmCoffSymbolList 
{
SgAsmCoffSymbolList_symbols};
enum E_SgAsmPERVASizePairList 
{
SgAsmPERVASizePairList_pairs};
enum E_SgAsmElfEHFrameEntryCI 
{
SgAsmElfEHFrameEntryCI_fd_entries};
enum E_SgAsmPEImportDirectoryList 
{
SgAsmPEImportDirectoryList_vector};
enum E_SgAsmLEEntryPoint 
{
SgAsmLEEntryPoint_entries};
enum E_SgAsmDwarfMacroList 
{
SgAsmDwarfMacroList_macro_list};
enum E_SgAsmDwarfLineList 
{
SgAsmDwarfLineList_line_list};
enum E_SgAsmDwarfCompilationUnitList 
{
SgAsmDwarfCompilationUnitList_cu_list};
enum E_SgAsmDwarfArrayType 
{
SgAsmDwarfArrayType_body};
enum E_SgAsmDwarfClassType 
{
SgAsmDwarfClassType_body};
enum E_SgAsmDwarfEnumerationType 
{
SgAsmDwarfEnumerationType_body};
enum E_SgAsmDwarfLexicalBlock 
{
SgAsmDwarfLexicalBlock_body};
enum E_SgAsmDwarfCompilationUnit 
{
SgAsmDwarfCompilationUnit_line_info, SgAsmDwarfCompilationUnit_language_constructs, SgAsmDwarfCompilationUnit_macro_info};
enum E_SgAsmDwarfStructureType 
{
SgAsmDwarfStructureType_body};
enum E_SgAsmDwarfSubroutineType 
{
SgAsmDwarfSubroutineType_body};
enum E_SgAsmDwarfUnionType 
{
SgAsmDwarfUnionType_body};
enum E_SgAsmDwarfCommonBlock 
{
SgAsmDwarfCommonBlock_body};
enum E_SgAsmDwarfInlinedSubroutine 
{
SgAsmDwarfInlinedSubroutine_body};
enum E_SgAsmDwarfSubprogram 
{
SgAsmDwarfSubprogram_body};
enum E_SgAsmDwarfNamespace 
{
SgAsmDwarfNamespace_body};
enum E_SgAsmDwarfConstructList 
{
SgAsmDwarfConstructList_list};
enum E_SgAsmPEImportItem 
{
SgAsmPEImportItem_name};
enum E_SgAsmPEImportItemList 
{
SgAsmPEImportItemList_vector};
enum E_SgAsmInterpretationList 
{
SgAsmInterpretationList_interpretations};
enum E_SgAsmGenericFileList 
{
SgAsmGenericFileList_files};
