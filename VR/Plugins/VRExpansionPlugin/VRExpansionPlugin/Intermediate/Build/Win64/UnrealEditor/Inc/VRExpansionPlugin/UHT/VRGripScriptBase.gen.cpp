// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/VRGripScriptBase.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGripScriptBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELifetimeCondition();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBaseBP();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBaseBP_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
// End Cross Module References

// Begin Enum EGSTransformOverrideType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGSTransformOverrideType;
static UEnum* EGSTransformOverrideType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGSTransformOverrideType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGSTransformOverrideType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EGSTransformOverrideType"));
	}
	return Z_Registration_Info_UEnum_EGSTransformOverrideType.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGSTransformOverrideType>()
{
	return EGSTransformOverrideType_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModifiesWorldTransform.Comment", "/* Modifies the world transform*/" },
		{ "ModifiesWorldTransform.Name", "EGSTransformOverrideType::ModifiesWorldTransform" },
		{ "ModifiesWorldTransform.ToolTip", "Modifies the world transform" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "None.Comment", "/** Does not alter the world transform */" },
		{ "None.Name", "EGSTransformOverrideType::None" },
		{ "None.ToolTip", "Does not alter the world transform" },
		{ "OverridesWorldTransform.Comment", "/* Overrides the world transform */" },
		{ "OverridesWorldTransform.Name", "EGSTransformOverrideType::OverridesWorldTransform" },
		{ "OverridesWorldTransform.ToolTip", "Overrides the world transform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGSTransformOverrideType::None", (int64)EGSTransformOverrideType::None },
		{ "EGSTransformOverrideType::OverridesWorldTransform", (int64)EGSTransformOverrideType::OverridesWorldTransform },
		{ "EGSTransformOverrideType::ModifiesWorldTransform", (int64)EGSTransformOverrideType::ModifiesWorldTransform },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EGSTransformOverrideType",
	"EGSTransformOverrideType",
	Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType()
{
	if (!Z_Registration_Info_UEnum_EGSTransformOverrideType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGSTransformOverrideType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGSTransformOverrideType.InnerSingleton;
}
// End Enum EGSTransformOverrideType

// Begin Class UVRGripScriptBase Function ForceGripToDrop
struct Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flags the grip to be dropped as soon as possible\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flags the grip to be dropped as soon as possible" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "ForceGripToDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execForceGripToDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceGripToDrop();
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function ForceGripToDrop

// Begin Class UVRGripScriptBase Function GetGripScriptByClass
struct Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics
{
	struct VRGripScriptBase_eventGetGripScriptByClass_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UVRGripScriptBase> GripScriptClass;
		EBPVRResultSwitch Result;
		UVRGripScriptBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRGripScript|Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the first grip script of the specified type in this object, do NOT call this on tick, save out and store the reference given\n" },
#endif
		{ "DisplayName", "GetGripScriptByClass" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the first grip script of the specified type in this object, do NOT call this on tick, save out and store the reference given" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GripScriptClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripScriptByClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_GripScriptClass = { "GripScriptClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripScriptByClass_Parms, GripScriptClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripScriptByClass_Parms, Result), Z_Construct_UEnum_VRExpansionPlugin_EBPVRResultSwitch, METADATA_PARAMS(0, nullptr) }; // 2775191573
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripScriptByClass_Parms, ReturnValue), Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_GripScriptClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetGripScriptByClass", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::VRGripScriptBase_eventGetGripScriptByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::VRGripScriptBase_eventGetGripScriptByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execGetGripScriptByClass)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_GripScriptClass);
	P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVRGripScriptBase**)Z_Param__Result=UVRGripScriptBase::GetGripScriptByClass(Z_Param_WorldContextObject,Z_Param_GripScriptClass,(EBPVRResultSwitch&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function GetGripScriptByClass

// Begin Class UVRGripScriptBase Function GetGripTransform
struct Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics
{
	struct VRGripScriptBase_eventGetGripTransform_Parms
	{
		FBPActorGripInformation Grip;
		FTransform ParentTransform;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the expected grip transform (relative * controller + addition)\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the expected grip transform (relative * controller + addition)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grip_MetaData), NewProp_Grip_MetaData) }; // 134483386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform = { "ParentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentTransform_MetaData), NewProp_ParentTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetGripTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_Grip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ParentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetGripTransform", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::VRGripScriptBase_eventGetGripTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::VRGripScriptBase_eventGetGripTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execGetGripTransform)
{
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetGripTransform(Z_Param_Out_Grip,Z_Param_Out_ParentTransform);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function GetGripTransform

// Begin Class UVRGripScriptBase Function GetIsReplicated
struct Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics
{
	struct VRGripScriptBase_eventGetIsReplicated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether replication is enabled or not. */" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether replication is enabled or not." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripScriptBase_eventGetIsReplicated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetIsReplicated_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetIsReplicated", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::VRGripScriptBase_eventGetIsReplicated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::VRGripScriptBase_eventGetIsReplicated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execGetIsReplicated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsReplicated();
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function GetIsReplicated

// Begin Class UVRGripScriptBase Function GetOwner
struct Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics
{
	struct VRGripScriptBase_eventGetOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the owning actor \n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the owning actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetOwner", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::VRGripScriptBase_eventGetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::VRGripScriptBase_eventGetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execGetOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetOwner();
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function GetOwner

// Begin Class UVRGripScriptBase Function GetParent
struct Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics
{
	struct VRGripScriptBase_eventGetParent_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the parent component or actor to this\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the parent component or actor to this" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetParent", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::VRGripScriptBase_eventGetParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::VRGripScriptBase_eventGetParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execGetParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetParent();
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function GetParent

// Begin Class UVRGripScriptBase Function GetParentSceneComp
struct Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics
{
	struct VRGripScriptBase_eventGetParentSceneComp_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the scene component of the parent, either being the parent itself or the root comp of it.\n// Nullptr if there is no valid scene component\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the scene component of the parent, either being the parent itself or the root comp of it.\nNullptr if there is no valid scene component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParentSceneComp_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetParentSceneComp", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::VRGripScriptBase_eventGetParentSceneComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::VRGripScriptBase_eventGetParentSceneComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execGetParentSceneComp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetParentSceneComp();
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function GetParentSceneComp

// Begin Class UVRGripScriptBase Function GetParentTransform
struct Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics
{
	struct VRGripScriptBase_eventGetParentTransform_Parms
	{
		bool bGetWorldTransform;
		FName BoneName;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current world transform of the owning object (or root comp of if it is an actor)\n" },
#endif
		{ "CPP_Default_bGetWorldTransform", "true" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current world transform of the owning object (or root comp of if it is an actor)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bGetWorldTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetWorldTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform_SetBit(void* Obj)
{
	((VRGripScriptBase_eventGetParentTransform_Parms*)Obj)->bGetWorldTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform = { "bGetWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetParentTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParentTransform_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetParentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_bGetWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetParentTransform", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::VRGripScriptBase_eventGetParentTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::VRGripScriptBase_eventGetParentTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execGetParentTransform)
{
	P_GET_UBOOL(Z_Param_bGetWorldTransform);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetParentTransform(Z_Param_bGetWorldTransform,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function GetParentTransform

// Begin Class UVRGripScriptBase Function GetWorldTransform
struct VRGripScriptBase_eventGetWorldTransform_Parms
{
	UGripMotionControllerComponent* GrippingController;
	float DeltaTime;
	FTransform WorldTransform;
	FTransform ParentTransform;
	FBPActorGripInformation Grip;
	AActor* actor;
	UPrimitiveComponent* root;
	bool bRootHasInterface;
	bool bActorHasInterface;
	bool bIsForTeleport;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripScriptBase_eventGetWorldTransform_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UVRGripScriptBase_GetWorldTransform = FName(TEXT("GetWorldTransform"));
bool UVRGripScriptBase::GetWorldTransform(UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, FTransform const& ParentTransform, FBPActorGripInformation& Grip, AActor* actor, UPrimitiveComponent* root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport)
{
	VRGripScriptBase_eventGetWorldTransform_Parms Parms;
	Parms.GrippingController=GrippingController;
	Parms.DeltaTime=DeltaTime;
	Parms.WorldTransform=WorldTransform;
	Parms.ParentTransform=ParentTransform;
	Parms.Grip=Grip;
	Parms.actor=actor;
	Parms.root=root;
	Parms.bRootHasInterface=bRootHasInterface ? true : false;
	Parms.bActorHasInterface=bActorHasInterface ? true : false;
	Parms.bIsForTeleport=bIsForTeleport ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_GetWorldTransform),&Parms);
	WorldTransform=Parms.WorldTransform;
	Grip=Parms.Grip;
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides or Modifies the world transform with this grip script\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides or Modifies the world transform with this grip script" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_root;
	static void NewProp_bRootHasInterface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRootHasInterface;
	static void NewProp_bActorHasInterface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorHasInterface;
	static void NewProp_bIsForTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsForTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrippingController_MetaData), NewProp_GrippingController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform = { "ParentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, ParentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentTransform_MetaData), NewProp_ParentTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(0, nullptr) }; // 134483386
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventGetWorldTransform_Parms, root), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_root_MetaData), NewProp_root_MetaData) };
void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface_SetBit(void* Obj)
{
	((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bRootHasInterface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface = { "bRootHasInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface_SetBit(void* Obj)
{
	((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bActorHasInterface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface = { "bActorHasInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport_SetBit(void* Obj)
{
	((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->bIsForTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport = { "bIsForTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripScriptBase_eventGetWorldTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_GrippingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_WorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ParentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_Grip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bRootHasInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bActorHasInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_bIsForTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "GetWorldTransform", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::PropPointers), sizeof(VRGripScriptBase_eventGetWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBase_eventGetWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execGetWorldTransform)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ParentTransform);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
	P_GET_OBJECT(AActor,Z_Param_actor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_root);
	P_GET_UBOOL(Z_Param_bRootHasInterface);
	P_GET_UBOOL(Z_Param_bActorHasInterface);
	P_GET_UBOOL(Z_Param_bIsForTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetWorldTransform_Implementation(Z_Param_GrippingController,Z_Param_DeltaTime,Z_Param_Out_WorldTransform,Z_Param_Out_ParentTransform,Z_Param_Out_Grip,Z_Param_actor,Z_Param_root,Z_Param_bRootHasInterface,Z_Param_bActorHasInterface,Z_Param_bIsForTeleport);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function GetWorldTransform

// Begin Class UVRGripScriptBase Function HasAuthority
struct Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics
{
	struct VRGripScriptBase_eventHasAuthority_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the owning actor has authority on this connection \n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the owning actor has authority on this connection" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripScriptBase_eventHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventHasAuthority_Parms), &Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "HasAuthority", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::VRGripScriptBase_eventHasAuthority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::VRGripScriptBase_eventHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_HasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_HasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execHasAuthority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAuthority();
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function HasAuthority

// Begin Class UVRGripScriptBase Function IsServer
struct Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics
{
	struct VRGripScriptBase_eventIsServer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the owning actor is on the server on this connection \n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the owning actor is on the server on this connection" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripScriptBase_eventIsServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventIsServer_Parms), &Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "IsServer", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::VRGripScriptBase_eventIsServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::VRGripScriptBase_eventIsServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_IsServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_IsServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execIsServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsServer();
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function IsServer

// Begin Class UVRGripScriptBase Function OnBeginPlay
struct VRGripScriptBase_eventOnBeginPlay_Parms
{
	UObject* CallingOwner;
};
static FName NAME_UVRGripScriptBase_OnBeginPlay = FName(TEXT("OnBeginPlay"));
void UVRGripScriptBase::OnBeginPlay(UObject* CallingOwner)
{
	VRGripScriptBase_eventOnBeginPlay_Parms Parms;
	Parms.CallingOwner=CallingOwner;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnBeginPlay),&Parms);
}
struct Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\n// Grippables will automatically call this, however if you manually spawn a grip script during play or you make your own\n// Interfaced grip object and give it grippables, YOU will be required to call this event on them.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\nGrippables will automatically call this, however if you manually spawn a grip script during play or you make your own\nInterfaced grip object and give it grippables, YOU will be required to call this event on them." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::NewProp_CallingOwner = { "CallingOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnBeginPlay_Parms, CallingOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::NewProp_CallingOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnBeginPlay", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::PropPointers), sizeof(VRGripScriptBase_eventOnBeginPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBase_eventOnBeginPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execOnBeginPlay)
{
	P_GET_OBJECT(UObject,Z_Param_CallingOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginPlay_Implementation(Z_Param_CallingOwner);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function OnBeginPlay

// Begin Class UVRGripScriptBase Function OnEndPlay
struct VRGripScriptBase_eventOnEndPlay_Parms
{
	TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
};
static FName NAME_UVRGripScriptBase_OnEndPlay = FName(TEXT("OnEndPlay"));
void UVRGripScriptBase::OnEndPlay(const EEndPlayReason::Type EndPlayReason)
{
	VRGripScriptBase_eventOnEndPlay_Parms Parms;
	Parms.EndPlayReason=EndPlayReason;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnEndPlay),&Parms);
}
struct Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\n// Grippables will automatically call this, however if you manually spawn a grip script during play or you make your own\n// Interfaced grip object and give it grippables, YOU will be required to call this event on them.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not all scripts will require this function, specific ones that use things like Lever logic however will. Best to call it.\nGrippables will automatically call this, however if you manually spawn a grip script during play or you make your own\nInterfaced grip object and give it grippables, YOU will be required to call this event on them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPlayReason_MetaData), NewProp_EndPlayReason_MetaData) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnEndPlay", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::PropPointers), sizeof(VRGripScriptBase_eventOnEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBase_eventOnEndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execOnEndPlay)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndPlay_Implementation(EEndPlayReason::Type(Z_Param_EndPlayReason));
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function OnEndPlay

// Begin Class UVRGripScriptBase Function OnGrip
struct VRGripScriptBase_eventOnGrip_Parms
{
	UGripMotionControllerComponent* GrippingController;
	FBPActorGripInformation GripInformation;
};
static FName NAME_UVRGripScriptBase_OnGrip = FName(TEXT("OnGrip"));
void UVRGripScriptBase::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
{
	VRGripScriptBase_eventOnGrip_Parms Parms;
	Parms.GrippingController=GrippingController;
	Parms.GripInformation=GripInformation;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnGrip),&Parms);
}
struct Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrippingController_MetaData), NewProp_GrippingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GrippingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::NewProp_GripInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnGrip", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::PropPointers), sizeof(VRGripScriptBase_eventOnGrip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBase_eventOnGrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnGrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execOnGrip)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function OnGrip

// Begin Class UVRGripScriptBase Function OnGripRelease
struct VRGripScriptBase_eventOnGripRelease_Parms
{
	UGripMotionControllerComponent* ReleasingController;
	FBPActorGripInformation GripInformation;
	bool bWasSocketed;
};
static FName NAME_UVRGripScriptBase_OnGripRelease = FName(TEXT("OnGripRelease"));
void UVRGripScriptBase::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
{
	VRGripScriptBase_eventOnGripRelease_Parms Parms;
	Parms.ReleasingController=ReleasingController;
	Parms.GripInformation=GripInformation;
	Parms.bWasSocketed=bWasSocketed ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnGripRelease),&Parms);
}
struct Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when grip is released\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static void NewProp_bWasSocketed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleasingController_MetaData), NewProp_ReleasingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
void Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
{
	((VRGripScriptBase_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventOnGripRelease_Parms), &Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_ReleasingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_GripInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::NewProp_bWasSocketed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnGripRelease", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::PropPointers), sizeof(VRGripScriptBase_eventOnGripRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBase_eventOnGripRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execOnGripRelease)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_GET_UBOOL(Z_Param_bWasSocketed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function OnGripRelease

// Begin Class UVRGripScriptBase Function OnSecondaryGrip
struct VRGripScriptBase_eventOnSecondaryGrip_Parms
{
	UGripMotionControllerComponent* Controller;
	USceneComponent* SecondaryGripComponent;
	FBPActorGripInformation GripInformation;
};
static FName NAME_UVRGripScriptBase_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
void UVRGripScriptBase::OnSecondaryGrip(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
{
	VRGripScriptBase_eventOnSecondaryGrip_Parms Parms;
	Parms.Controller=Controller;
	Parms.SecondaryGripComponent=SecondaryGripComponent;
	Parms.GripInformation=GripInformation;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnSecondaryGrip),&Parms);
}
struct Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when secondary gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryGripComponent_MetaData), NewProp_SecondaryGripComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::NewProp_GripInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnSecondaryGrip", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::PropPointers), sizeof(VRGripScriptBase_eventOnSecondaryGrip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBase_eventOnSecondaryGrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execOnSecondaryGrip)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller);
	P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSecondaryGrip_Implementation(Z_Param_Controller,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function OnSecondaryGrip

// Begin Class UVRGripScriptBase Function OnSecondaryGripRelease
struct VRGripScriptBase_eventOnSecondaryGripRelease_Parms
{
	UGripMotionControllerComponent* Controller;
	USceneComponent* ReleasingSecondaryGripComponent;
	FBPActorGripInformation GripInformation;
};
static FName NAME_UVRGripScriptBase_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
void UVRGripScriptBase::OnSecondaryGripRelease(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
{
	VRGripScriptBase_eventOnSecondaryGripRelease_Parms Parms;
	Parms.Controller=Controller;
	Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
	Parms.GripInformation=GripInformation;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_OnSecondaryGripRelease),&Parms);
}
struct Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when secondary grip is released\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleasingSecondaryGripComponent_MetaData), NewProp_ReleasingSecondaryGripComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "OnSecondaryGripRelease", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::PropPointers), sizeof(VRGripScriptBase_eventOnSecondaryGripRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBase_eventOnSecondaryGripRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execOnSecondaryGripRelease)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller);
	P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_Controller,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function OnSecondaryGripRelease

// Begin Class UVRGripScriptBase Function SetIsReplicated
struct Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics
{
	struct VRGripScriptBase_eventSetIsReplicated_Parms
	{
		bool ShouldReplicate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable replication. This is the equivalent of RemoteRole for actors (only a bool is required for components) */" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable replication. This is the equivalent of RemoteRole for actors (only a bool is required for components)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ShouldReplicate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldReplicate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::NewProp_ShouldReplicate_SetBit(void* Obj)
{
	((VRGripScriptBase_eventSetIsReplicated_Parms*)Obj)->ShouldReplicate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::NewProp_ShouldReplicate = { "ShouldReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventSetIsReplicated_Parms), &Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::NewProp_ShouldReplicate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::NewProp_ShouldReplicate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "SetIsReplicated", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::VRGripScriptBase_eventSetIsReplicated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::VRGripScriptBase_eventSetIsReplicated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execSetIsReplicated)
{
	P_GET_UBOOL(Z_Param_ShouldReplicate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsReplicated(Z_Param_ShouldReplicate);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function SetIsReplicated

// Begin Class UVRGripScriptBase Function SetTickEnabled
struct Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics
{
	struct VRGripScriptBase_eventSetTickEnabled_Parms
	{
		bool bTickEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TickSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set whether the grip script can tick or not\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the grip script can tick or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bTickEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::NewProp_bTickEnabled_SetBit(void* Obj)
{
	((VRGripScriptBase_eventSetTickEnabled_Parms*)Obj)->bTickEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::NewProp_bTickEnabled = { "bTickEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventSetTickEnabled_Parms), &Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::NewProp_bTickEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::NewProp_bTickEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "SetTickEnabled", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::VRGripScriptBase_eventSetTickEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::VRGripScriptBase_eventSetTickEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execSetTickEnabled)
{
	P_GET_UBOOL(Z_Param_bTickEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTickEnabled(Z_Param_bTickEnabled);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function SetTickEnabled

// Begin Class UVRGripScriptBase Function Wants_DenyTeleport
struct VRGripScriptBase_eventWants_DenyTeleport_Parms
{
	UGripMotionControllerComponent* Controller;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripScriptBase_eventWants_DenyTeleport_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UVRGripScriptBase_Wants_DenyTeleport = FName(TEXT("Wants_DenyTeleport"));
bool UVRGripScriptBase::Wants_DenyTeleport(UGripMotionControllerComponent* Controller)
{
	VRGripScriptBase_eventWants_DenyTeleport_Parms Parms;
	Parms.Controller=Controller;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBase_Wants_DenyTeleport),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripScript" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if the script is currently active and should be used\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if the script is currently active and should be used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBase_eventWants_DenyTeleport_Parms, Controller), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
void Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripScriptBase_eventWants_DenyTeleport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripScriptBase_eventWants_DenyTeleport_Parms), &Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBase, nullptr, "Wants_DenyTeleport", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::PropPointers), sizeof(VRGripScriptBase_eventWants_DenyTeleport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBase_eventWants_DenyTeleport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGripScriptBase::execWants_DenyTeleport)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Wants_DenyTeleport_Implementation(Z_Param_Controller);
	P_NATIVE_END;
}
// End Class UVRGripScriptBase Function Wants_DenyTeleport

// Begin Class UVRGripScriptBase
void UVRGripScriptBase::StaticRegisterNativesUVRGripScriptBase()
{
	UClass* Class = UVRGripScriptBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceGripToDrop", &UVRGripScriptBase::execForceGripToDrop },
		{ "GetGripScriptByClass", &UVRGripScriptBase::execGetGripScriptByClass },
		{ "GetGripTransform", &UVRGripScriptBase::execGetGripTransform },
		{ "GetIsReplicated", &UVRGripScriptBase::execGetIsReplicated },
		{ "GetOwner", &UVRGripScriptBase::execGetOwner },
		{ "GetParent", &UVRGripScriptBase::execGetParent },
		{ "GetParentSceneComp", &UVRGripScriptBase::execGetParentSceneComp },
		{ "GetParentTransform", &UVRGripScriptBase::execGetParentTransform },
		{ "GetWorldTransform", &UVRGripScriptBase::execGetWorldTransform },
		{ "HasAuthority", &UVRGripScriptBase::execHasAuthority },
		{ "IsServer", &UVRGripScriptBase::execIsServer },
		{ "OnBeginPlay", &UVRGripScriptBase::execOnBeginPlay },
		{ "OnEndPlay", &UVRGripScriptBase::execOnEndPlay },
		{ "OnGrip", &UVRGripScriptBase::execOnGrip },
		{ "OnGripRelease", &UVRGripScriptBase::execOnGripRelease },
		{ "OnSecondaryGrip", &UVRGripScriptBase::execOnSecondaryGrip },
		{ "OnSecondaryGripRelease", &UVRGripScriptBase::execOnSecondaryGripRelease },
		{ "SetIsReplicated", &UVRGripScriptBase::execSetIsReplicated },
		{ "SetTickEnabled", &UVRGripScriptBase::execSetTickEnabled },
		{ "Wants_DenyTeleport", &UVRGripScriptBase::execWants_DenyTeleport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRGripScriptBase);
UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister()
{
	return UVRGripScriptBase::StaticClass();
}
struct Z_Construct_UClass_UVRGripScriptBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "DefaultSettings" },
		{ "IncludePath", "GripScripts/VRGripScriptBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "GSSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is currently active helper variable, returned from IsScriptActive()\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is currently active helper variable, returned from IsScriptActive()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicates_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GSSettings|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If we should replicate, if false we will never be added to our parents list.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we should replicate, if false we will never be added to our parents list." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationCondition_MetaData[] = {
		{ "Category", "GSSettings|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replication Condition (If using subobject replication list)\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication Condition (If using subobject replication list)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransformOverrideType_MetaData[] = {
		{ "Category", "GSSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether this script overrides or modifies the world transform\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this script overrides or modifies the world transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDenyAutoDrop_MetaData[] = {
		{ "Category", "GSSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if we want to deny auto dropping\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if we want to deny auto dropping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceDrop_MetaData[] = {
		{ "Category", "GSSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if we want to force a drop\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if we want to force a drop" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDenyLateUpdates_MetaData[] = {
		{ "Category", "GSSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if we want to inject changes prior to the physics handle\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if we want to inject changes prior to the physics handle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInjectPrePhysicsHandle_MetaData[] = {
		{ "Category", "GSSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if we want to inject changes prior to the physics handle\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if we want to inject changes prior to the physics handle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInjectPostPhysicsHandle_MetaData[] = {
		{ "Category", "GSSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if we want to inject changes after the physics handle\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if we want to inject changes after the physics handle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEverTick_MetaData[] = {
		{ "Category", "TickSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then this scrip can tick when bAllowticking is true\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then this scrip can tick when bAllowticking is true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTicking_MetaData[] = {
		{ "Category", "TickSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true and we bCanEverTick, then will fire off the tick function\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true and we bCanEverTick, then will fire off the tick function" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static void NewProp_bReplicates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationCondition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldTransformOverrideType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldTransformOverrideType;
	static void NewProp_bDenyAutoDrop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyAutoDrop;
	static void NewProp_bForceDrop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDrop;
	static void NewProp_bDenyLateUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyLateUpdates;
	static void NewProp_bInjectPrePhysicsHandle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInjectPrePhysicsHandle;
	static void NewProp_bInjectPostPhysicsHandle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInjectPostPhysicsHandle;
	static void NewProp_bCanEverTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEverTick;
	static void NewProp_bAllowTicking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTicking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripScriptBase_ForceGripToDrop, "ForceGripToDrop" }, // 2917820431
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetGripScriptByClass, "GetGripScriptByClass" }, // 3379606516
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetGripTransform, "GetGripTransform" }, // 626657717
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetIsReplicated, "GetIsReplicated" }, // 2687653473
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetOwner, "GetOwner" }, // 78133118
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParent, "GetParent" }, // 2060358586
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParentSceneComp, "GetParentSceneComp" }, // 649591223
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetParentTransform, "GetParentTransform" }, // 527124650
		{ &Z_Construct_UFunction_UVRGripScriptBase_GetWorldTransform, "GetWorldTransform" }, // 301640609
		{ &Z_Construct_UFunction_UVRGripScriptBase_HasAuthority, "HasAuthority" }, // 338167648
		{ &Z_Construct_UFunction_UVRGripScriptBase_IsServer, "IsServer" }, // 3013204093
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnBeginPlay, "OnBeginPlay" }, // 4185938475
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnEndPlay, "OnEndPlay" }, // 841786248
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnGrip, "OnGrip" }, // 4199778157
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnGripRelease, "OnGripRelease" }, // 4124259624
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGrip, "OnSecondaryGrip" }, // 2777633554
		{ &Z_Construct_UFunction_UVRGripScriptBase_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 528521693
		{ &Z_Construct_UFunction_UVRGripScriptBase_SetIsReplicated, "SetIsReplicated" }, // 979009174
		{ &Z_Construct_UFunction_UVRGripScriptBase_SetTickEnabled, "SetTickEnabled" }, // 1047971878
		{ &Z_Construct_UFunction_UVRGripScriptBase_Wants_DenyTeleport, "Wants_DenyTeleport" }, // 45940609
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGripScriptBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bReplicates_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bReplicates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bReplicates = { "bReplicates", nullptr, (EPropertyFlags)0x0040000000010035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bReplicates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicates_MetaData), NewProp_bReplicates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_ReplicationCondition = { "ReplicationCondition", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGripScriptBase, ReplicationCondition), Z_Construct_UEnum_CoreUObject_ELifetimeCondition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationCondition_MetaData), NewProp_ReplicationCondition_MetaData) }; // 1613396080
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType = { "WorldTransformOverrideType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGripScriptBase, WorldTransformOverrideType), Z_Construct_UEnum_VRExpansionPlugin_EGSTransformOverrideType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransformOverrideType_MetaData), NewProp_WorldTransformOverrideType_MetaData) }; // 251739556
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bDenyAutoDrop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop = { "bDenyAutoDrop", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDenyAutoDrop_MetaData), NewProp_bDenyAutoDrop_MetaData) };
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bForceDrop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop = { "bForceDrop", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDrop_MetaData), NewProp_bForceDrop_MetaData) };
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bDenyLateUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates = { "bDenyLateUpdates", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDenyLateUpdates_MetaData), NewProp_bDenyLateUpdates_MetaData) };
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bInjectPrePhysicsHandle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle = { "bInjectPrePhysicsHandle", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInjectPrePhysicsHandle_MetaData), NewProp_bInjectPrePhysicsHandle_MetaData) };
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bInjectPostPhysicsHandle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle = { "bInjectPostPhysicsHandle", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInjectPostPhysicsHandle_MetaData), NewProp_bInjectPostPhysicsHandle_MetaData) };
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bCanEverTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick = { "bCanEverTick", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEverTick_MetaData), NewProp_bCanEverTick_MetaData) };
void Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking_SetBit(void* Obj)
{
	((UVRGripScriptBase*)Obj)->bAllowTicking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking = { "bAllowTicking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGripScriptBase), &Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowTicking_MetaData), NewProp_bAllowTicking_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bReplicates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_ReplicationCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_WorldTransformOverrideType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyAutoDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bForceDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bDenyLateUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPrePhysicsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bInjectPostPhysicsHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bCanEverTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGripScriptBase_Statics::NewProp_bAllowTicking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRGripScriptBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRGripScriptBase_Statics::ClassParams = {
	&UVRGripScriptBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRGripScriptBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRGripScriptBase()
{
	if (!Z_Registration_Info_UClass_UVRGripScriptBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRGripScriptBase.OuterSingleton, Z_Construct_UClass_UVRGripScriptBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRGripScriptBase.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripScriptBase>()
{
	return UVRGripScriptBase::StaticClass();
}
void UVRGripScriptBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bReplicates(TEXT("bReplicates"));
	const bool bIsValid = true
		&& Name_bReplicates == ClassReps[(int32)ENetFields_Private::bReplicates].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRGripScriptBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripScriptBase);
UVRGripScriptBase::~UVRGripScriptBase() {}
// End Class UVRGripScriptBase

// Begin Class UVRGripScriptBaseBP Function ReceiveTick
struct VRGripScriptBaseBP_eventReceiveTick_Parms
{
	float DeltaSeconds;
};
static FName NAME_UVRGripScriptBaseBP_ReceiveTick = FName(TEXT("ReceiveTick"));
void UVRGripScriptBaseBP::ReceiveTick(float DeltaSeconds)
{
	VRGripScriptBaseBP_eventReceiveTick_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UVRGripScriptBaseBP_ReceiveTick),&Parms);
}
struct Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called every frame if ticking is enabled */" },
#endif
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called every frame if ticking is enabled" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripScriptBaseBP_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripScriptBaseBP, nullptr, "ReceiveTick", nullptr, nullptr, Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::PropPointers), sizeof(VRGripScriptBaseBP_eventReceiveTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripScriptBaseBP_eventReceiveTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVRGripScriptBaseBP Function ReceiveTick

// Begin Class UVRGripScriptBaseBP
void UVRGripScriptBaseBP::StaticRegisterNativesUVRGripScriptBaseBP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRGripScriptBaseBP);
UClass* Z_Construct_UClass_UVRGripScriptBaseBP_NoRegister()
{
	return UVRGripScriptBaseBP::StaticClass();
}
struct Z_Construct_UClass_UVRGripScriptBaseBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "IncludePath", "GripScripts/VRGripScriptBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GripScripts/VRGripScriptBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripScriptBaseBP_ReceiveTick, "ReceiveTick" }, // 1423878893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGripScriptBaseBP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVRGripScriptBaseBP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBaseBP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRGripScriptBaseBP_Statics::ClassParams = {
	&UVRGripScriptBaseBP::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRGripScriptBaseBP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRGripScriptBaseBP()
{
	if (!Z_Registration_Info_UClass_UVRGripScriptBaseBP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRGripScriptBaseBP.OuterSingleton, Z_Construct_UClass_UVRGripScriptBaseBP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRGripScriptBaseBP.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripScriptBaseBP>()
{
	return UVRGripScriptBaseBP::StaticClass();
}
UVRGripScriptBaseBP::UVRGripScriptBaseBP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripScriptBaseBP);
UVRGripScriptBaseBP::~UVRGripScriptBaseBP() {}
// End Class UVRGripScriptBaseBP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGSTransformOverrideType_StaticEnum, TEXT("EGSTransformOverrideType"), &Z_Registration_Info_UEnum_EGSTransformOverrideType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 251739556U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRGripScriptBase, UVRGripScriptBase::StaticClass, TEXT("UVRGripScriptBase"), &Z_Registration_Info_UClass_UVRGripScriptBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRGripScriptBase), 1213436843U) },
		{ Z_Construct_UClass_UVRGripScriptBaseBP, UVRGripScriptBaseBP::StaticClass, TEXT("UVRGripScriptBaseBP"), &Z_Registration_Info_UClass_UVRGripScriptBaseBP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRGripScriptBaseBP), 1048465398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_485632614(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
