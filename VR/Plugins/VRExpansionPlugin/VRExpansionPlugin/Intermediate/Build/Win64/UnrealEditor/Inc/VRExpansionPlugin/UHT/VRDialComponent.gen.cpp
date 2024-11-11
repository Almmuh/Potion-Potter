// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRDialComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRDialComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRDialComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRDialComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
// End Cross Module References

// Begin Delegate FVRDialStateChangedSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms
	{
		float DialMilestoneAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the lever state changes. */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the lever state changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialMilestoneAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::NewProp_DialMilestoneAngle = { "DialMilestoneAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms, DialMilestoneAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::NewProp_DialMilestoneAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRDialStateChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRDialStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRDialStateChangedSignature, float DialMilestoneAngle)
{
	struct _Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms
	{
		float DialMilestoneAngle;
	};
	_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms Parms;
	Parms.DialMilestoneAngle=DialMilestoneAngle;
	VRDialStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVRDialStateChangedSignature

// Begin Delegate FVRDialFinishedLerpingSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRDialFinishedLerpingSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRDialFinishedLerpingSignature_DelegateWrapper(const FMulticastScriptDelegate& VRDialFinishedLerpingSignature)
{
	VRDialFinishedLerpingSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FVRDialFinishedLerpingSignature

// Begin Class UVRDialComponent Function AddDialAngle
struct Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics
{
	struct VRDialComponent_eventAddDialAngle_Parms
	{
		float DialAngleDelta;
		bool bCallEvents;
		bool bSkipSettingRot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can be called to recalculate the dial angle after you move it if you want different values\n" },
#endif
		{ "CPP_Default_bCallEvents", "false" },
		{ "CPP_Default_bSkipSettingRot", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be called to recalculate the dial angle after you move it if you want different values" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialAngleDelta;
	static void NewProp_bCallEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallEvents;
	static void NewProp_bSkipSettingRot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipSettingRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_DialAngleDelta = { "DialAngleDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRDialComponent_eventAddDialAngle_Parms, DialAngleDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents_SetBit(void* Obj)
{
	((VRDialComponent_eventAddDialAngle_Parms*)Obj)->bCallEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents = { "bCallEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRDialComponent_eventAddDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot_SetBit(void* Obj)
{
	((VRDialComponent_eventAddDialAngle_Parms*)Obj)->bSkipSettingRot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot = { "bSkipSettingRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRDialComponent_eventAddDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_DialAngleDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "AddDialAngle", nullptr, nullptr, Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::VRDialComponent_eventAddDialAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::VRDialComponent_eventAddDialAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRDialComponent_AddDialAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRDialComponent::execAddDialAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DialAngleDelta);
	P_GET_UBOOL(Z_Param_bCallEvents);
	P_GET_UBOOL(Z_Param_bSkipSettingRot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDialAngle(Z_Param_DialAngleDelta,Z_Param_bCallEvents,Z_Param_bSkipSettingRot);
	P_NATIVE_END;
}
// End Class UVRDialComponent Function AddDialAngle

// Begin Class UVRDialComponent Function OnRep_InitialRelativeTransform
struct Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnRep_InitialRelativeTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRDialComponent::execOnRep_InitialRelativeTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_InitialRelativeTransform();
	P_NATIVE_END;
}
// End Class UVRDialComponent Function OnRep_InitialRelativeTransform

// Begin Class UVRDialComponent Function ReceiveDialFinishedLerping
static FName NAME_UVRDialComponent_ReceiveDialFinishedLerping = FName(TEXT("ReceiveDialFinishedLerping"));
void UVRDialComponent::ReceiveDialFinishedLerping()
{
	ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_ReceiveDialFinishedLerping),NULL);
}
struct Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Dial Finished Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ReceiveDialFinishedLerping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVRDialComponent Function ReceiveDialFinishedLerping

// Begin Class UVRDialComponent Function ReceiveDialHitSnapAngle
struct VRDialComponent_eventReceiveDialHitSnapAngle_Parms
{
	float DialMilestoneAngle;
};
static FName NAME_UVRDialComponent_ReceiveDialHitSnapAngle = FName(TEXT("ReceiveDialHitSnapAngle"));
void UVRDialComponent::ReceiveDialHitSnapAngle(float DialMilestoneAngle)
{
	VRDialComponent_eventReceiveDialHitSnapAngle_Parms Parms;
	Parms.DialMilestoneAngle=DialMilestoneAngle;
	ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_ReceiveDialHitSnapAngle),&Parms);
}
struct Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Dial Hit Snap Angle" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialMilestoneAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::NewProp_DialMilestoneAngle = { "DialMilestoneAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRDialComponent_eventReceiveDialHitSnapAngle_Parms, DialMilestoneAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::NewProp_DialMilestoneAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ReceiveDialHitSnapAngle", nullptr, nullptr, Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers), sizeof(VRDialComponent_eventReceiveDialHitSnapAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRDialComponent_eventReceiveDialHitSnapAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVRDialComponent Function ReceiveDialHitSnapAngle

// Begin Class UVRDialComponent Function ResetInitialDialLocation
struct Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be called after the dial is moved post begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be called after the dial is moved post begin play" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ResetInitialDialLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRDialComponent::execResetInitialDialLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetInitialDialLocation();
	P_NATIVE_END;
}
// End Class UVRDialComponent Function ResetInitialDialLocation

// Begin Class UVRDialComponent Function SetDialAngle
struct Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics
{
	struct VRDialComponent_eventSetDialAngle_Parms
	{
		float DialAngle;
		bool bCallEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Directly sets the dial angle, still obeys maximum limits and snapping though\n" },
#endif
		{ "CPP_Default_bCallEvents", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Directly sets the dial angle, still obeys maximum limits and snapping though" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialAngle;
	static void NewProp_bCallEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_DialAngle = { "DialAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRDialComponent_eventSetDialAngle_Parms, DialAngle), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents_SetBit(void* Obj)
{
	((VRDialComponent_eventSetDialAngle_Parms*)Obj)->bCallEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents = { "bCallEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRDialComponent_eventSetDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_DialAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SetDialAngle", nullptr, nullptr, Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::VRDialComponent_eventSetDialAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::VRDialComponent_eventSetDialAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRDialComponent_SetDialAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRDialComponent::execSetDialAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DialAngle);
	P_GET_UBOOL(Z_Param_bCallEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialAngle(Z_Param_DialAngle,Z_Param_bCallEvents);
	P_NATIVE_END;
}
// End Class UVRDialComponent Function SetDialAngle

// Begin Class UVRDialComponent Function SetGripPriority
struct Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics
{
	struct VRDialComponent_eventSetGripPriority_Parms
	{
		int32 NewGripPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the grip priority\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the grip priority" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGripPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRDialComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SetGripPriority", nullptr, nullptr, Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::VRDialComponent_eventSetGripPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::VRDialComponent_eventSetGripPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRDialComponent_SetGripPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRDialComponent::execSetGripPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGripPriority(Z_Param_NewGripPriority);
	P_NATIVE_END;
}
// End Class UVRDialComponent Function SetGripPriority

// Begin Class UVRDialComponent
void UVRDialComponent::StaticRegisterNativesUVRDialComponent()
{
	UClass* Class = UVRDialComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDialAngle", &UVRDialComponent::execAddDialAngle },
		{ "OnRep_InitialRelativeTransform", &UVRDialComponent::execOnRep_InitialRelativeTransform },
		{ "ResetInitialDialLocation", &UVRDialComponent::execResetInitialDialLocation },
		{ "SetDialAngle", &UVRDialComponent::execSetDialAngle },
		{ "SetGripPriority", &UVRDialComponent::execSetGripPriority },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRDialComponent);
UClass* Z_Construct_UClass_UVRDialComponent_NoRegister()
{
	return UVRDialComponent::StaticClass();
}
struct Z_Construct_UClass_UVRDialComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRDialComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialHitSnapAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to use an object\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to use an object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLerpBackOnRelease_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true the dial will lerp back to zero on release\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true the dial will lerp back to zero on release" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendDialEventsDuringLerp_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialReturnSpeed_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLerping_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialFinishedLerping_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClockwiseMaximumDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//, meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CClockwiseMaximumDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//, meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRollover_MetaData[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then the dial can \"roll over\" past 360/0 degrees in a direction\n// Allowing unlimited dial angle values\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the dial can \"roll over\" past 360/0 degrees in a direction\nAllowing unlimited dial angle values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDialUsesAngleSnap_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDialUseSnapAngleList_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialSnapAngleList_MetaData[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional list of snap angles for the dial\n" },
#endif
		{ "editcondition", "bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional list of snap angles for the dial" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapAngleIncrement_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Angle that the dial snaps to on release and when within the threshold distance\n" },
#endif
		{ "editcondition", "!bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angle that the dial snaps to on release and when within the threshold distance" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapAngleThreshold_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Threshold distance that when within the dial will stay snapped to its closest snap increment\n" },
#endif
		{ "editcondition", "!bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Threshold distance that when within the dial will stay snapped to its closest snap increment" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationScaler_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scales rotational input to speed up or slow down the rotation\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales rotational input to speed up or slow down the rotation" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialRotationAxis_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDialUseDirectHandRotation_MetaData[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then the dial will directly sample the hands rotation instead of using its movement around it.\n// This is good for roll specific dials but is fairly bad elsewhere.\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the dial will directly sample the hands rotation instead of using its movement around it.\nThis is good for roll specific dials but is fairly bad elsewhere." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRotationAxis_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "editcondition", "bDialUseDirectHandRotation" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "VRDialComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Now replicating this so that it works correctly over the network\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Now replicating this so that it works correctly over the network" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that are set on this object */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are set on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requires bReplicates to be true for the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ScriptName", "IsCurrentlyHeld" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingGrip_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set on grip notify, not net serializing\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set on grip notify, not net serializing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is dropped\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is dropped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance before the object will break out of the hand, 0.0f == never will\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance before the object will break out of the hand, 0.0f == never will" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we deny gripping on this object\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ScriptName", "IsDenyGripping" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we deny gripping on this object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialHitSnapAngle;
	static void NewProp_bLerpBackOnRelease_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLerpBackOnRelease;
	static void NewProp_bSendDialEventsDuringLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendDialEventsDuringLerp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialReturnSpeed;
	static void NewProp_bIsLerping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLerping;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialFinishedLerping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDialAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClockwiseMaximumDialAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CClockwiseMaximumDialAngle;
	static void NewProp_bUseRollover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRollover;
	static void NewProp_bDialUsesAngleSnap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDialUsesAngleSnap;
	static void NewProp_bDialUseSnapAngleList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDialUseSnapAngleList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialSnapAngleList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialSnapAngleList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapAngleIncrement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapAngleThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationScaler;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialRotationAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialRotationAxis;
	static void NewProp_bDialUseDirectHandRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDialUseDirectHandRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractorRotationAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractorRotationAxis;
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
	static void NewProp_bIsHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoldingGrip;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakDistance;
	static void NewProp_bDenyGripping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRDialComponent_AddDialAngle, "AddDialAngle" }, // 1042330318
		{ &Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform, "OnRep_InitialRelativeTransform" }, // 574225017
		{ &Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping, "ReceiveDialFinishedLerping" }, // 3528100799
		{ &Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle, "ReceiveDialHitSnapAngle" }, // 2760376066
		{ &Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation, "ResetInitialDialLocation" }, // 2153139558
		{ &Z_Construct_UFunction_UVRDialComponent_SetDialAngle, "SetDialAngle" }, // 544761247
		{ &Z_Construct_UFunction_UVRDialComponent_SetGripPriority, "SetGripPriority" }, // 3962490437
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRDialComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle = { "OnDialHitSnapAngle", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, OnDialHitSnapAngle), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialHitSnapAngle_MetaData), NewProp_OnDialHitSnapAngle_MetaData) }; // 3209634785
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bLerpBackOnRelease = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease = { "bLerpBackOnRelease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLerpBackOnRelease_MetaData), NewProp_bLerpBackOnRelease_MetaData) };
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bSendDialEventsDuringLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp = { "bSendDialEventsDuringLerp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendDialEventsDuringLerp_MetaData), NewProp_bSendDialEventsDuringLerp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed = { "DialReturnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, DialReturnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialReturnSpeed_MetaData), NewProp_DialReturnSpeed_MetaData) };
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bIsLerping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping = { "bIsLerping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLerping_MetaData), NewProp_bIsLerping_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping = { "OnDialFinishedLerping", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, OnDialFinishedLerping), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialFinishedLerping_MetaData), NewProp_OnDialFinishedLerping_MetaData) }; // 699211788
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle = { "CurrentDialAngle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, CurrentDialAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDialAngle_MetaData), NewProp_CurrentDialAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle = { "ClockwiseMaximumDialAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, ClockwiseMaximumDialAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClockwiseMaximumDialAngle_MetaData), NewProp_ClockwiseMaximumDialAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle = { "CClockwiseMaximumDialAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, CClockwiseMaximumDialAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CClockwiseMaximumDialAngle_MetaData), NewProp_CClockwiseMaximumDialAngle_MetaData) };
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bUseRollover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover = { "bUseRollover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRollover_MetaData), NewProp_bUseRollover_MetaData) };
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bDialUsesAngleSnap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap = { "bDialUsesAngleSnap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDialUsesAngleSnap_MetaData), NewProp_bDialUsesAngleSnap_MetaData) };
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bDialUseSnapAngleList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList = { "bDialUseSnapAngleList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDialUseSnapAngleList_MetaData), NewProp_bDialUseSnapAngleList_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_Inner = { "DialSnapAngleList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList = { "DialSnapAngleList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, DialSnapAngleList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialSnapAngleList_MetaData), NewProp_DialSnapAngleList_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement = { "SnapAngleIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, SnapAngleIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapAngleIncrement_MetaData), NewProp_SnapAngleIncrement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold = { "SnapAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, SnapAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapAngleThreshold_MetaData), NewProp_SnapAngleThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler = { "RotationScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, RotationScaler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationScaler_MetaData), NewProp_RotationScaler_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis = { "DialRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, DialRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialRotationAxis_MetaData), NewProp_DialRotationAxis_MetaData) }; // 2970339060
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bDialUseDirectHandRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation = { "bDialUseDirectHandRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDialUseDirectHandRotation_MetaData), NewProp_bDialUseDirectHandRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis = { "InteractorRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, InteractorRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorRotationAxis_MetaData), NewProp_InteractorRotationAxis_MetaData) }; // 2970339060
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, PrimarySlotRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimarySlotRange_MetaData), NewProp_PrimarySlotRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, SecondarySlotRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondarySlotRange_MetaData), NewProp_SecondarySlotRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, GripPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripPriority_MetaData), NewProp_GripPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", "OnRep_InitialRelativeTransform", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRelativeTransform_MetaData), NewProp_InitialRelativeTransform_MetaData) }; // 3972615260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bRepGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepGameplayTags_MetaData), NewProp_bRepGameplayTags_MetaData) };
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateMovement_MetaData), NewProp_bReplicateMovement_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting = { "MovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementReplicationSetting_MetaData), NewProp_MovementReplicationSetting_MetaData) }; // 2309891904
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHeld_MetaData), NewProp_bIsHeld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip = { "HoldingGrip", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, HoldingGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingGrip_MetaData), NewProp_HoldingGrip_MetaData) }; // 2048483295
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGripped_MetaData), NewProp_OnGripped_MetaData) }; // 3815915342
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDropped_MetaData), NewProp_OnDropped_MetaData) }; // 1002007758
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRDialComponent, BreakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakDistance_MetaData), NewProp_BreakDistance_MetaData) };
void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
{
	((UVRDialComponent*)Obj)->bDenyGripping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDenyGripping_MetaData), NewProp_bDenyGripping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRDialComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_PrimarySlotRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SecondarySlotRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRDialComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRDialComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRDialComponent, IVRGripInterface), false },  // 199302906
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRDialComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRDialComponent_Statics::ClassParams = {
	&UVRDialComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRDialComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRDialComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRDialComponent()
{
	if (!Z_Registration_Info_UClass_UVRDialComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRDialComponent.OuterSingleton, Z_Construct_UClass_UVRDialComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRDialComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRDialComponent>()
{
	return UVRDialComponent::StaticClass();
}
void UVRDialComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
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
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRDialComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRDialComponent);
// End Class UVRDialComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRDialComponent, UVRDialComponent::StaticClass, TEXT("UVRDialComponent"), &Z_Registration_Info_UClass_UVRDialComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRDialComponent), 3166446035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_3165098705(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRDialComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
