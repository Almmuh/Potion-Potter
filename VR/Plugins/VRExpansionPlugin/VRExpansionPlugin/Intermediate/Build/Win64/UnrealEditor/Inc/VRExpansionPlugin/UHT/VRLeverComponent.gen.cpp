// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRLeverComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRLeverComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLeverComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLeverComponent_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
// End Cross Module References

// Begin Enum EVRInteractibleLeverAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleLeverAxis;
static UEnum* EVRInteractibleLeverAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleLeverAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRInteractibleLeverAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleLeverAxis"));
	}
	return Z_Registration_Info_UEnum_EVRInteractibleLeverAxis.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverAxis>()
{
	return EVRInteractibleLeverAxis_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axis_X.Comment", "/* Rotates only towards the X Axis */" },
		{ "Axis_X.Name", "EVRInteractibleLeverAxis::Axis_X" },
		{ "Axis_X.ToolTip", "Rotates only towards the X Axis" },
		{ "Axis_XY.Comment", "/* Rotates freely on the XY Axis' */" },
		{ "Axis_XY.Name", "EVRInteractibleLeverAxis::Axis_XY" },
		{ "Axis_XY.ToolTip", "Rotates freely on the XY Axis'" },
		{ "Axis_Y.Comment", "/* Rotates only towards the Y Axis */" },
		{ "Axis_Y.Name", "EVRInteractibleLeverAxis::Axis_Y" },
		{ "Axis_Y.ToolTip", "Rotates only towards the Y Axis" },
		{ "Axis_Z.Comment", "/* Rotates only towards the Z Axis */" },
		{ "Axis_Z.Name", "EVRInteractibleLeverAxis::Axis_Z" },
		{ "Axis_Z.ToolTip", "Rotates only towards the Z Axis" },
		{ "BlueprintType", "true" },
		{ "FlightStick_XY.Comment", "/* Acts like a flight stick, with AllCurrentLeverAngles being the positive / negative of the current full angle (yaw based on initial grip delta) */" },
		{ "FlightStick_XY.Name", "EVRInteractibleLeverAxis::FlightStick_XY" },
		{ "FlightStick_XY.ToolTip", "Acts like a flight stick, with AllCurrentLeverAngles being the positive / negative of the current full angle (yaw based on initial grip delta)" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRInteractibleLeverAxis::Axis_X", (int64)EVRInteractibleLeverAxis::Axis_X },
		{ "EVRInteractibleLeverAxis::Axis_Y", (int64)EVRInteractibleLeverAxis::Axis_Y },
		{ "EVRInteractibleLeverAxis::Axis_Z", (int64)EVRInteractibleLeverAxis::Axis_Z },
		{ "EVRInteractibleLeverAxis::Axis_XY", (int64)EVRInteractibleLeverAxis::Axis_XY },
		{ "EVRInteractibleLeverAxis::FlightStick_XY", (int64)EVRInteractibleLeverAxis::FlightStick_XY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRInteractibleLeverAxis",
	"EVRInteractibleLeverAxis",
	Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleLeverAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleLeverAxis.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRInteractibleLeverAxis.InnerSingleton;
}
// End Enum EVRInteractibleLeverAxis

// Begin Enum EVRInteractibleLeverEventType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleLeverEventType;
static UEnum* EVRInteractibleLeverEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleLeverEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRInteractibleLeverEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleLeverEventType"));
	}
	return Z_Registration_Info_UEnum_EVRInteractibleLeverEventType.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverEventType>()
{
	return EVRInteractibleLeverEventType_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "LeverNegative.Name", "EVRInteractibleLeverEventType::LeverNegative" },
		{ "LeverPositive.Name", "EVRInteractibleLeverEventType::LeverPositive" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRInteractibleLeverEventType::LeverPositive", (int64)EVRInteractibleLeverEventType::LeverPositive },
		{ "EVRInteractibleLeverEventType::LeverNegative", (int64)EVRInteractibleLeverEventType::LeverNegative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRInteractibleLeverEventType",
	"EVRInteractibleLeverEventType",
	Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleLeverEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleLeverEventType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRInteractibleLeverEventType.InnerSingleton;
}
// End Enum EVRInteractibleLeverEventType

// Begin Enum EVRInteractibleLeverReturnType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleLeverReturnType;
static UEnum* EVRInteractibleLeverReturnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleLeverReturnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRInteractibleLeverReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleLeverReturnType"));
	}
	return Z_Registration_Info_UEnum_EVRInteractibleLeverReturnType.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleLeverReturnType>()
{
	return EVRInteractibleLeverReturnType_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "LerpToMax.Comment", "/** Lerps to closest max (only works with X/Y/Z axis levers) */" },
		{ "LerpToMax.Name", "EVRInteractibleLeverReturnType::LerpToMax" },
		{ "LerpToMax.ToolTip", "Lerps to closest max (only works with X/Y/Z axis levers)" },
		{ "LerpToMaxIfOverThreshold.Comment", "/** Lerps to closest max if over the toggle threshold (only works with X/Y/Z axis levers) */" },
		{ "LerpToMaxIfOverThreshold.Name", "EVRInteractibleLeverReturnType::LerpToMaxIfOverThreshold" },
		{ "LerpToMaxIfOverThreshold.ToolTip", "Lerps to closest max if over the toggle threshold (only works with X/Y/Z axis levers)" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "RetainMomentum.Comment", "/** Retains momentum on release (only works with X/Y/Z axis levers) */" },
		{ "RetainMomentum.Name", "EVRInteractibleLeverReturnType::RetainMomentum" },
		{ "RetainMomentum.ToolTip", "Retains momentum on release (only works with X/Y/Z axis levers)" },
		{ "ReturnToZero.Comment", "/** Returns to zero on drop (lerps) */" },
		{ "ReturnToZero.Name", "EVRInteractibleLeverReturnType::ReturnToZero" },
		{ "ReturnToZero.ToolTip", "Returns to zero on drop (lerps)" },
		{ "Stay.Comment", "/** Stays in place on drop */" },
		{ "Stay.Name", "EVRInteractibleLeverReturnType::Stay" },
		{ "Stay.ToolTip", "Stays in place on drop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRInteractibleLeverReturnType::Stay", (int64)EVRInteractibleLeverReturnType::Stay },
		{ "EVRInteractibleLeverReturnType::ReturnToZero", (int64)EVRInteractibleLeverReturnType::ReturnToZero },
		{ "EVRInteractibleLeverReturnType::LerpToMax", (int64)EVRInteractibleLeverReturnType::LerpToMax },
		{ "EVRInteractibleLeverReturnType::LerpToMaxIfOverThreshold", (int64)EVRInteractibleLeverReturnType::LerpToMaxIfOverThreshold },
		{ "EVRInteractibleLeverReturnType::RetainMomentum", (int64)EVRInteractibleLeverReturnType::RetainMomentum },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRInteractibleLeverReturnType",
	"EVRInteractibleLeverReturnType",
	Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleLeverReturnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleLeverReturnType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRInteractibleLeverReturnType.InnerSingleton;
}
// End Enum EVRInteractibleLeverReturnType

// Begin Delegate FVRLeverStateChangedSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms
	{
		bool LeverStatus;
		EVRInteractibleLeverEventType LeverStatusType;
		float LeverAngleAtTime;
		float FullLeverAngleAtTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the lever state changes. */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the lever state changes." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_LeverStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeverStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeverStatusType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeverStatusType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverAngleAtTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FullLeverAngleAtTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatus_SetBit(void* Obj)
{
	((_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms*)Obj)->LeverStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatus = { "LeverStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatus_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatusType = { "LeverStatusType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms, LeverStatusType), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType, METADATA_PARAMS(0, nullptr) }; // 1394896722
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverAngleAtTime = { "LeverAngleAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms, LeverAngleAtTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_FullLeverAngleAtTime = { "FullLeverAngleAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms, FullLeverAngleAtTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatusType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverStatusType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_LeverAngleAtTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::NewProp_FullLeverAngleAtTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRLeverStateChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRLeverStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRLeverStateChangedSignature, bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAtTime)
{
	struct _Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms
	{
		bool LeverStatus;
		EVRInteractibleLeverEventType LeverStatusType;
		float LeverAngleAtTime;
		float FullLeverAngleAtTime;
	};
	_Script_VRExpansionPlugin_eventVRLeverStateChangedSignature_Parms Parms;
	Parms.LeverStatus=LeverStatus ? true : false;
	Parms.LeverStatusType=LeverStatusType;
	Parms.LeverAngleAtTime=LeverAngleAtTime;
	Parms.FullLeverAngleAtTime=FullLeverAngleAtTime;
	VRLeverStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVRLeverStateChangedSignature

// Begin Delegate FVRLeverFinishedLerpingSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms
	{
		float FinalAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::NewProp_FinalAngle = { "FinalAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms, FinalAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::NewProp_FinalAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRLeverFinishedLerpingSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRLeverFinishedLerpingSignature_DelegateWrapper(const FMulticastScriptDelegate& VRLeverFinishedLerpingSignature, float FinalAngle)
{
	struct _Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms
	{
		float FinalAngle;
	};
	_Script_VRExpansionPlugin_eventVRLeverFinishedLerpingSignature_Parms Parms;
	Parms.FinalAngle=FinalAngle;
	VRLeverFinishedLerpingSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVRLeverFinishedLerpingSignature

// Begin Class UVRLeverComponent Function OnRep_InitialRelativeTransform
struct Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "OnRep_InitialRelativeTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLeverComponent::execOnRep_InitialRelativeTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_InitialRelativeTransform();
	P_NATIVE_END;
}
// End Class UVRLeverComponent Function OnRep_InitialRelativeTransform

// Begin Class UVRLeverComponent Function ReCalculateCurrentAngle
struct Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics
{
	struct VRLeverComponent_eventReCalculateCurrentAngle_Parms
	{
		bool bAllowThrowingEvents;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ReCalculates the current angle, sets it on the back end, and returns it\n// If allow throwing events is true then it will trigger the callbacks for state changes as well\n" },
#endif
		{ "CPP_Default_bAllowThrowingEvents", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ReCalculates the current angle, sets it on the back end, and returns it\nIf allow throwing events is true then it will trigger the callbacks for state changes as well" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAllowThrowingEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowThrowingEvents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_bAllowThrowingEvents_SetBit(void* Obj)
{
	((VRLeverComponent_eventReCalculateCurrentAngle_Parms*)Obj)->bAllowThrowingEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_bAllowThrowingEvents = { "bAllowThrowingEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRLeverComponent_eventReCalculateCurrentAngle_Parms), &Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_bAllowThrowingEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLeverComponent_eventReCalculateCurrentAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_bAllowThrowingEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "ReCalculateCurrentAngle", nullptr, nullptr, Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::VRLeverComponent_eventReCalculateCurrentAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::VRLeverComponent_eventReCalculateCurrentAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLeverComponent::execReCalculateCurrentAngle)
{
	P_GET_UBOOL(Z_Param_bAllowThrowingEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ReCalculateCurrentAngle(Z_Param_bAllowThrowingEvents);
	P_NATIVE_END;
}
// End Class UVRLeverComponent Function ReCalculateCurrentAngle

// Begin Class UVRLeverComponent Function ReceiveLeverFinishedLerping
struct VRLeverComponent_eventReceiveLeverFinishedLerping_Parms
{
	float LeverFinalAngle;
};
static FName NAME_UVRLeverComponent_ReceiveLeverFinishedLerping = FName(TEXT("ReceiveLeverFinishedLerping"));
void UVRLeverComponent::ReceiveLeverFinishedLerping(float LeverFinalAngle)
{
	VRLeverComponent_eventReceiveLeverFinishedLerping_Parms Parms;
	Parms.LeverFinalAngle=LeverFinalAngle;
	ProcessEvent(FindFunctionChecked(NAME_UVRLeverComponent_ReceiveLeverFinishedLerping),&Parms);
}
struct Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Lever Finished Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverFinalAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::NewProp_LeverFinalAngle = { "LeverFinalAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLeverComponent_eventReceiveLeverFinishedLerping_Parms, LeverFinalAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::NewProp_LeverFinalAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "ReceiveLeverFinishedLerping", nullptr, nullptr, Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::PropPointers), sizeof(VRLeverComponent_eventReceiveLeverFinishedLerping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRLeverComponent_eventReceiveLeverFinishedLerping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVRLeverComponent Function ReceiveLeverFinishedLerping

// Begin Class UVRLeverComponent Function ReceiveLeverStateChanged
struct VRLeverComponent_eventReceiveLeverStateChanged_Parms
{
	bool LeverStatus;
	EVRInteractibleLeverEventType LeverStatusType;
	float LeverAngleAtTime;
	float FullLeverAngleAttime;
};
static FName NAME_UVRLeverComponent_ReceiveLeverStateChanged = FName(TEXT("ReceiveLeverStateChanged"));
void UVRLeverComponent::ReceiveLeverStateChanged(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAttime)
{
	VRLeverComponent_eventReceiveLeverStateChanged_Parms Parms;
	Parms.LeverStatus=LeverStatus ? true : false;
	Parms.LeverStatusType=LeverStatusType;
	Parms.LeverAngleAtTime=LeverAngleAtTime;
	Parms.FullLeverAngleAttime=FullLeverAngleAttime;
	ProcessEvent(FindFunctionChecked(NAME_UVRLeverComponent_ReceiveLeverStateChanged),&Parms);
}
struct Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Lever State Changed" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LeverStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LeverStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeverStatusType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeverStatusType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverAngleAtTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FullLeverAngleAttime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatus_SetBit(void* Obj)
{
	((VRLeverComponent_eventReceiveLeverStateChanged_Parms*)Obj)->LeverStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatus = { "LeverStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRLeverComponent_eventReceiveLeverStateChanged_Parms), &Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatus_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatusType = { "LeverStatusType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLeverComponent_eventReceiveLeverStateChanged_Parms, LeverStatusType), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverEventType, METADATA_PARAMS(0, nullptr) }; // 1394896722
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverAngleAtTime = { "LeverAngleAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLeverComponent_eventReceiveLeverStateChanged_Parms, LeverAngleAtTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_FullLeverAngleAttime = { "FullLeverAngleAttime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLeverComponent_eventReceiveLeverStateChanged_Parms, FullLeverAngleAttime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatusType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverStatusType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_LeverAngleAtTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::NewProp_FullLeverAngleAttime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "ReceiveLeverStateChanged", nullptr, nullptr, Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::PropPointers), sizeof(VRLeverComponent_eventReceiveLeverStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRLeverComponent_eventReceiveLeverStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVRLeverComponent Function ReceiveLeverStateChanged

// Begin Class UVRLeverComponent Function ResetInitialLeverLocation
struct Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics
{
	struct VRLeverComponent_eventResetInitialLeverLocation_Parms
	{
		bool bAllowThrowingEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be called after the lever is moved post begin play\n" },
#endif
		{ "CPP_Default_bAllowThrowingEvents", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be called after the lever is moved post begin play" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAllowThrowingEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowThrowingEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::NewProp_bAllowThrowingEvents_SetBit(void* Obj)
{
	((VRLeverComponent_eventResetInitialLeverLocation_Parms*)Obj)->bAllowThrowingEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::NewProp_bAllowThrowingEvents = { "bAllowThrowingEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRLeverComponent_eventResetInitialLeverLocation_Parms), &Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::NewProp_bAllowThrowingEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::NewProp_bAllowThrowingEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "ResetInitialLeverLocation", nullptr, nullptr, Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::VRLeverComponent_eventResetInitialLeverLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::VRLeverComponent_eventResetInitialLeverLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLeverComponent::execResetInitialLeverLocation)
{
	P_GET_UBOOL(Z_Param_bAllowThrowingEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetInitialLeverLocation(Z_Param_bAllowThrowingEvents);
	P_NATIVE_END;
}
// End Class UVRLeverComponent Function ResetInitialLeverLocation

// Begin Class UVRLeverComponent Function SetGripPriority
struct Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics
{
	struct VRLeverComponent_eventSetGripPriority_Parms
	{
		int32 NewGripPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the grip priority\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the grip priority" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGripPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLeverComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "SetGripPriority", nullptr, nullptr, Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::VRLeverComponent_eventSetGripPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::VRLeverComponent_eventSetGripPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLeverComponent_SetGripPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_SetGripPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLeverComponent::execSetGripPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGripPriority(Z_Param_NewGripPriority);
	P_NATIVE_END;
}
// End Class UVRLeverComponent Function SetGripPriority

// Begin Class UVRLeverComponent Function SetIsLocked
struct Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics
{
	struct VRLeverComponent_eventSetIsLocked_Parms
	{
		bool bNewLockedState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets if the lever is locked or not\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets if the lever is locked or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewLockedState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLockedState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::NewProp_bNewLockedState_SetBit(void* Obj)
{
	((VRLeverComponent_eventSetIsLocked_Parms*)Obj)->bNewLockedState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::NewProp_bNewLockedState = { "bNewLockedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRLeverComponent_eventSetIsLocked_Parms), &Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::NewProp_bNewLockedState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::NewProp_bNewLockedState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "SetIsLocked", nullptr, nullptr, Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::VRLeverComponent_eventSetIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::VRLeverComponent_eventSetIsLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLeverComponent_SetIsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_SetIsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLeverComponent::execSetIsLocked)
{
	P_GET_UBOOL(Z_Param_bNewLockedState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsLocked(Z_Param_bNewLockedState);
	P_NATIVE_END;
}
// End Class UVRLeverComponent Function SetIsLocked

// Begin Class UVRLeverComponent Function SetLeverAngle
struct Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics
{
	struct VRLeverComponent_eventSetLeverAngle_Parms
	{
		float NewAngle;
		FVector DualAxisForwardVector;
		bool bAllowThrowingEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *    Sets the angle of the lever forcefully\n\x09 *    @param NewAngle\x09\x09\x09\x09The new angle to use, for single axis levers the sign of the angle will be used\n\x09 *    @param DualAxisForwardVector\x09Only used with dual axis levers, you need to define the forward axis for the angle to apply too\n\x09*/" },
#endif
		{ "CPP_Default_bAllowThrowingEvents", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the angle of the lever forcefully\n@param NewAngle                           The new angle to use, for single axis levers the sign of the angle will be used\n@param DualAxisForwardVector      Only used with dual axis levers, you need to define the forward axis for the angle to apply too" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DualAxisForwardVector;
	static void NewProp_bAllowThrowingEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowThrowingEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_NewAngle = { "NewAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLeverComponent_eventSetLeverAngle_Parms, NewAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_DualAxisForwardVector = { "DualAxisForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLeverComponent_eventSetLeverAngle_Parms, DualAxisForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_bAllowThrowingEvents_SetBit(void* Obj)
{
	((VRLeverComponent_eventSetLeverAngle_Parms*)Obj)->bAllowThrowingEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_bAllowThrowingEvents = { "bAllowThrowingEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRLeverComponent_eventSetLeverAngle_Parms), &Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_bAllowThrowingEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_NewAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_DualAxisForwardVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::NewProp_bAllowThrowingEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLeverComponent, nullptr, "SetLeverAngle", nullptr, nullptr, Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::VRLeverComponent_eventSetLeverAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::VRLeverComponent_eventSetLeverAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLeverComponent::execSetLeverAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngle);
	P_GET_STRUCT(FVector,Z_Param_DualAxisForwardVector);
	P_GET_UBOOL(Z_Param_bAllowThrowingEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeverAngle(Z_Param_NewAngle,Z_Param_DualAxisForwardVector,Z_Param_bAllowThrowingEvents);
	P_NATIVE_END;
}
// End Class UVRLeverComponent Function SetLeverAngle

// Begin Class UVRLeverComponent
void UVRLeverComponent::StaticRegisterNativesUVRLeverComponent()
{
	UClass* Class = UVRLeverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_InitialRelativeTransform", &UVRLeverComponent::execOnRep_InitialRelativeTransform },
		{ "ReCalculateCurrentAngle", &UVRLeverComponent::execReCalculateCurrentAngle },
		{ "ResetInitialLeverLocation", &UVRLeverComponent::execResetInitialLeverLocation },
		{ "SetGripPriority", &UVRLeverComponent::execSetGripPriority },
		{ "SetIsLocked", &UVRLeverComponent::execSetIsLocked },
		{ "SetLeverAngle", &UVRLeverComponent::execSetLeverAngle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRLeverComponent);
UClass* Z_Construct_UClass_UVRLeverComponent_NoRegister()
{
	return UVRLeverComponent::StaticClass();
}
struct Z_Construct_UClass_UVRLeverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A Lever component, can act like a lever, door, wheel, joystick.\n* If set to replicates it will replicate its values to the clients.\n*/" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRLeverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Lever component, can act like a lever, door, wheel, joystick.\nIf set to replicates it will replicate its values to the clients." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeverStateChanged_MetaData[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to use an object\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to use an object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeverFinishedLerping_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLeverAngle_MetaData[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Primary axis angle only\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary axis angle only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllCurrentLeverAngles_MetaData[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Writes out all current angles to this rotator, useful mostly for XY and Flight stick modes\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Writes out all current angles to this rotator, useful mostly for XY and Flight stick modes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLeverForwardVector_MetaData[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bearing Direction, for X/Y is their signed direction, for XY mode it is an actual 2D directional vector\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bearing Direction, for X/Y is their signed direction, for XY mode it is an actual 2D directional vector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUngripAtTargetRotation_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverRotationAxis_MetaData[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation axis to use, XY is combined X and Y, only LerpToZero and PositiveLimits work with this mode\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation axis to use, XY is combined X and Y, only LerpToZero and PositiveLimits work with this mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverTogglePercentage_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The percentage of the angle at witch the lever will toggle\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The percentage of the angle at witch the lever will toggle" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverLimitPositive_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ClampMax", "179.9" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The max angle of the lever in the positive direction\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max angle of the lever in the positive direction" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverLimitNegative_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ClampMax", "179.9" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The max angle of the lever in the negative direction\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max angle of the lever in the negative direction" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlightStickYawLimit_MetaData[] = {
		{ "Category", "VRLeverComponent|Flight Stick Settings" },
		{ "ClampMax", "179.9" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The max angle of the flightsticks yaw in either direction off of 0\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max angle of the flightsticks yaw in either direction off of 0" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then this lever is locked in place until unlocked again\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then this lever is locked in place until unlocked again" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDropWhenLocked_MetaData[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then this lever will auto drop even when locked\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then this lever will auto drop even when locked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverReturnTypeWhenReleased_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendLeverEventsDuringLerp_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverReturnSpeed_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendAxisValuesByAngleThreshold_MetaData[] = {
		{ "Category", "VRLeverComponent|Flight Stick Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then we will blend the values of the XY axis' by the AngleThreshold, lowering Pitch/Yaw influence based on how far from leaning into the axis that the lever is\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then we will blend the values of the XY axis' by the AngleThreshold, lowering Pitch/Yaw influence based on how far from leaning into the axis that the lever is" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "VRLeverComponent|Flight Stick Settings" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The angle threshold to blend around, default of 90.0 blends 0.0 to 1.0 smoothly across entire sweep\n// A value of 45 would blend it to 0 halfway rotated to the other axis, while 180 would still leave half the influence when fully rotated out of facing\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The angle threshold to blend around, default of 90.0 blends 0.0 to 1.0 smoothly across entire sweep\nA value of 45 would blend it to 0 halfway rotated to the other axis, while 180 would still leave half the influence when fully rotated out of facing" },
#endif
		{ "UIMax", "360.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesToAverage_MetaData[] = {
		{ "Category", "VRLeverComponent|Momentum Settings" },
		{ "ClampMax", "12" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of frames to average momentum across for the release momentum (avoids quick waggles)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of frames to average momentum across for the release momentum (avoids quick waggles)" },
#endif
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverMomentumFriction_MetaData[] = {
		{ "Category", "VRLeverComponent|Momentum Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Units in degrees per second to slow a momentum lerp down\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Units in degrees per second to slow a momentum lerp down" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverRestitution_MetaData[] = {
		{ "Category", "VRLeverComponent|Momentum Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// % of elasticity on reaching the end 0 - 1.0 \n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "% of elasticity on reaching the end 0 - 1.0" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLeverMomentum_MetaData[] = {
		{ "Category", "VRLeverComponent|Momentum Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum momentum of the lever in degrees per second\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum momentum of the lever in degrees per second" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLerping_MetaData[] = {
		{ "Category", "VRLeverComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "VRLeverComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Now replicating this so that it works correctly over the network\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Now replicating this so that it works correctly over the network" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that are set on this object */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are set on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requires bReplicates to be true for the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance before the object will break out of the hand, 0.0f == never will\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance before the object will break out of the hand, 0.0f == never will" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we deny gripping on this object\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ScriptName", "IsDenyGripping" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we deny gripping on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
		{ "ScriptName", "IsCurrentlyHeld" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingGrip_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set on grip notify, not net serializing\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set on grip notify, not net serializing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is dropped\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRLeverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is dropped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeverStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeverFinishedLerping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentLeverAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllCurrentLeverAngles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLeverForwardVector;
	static void NewProp_bUngripAtTargetRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUngripAtTargetRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeverRotationAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeverRotationAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverTogglePercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverLimitPositive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverLimitNegative;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlightStickYawLimit;
	static void NewProp_bIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
	static void NewProp_bAutoDropWhenLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDropWhenLocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeverReturnTypeWhenReleased_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeverReturnTypeWhenReleased;
	static void NewProp_bSendLeverEventsDuringLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendLeverEventsDuringLerp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverReturnSpeed;
	static void NewProp_bBlendAxisValuesByAngleThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendAxisValuesByAngleThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToAverage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverMomentumFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeverRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLeverMomentum;
	static void NewProp_bIsLerping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLerping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimarySlotRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondarySlotRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GripPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static void NewProp_bRepGameplayTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepGameplayTags;
	static void NewProp_bReplicateMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementReplicationSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationSetting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakDistance;
	static void NewProp_bDenyGripping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
	static void NewProp_bIsHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoldingGrip;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRLeverComponent_OnRep_InitialRelativeTransform, "OnRep_InitialRelativeTransform" }, // 4082919747
		{ &Z_Construct_UFunction_UVRLeverComponent_ReCalculateCurrentAngle, "ReCalculateCurrentAngle" }, // 459410300
		{ &Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverFinishedLerping, "ReceiveLeverFinishedLerping" }, // 3912631465
		{ &Z_Construct_UFunction_UVRLeverComponent_ReceiveLeverStateChanged, "ReceiveLeverStateChanged" }, // 2603985614
		{ &Z_Construct_UFunction_UVRLeverComponent_ResetInitialLeverLocation, "ResetInitialLeverLocation" }, // 2127894649
		{ &Z_Construct_UFunction_UVRLeverComponent_SetGripPriority, "SetGripPriority" }, // 2246534971
		{ &Z_Construct_UFunction_UVRLeverComponent_SetIsLocked, "SetIsLocked" }, // 852453269
		{ &Z_Construct_UFunction_UVRLeverComponent_SetLeverAngle, "SetLeverAngle" }, // 4223182554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRLeverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverStateChanged = { "OnLeverStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, OnLeverStateChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeverStateChanged_MetaData), NewProp_OnLeverStateChanged_MetaData) }; // 772776666
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverFinishedLerping = { "OnLeverFinishedLerping", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, OnLeverFinishedLerping), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRLeverFinishedLerpingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeverFinishedLerping_MetaData), NewProp_OnLeverFinishedLerping_MetaData) }; // 1023678025
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverAngle = { "CurrentLeverAngle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, CurrentLeverAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLeverAngle_MetaData), NewProp_CurrentLeverAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AllCurrentLeverAngles = { "AllCurrentLeverAngles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, AllCurrentLeverAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllCurrentLeverAngles_MetaData), NewProp_AllCurrentLeverAngles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverForwardVector = { "CurrentLeverForwardVector", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, CurrentLeverForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLeverForwardVector_MetaData), NewProp_CurrentLeverForwardVector_MetaData) };
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bUngripAtTargetRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation = { "bUngripAtTargetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUngripAtTargetRotation_MetaData), NewProp_bUngripAtTargetRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis = { "LeverRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, LeverRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverRotationAxis_MetaData), NewProp_LeverRotationAxis_MetaData) }; // 3023364700
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverTogglePercentage = { "LeverTogglePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, LeverTogglePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverTogglePercentage_MetaData), NewProp_LeverTogglePercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitPositive = { "LeverLimitPositive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, LeverLimitPositive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverLimitPositive_MetaData), NewProp_LeverLimitPositive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitNegative = { "LeverLimitNegative", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, LeverLimitNegative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverLimitNegative_MetaData), NewProp_LeverLimitNegative_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FlightStickYawLimit = { "FlightStickYawLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, FlightStickYawLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlightStickYawLimit_MetaData), NewProp_FlightStickYawLimit_MetaData) };
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocked_MetaData), NewProp_bIsLocked_MetaData) };
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bAutoDropWhenLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked = { "bAutoDropWhenLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDropWhenLocked_MetaData), NewProp_bAutoDropWhenLocked_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased = { "LeverReturnTypeWhenReleased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, LeverReturnTypeWhenReleased), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleLeverReturnType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverReturnTypeWhenReleased_MetaData), NewProp_LeverReturnTypeWhenReleased_MetaData) }; // 2953244616
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bSendLeverEventsDuringLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp = { "bSendLeverEventsDuringLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendLeverEventsDuringLerp_MetaData), NewProp_bSendLeverEventsDuringLerp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnSpeed = { "LeverReturnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, LeverReturnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverReturnSpeed_MetaData), NewProp_LeverReturnSpeed_MetaData) };
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bBlendAxisValuesByAngleThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold = { "bBlendAxisValuesByAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendAxisValuesByAngleThreshold_MetaData), NewProp_bBlendAxisValuesByAngleThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, AngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleThreshold_MetaData), NewProp_AngleThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FramesToAverage = { "FramesToAverage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, FramesToAverage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesToAverage_MetaData), NewProp_FramesToAverage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverMomentumFriction = { "LeverMomentumFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, LeverMomentumFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverMomentumFriction_MetaData), NewProp_LeverMomentumFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRestitution = { "LeverRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, LeverRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverRestitution_MetaData), NewProp_LeverRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MaxLeverMomentum = { "MaxLeverMomentum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, MaxLeverMomentum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLeverMomentum_MetaData), NewProp_MaxLeverMomentum_MetaData) };
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bIsLerping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping = { "bIsLerping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLerping_MetaData), NewProp_bIsLerping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, PrimarySlotRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimarySlotRange_MetaData), NewProp_PrimarySlotRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, SecondarySlotRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondarySlotRange_MetaData), NewProp_SecondarySlotRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, GripPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripPriority_MetaData), NewProp_GripPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", "OnRep_InitialRelativeTransform", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRelativeTransform_MetaData), NewProp_InitialRelativeTransform_MetaData) }; // 3972615260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bRepGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepGameplayTags_MetaData), NewProp_bRepGameplayTags_MetaData) };
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateMovement_MetaData), NewProp_bReplicateMovement_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting = { "MovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementReplicationSetting_MetaData), NewProp_MovementReplicationSetting_MetaData) }; // 2309891904
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, BreakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakDistance_MetaData), NewProp_BreakDistance_MetaData) };
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bDenyGripping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDenyGripping_MetaData), NewProp_bDenyGripping_MetaData) };
void Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((UVRLeverComponent*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRLeverComponent), &Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHeld_MetaData), NewProp_bIsHeld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_HoldingGrip = { "HoldingGrip", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, HoldingGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingGrip_MetaData), NewProp_HoldingGrip_MetaData) }; // 2048483295
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGripped_MetaData), NewProp_OnGripped_MetaData) }; // 3815915342
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLeverComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDropped_MetaData), NewProp_OnDropped_MetaData) }; // 1002007758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRLeverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnLeverFinishedLerping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AllCurrentLeverAngles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_CurrentLeverForwardVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bUngripAtTargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverTogglePercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitPositive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverLimitNegative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FlightStickYawLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bAutoDropWhenLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnTypeWhenReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bSendLeverEventsDuringLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverReturnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bBlendAxisValuesByAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_AngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_FramesToAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverMomentumFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_LeverRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MaxLeverMomentum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsLerping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_PrimarySlotRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_SecondarySlotRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GripPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_InitialRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bRepGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_MovementReplicationSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_BreakDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bDenyGripping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_bIsHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_HoldingGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnGripped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLeverComponent_Statics::NewProp_OnDropped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRLeverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRLeverComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRLeverComponent, IVRGripInterface), false },  // 199302906
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRLeverComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRLeverComponent_Statics::ClassParams = {
	&UVRLeverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRLeverComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLeverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRLeverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRLeverComponent()
{
	if (!Z_Registration_Info_UClass_UVRLeverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRLeverComponent.OuterSingleton, Z_Construct_UClass_UVRLeverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRLeverComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRLeverComponent>()
{
	return UVRLeverComponent::StaticClass();
}
void UVRLeverComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_InitialRelativeTransform(TEXT("InitialRelativeTransform"));
	static const FName Name_GameplayTags(TEXT("GameplayTags"));
	static const FName Name_bRepGameplayTags(TEXT("bRepGameplayTags"));
	static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
	const bool bIsValid = true
		&& Name_InitialRelativeTransform == ClassReps[(int32)ENetFields_Private::InitialRelativeTransform].Property->GetFName()
		&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
		&& Name_bRepGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGameplayTags].Property->GetFName()
		&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRLeverComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRLeverComponent);
// End Class UVRLeverComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRInteractibleLeverAxis_StaticEnum, TEXT("EVRInteractibleLeverAxis"), &Z_Registration_Info_UEnum_EVRInteractibleLeverAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3023364700U) },
		{ EVRInteractibleLeverEventType_StaticEnum, TEXT("EVRInteractibleLeverEventType"), &Z_Registration_Info_UEnum_EVRInteractibleLeverEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1394896722U) },
		{ EVRInteractibleLeverReturnType_StaticEnum, TEXT("EVRInteractibleLeverReturnType"), &Z_Registration_Info_UEnum_EVRInteractibleLeverReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2953244616U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRLeverComponent, UVRLeverComponent::StaticClass, TEXT("UVRLeverComponent"), &Z_Registration_Info_UClass_UVRLeverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRLeverComponent), 1381959133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_113163147(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRLeverComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
