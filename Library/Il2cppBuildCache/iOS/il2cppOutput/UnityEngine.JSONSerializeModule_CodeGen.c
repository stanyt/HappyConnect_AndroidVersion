﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)
extern void JsonUtility_ToJsonInternal_mDAAB37A1A4B7452DD48256B6884A11FB8E48B38D (void);
// 0x00000002 System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
extern void JsonUtility_FromJsonInternal_m7353836E98A52C702E713DBE5E9C431BD8EC830A (void);
// 0x00000003 System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern void JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (void);
// 0x00000004 System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
extern void JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA (void);
// 0x00000005 System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
extern void JsonUtility_FromJsonOverwrite_mC97C7C909591A29E72361FB5DBC1A58EEE6DBAEB (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	JsonUtility_ToJsonInternal_mDAAB37A1A4B7452DD48256B6884A11FB8E48B38D,
	JsonUtility_FromJsonInternal_m7353836E98A52C702E713DBE5E9C431BD8EC830A,
	JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C,
	JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA,
	JsonUtility_FromJsonOverwrite_mC97C7C909591A29E72361FB5DBC1A58EEE6DBAEB,
};
static const int32_t s_InvokerIndices[5] = 
{
	1688,
	1539,
	1887,
	1688,
	1798,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_JSONSerializeModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule = 
{
	"UnityEngine.JSONSerializeModule.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_JSONSerializeModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
