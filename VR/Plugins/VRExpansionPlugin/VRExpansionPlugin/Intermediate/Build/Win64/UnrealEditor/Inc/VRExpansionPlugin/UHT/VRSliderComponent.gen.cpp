// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRSliderComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSliderComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSliderComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSliderComponent_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
// End Cross Module References

// Begin Enum EVRInteractibleSliderLerpType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType;
static UEnum* EVRInteractibleSliderLerpType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleSliderLerpType"));
	}
	return Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleSliderLerpType>()
{
	return EVRInteractibleSliderLerpType_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "Lerp_Interp.Name", "EVRInteractibleSliderLerpType::Lerp_Interp" },
		{ "Lerp_InterpConstantTo.Name", "EVRInteractibleSliderLerpType::Lerp_InterpConstantTo" },
		{ "Lerp_None.Name", "EVRInteractibleSliderLerpType::Lerp_None" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRInteractibleSliderLerpType::Lerp_None", (int64)EVRInteractibleSliderLerpType::Lerp_None },
		{ "EVRInteractibleSliderLerpType::Lerp_Interp", (int64)EVRInteractibleSliderLerpType::Lerp_Interp },
		{ "EVRInteractibleSliderLerpType::Lerp_InterpConstantTo", (int64)EVRInteractibleSliderLerpType::Lerp_InterpConstantTo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRInteractibleSliderLerpType",
	"EVRInteractibleSliderLerpType",
	Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType.InnerSingleton;
}
// End Enum EVRInteractibleSliderLerpType

// Begin Enum EVRInteractibleSliderDropBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior;
static UEnum* EVRInteractibleSliderDropBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleSliderDropBehavior"));
	}
	return Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleSliderDropBehavior>()
{
	return EVRInteractibleSliderDropBehavior_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "RetainMomentum.Comment", "/** Retains momentum on release*/" },
		{ "RetainMomentum.Name", "EVRInteractibleSliderDropBehavior::RetainMomentum" },
		{ "RetainMomentum.ToolTip", "Retains momentum on release" },
		{ "Stay.Comment", "/** Stays in place on drop */" },
		{ "Stay.Name", "EVRInteractibleSliderDropBehavior::Stay" },
		{ "Stay.ToolTip", "Stays in place on drop" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRInteractibleSliderDropBehavior::Stay", (int64)EVRInteractibleSliderDropBehavior::Stay },
		{ "EVRInteractibleSliderDropBehavior::RetainMomentum", (int64)EVRInteractibleSliderDropBehavior::RetainMomentum },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRInteractibleSliderDropBehavior",
	"EVRInteractibleSliderDropBehavior",
	Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior.InnerSingleton;
}
// End Enum EVRInteractibleSliderDropBehavior

// Begin Delegate FVRSliderHitPointSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms
	{
		float SliderProgressPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the slider state changes. */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the slider state changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderProgressPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::NewProp_SliderProgressPoint = { "SliderProgressPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms, SliderProgressPoint), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::NewProp_SliderProgressPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRSliderHitPointSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRSliderHitPointSignature_DelegateWrapper(const FMulticastScriptDelegate& VRSliderHitPointSignature, float SliderProgressPoint)
{
	struct _Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms
	{
		float SliderProgressPoint;
	};
	_Script_VRExpansionPlugin_eventVRSliderHitPointSignature_Parms Parms;
	Parms.SliderProgressPoint=SliderProgressPoint;
	VRSliderHitPointSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVRSliderHitPointSignature

// Begin Delegate FVRSliderFinishedLerpingSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms
	{
		float FinalProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::NewProp_FinalProgress = { "FinalProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms, FinalProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::NewProp_FinalProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRSliderFinishedLerpingSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRSliderFinishedLerpingSignature_DelegateWrapper(const FMulticastScriptDelegate& VRSliderFinishedLerpingSignature, float FinalProgress)
{
	struct _Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms
	{
		float FinalProgress;
	};
	_Script_VRExpansionPlugin_eventVRSliderFinishedLerpingSignature_Parms Parms;
	Parms.FinalProgress=FinalProgress;
	VRSliderFinishedLerpingSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVRSliderFinishedLerpingSignature

// Begin Class UVRSliderComponent Function CalculateSliderProgress
struct Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics
{
	struct VRSliderComponent_eventCalculateSliderProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculates the current slider progress\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the current slider progress" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRSliderComponent_eventCalculateSliderProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "CalculateSliderProgress", nullptr, nullptr, Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::VRSliderComponent_eventCalculateSliderProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::VRSliderComponent_eventCalculateSliderProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRSliderComponent::execCalculateSliderProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateSliderProgress();
	P_NATIVE_END;
}
// End Class UVRSliderComponent Function CalculateSliderProgress

// Begin Class UVRSliderComponent Function GetPerAxisSliderProgress
struct Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics
{
	struct VRSliderComponent_eventGetPerAxisSliderProgress_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the slider progress as it is currently per axis (not the total progress, just the amount per axis that has a min/max)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the slider progress as it is currently per axis (not the total progress, just the amount per axis that has a min/max)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRSliderComponent_eventGetPerAxisSliderProgress_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "GetPerAxisSliderProgress", nullptr, nullptr, Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::VRSliderComponent_eventGetPerAxisSliderProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::VRSliderComponent_eventGetPerAxisSliderProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRSliderComponent::execGetPerAxisSliderProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPerAxisSliderProgress();
	P_NATIVE_END;
}
// End Class UVRSliderComponent Function GetPerAxisSliderProgress

// Begin Class UVRSliderComponent Function OnRep_InitialRelativeTransform
struct Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "OnRep_InitialRelativeTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRSliderComponent::execOnRep_InitialRelativeTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_InitialRelativeTransform();
	P_NATIVE_END;
}
// End Class UVRSliderComponent Function OnRep_InitialRelativeTransform

// Begin Class UVRSliderComponent Function ReceiveSliderFinishedLerping
struct VRSliderComponent_eventReceiveSliderFinishedLerping_Parms
{
	float FinalProgress;
};
static FName NAME_UVRSliderComponent_ReceiveSliderFinishedLerping = FName(TEXT("ReceiveSliderFinishedLerping"));
void UVRSliderComponent::ReceiveSliderFinishedLerping(float FinalProgress)
{
	VRSliderComponent_eventReceiveSliderFinishedLerping_Parms Parms;
	Parms.FinalProgress=FinalProgress;
	ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_ReceiveSliderFinishedLerping),&Parms);
}
struct Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Slider Finished Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::NewProp_FinalProgress = { "FinalProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRSliderComponent_eventReceiveSliderFinishedLerping_Parms, FinalProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::NewProp_FinalProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "ReceiveSliderFinishedLerping", nullptr, nullptr, Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::PropPointers), sizeof(VRSliderComponent_eventReceiveSliderFinishedLerping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRSliderComponent_eventReceiveSliderFinishedLerping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVRSliderComponent Function ReceiveSliderFinishedLerping

// Begin Class UVRSliderComponent Function ReceiveSliderHitPoint
struct VRSliderComponent_eventReceiveSliderHitPoint_Parms
{
	float SliderProgressPoint;
};
static FName NAME_UVRSliderComponent_ReceiveSliderHitPoint = FName(TEXT("ReceiveSliderHitPoint"));
void UVRSliderComponent::ReceiveSliderHitPoint(float SliderProgressPoint)
{
	VRSliderComponent_eventReceiveSliderHitPoint_Parms Parms;
	Parms.SliderProgressPoint=SliderProgressPoint;
	ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_ReceiveSliderHitPoint),&Parms);
}
struct Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Slider State Changed" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderProgressPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::NewProp_SliderProgressPoint = { "SliderProgressPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRSliderComponent_eventReceiveSliderHitPoint_Parms, SliderProgressPoint), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::NewProp_SliderProgressPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "ReceiveSliderHitPoint", nullptr, nullptr, Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::PropPointers), sizeof(VRSliderComponent_eventReceiveSliderHitPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRSliderComponent_eventReceiveSliderHitPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVRSliderComponent Function ReceiveSliderHitPoint

// Begin Class UVRSliderComponent Function ResetInitialSliderLocation
struct Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be called after the slider is moved post begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be called after the slider is moved post begin play" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "ResetInitialSliderLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRSliderComponent::execResetInitialSliderLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetInitialSliderLocation();
	P_NATIVE_END;
}
// End Class UVRSliderComponent Function ResetInitialSliderLocation

// Begin Class UVRSliderComponent Function SetGripPriority
struct Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics
{
	struct VRSliderComponent_eventSetGripPriority_Parms
	{
		int32 NewGripPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the grip priority\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the grip priority" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGripPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRSliderComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "SetGripPriority", nullptr, nullptr, Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::VRSliderComponent_eventSetGripPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::VRSliderComponent_eventSetGripPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRSliderComponent_SetGripPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_SetGripPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRSliderComponent::execSetGripPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGripPriority(Z_Param_NewGripPriority);
	P_NATIVE_END;
}
// End Class UVRSliderComponent Function SetGripPriority

// Begin Class UVRSliderComponent Function SetIsLocked
struct Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics
{
	struct VRSliderComponent_eventSetIsLocked_Parms
	{
		bool bNewLockedState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets if the slider is locked or not\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets if the slider is locked or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewLockedState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLockedState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::NewProp_bNewLockedState_SetBit(void* Obj)
{
	((VRSliderComponent_eventSetIsLocked_Parms*)Obj)->bNewLockedState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::NewProp_bNewLockedState = { "bNewLockedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRSliderComponent_eventSetIsLocked_Parms), &Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::NewProp_bNewLockedState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::NewProp_bNewLockedState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "SetIsLocked", nullptr, nullptr, Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::VRSliderComponent_eventSetIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::VRSliderComponent_eventSetIsLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRSliderComponent_SetIsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_SetIsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRSliderComponent::execSetIsLocked)
{
	P_GET_UBOOL(Z_Param_bNewLockedState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsLocked(Z_Param_bNewLockedState);
	P_NATIVE_END;
}
// End Class UVRSliderComponent Function SetIsLocked

// Begin Class UVRSliderComponent Function SetSliderProgress
struct Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics
{
	struct VRSliderComponent_eventSetSliderProgress_Parms
	{
		float NewSliderProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forcefully sets the slider progress to the defined value\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forcefully sets the slider progress to the defined value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSliderProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::NewProp_NewSliderProgress = { "NewSliderProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRSliderComponent_eventSetSliderProgress_Parms, NewSliderProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::NewProp_NewSliderProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "SetSliderProgress", nullptr, nullptr, Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::VRSliderComponent_eventSetSliderProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::VRSliderComponent_eventSetSliderProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRSliderComponent::execSetSliderProgress)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSliderProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSliderProgress(Z_Param_NewSliderProgress);
	P_NATIVE_END;
}
// End Class UVRSliderComponent Function SetSliderProgress

// Begin Class UVRSliderComponent Function SetSplineComponentToFollow
struct Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics
{
	struct VRSliderComponent_eventSetSplineComponentToFollow_Parms
	{
		USplineComponent* SplineToFollow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the spline component to follow, if empty, just reinitializes the transform and removes the follow component\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the spline component to follow, if empty, just reinitializes the transform and removes the follow component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineToFollow_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineToFollow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::NewProp_SplineToFollow = { "SplineToFollow", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRSliderComponent_eventSetSplineComponentToFollow_Parms, SplineToFollow), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineToFollow_MetaData), NewProp_SplineToFollow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::NewProp_SplineToFollow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, nullptr, "SetSplineComponentToFollow", nullptr, nullptr, Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::VRSliderComponent_eventSetSplineComponentToFollow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::VRSliderComponent_eventSetSplineComponentToFollow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRSliderComponent::execSetSplineComponentToFollow)
{
	P_GET_OBJECT(USplineComponent,Z_Param_SplineToFollow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSplineComponentToFollow(Z_Param_SplineToFollow);
	P_NATIVE_END;
}
// End Class UVRSliderComponent Function SetSplineComponentToFollow

// Begin Class UVRSliderComponent
void UVRSliderComponent::StaticRegisterNativesUVRSliderComponent()
{
	UClass* Class = UVRSliderComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateSliderProgress", &UVRSliderComponent::execCalculateSliderProgress },
		{ "GetPerAxisSliderProgress", &UVRSliderComponent::execGetPerAxisSliderProgress },
		{ "OnRep_InitialRelativeTransform", &UVRSliderComponent::execOnRep_InitialRelativeTransform },
		{ "ResetInitialSliderLocation", &UVRSliderComponent::execResetInitialSliderLocation },
		{ "SetGripPriority", &UVRSliderComponent::execSetGripPriority },
		{ "SetIsLocked", &UVRSliderComponent::execSetIsLocked },
		{ "SetSliderProgress", &UVRSliderComponent::execSetSliderProgress },
		{ "SetSplineComponentToFollow", &UVRSliderComponent::execSetSplineComponentToFollow },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRSliderComponent);
UClass* Z_Construct_UClass_UVRSliderComponent_NoRegister()
{
	return UVRSliderComponent::StaticClass();
}
struct Z_Construct_UClass_UVRSliderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A slider component, can act like a scroll bar, or gun bolt, or spline following component\n*/" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRSliderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A slider component, can act like a scroll bar, or gun bolt, or spline following component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSliderHitPoint_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to use an object\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to use an object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSliderFinishedLerping_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInTick_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then this slider will only update in its tick event instead of normally using the controllers update event\n// Keep in mind that you then must adjust the tick group in order to make sure it happens after the gripping controller\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then this slider will only update in its tick event instead of normally using the controllers update event\nKeep in mind that you then must adjust the tick group in order to make sure it happens after the gripping controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSlideDistance_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSlideDistance_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderBehaviorWhenReleased_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesToAverage_MetaData[] = {
		{ "Category", "VRSliderComponent|Momentum Settings" },
		{ "ClampMax", "12" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of frames to average momentum across for the release momentum (avoids quick waggles)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of frames to average momentum across for the release momentum (avoids quick waggles)" },
#endif
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderMomentumFriction_MetaData[] = {
		{ "Category", "VRSliderComponent|Momentum Settings" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Units in % of total length per second to slow a momentum lerp down\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Units in % of total length per second to slow a momentum lerp down" },
#endif
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderRestitution_MetaData[] = {
		{ "Category", "VRSliderComponent|Momentum Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// % of elasticity on reaching the end 0 - 1.0 \n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "% of elasticity on reaching the end 0 - 1.0" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSliderMomentum_MetaData[] = {
		{ "Category", "VRSliderComponent|Momentum Settings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum momentum of the slider in units of the total distance per second (0.0 - 1.0)\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum momentum of the slider in units of the total distance per second (0.0 - 1.0)" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLerping_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSliderProgress_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets filled in with the current slider location progress\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets filled in with the current slider location progress" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSlideDistanceIsInParentSpace_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then this slider is locked in place until unlocked again\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then this slider is locked in place until unlocked again" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDropWhenLocked_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then this slider will auto drop even when locked\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then this slider will auto drop even when locked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyLogic_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uses the legacy slider logic that doesn't ABS the min and max values\n// Retains compatibility with some older projects\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses the legacy slider logic that doesn't ABS the min and max values\nRetains compatibility with some older projects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventThrowThreshold_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far away from an event state before the slider allows throwing the same state again, default of 1.0 means it takes a full toggle\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far away from an event state before the slider allows throwing the same state again, default of 1.0 means it takes a full toggle" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponentToFollow_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Using = OnRep_SplineComponentToFollow*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Using = OnRep_SplineComponentToFollow" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowSplineRotationAndScale_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UFUNCTION()\n\x09virtual void OnRep_SplineComponentToFollow()\n\x09{\n\x09\x09""CalculateSliderProgress();\n\x09}*/// Where the slider should follow the rotation and scale of the spline as well\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\n       virtual void OnRep_SplineComponentToFollow()\n       {\n               CalculateSliderProgress();\n       }// Where the slider should follow the rotation and scale of the spline as well" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceSplineLinearity_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does not allow the slider to skip past nodes on the spline, it requires it to progress from node to node\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does not allow the slider to skip past nodes on the spline, it requires it to progress from node to node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineLerpType_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of lerp to use when following a spline\n// For lerping I would suggest using ConstantTo in general as it will be the smoothest.\n// Normal Interp will change speed based on distance, that may also have its uses.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of lerp to use when following a spline\nFor lerping I would suggest using ConstantTo in general as it will be the smoothest.\nNormal Interp will change speed based on distance, that may also have its uses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineLerpValue_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lerp Value for the spline, when in InterpMode it is the speed of interpolation\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lerp Value for the spline, when in InterpMode it is the speed of interpolation" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSliderUsesSnapPoints_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uses snap increments to move between, not compatible with retain momentum.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses snap increments to move between, not compatible with retain momentum." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapIncrement_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Portion of the slider that the slider snaps to on release and when within the threshold distance\n" },
#endif
		{ "editcondition", "bSliderUsesSnapPoints" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Portion of the slider that the slider snaps to on release and when within the threshold distance" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapThreshold_MetaData[] = {
		{ "Category", "VRSliderComponent" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Threshold distance that when within the slider will stay snapped to its current snap increment\n" },
#endif
		{ "editcondition", "bSliderUsesSnapPoints" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Threshold distance that when within the slider will stay snapped to its current snap increment" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncrementProgressBetweenSnapPoints_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then the slider progress will keep incrementing between snap points if outside of the threshold\n// However events will not be thrown\n" },
#endif
		{ "editcondition", "bSliderUsesSnapPoints" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the slider progress will keep incrementing between snap points if outside of the threshold\nHowever events will not be thrown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "VRSliderComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Now replicating this so that it works correctly over the network\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Now replicating this so that it works correctly over the network" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that are set on this object */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are set on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requires bReplicates to be true for the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance before the object will break out of the hand, 0.0f == never will\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance before the object will break out of the hand, 0.0f == never will" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we deny gripping on this object\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ScriptName", "IsDenyGripping" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we deny gripping on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
		{ "ScriptName", "IsCurrentlyHeld" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingGrip_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set on grip notify, not net serializing\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set on grip notify, not net serializing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is dropped\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is dropped" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSliderHitPoint;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSliderFinishedLerping;
	static void NewProp_bUpdateInTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInTick;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxSlideDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinSlideDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SliderBehaviorWhenReleased_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SliderBehaviorWhenReleased;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToAverage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderMomentumFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSliderMomentum;
	static void NewProp_bIsLerping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLerping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSliderProgress;
	static void NewProp_bSlideDistanceIsInParentSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlideDistanceIsInParentSpace;
	static void NewProp_bIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
	static void NewProp_bAutoDropWhenLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDropWhenLocked;
	static void NewProp_bUseLegacyLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyLogic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventThrowThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimarySlotRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondarySlotRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GripPriority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponentToFollow;
	static void NewProp_bFollowSplineRotationAndScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowSplineRotationAndScale;
	static void NewProp_bEnforceSplineLinearity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceSplineLinearity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineLerpType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineLerpType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineLerpValue;
	static void NewProp_bSliderUsesSnapPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSliderUsesSnapPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapIncrement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapThreshold;
	static void NewProp_bIncrementProgressBetweenSnapPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncrementProgressBetweenSnapPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static void NewProp_bRepGameplayTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepGameplayTags;
	static void NewProp_bReplicateMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementReplicationSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationSetting;
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
		{ &Z_Construct_UFunction_UVRSliderComponent_CalculateSliderProgress, "CalculateSliderProgress" }, // 1710153451
		{ &Z_Construct_UFunction_UVRSliderComponent_GetPerAxisSliderProgress, "GetPerAxisSliderProgress" }, // 2480278654
		{ &Z_Construct_UFunction_UVRSliderComponent_OnRep_InitialRelativeTransform, "OnRep_InitialRelativeTransform" }, // 1091509645
		{ &Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderFinishedLerping, "ReceiveSliderFinishedLerping" }, // 736846024
		{ &Z_Construct_UFunction_UVRSliderComponent_ReceiveSliderHitPoint, "ReceiveSliderHitPoint" }, // 627699355
		{ &Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation, "ResetInitialSliderLocation" }, // 3252730149
		{ &Z_Construct_UFunction_UVRSliderComponent_SetGripPriority, "SetGripPriority" }, // 895491432
		{ &Z_Construct_UFunction_UVRSliderComponent_SetIsLocked, "SetIsLocked" }, // 2584630951
		{ &Z_Construct_UFunction_UVRSliderComponent_SetSliderProgress, "SetSliderProgress" }, // 3286224394
		{ &Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow, "SetSplineComponentToFollow" }, // 379980316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRSliderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderHitPoint = { "OnSliderHitPoint", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, OnSliderHitPoint), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderHitPointSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSliderHitPoint_MetaData), NewProp_OnSliderHitPoint_MetaData) }; // 1556387354
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderFinishedLerping = { "OnSliderFinishedLerping", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, OnSliderFinishedLerping), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSliderFinishedLerpingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSliderFinishedLerping_MetaData), NewProp_OnSliderFinishedLerping_MetaData) }; // 3759448062
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bUpdateInTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick = { "bUpdateInTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateInTick_MetaData), NewProp_bUpdateInTick_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSlideDistance = { "MaxSlideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, MaxSlideDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSlideDistance_MetaData), NewProp_MaxSlideDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MinSlideDistance = { "MinSlideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, MinSlideDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSlideDistance_MetaData), NewProp_MinSlideDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased = { "SliderBehaviorWhenReleased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SliderBehaviorWhenReleased), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderDropBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderBehaviorWhenReleased_MetaData), NewProp_SliderBehaviorWhenReleased_MetaData) }; // 1611917151
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_FramesToAverage = { "FramesToAverage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, FramesToAverage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesToAverage_MetaData), NewProp_FramesToAverage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderMomentumFriction = { "SliderMomentumFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SliderMomentumFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderMomentumFriction_MetaData), NewProp_SliderMomentumFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderRestitution = { "SliderRestitution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SliderRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderRestitution_MetaData), NewProp_SliderRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSliderMomentum = { "MaxSliderMomentum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, MaxSliderMomentum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSliderMomentum_MetaData), NewProp_MaxSliderMomentum_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bIsLerping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping = { "bIsLerping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLerping_MetaData), NewProp_bIsLerping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_CurrentSliderProgress = { "CurrentSliderProgress", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, CurrentSliderProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSliderProgress_MetaData), NewProp_CurrentSliderProgress_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bSlideDistanceIsInParentSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace = { "bSlideDistanceIsInParentSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSlideDistanceIsInParentSpace_MetaData), NewProp_bSlideDistanceIsInParentSpace_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocked_MetaData), NewProp_bIsLocked_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bAutoDropWhenLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked = { "bAutoDropWhenLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDropWhenLocked_MetaData), NewProp_bAutoDropWhenLocked_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bUseLegacyLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic = { "bUseLegacyLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyLogic_MetaData), NewProp_bUseLegacyLogic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_EventThrowThreshold = { "EventThrowThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, EventThrowThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventThrowThreshold_MetaData), NewProp_EventThrowThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, PrimarySlotRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimarySlotRange_MetaData), NewProp_PrimarySlotRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SecondarySlotRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondarySlotRange_MetaData), NewProp_SecondarySlotRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, GripPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripPriority_MetaData), NewProp_GripPriority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineComponentToFollow = { "SplineComponentToFollow", nullptr, (EPropertyFlags)0x01240800000a002d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SplineComponentToFollow), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponentToFollow_MetaData), NewProp_SplineComponentToFollow_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bFollowSplineRotationAndScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale = { "bFollowSplineRotationAndScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowSplineRotationAndScale_MetaData), NewProp_bFollowSplineRotationAndScale_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bEnforceSplineLinearity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity = { "bEnforceSplineLinearity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnforceSplineLinearity_MetaData), NewProp_bEnforceSplineLinearity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType = { "SplineLerpType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SplineLerpType), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleSliderLerpType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineLerpType_MetaData), NewProp_SplineLerpType_MetaData) }; // 3104208049
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpValue = { "SplineLerpValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SplineLerpValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineLerpValue_MetaData), NewProp_SplineLerpValue_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bSliderUsesSnapPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints = { "bSliderUsesSnapPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSliderUsesSnapPoints_MetaData), NewProp_bSliderUsesSnapPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapIncrement = { "SnapIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SnapIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapIncrement_MetaData), NewProp_SnapIncrement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapThreshold = { "SnapThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, SnapThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapThreshold_MetaData), NewProp_SnapThreshold_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bIncrementProgressBetweenSnapPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints = { "bIncrementProgressBetweenSnapPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncrementProgressBetweenSnapPoints_MetaData), NewProp_bIncrementProgressBetweenSnapPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", "OnRep_InitialRelativeTransform", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRelativeTransform_MetaData), NewProp_InitialRelativeTransform_MetaData) }; // 3972615260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bRepGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepGameplayTags_MetaData), NewProp_bRepGameplayTags_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateMovement_MetaData), NewProp_bReplicateMovement_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting = { "MovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementReplicationSetting_MetaData), NewProp_MovementReplicationSetting_MetaData) }; // 2309891904
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, BreakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakDistance_MetaData), NewProp_BreakDistance_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bDenyGripping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDenyGripping_MetaData), NewProp_bDenyGripping_MetaData) };
void Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((UVRSliderComponent*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRSliderComponent), &Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHeld_MetaData), NewProp_bIsHeld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_HoldingGrip = { "HoldingGrip", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, HoldingGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingGrip_MetaData), NewProp_HoldingGrip_MetaData) }; // 2048483295
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGripped_MetaData), NewProp_OnGripped_MetaData) }; // 3815915342
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRSliderComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDropped_MetaData), NewProp_OnDropped_MetaData) }; // 1002007758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRSliderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderHitPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnSliderFinishedLerping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUpdateInTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSlideDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MinSlideDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderBehaviorWhenReleased,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_FramesToAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderMomentumFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SliderRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MaxSliderMomentum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLerping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_CurrentSliderProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSlideDistanceIsInParentSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bAutoDropWhenLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bUseLegacyLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_EventThrowThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_PrimarySlotRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SecondarySlotRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GripPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineComponentToFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bFollowSplineRotationAndScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bEnforceSplineLinearity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SplineLerpValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bSliderUsesSnapPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_SnapThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIncrementProgressBetweenSnapPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_InitialRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bRepGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_MovementReplicationSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_BreakDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bDenyGripping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_bIsHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_HoldingGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnGripped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSliderComponent_Statics::NewProp_OnDropped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRSliderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRSliderComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRSliderComponent, IVRGripInterface), false },  // 199302906
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRSliderComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRSliderComponent_Statics::ClassParams = {
	&UVRSliderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRSliderComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRSliderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRSliderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRSliderComponent()
{
	if (!Z_Registration_Info_UClass_UVRSliderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRSliderComponent.OuterSingleton, Z_Construct_UClass_UVRSliderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRSliderComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRSliderComponent>()
{
	return UVRSliderComponent::StaticClass();
}
void UVRSliderComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SplineComponentToFollow(TEXT("SplineComponentToFollow"));
	static const FName Name_InitialRelativeTransform(TEXT("InitialRelativeTransform"));
	static const FName Name_GameplayTags(TEXT("GameplayTags"));
	static const FName Name_bRepGameplayTags(TEXT("bRepGameplayTags"));
	static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
	const bool bIsValid = true
		&& Name_SplineComponentToFollow == ClassReps[(int32)ENetFields_Private::SplineComponentToFollow].Property->GetFName()
		&& Name_InitialRelativeTransform == ClassReps[(int32)ENetFields_Private::InitialRelativeTransform].Property->GetFName()
		&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
		&& Name_bRepGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGameplayTags].Property->GetFName()
		&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRSliderComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRSliderComponent);
// End Class UVRSliderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRInteractibleSliderLerpType_StaticEnum, TEXT("EVRInteractibleSliderLerpType"), &Z_Registration_Info_UEnum_EVRInteractibleSliderLerpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3104208049U) },
		{ EVRInteractibleSliderDropBehavior_StaticEnum, TEXT("EVRInteractibleSliderDropBehavior"), &Z_Registration_Info_UEnum_EVRInteractibleSliderDropBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1611917151U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRSliderComponent, UVRSliderComponent::StaticClass, TEXT("UVRSliderComponent"), &Z_Registration_Info_UClass_UVRSliderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRSliderComponent), 1972621013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_4121600952(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRSliderComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
