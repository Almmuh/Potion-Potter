// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRInteractibleFunctionLibrary.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRInteractibleFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRInteractibleBaseData();
// End Cross Module References

// Begin Enum EVRInteractibleAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleAxis;
static UEnum* EVRInteractibleAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRInteractibleAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleAxis"));
	}
	return Z_Registration_Info_UEnum_EVRInteractibleAxis.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleAxis>()
{
	return EVRInteractibleAxis_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axis_X.Name", "EVRInteractibleAxis::Axis_X" },
		{ "Axis_Y.Name", "EVRInteractibleAxis::Axis_Y" },
		{ "Axis_Z.Name", "EVRInteractibleAxis::Axis_Z" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declares our interactible axis's\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declares our interactible axis's" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRInteractibleAxis::Axis_X", (int64)EVRInteractibleAxis::Axis_X },
		{ "EVRInteractibleAxis::Axis_Y", (int64)EVRInteractibleAxis::Axis_Y },
		{ "EVRInteractibleAxis::Axis_Z", (int64)EVRInteractibleAxis::Axis_Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRInteractibleAxis",
	"EVRInteractibleAxis",
	Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleAxis.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRInteractibleAxis.InnerSingleton;
}
// End Enum EVRInteractibleAxis

// Begin ScriptStruct FBPVRInteractibleBaseData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData;
class UScriptStruct* FBPVRInteractibleBaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRInteractibleBaseData"));
	}
	return Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRInteractibleBaseData>()
{
	return FBPVRInteractibleBaseData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A data structure to hold important interactible data\n// Should be init'd in Beginplay with BeginPlayInit as well as OnGrip with OnGripInit.\n// Works in \"static space\", it records the original relative transform of the interactible on begin play\n// so that calculations on the actual component can be done based off of it.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A data structure to hold important interactible data\nShould be init'd in Beginplay with BeginPlayInit as well as OnGrip with OnGripInit.\nWorks in \"static space\", it records the original relative transform of the interactible on begin play\nso that calculations on the actual component can be done based off of it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "InteractibleData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Our initial relative transform to our parent \"static space\" - Set in BeginPlayInit\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our initial relative transform to our parent \"static space\" - Set in BeginPlayInit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialInteractorLocation_MetaData[] = {
		{ "Category", "InteractibleData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initial location in \"static space\" of the interactor on grip - Set in OnGripInit\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial location in \"static space\" of the interactor on grip - Set in OnGripInit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialGripLoc_MetaData[] = {
		{ "Category", "InteractibleData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initial location of the interactible in the \"static space\" - Set in OnGripInit\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial location of the interactible in the \"static space\" - Set in OnGripInit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialDropLocation_MetaData[] = {
		{ "Category", "InteractibleData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initial location on the interactible of the grip, used for drop calculations - Set in OnGripInit\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial location on the interactible of the grip, used for drop calculations - Set in OnGripInit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReversedRelativeTransform_MetaData[] = {
		{ "Category", "InteractibleData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The initial transform in relative space of the grip to us - Set in OnGripInit\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The initial transform in relative space of the grip to us - Set in OnGripInit" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialInteractorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialGripLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialDropLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReversedRelativeTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRInteractibleBaseData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRelativeTransform_MetaData), NewProp_InitialRelativeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialInteractorLocation = { "InitialInteractorLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialInteractorLocation_MetaData), NewProp_InitialInteractorLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialGripLoc = { "InitialGripLoc", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialGripLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialGripLoc_MetaData), NewProp_InitialGripLoc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialDropLocation = { "InitialDropLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, InitialDropLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialDropLocation_MetaData), NewProp_InitialDropLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_ReversedRelativeTransform = { "ReversedRelativeTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRInteractibleBaseData, ReversedRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReversedRelativeTransform_MetaData), NewProp_ReversedRelativeTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialInteractorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialGripLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_InitialDropLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewProp_ReversedRelativeTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"BPVRInteractibleBaseData",
	Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::PropPointers),
	sizeof(FBPVRInteractibleBaseData),
	alignof(FBPVRInteractibleBaseData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPVRInteractibleBaseData()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.InnerSingleton, Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData.InnerSingleton;
}
// End ScriptStruct FBPVRInteractibleBaseData

// Begin Class UVRInteractibleFunctionLibrary Function Interactible_BeginPlayInit
struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics
{
	struct VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms
	{
		USceneComponent* InteractibleComp;
		FBPVRInteractibleBaseData BaseDataToInit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inits the initial relative transform of an interactible on begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inits the initial relative transform of an interactible on begin play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractibleComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractibleComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDataToInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_InteractibleComp = { "InteractibleComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms, InteractibleComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractibleComp_MetaData), NewProp_InteractibleComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_BaseDataToInit = { "BaseDataToInit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms, BaseDataToInit), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(0, nullptr) }; // 1478910729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_InteractibleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::NewProp_BaseDataToInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_BeginPlayInit", nullptr, nullptr, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::VRInteractibleFunctionLibrary_eventInteractible_BeginPlayInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_BeginPlayInit)
{
	P_GET_OBJECT(USceneComponent,Z_Param_InteractibleComp);
	P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseDataToInit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRInteractibleFunctionLibrary::Interactible_BeginPlayInit(Z_Param_InteractibleComp,Z_Param_Out_BaseDataToInit);
	P_NATIVE_END;
}
// End Class UVRInteractibleFunctionLibrary Function Interactible_BeginPlayInit

// Begin Class UVRInteractibleFunctionLibrary Function Interactible_GetAngleAroundAxis
struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics
{
	struct VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms
	{
		EVRInteractibleAxis AxisToCalc;
		FVector CurInteractorLocation;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns (in degrees) the angle around the axis of a location\n// Expects the CurInteractorLocation to be in relative space already\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns (in degrees) the angle around the axis of a location\nExpects the CurInteractorLocation to be in relative space already" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToCalc_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToCalc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurInteractorLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_AxisToCalc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_AxisToCalc = { "AxisToCalc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, AxisToCalc), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(0, nullptr) }; // 2970339060
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_CurInteractorLocation = { "CurInteractorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, CurInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_AxisToCalc_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_AxisToCalc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_CurInteractorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetAngleAroundAxis", nullptr, nullptr, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxis)
{
	P_GET_ENUM(EVRInteractibleAxis,Z_Param_AxisToCalc);
	P_GET_STRUCT(FVector,Z_Param_CurInteractorLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxis(EVRInteractibleAxis(Z_Param_AxisToCalc),Z_Param_CurInteractorLocation);
	P_NATIVE_END;
}
// End Class UVRInteractibleFunctionLibrary Function Interactible_GetAngleAroundAxis

// Begin Class UVRInteractibleFunctionLibrary Function Interactible_GetAngleAroundAxisDelta
struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics
{
	struct VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms
	{
		EVRInteractibleAxis AxisToCalc;
		FVector CurInteractorLocation;
		float InitialAngle;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns (in degrees) the delta rotation from the initial angle at grip to the current interactor angle around the axis\n// Expects CurInteractorLocation to be in relative space already\n// You can add this to an initial rotation and clamp the result to rotate over time based on hand position\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns (in degrees) the delta rotation from the initial angle at grip to the current interactor angle around the axis\nExpects CurInteractorLocation to be in relative space already\nYou can add this to an initial rotation and clamp the result to rotate over time based on hand position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToCalc_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisToCalc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurInteractorLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_AxisToCalc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_AxisToCalc = { "AxisToCalc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, AxisToCalc), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(0, nullptr) }; // 2970339060
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_CurInteractorLocation = { "CurInteractorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, CurInteractorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_InitialAngle = { "InitialAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, InitialAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_AxisToCalc_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_AxisToCalc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_CurInteractorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_InitialAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetAngleAroundAxisDelta", nullptr, nullptr, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetAngleAroundAxisDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxisDelta)
{
	P_GET_ENUM(EVRInteractibleAxis,Z_Param_AxisToCalc);
	P_GET_STRUCT(FVector,Z_Param_CurInteractorLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InitialAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxisDelta(EVRInteractibleAxis(Z_Param_AxisToCalc),Z_Param_CurInteractorLocation,Z_Param_InitialAngle);
	P_NATIVE_END;
}
// End Class UVRInteractibleFunctionLibrary Function Interactible_GetAngleAroundAxisDelta

// Begin Class UVRInteractibleFunctionLibrary Function Interactible_GetCurrentParentTransform
struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics
{
	struct VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms
	{
		USceneComponent* SceneComponentToCheck;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get current parent transform\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current parent transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponentToCheck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponentToCheck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_SceneComponentToCheck = { "SceneComponentToCheck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms, SceneComponentToCheck), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponentToCheck_MetaData), NewProp_SceneComponentToCheck_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_SceneComponentToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetCurrentParentTransform", nullptr, nullptr, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetCurrentParentTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetCurrentParentTransform)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SceneComponentToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetCurrentParentTransform(Z_Param_SceneComponentToCheck);
	P_NATIVE_END;
}
// End Class UVRInteractibleFunctionLibrary Function Interactible_GetCurrentParentTransform

// Begin Class UVRInteractibleFunctionLibrary Function Interactible_GetCurrentRelativeTransform
struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics
{
	struct VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms
	{
		USceneComponent* SceneComponentToCheck;
		FBPVRInteractibleBaseData BaseData;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get current relative transform (original transform we were at on grip for the current parent transform)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current relative transform (original transform we were at on grip for the current parent transform)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponentToCheck_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponentToCheck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_SceneComponentToCheck = { "SceneComponentToCheck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, SceneComponentToCheck), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponentToCheck_MetaData), NewProp_SceneComponentToCheck_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_BaseData = { "BaseData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, BaseData), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(0, nullptr) }; // 1478910729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_SceneComponentToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_BaseData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetCurrentRelativeTransform", nullptr, nullptr, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetCurrentRelativeTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetCurrentRelativeTransform)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SceneComponentToCheck);
	P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetCurrentRelativeTransform(Z_Param_SceneComponentToCheck,Z_Param_Out_BaseData);
	P_NATIVE_END;
}
// End Class UVRInteractibleFunctionLibrary Function Interactible_GetCurrentRelativeTransform

// Begin Class UVRInteractibleFunctionLibrary Function Interactible_GetThresholdSnappedValue
struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics
{
	struct VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms
	{
		float ValueToSnap;
		float SnapIncrement;
		float SnapThreshold;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a value that is snapped to the given settings, taking into account the threshold and increment\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a value that is snapped to the given settings, taking into account the threshold and increment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueToSnap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapIncrement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_ValueToSnap = { "ValueToSnap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, ValueToSnap), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_SnapIncrement = { "SnapIncrement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, SnapIncrement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_SnapThreshold = { "SnapThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, SnapThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_ValueToSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_SnapIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_SnapThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_GetThresholdSnappedValue", nullptr, nullptr, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::VRInteractibleFunctionLibrary_eventInteractible_GetThresholdSnappedValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_GetThresholdSnappedValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ValueToSnap);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SnapIncrement);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SnapThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVRInteractibleFunctionLibrary::Interactible_GetThresholdSnappedValue(Z_Param_ValueToSnap,Z_Param_SnapIncrement,Z_Param_SnapThreshold);
	P_NATIVE_END;
}
// End Class UVRInteractibleFunctionLibrary Function Interactible_GetThresholdSnappedValue

// Begin Class UVRInteractibleFunctionLibrary Function Interactible_OnGripInit
struct Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics
{
	struct VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms
	{
		USceneComponent* InteractibleComp;
		FBPActorGripInformation GripInformation;
		FBPVRInteractibleBaseData BaseDataToInit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRInteractibleFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inits the calculated values of a VR Interactible Base Data Structure on a grip event\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inits the calculated values of a VR Interactible Base Data Structure on a grip event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractibleComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractibleComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDataToInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_InteractibleComp = { "InteractibleComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, InteractibleComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractibleComp_MetaData), NewProp_InteractibleComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(0, nullptr) }; // 134483386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_BaseDataToInit = { "BaseDataToInit", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms, BaseDataToInit), Z_Construct_UScriptStruct_FBPVRInteractibleBaseData, METADATA_PARAMS(0, nullptr) }; // 1478910729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_InteractibleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_GripInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::NewProp_BaseDataToInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInteractibleFunctionLibrary, nullptr, "Interactible_OnGripInit", nullptr, nullptr, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::VRInteractibleFunctionLibrary_eventInteractible_OnGripInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRInteractibleFunctionLibrary::execInteractible_OnGripInit)
{
	P_GET_OBJECT(USceneComponent,Z_Param_InteractibleComp);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_GET_STRUCT_REF(FBPVRInteractibleBaseData,Z_Param_Out_BaseDataToInit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRInteractibleFunctionLibrary::Interactible_OnGripInit(Z_Param_InteractibleComp,Z_Param_Out_GripInformation,Z_Param_Out_BaseDataToInit);
	P_NATIVE_END;
}
// End Class UVRInteractibleFunctionLibrary Function Interactible_OnGripInit

// Begin Class UVRInteractibleFunctionLibrary
void UVRInteractibleFunctionLibrary::StaticRegisterNativesUVRInteractibleFunctionLibrary()
{
	UClass* Class = UVRInteractibleFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interactible_BeginPlayInit", &UVRInteractibleFunctionLibrary::execInteractible_BeginPlayInit },
		{ "Interactible_GetAngleAroundAxis", &UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxis },
		{ "Interactible_GetAngleAroundAxisDelta", &UVRInteractibleFunctionLibrary::execInteractible_GetAngleAroundAxisDelta },
		{ "Interactible_GetCurrentParentTransform", &UVRInteractibleFunctionLibrary::execInteractible_GetCurrentParentTransform },
		{ "Interactible_GetCurrentRelativeTransform", &UVRInteractibleFunctionLibrary::execInteractible_GetCurrentRelativeTransform },
		{ "Interactible_GetThresholdSnappedValue", &UVRInteractibleFunctionLibrary::execInteractible_GetThresholdSnappedValue },
		{ "Interactible_OnGripInit", &UVRInteractibleFunctionLibrary::execInteractible_OnGripInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRInteractibleFunctionLibrary);
UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary_NoRegister()
{
	return UVRInteractibleFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interactibles/VRInteractibleFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Interactibles/VRInteractibleFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit, "Interactible_BeginPlayInit" }, // 940821367
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis, "Interactible_GetAngleAroundAxis" }, // 3694541736
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta, "Interactible_GetAngleAroundAxisDelta" }, // 3207423557
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform, "Interactible_GetCurrentParentTransform" }, // 1178248540
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform, "Interactible_GetCurrentRelativeTransform" }, // 3558847546
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue, "Interactible_GetThresholdSnappedValue" }, // 1514377699
		{ &Z_Construct_UFunction_UVRInteractibleFunctionLibrary_Interactible_OnGripInit, "Interactible_OnGripInit" }, // 992283821
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRInteractibleFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::ClassParams = {
	&UVRInteractibleFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRInteractibleFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UVRInteractibleFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRInteractibleFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVRInteractibleFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRInteractibleFunctionLibrary.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRInteractibleFunctionLibrary>()
{
	return UVRInteractibleFunctionLibrary::StaticClass();
}
UVRInteractibleFunctionLibrary::UVRInteractibleFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRInteractibleFunctionLibrary);
UVRInteractibleFunctionLibrary::~UVRInteractibleFunctionLibrary() {}
// End Class UVRInteractibleFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRInteractibleAxis_StaticEnum, TEXT("EVRInteractibleAxis"), &Z_Registration_Info_UEnum_EVRInteractibleAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2970339060U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBPVRInteractibleBaseData::StaticStruct, Z_Construct_UScriptStruct_FBPVRInteractibleBaseData_Statics::NewStructOps, TEXT("BPVRInteractibleBaseData"), &Z_Registration_Info_UScriptStruct_BPVRInteractibleBaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVRInteractibleBaseData), 1478910729U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRInteractibleFunctionLibrary, UVRInteractibleFunctionLibrary::StaticClass, TEXT("UVRInteractibleFunctionLibrary"), &Z_Registration_Info_UClass_UVRInteractibleFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRInteractibleFunctionLibrary), 1078460500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_1440958217(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRInteractibleFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
