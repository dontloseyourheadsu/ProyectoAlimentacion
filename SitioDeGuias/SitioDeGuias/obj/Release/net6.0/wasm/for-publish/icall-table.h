#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
176,
181,
182,
183,
184,
185,
186,
187,
189,
190,
248,
249,
251,
280,
281,
282,
302,
303,
304,
305,
306,
397,
398,
399,
402,
436,
437,
439,
441,
443,
445,
450,
458,
459,
460,
461,
462,
463,
464,
465,
466,
467,
596,
597,
604,
607,
609,
614,
615,
617,
618,
622,
623,
624,
625,
627,
628,
629,
632,
633,
636,
637,
638,
706,
707,
709,
717,
718,
719,
720,
721,
725,
726,
727,
728,
729,
730,
732,
733,
734,
736,
737,
738,
740,
932,
1105,
1106,
5191,
5192,
5194,
5195,
5196,
5197,
5198,
5200,
5202,
5204,
5205,
5212,
5214,
5218,
5219,
5221,
5223,
5225,
5236,
5245,
5246,
5248,
5249,
5250,
5251,
5252,
5254,
5256,
6194,
6198,
6200,
6201,
6202,
6203,
6235,
6236,
6237,
6254,
6255,
6256,
6257,
6287,
6330,
6333,
6342,
6343,
6344,
6598,
6600,
6601,
6629,
6630,
6631,
6646,
6652,
6659,
6669,
6672,
6743,
6751,
6752,
6753,
6754,
6755,
6761,
6774,
6794,
6795,
6803,
6805,
6812,
6813,
6816,
6818,
6823,
6829,
6830,
6837,
6839,
6849,
6852,
6853,
6854,
6864,
6875,
6881,
6882,
6883,
6885,
6886,
6896,
6914,
6930,
6931,
6950,
6980,
6981,
7338,
7339,
7476,
7713,
7714,
7721,
7722,
7723,
7728,
7790,
7948,
7949,
9029,
9048,
9055,
9056,
9058,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 176,
ves_icall_System_Array_InternalCreate,
// token 181,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 182,
ves_icall_System_Array_CanChangePrimitive,
// token 183,
ves_icall_System_Array_FastCopy_raw,
// token 184,
ves_icall_System_Array_GetLength_raw,
// token 185,
ves_icall_System_Array_GetLowerBound_raw,
// token 186,
ves_icall_System_Array_GetGenericValue_icall,
// token 187,
ves_icall_System_Array_GetValueImpl_raw,
// token 189,
ves_icall_System_Array_SetValueImpl_raw,
// token 190,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 248,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 249,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 251,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 280,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 281,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 282,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 302,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 303,
ves_icall_System_Enum_ToObject_raw,
// token 304,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 305,
ves_icall_System_Enum_get_underlying_type_raw,
// token 306,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 397,
ves_icall_System_Environment_get_ProcessorCount,
// token 398,
ves_icall_System_Environment_get_TickCount,
// token 399,
ves_icall_System_Environment_get_TickCount64,
// token 402,
ves_icall_System_Environment_FailFast_raw,
// token 436,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 437,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 439,
ves_icall_System_GC_SuppressFinalize_raw,
// token 441,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 443,
ves_icall_System_GC_GetGCMemoryInfo,
// token 445,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 450,
ves_icall_System_Object_MemberwiseClone_raw,
// token 458,
ves_icall_System_Math_Abs_double,
// token 459,
ves_icall_System_Math_Ceiling,
// token 460,
ves_icall_System_Math_Cos,
// token 461,
ves_icall_System_Math_Floor,
// token 462,
ves_icall_System_Math_Log10,
// token 463,
ves_icall_System_Math_Pow,
// token 464,
ves_icall_System_Math_Sin,
// token 465,
ves_icall_System_Math_Sqrt,
// token 466,
ves_icall_System_Math_Tan,
// token 467,
ves_icall_System_Math_ModF,
// token 596,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 597,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 604,
ves_icall_RuntimeType_make_array_type_raw,
// token 607,
ves_icall_RuntimeType_make_byref_type_raw,
// token 609,
ves_icall_RuntimeType_MakePointerType_raw,
// token 614,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 615,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 617,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 618,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 622,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 623,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 624,
ves_icall_System_RuntimeType_getFullName_raw,
// token 625,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 627,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 628,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 629,
ves_icall_RuntimeType_GetFields_native_raw,
// token 632,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 633,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 636,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 637,
ves_icall_RuntimeType_get_Name_raw,
// token 638,
ves_icall_RuntimeType_get_Namespace_raw,
// token 706,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 707,
ves_icall_reflection_get_token_raw,
// token 709,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 717,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 718,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 719,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 720,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 721,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 725,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 726,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 727,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 728,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 729,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 730,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 732,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 733,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 734,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 736,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 737,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 738,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 740,
ves_icall_System_String_FastAllocateString_raw,
// token 932,
ves_icall_System_Type_internal_from_handle_raw,
// token 1105,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1106,
ves_icall_System_ValueType_Equals_raw,
// token 5191,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5192,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5194,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5195,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5196,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5197,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5198,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5200,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5202,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5204,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5205,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 5212,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5214,
mono_monitor_exit_icall_raw,
// token 5218,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5219,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5221,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5223,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5225,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5236,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5245,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5246,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5248,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5249,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5250,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5251,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5252,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5254,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5256,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6194,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6198,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6200,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6201,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6202,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6203,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6235,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6236,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6237,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6254,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6255,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6256,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6257,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 6287,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6330,
mono_object_hash_icall_raw,
// token 6333,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 6342,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6343,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6344,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6598,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6600,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6601,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6629,
mono_digest_get_public_token,
// token 6630,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6631,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 6646,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6652,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6659,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6669,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6672,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 6743,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 6751,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 6752,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 6753,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 6754,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 6755,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 6761,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 6774,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 6794,
ves_icall_reflection_get_token_raw,
// token 6795,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 6803,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 6805,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 6812,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 6813,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 6816,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 6818,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 6823,
ves_icall_reflection_get_token_raw,
// token 6829,
ves_icall_get_method_info_raw,
// token 6830,
ves_icall_get_method_attributes,
// token 6837,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 6839,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 6849,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 6852,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 6853,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 6854,
ves_icall_reflection_get_token_raw,
// token 6864,
ves_icall_InternalInvoke_raw,
// token 6875,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 6881,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 6882,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 6883,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 6885,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 6886,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 6896,
ves_icall_InternalInvoke_raw,
// token 6914,
ves_icall_reflection_get_token_raw,
// token 6930,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 6931,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 6950,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 6980,
ves_icall_reflection_get_token_raw,
// token 6981,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7338,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 7339,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7476,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7713,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7714,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7721,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 7722,
ves_icall_ModuleBuilder_getToken_raw,
// token 7723,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 7728,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7790,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 7948,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 7949,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9029,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9048,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9055,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 9056,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9058,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
0,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
