// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRBaseCharacter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "UObject/CoreNet.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacter() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerNetworkCorrectedSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerTeleportedSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVRCharacter();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRSeatedCharacterInfo();
// End Cross Module References

// Begin Delegate FVRSeatThresholdChangedSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms
	{
		bool bIsWithinThreshold;
		float ToThresholdScaler;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the lever state changes. */" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the lever state changes." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsWithinThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWithinThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ToThresholdScaler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::NewProp_bIsWithinThreshold_SetBit(void* Obj)
{
	((_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms*)Obj)->bIsWithinThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::NewProp_bIsWithinThreshold = { "bIsWithinThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::NewProp_bIsWithinThreshold_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::NewProp_ToThresholdScaler = { "ToThresholdScaler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms, ToThresholdScaler), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::NewProp_bIsWithinThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::NewProp_ToThresholdScaler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRSeatThresholdChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRSeatThresholdChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRSeatThresholdChangedSignature, bool bIsWithinThreshold, float ToThresholdScaler)
{
	struct _Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms
	{
		bool bIsWithinThreshold;
		float ToThresholdScaler;
	};
	_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms Parms;
	Parms.bIsWithinThreshold=bIsWithinThreshold ? true : false;
	Parms.ToThresholdScaler=ToThresholdScaler;
	VRSeatThresholdChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVRSeatThresholdChangedSignature

// Begin Delegate FVRPlayerStateReplicatedSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVRPlayerStateReplicatedSignature_Parms
	{
		const APlayerState* NewPlayerState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayerState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::NewProp_NewPlayerState = { "NewPlayerState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRPlayerStateReplicatedSignature_Parms, NewPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPlayerState_MetaData), NewProp_NewPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::NewProp_NewPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRPlayerStateReplicatedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRPlayerStateReplicatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRPlayerStateReplicatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRPlayerStateReplicatedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerStateReplicatedSignature, const APlayerState* NewPlayerState)
{
	struct _Script_VRExpansionPlugin_eventVRPlayerStateReplicatedSignature_Parms
	{
		const APlayerState* NewPlayerState;
	};
	_Script_VRExpansionPlugin_eventVRPlayerStateReplicatedSignature_Parms Parms;
	Parms.NewPlayerState=NewPlayerState;
	VRPlayerStateReplicatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVRPlayerStateReplicatedSignature

// Begin Delegate FVRPlayerTeleportedSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerTeleportedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerTeleportedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRPlayerTeleportedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerTeleportedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerTeleportedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerTeleportedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerTeleportedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRPlayerTeleportedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerTeleportedSignature)
{
	VRPlayerTeleportedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FVRPlayerTeleportedSignature

// Begin Delegate FVRPlayerNetworkCorrectedSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerNetworkCorrectedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerNetworkCorrectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRPlayerNetworkCorrectedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerNetworkCorrectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerNetworkCorrectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerNetworkCorrectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerNetworkCorrectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRPlayerNetworkCorrectedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerNetworkCorrectedSignature)
{
	VRPlayerNetworkCorrectedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FVRPlayerNetworkCorrectedSignature

// Begin ScriptStruct FRepMovementVRCharacter
static_assert(std::is_polymorphic<FRepMovementVRCharacter>() == std::is_polymorphic<FRepMovement>(), "USTRUCT FRepMovementVRCharacter cannot be polymorphic unless super FRepMovement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepMovementVRCharacter;
class UScriptStruct* FRepMovementVRCharacter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovementVRCharacter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepMovementVRCharacter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepMovementVRCharacter, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RepMovementVRCharacter"));
	}
	return Z_Registration_Info_UScriptStruct_RepMovementVRCharacter.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRepMovementVRCharacter>()
{
	return FRepMovementVRCharacter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJustTeleported_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJustTeleportedGrips_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPausedTracking_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PausedTrackingLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PausedTrackingRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bJustTeleported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJustTeleported;
	static void NewProp_bJustTeleportedGrips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJustTeleportedGrips;
	static void NewProp_bPausedTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPausedTracking;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PausedTrackingLoc;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PausedTrackingRot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepMovementVRCharacter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bJustTeleported_SetBit(void* Obj)
{
	((FRepMovementVRCharacter*)Obj)->bJustTeleported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bJustTeleported = { "bJustTeleported", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRepMovementVRCharacter), &Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bJustTeleported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJustTeleported_MetaData), NewProp_bJustTeleported_MetaData) };
void Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bJustTeleportedGrips_SetBit(void* Obj)
{
	((FRepMovementVRCharacter*)Obj)->bJustTeleportedGrips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bJustTeleportedGrips = { "bJustTeleportedGrips", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRepMovementVRCharacter), &Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bJustTeleportedGrips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJustTeleportedGrips_MetaData), NewProp_bJustTeleportedGrips_MetaData) };
void Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bPausedTracking_SetBit(void* Obj)
{
	((FRepMovementVRCharacter*)Obj)->bPausedTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bPausedTracking = { "bPausedTracking", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRepMovementVRCharacter), &Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bPausedTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPausedTracking_MetaData), NewProp_bPausedTracking_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_PausedTrackingLoc = { "PausedTrackingLoc", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovementVRCharacter, PausedTrackingLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PausedTrackingLoc_MetaData), NewProp_PausedTrackingLoc_MetaData) }; // 2552134291
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_PausedTrackingRot = { "PausedTrackingRot", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovementVRCharacter, PausedTrackingRot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PausedTrackingRot_MetaData), NewProp_PausedTrackingRot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepMovementVRCharacter, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bJustTeleported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bJustTeleportedGrips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_bPausedTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_PausedTrackingLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_PausedTrackingRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	Z_Construct_UScriptStruct_FRepMovement,
	&NewStructOps,
	"RepMovementVRCharacter",
	Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::PropPointers),
	sizeof(FRepMovementVRCharacter),
	alignof(FRepMovementVRCharacter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVRCharacter()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovementVRCharacter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepMovementVRCharacter.InnerSingleton, Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RepMovementVRCharacter.InnerSingleton;
}
// End ScriptStruct FRepMovementVRCharacter

// Begin ScriptStruct FVRSeatedCharacterInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRSeatedCharacterInfo;
class UScriptStruct* FVRSeatedCharacterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRSeatedCharacterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRSeatedCharacterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRSeatedCharacterInfo, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRSeatedCharacterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VRSeatedCharacterInfo.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRSeatedCharacterInfo>()
{
	return FVRSeatedCharacterInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSitting_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZeroToHead_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredTargetTransform_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelCameraTransform_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatParent_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostSeatedMovementMode_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedRadius_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ClampMax", "256.000" },
		{ "ClampMin", "1.000" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
		{ "UIMax", "256.000" },
		{ "UIMin", "1.000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedRadiusThreshold_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ClampMax", "256.000" },
		{ "ClampMin", "1.000" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
		{ "UIMax", "256.000" },
		{ "UIMin", "1.000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThresholdScaler_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOverThreshold_MetaData[] = {
		{ "Category", "CharacterSeatInfo" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSitting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSitting;
	static void NewProp_bZeroToHead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroToHead;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoredTargetTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelCameraTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeatParent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostSeatedMovementMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PostSeatedMovementMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AllowedRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AllowedRadiusThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentThresholdScaler;
	static void NewProp_bIsOverThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOverThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRSeatedCharacterInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bSitting_SetBit(void* Obj)
{
	((FVRSeatedCharacterInfo*)Obj)->bSitting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bSitting = { "bSitting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRSeatedCharacterInfo), &Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bSitting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSitting_MetaData), NewProp_bSitting_MetaData) };
void Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bZeroToHead_SetBit(void* Obj)
{
	((FVRSeatedCharacterInfo*)Obj)->bZeroToHead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bZeroToHead = { "bZeroToHead", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRSeatedCharacterInfo), &Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bZeroToHead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZeroToHead_MetaData), NewProp_bZeroToHead_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_StoredTargetTransform = { "StoredTargetTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRSeatedCharacterInfo, StoredTargetTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredTargetTransform_MetaData), NewProp_StoredTargetTransform_MetaData) }; // 3972615260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_InitialRelCameraTransform = { "InitialRelCameraTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRSeatedCharacterInfo, InitialRelCameraTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRelCameraTransform_MetaData), NewProp_InitialRelCameraTransform_MetaData) }; // 3972615260
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_SeatParent = { "SeatParent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRSeatedCharacterInfo, SeatParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatParent_MetaData), NewProp_SeatParent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_PostSeatedMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_PostSeatedMovementMode = { "PostSeatedMovementMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRSeatedCharacterInfo, PostSeatedMovementMode), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostSeatedMovementMode_MetaData), NewProp_PostSeatedMovementMode_MetaData) }; // 3080966818
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_AllowedRadius = { "AllowedRadius", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRSeatedCharacterInfo, AllowedRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedRadius_MetaData), NewProp_AllowedRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_AllowedRadiusThreshold = { "AllowedRadiusThreshold", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRSeatedCharacterInfo, AllowedRadiusThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedRadiusThreshold_MetaData), NewProp_AllowedRadiusThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_CurrentThresholdScaler = { "CurrentThresholdScaler", nullptr, (EPropertyFlags)0x0010000080000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRSeatedCharacterInfo, CurrentThresholdScaler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentThresholdScaler_MetaData), NewProp_CurrentThresholdScaler_MetaData) };
void Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bIsOverThreshold_SetBit(void* Obj)
{
	((FVRSeatedCharacterInfo*)Obj)->bIsOverThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bIsOverThreshold = { "bIsOverThreshold", nullptr, (EPropertyFlags)0x0010000080000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRSeatedCharacterInfo), &Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bIsOverThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOverThreshold_MetaData), NewProp_bIsOverThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bSitting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bZeroToHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_StoredTargetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_InitialRelCameraTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_SeatParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_PostSeatedMovementMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_PostSeatedMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_AllowedRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_AllowedRadiusThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_CurrentThresholdScaler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewProp_bIsOverThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRSeatedCharacterInfo",
	Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::PropPointers),
	sizeof(FVRSeatedCharacterInfo),
	alignof(FVRSeatedCharacterInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRSeatedCharacterInfo()
{
	if (!Z_Registration_Info_UScriptStruct_VRSeatedCharacterInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRSeatedCharacterInfo.InnerSingleton, Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRSeatedCharacterInfo.InnerSingleton;
}
// End ScriptStruct FVRSeatedCharacterInfo

// Begin ScriptStruct FVRReplicatedCapsuleHeight
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRReplicatedCapsuleHeight;
class UScriptStruct* FVRReplicatedCapsuleHeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRReplicatedCapsuleHeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRReplicatedCapsuleHeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRReplicatedCapsuleHeight"));
	}
	return Z_Registration_Info_UScriptStruct_VRReplicatedCapsuleHeight.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRReplicatedCapsuleHeight>()
{
	return FVRReplicatedCapsuleHeight::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRReplicatedCapsuleHeight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::NewProp_CapsuleHeight = { "CapsuleHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRReplicatedCapsuleHeight, CapsuleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHeight_MetaData), NewProp_CapsuleHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::NewProp_CapsuleHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRReplicatedCapsuleHeight",
	Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::PropPointers),
	sizeof(FVRReplicatedCapsuleHeight),
	alignof(FVRReplicatedCapsuleHeight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight()
{
	if (!Z_Registration_Info_UScriptStruct_VRReplicatedCapsuleHeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRReplicatedCapsuleHeight.InnerSingleton, Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRReplicatedCapsuleHeight.InnerSingleton;
}
// End ScriptStruct FVRReplicatedCapsuleHeight

// Begin Class AVRBaseCharacter Function AddActorWorldRotationVR
struct Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics
{
	struct VRBaseCharacter_eventAddActorWorldRotationVR_Parms
	{
		FRotator DeltaRot;
		bool bUseYawOnly;
		bool bRotateAroundCapsule;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a rotation delta taking into account the HMD as a pivot point (also moves the actor), returns final location difference\n// If bRotateAroundCapsule is true then it rotates around the offset capsule, otherwise it rotates around the camera\n" },
#endif
		{ "CPP_Default_bRotateAroundCapsule", "true" },
		{ "CPP_Default_bUseYawOnly", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a rotation delta taking into account the HMD as a pivot point (also moves the actor), returns final location difference\nIf bRotateAroundCapsule is true then it rotates around the offset capsule, otherwise it rotates around the camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRot;
	static void NewProp_bUseYawOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseYawOnly;
	static void NewProp_bRotateAroundCapsule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateAroundCapsule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_DeltaRot = { "DeltaRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventAddActorWorldRotationVR_Parms, DeltaRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_bUseYawOnly_SetBit(void* Obj)
{
	((VRBaseCharacter_eventAddActorWorldRotationVR_Parms*)Obj)->bUseYawOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_bUseYawOnly = { "bUseYawOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventAddActorWorldRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_bUseYawOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_bRotateAroundCapsule_SetBit(void* Obj)
{
	((VRBaseCharacter_eventAddActorWorldRotationVR_Parms*)Obj)->bRotateAroundCapsule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_bRotateAroundCapsule = { "bRotateAroundCapsule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventAddActorWorldRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_bRotateAroundCapsule_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventAddActorWorldRotationVR_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_DeltaRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_bUseYawOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_bRotateAroundCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "AddActorWorldRotationVR", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::VRBaseCharacter_eventAddActorWorldRotationVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::VRBaseCharacter_eventAddActorWorldRotationVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execAddActorWorldRotationVR)
{
	P_GET_STRUCT(FRotator,Z_Param_DeltaRot);
	P_GET_UBOOL(Z_Param_bUseYawOnly);
	P_GET_UBOOL(Z_Param_bRotateAroundCapsule);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->AddActorWorldRotationVR(Z_Param_DeltaRot,Z_Param_bUseYawOnly,Z_Param_bRotateAroundCapsule);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function AddActorWorldRotationVR

// Begin Class AVRBaseCharacter Function ExtendedSimpleMoveToLocation
struct Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics
{
	struct VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms
	{
		FVector GoalLocation;
		float AcceptanceRadius;
		bool bStopOnOverlap;
		bool bUsePathfinding;
		bool bProjectDestinationToNavigation;
		bool bCanStrafe;
		TSubclassOf<UNavigationQueryFilter> FilterClass;
		bool bAllowPartialPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
		{ "Category", "VRBaseCharacter|Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An extended simple move to location with additional parameters\n" },
#endif
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_bAllowPartialPath", "true" },
		{ "CPP_Default_bCanStrafe", "false" },
		{ "CPP_Default_bProjectDestinationToNavigation", "true" },
		{ "CPP_Default_bStopOnOverlap", "false" },
		{ "CPP_Default_bUsePathfinding", "true" },
		{ "CPP_Default_FilterClass", "None" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An extended simple move to location with additional parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static void NewProp_bStopOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
	static void NewProp_bUsePathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
	static void NewProp_bProjectDestinationToNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation;
	static void NewProp_bCanStrafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
	static void NewProp_bAllowPartialPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalLocation_MetaData), NewProp_GoalLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, AcceptanceRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
{
	((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bStopOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
{
	((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bUsePathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bProjectDestinationToNavigation_SetBit(void* Obj)
{
	((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bProjectDestinationToNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bProjectDestinationToNavigation = { "bProjectDestinationToNavigation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bProjectDestinationToNavigation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bCanStrafe_SetBit(void* Obj)
{
	((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bCanStrafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bCanStrafe = { "bCanStrafe", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bCanStrafe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
{
	((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bAllowPartialPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_GoalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bStopOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bUsePathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bProjectDestinationToNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bCanStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_FilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::NewProp_bAllowPartialPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "ExtendedSimpleMoveToLocation", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execExtendedSimpleMoveToLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AcceptanceRadius);
	P_GET_UBOOL(Z_Param_bStopOnOverlap);
	P_GET_UBOOL(Z_Param_bUsePathfinding);
	P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation);
	P_GET_UBOOL(Z_Param_bCanStrafe);
	P_GET_OBJECT(UClass,Z_Param_FilterClass);
	P_GET_UBOOL(Z_Param_bAllowPartialPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function ExtendedSimpleMoveToLocation

// Begin Class AVRBaseCharacter Function GetCurrentNavigationPathPoints
struct Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics
{
	struct VRBaseCharacter_eventGetCurrentNavigationPathPoints_Parms
	{
		TArray<FVector> NavigationPointList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRBaseCharacter|Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current path points on the active navigation path\n// Will return false / an empty result if the path following component is not active yet or the path is empty\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current path points on the active navigation path\nWill return false / an empty result if the path following component is not active yet or the path is empty" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationPointList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NavigationPointList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::NewProp_NavigationPointList_Inner = { "NavigationPointList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::NewProp_NavigationPointList = { "NavigationPointList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetCurrentNavigationPathPoints_Parms, NavigationPointList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRBaseCharacter_eventGetCurrentNavigationPathPoints_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventGetCurrentNavigationPathPoints_Parms), &Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::NewProp_NavigationPointList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::NewProp_NavigationPointList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "GetCurrentNavigationPathPoints", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::VRBaseCharacter_eventGetCurrentNavigationPathPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::VRBaseCharacter_eventGetCurrentNavigationPathPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execGetCurrentNavigationPathPoints)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_NavigationPointList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCurrentNavigationPathPoints(Z_Param_Out_NavigationPointList);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function GetCurrentNavigationPathPoints

// Begin Class AVRBaseCharacter Function GetMoveStatus
struct Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics
{
	struct VRBaseCharacter_eventGetMoveStatus_Parms
	{
		TEnumAsByte<EPathFollowingStatus::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRBaseCharacter|Navigation" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetMoveStatus_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingStatus, METADATA_PARAMS(0, nullptr) }; // 1429550023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "GetMoveStatus", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::VRBaseCharacter_eventGetMoveStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::VRBaseCharacter_eventGetMoveStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execGetMoveStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPathFollowingStatus::Type>*)Z_Param__Result=P_THIS->GetMoveStatus();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function GetMoveStatus

// Begin Class AVRBaseCharacter Function GetTeleportLocation
struct Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics
{
	struct VRBaseCharacter_eventGetTeleportLocation_Parms
	{
		FVector OriginalLocation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGrip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""A helper function that offsets a given vector by the roots collision location\n\x09pass in a teleport location and it provides the correct spot for it to be at your feet\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::NewProp_OriginalLocation = { "OriginalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetTeleportLocation_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetTeleportLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::NewProp_OriginalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "GetTeleportLocation", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::VRBaseCharacter_eventGetTeleportLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::VRBaseCharacter_eventGetTeleportLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execGetTeleportLocation)
{
	P_GET_STRUCT(FVector,Z_Param_OriginalLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTeleportLocation(Z_Param_OriginalLocation);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function GetTeleportLocation

// Begin Class AVRBaseCharacter Function GetVRForwardVector
struct Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics
{
	struct VRBaseCharacter_eventGetVRForwardVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the forward vector of the HMD offset capsule\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the forward vector of the HMD offset capsule" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetVRForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "GetVRForwardVector", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::VRBaseCharacter_eventGetVRForwardVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::VRBaseCharacter_eventGetVRForwardVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execGetVRForwardVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVRForwardVector();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function GetVRForwardVector

// Begin Class AVRBaseCharacter Function GetVRLocation
struct Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics
{
	struct VRBaseCharacter_eventGetVRLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the location of the HMD offset capsule (this retains the Capsule HalfHeight offset)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the location of the HMD offset capsule (this retains the Capsule HalfHeight offset)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetVRLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "GetVRLocation", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::VRBaseCharacter_eventGetVRLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::VRBaseCharacter_eventGetVRLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execGetVRLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVRLocation();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function GetVRLocation

// Begin Class AVRBaseCharacter Function GetVRRightVector
struct Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics
{
	struct VRBaseCharacter_eventGetVRRightVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the right vector of the HMD offset capsule\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the right vector of the HMD offset capsule" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetVRRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "GetVRRightVector", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::VRBaseCharacter_eventGetVRRightVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::VRBaseCharacter_eventGetVRRightVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execGetVRRightVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVRRightVector();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function GetVRRightVector

// Begin Class AVRBaseCharacter Function GetVRRotation
struct Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics
{
	struct VRBaseCharacter_eventGetVRRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the rotation of the HMD offset capsule\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the rotation of the HMD offset capsule" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetVRRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "GetVRRotation", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::VRBaseCharacter_eventGetVRRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::VRBaseCharacter_eventGetVRRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execGetVRRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetVRRotation();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function GetVRRotation

// Begin Class AVRBaseCharacter Function GetVRUpVector
struct Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics
{
	struct VRBaseCharacter_eventGetVRUpVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the upvector of the HMD offset capsule\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the upvector of the HMD offset capsule" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventGetVRUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "GetVRUpVector", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::VRBaseCharacter_eventGetVRUpVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::VRBaseCharacter_eventGetVRUpVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execGetVRUpVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVRUpVector();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function GetVRUpVector

// Begin Class AVRBaseCharacter Function HasPartialPath
struct Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics
{
	struct VRBaseCharacter_eventHasPartialPath_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRBaseCharacter|Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination). */" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRBaseCharacter_eventHasPartialPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventHasPartialPath_Parms), &Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "HasPartialPath", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::VRBaseCharacter_eventHasPartialPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::VRBaseCharacter_eventHasPartialPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execHasPartialPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasPartialPath();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function HasPartialPath

// Begin Class AVRBaseCharacter Function K2_GetVRHeadLocation
struct Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics
{
	struct VRBaseCharacter_eventK2_GetVRHeadLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the location of the HMD, if the camera is missing then it just returns waist location instead\n" },
#endif
		{ "DisplayName", "GetVRHeadLocation" },
		{ "Keywords", "position" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
		{ "ScriptName", "GetVRHeadLocation" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the location of the HMD, if the camera is missing then it just returns waist location instead" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventK2_GetVRHeadLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "K2_GetVRHeadLocation", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::VRBaseCharacter_eventK2_GetVRHeadLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::VRBaseCharacter_eventK2_GetVRHeadLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execK2_GetVRHeadLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->K2_GetVRHeadLocation();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function K2_GetVRHeadLocation

// Begin Class AVRBaseCharacter Function NotifyOfTeleport
struct Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics
{
	struct VRBaseCharacter_eventNotifyOfTeleport_Parms
	{
		bool bRegisterAsTeleport;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGrip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notifies that we should teleport the both hand grips on next tick\n// When called server side will automatically apply to remote clients as well.\n// Owning clients get it on server correction automatically already.\n" },
#endif
		{ "CPP_Default_bRegisterAsTeleport", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies that we should teleport the both hand grips on next tick\nWhen called server side will automatically apply to remote clients as well.\nOwning clients get it on server correction automatically already." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bRegisterAsTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsTeleport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::NewProp_bRegisterAsTeleport_SetBit(void* Obj)
{
	((VRBaseCharacter_eventNotifyOfTeleport_Parms*)Obj)->bRegisterAsTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::NewProp_bRegisterAsTeleport = { "bRegisterAsTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventNotifyOfTeleport_Parms), &Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::NewProp_bRegisterAsTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::NewProp_bRegisterAsTeleport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "NotifyOfTeleport", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::VRBaseCharacter_eventNotifyOfTeleport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::VRBaseCharacter_eventNotifyOfTeleport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execNotifyOfTeleport)
{
	P_GET_UBOOL(Z_Param_bRegisterAsTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyOfTeleport(Z_Param_bRegisterAsTeleport);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function NotifyOfTeleport

// Begin Class AVRBaseCharacter Function OnBeginWallPushback
struct VRBaseCharacter_eventOnBeginWallPushback_Parms
{
	FHitResult HitResultOfImpact;
	bool bHadLocomotionInput;
	FVector HmdInput;
};
static FName NAME_AVRBaseCharacter_OnBeginWallPushback = FName(TEXT("OnBeginWallPushback"));
void AVRBaseCharacter::OnBeginWallPushback(FHitResult HitResultOfImpact, bool bHadLocomotionInput, FVector HmdInput)
{
	VRBaseCharacter_eventOnBeginWallPushback_Parms Parms;
	Parms.HitResultOfImpact=HitResultOfImpact;
	Parms.bHadLocomotionInput=bHadLocomotionInput ? true : false;
	Parms.HmdInput=HmdInput;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnBeginWallPushback),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered when beginning to be pushed back from a wall\n// bHadLocomotionInput means that the character was moving itself\n// HmdInput is how much the HMD moved in that tick so you can compare sizes to decide what to do\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when beginning to be pushed back from a wall\nbHadLocomotionInput means that the character was moving itself\nHmdInput is how much the HMD moved in that tick so you can compare sizes to decide what to do" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResultOfImpact;
	static void NewProp_bHadLocomotionInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadLocomotionInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HmdInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::NewProp_HitResultOfImpact = { "HitResultOfImpact", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventOnBeginWallPushback_Parms, HitResultOfImpact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::NewProp_bHadLocomotionInput_SetBit(void* Obj)
{
	((VRBaseCharacter_eventOnBeginWallPushback_Parms*)Obj)->bHadLocomotionInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::NewProp_bHadLocomotionInput = { "bHadLocomotionInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventOnBeginWallPushback_Parms), &Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::NewProp_bHadLocomotionInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::NewProp_HmdInput = { "HmdInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventOnBeginWallPushback_Parms, HmdInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::NewProp_HitResultOfImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::NewProp_bHadLocomotionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::NewProp_HmdInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "OnBeginWallPushback", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::PropPointers), sizeof(VRBaseCharacter_eventOnBeginWallPushback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventOnBeginWallPushback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execOnBeginWallPushback)
{
	P_GET_STRUCT(FHitResult,Z_Param_HitResultOfImpact);
	P_GET_UBOOL(Z_Param_bHadLocomotionInput);
	P_GET_STRUCT(FVector,Z_Param_HmdInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginWallPushback_Implementation(Z_Param_HitResultOfImpact,Z_Param_bHadLocomotionInput,Z_Param_HmdInput);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function OnBeginWallPushback

// Begin Class AVRBaseCharacter Function OnClimbingSteppedUp
static FName NAME_AVRBaseCharacter_OnClimbingSteppedUp = FName(TEXT("OnClimbingSteppedUp"));
void AVRBaseCharacter::OnClimbingSteppedUp()
{
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnClimbingSteppedUp),NULL);
}
struct Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the client is in climbing mode and is stepped up onto a platform\n// Generally you should drop the climbing at this point and go into falling movement.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the client is in climbing mode and is stepped up onto a platform\nGenerally you should drop the climbing at this point and go into falling movement." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "OnClimbingSteppedUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execOnClimbingSteppedUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClimbingSteppedUp_Implementation();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function OnClimbingSteppedUp

// Begin Class AVRBaseCharacter Function OnCustomMoveActionPerformed
struct VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms
{
	EVRMoveAction MoveActionType;
	FVector MoveActionVector;
	FRotator MoveActionRotator;
	uint8 MoveActionFlags;
};
static FName NAME_AVRBaseCharacter_OnCustomMoveActionPerformed = FName(TEXT("OnCustomMoveActionPerformed"));
void AVRBaseCharacter::OnCustomMoveActionPerformed(EVRMoveAction MoveActionType, FVector MoveActionVector, FRotator MoveActionRotator, uint8 MoveActionFlags)
{
	VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms Parms;
	Parms.MoveActionType=MoveActionType;
	Parms.MoveActionVector=MoveActionVector;
	Parms.MoveActionRotator=MoveActionRotator;
	Parms.MoveActionFlags=MoveActionFlags;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnCustomMoveActionPerformed),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered when a move action is performed, this is ran just prior to PerformMovement in the character tick\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when a move action is performed, this is ran just prior to PerformMovement in the character tick" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveActionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionRotator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveActionFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionType = { "MoveActionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionType), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(0, nullptr) }; // 806081634
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionVector = { "MoveActionVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionRotator = { "MoveActionRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionFlags = { "MoveActionFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionFlags), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::NewProp_MoveActionFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "OnCustomMoveActionPerformed", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::PropPointers), sizeof(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execOnCustomMoveActionPerformed)
{
	P_GET_ENUM(EVRMoveAction,Z_Param_MoveActionType);
	P_GET_STRUCT(FVector,Z_Param_MoveActionVector);
	P_GET_STRUCT(FRotator,Z_Param_MoveActionRotator);
	P_GET_PROPERTY(FByteProperty,Z_Param_MoveActionFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCustomMoveActionPerformed_Implementation(EVRMoveAction(Z_Param_MoveActionType),Z_Param_MoveActionVector,Z_Param_MoveActionRotator,Z_Param_MoveActionFlags);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function OnCustomMoveActionPerformed

// Begin Class AVRBaseCharacter Function OnEndWallPushback
static FName NAME_AVRBaseCharacter_OnEndWallPushback = FName(TEXT("OnEndWallPushback"));
void AVRBaseCharacter::OnEndWallPushback()
{
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnEndWallPushback),NULL);
}
struct Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered when beginning to be pushed back from a wall\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when beginning to be pushed back from a wall" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "OnEndWallPushback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execOnEndWallPushback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndWallPushback_Implementation();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function OnEndWallPushback

// Begin Class AVRBaseCharacter Function OnRep_CapsuleHeight
struct Z_Construct_UFunction_AVRBaseCharacter_OnRep_CapsuleHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_OnRep_CapsuleHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "OnRep_CapsuleHeight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnRep_CapsuleHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_OnRep_CapsuleHeight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnRep_CapsuleHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_OnRep_CapsuleHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execOnRep_CapsuleHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CapsuleHeight();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function OnRep_CapsuleHeight

// Begin Class AVRBaseCharacter Function OnRep_SeatedCharInfo
struct Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "OnRep_SeatedCharInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execOnRep_SeatedCharInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SeatedCharInfo();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function OnRep_SeatedCharInfo

// Begin Class AVRBaseCharacter Function OnSeatedModeChanged
struct VRBaseCharacter_eventOnSeatedModeChanged_Parms
{
	bool bNewSeatedMode;
	bool bWasAlreadySeated;
};
static FName NAME_AVRBaseCharacter_OnSeatedModeChanged = FName(TEXT("OnSeatedModeChanged"));
void AVRBaseCharacter::OnSeatedModeChanged(bool bNewSeatedMode, bool bWasAlreadySeated)
{
	VRBaseCharacter_eventOnSeatedModeChanged_Parms Parms;
	Parms.bNewSeatedMode=bNewSeatedMode ? true : false;
	Parms.bWasAlreadySeated=bWasAlreadySeated ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnSeatedModeChanged),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Seating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the seated mode is changed\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the seated mode is changed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewSeatedMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSeatedMode;
	static void NewProp_bWasAlreadySeated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAlreadySeated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::NewProp_bNewSeatedMode_SetBit(void* Obj)
{
	((VRBaseCharacter_eventOnSeatedModeChanged_Parms*)Obj)->bNewSeatedMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::NewProp_bNewSeatedMode = { "bNewSeatedMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventOnSeatedModeChanged_Parms), &Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::NewProp_bNewSeatedMode_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::NewProp_bWasAlreadySeated_SetBit(void* Obj)
{
	((VRBaseCharacter_eventOnSeatedModeChanged_Parms*)Obj)->bWasAlreadySeated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::NewProp_bWasAlreadySeated = { "bWasAlreadySeated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventOnSeatedModeChanged_Parms), &Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::NewProp_bWasAlreadySeated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::NewProp_bNewSeatedMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::NewProp_bWasAlreadySeated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "OnSeatedModeChanged", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::PropPointers), sizeof(VRBaseCharacter_eventOnSeatedModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventOnSeatedModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execOnSeatedModeChanged)
{
	P_GET_UBOOL(Z_Param_bNewSeatedMode);
	P_GET_UBOOL(Z_Param_bWasAlreadySeated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeatedModeChanged_Implementation(Z_Param_bNewSeatedMode,Z_Param_bWasAlreadySeated);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function OnSeatedModeChanged

// Begin Class AVRBaseCharacter Function OnSeatThreshholdChanged
struct VRBaseCharacter_eventOnSeatThreshholdChanged_Parms
{
	bool bIsWithinThreshold;
	float ToThresholdScaler;
};
static FName NAME_AVRBaseCharacter_OnSeatThreshholdChanged = FName(TEXT("OnSeatThreshholdChanged"));
void AVRBaseCharacter::OnSeatThreshholdChanged(bool bIsWithinThreshold, float ToThresholdScaler)
{
	VRBaseCharacter_eventOnSeatThreshholdChanged_Parms Parms;
	Parms.bIsWithinThreshold=bIsWithinThreshold ? true : false;
	Parms.ToThresholdScaler=ToThresholdScaler;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnSeatThreshholdChanged),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Seating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the the player either transitions to/from the threshold boundry or the scaler value of being outside the boundry changes\n// Can be used for warnings or screen darkening, ect\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the the player either transitions to/from the threshold boundry or the scaler value of being outside the boundry changes\nCan be used for warnings or screen darkening, ect" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsWithinThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWithinThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ToThresholdScaler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::NewProp_bIsWithinThreshold_SetBit(void* Obj)
{
	((VRBaseCharacter_eventOnSeatThreshholdChanged_Parms*)Obj)->bIsWithinThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::NewProp_bIsWithinThreshold = { "bIsWithinThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventOnSeatThreshholdChanged_Parms), &Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::NewProp_bIsWithinThreshold_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::NewProp_ToThresholdScaler = { "ToThresholdScaler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventOnSeatThreshholdChanged_Parms, ToThresholdScaler), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::NewProp_bIsWithinThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::NewProp_ToThresholdScaler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "OnSeatThreshholdChanged", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::PropPointers), sizeof(VRBaseCharacter_eventOnSeatThreshholdChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventOnSeatThreshholdChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execOnSeatThreshholdChanged)
{
	P_GET_UBOOL(Z_Param_bIsWithinThreshold);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ToThresholdScaler);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeatThreshholdChanged_Implementation(Z_Param_bIsWithinThreshold,Z_Param_ToThresholdScaler);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function OnSeatThreshholdChanged

// Begin Class AVRBaseCharacter Function ReceiveNavigationMoveCompleted
struct VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms
{
	TEnumAsByte<EPathFollowingResult::Type> PathingResult;
};
static FName NAME_AVRBaseCharacter_ReceiveNavigationMoveCompleted = FName(TEXT("ReceiveNavigationMoveCompleted"));
void AVRBaseCharacter::ReceiveNavigationMoveCompleted(EPathFollowingResult::Type PathingResult)
{
	VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms Parms;
	Parms.PathingResult=PathingResult;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_ReceiveNavigationMoveCompleted),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRBaseCharacter|Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event when a navigation pathing operation has completed, auto calls stop movement for VR characters\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event when a navigation pathing operation has completed, auto calls stop movement for VR characters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathingResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::NewProp_PathingResult = { "PathingResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms, PathingResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::NewProp_PathingResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "ReceiveNavigationMoveCompleted", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::PropPointers), sizeof(VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVRBaseCharacter Function ReceiveNavigationMoveCompleted

// Begin Class AVRBaseCharacter Function RegenerateOffsetComponentToWorld
struct Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics
{
	struct VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms
	{
		bool bUpdateBounds;
		bool bCalculatePureYaw;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Regenerates the base offsetcomponenttoworld that VR uses\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regenerates the base offsetcomponenttoworld that VR uses" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUpdateBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateBounds;
	static void NewProp_bCalculatePureYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculatePureYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::NewProp_bUpdateBounds_SetBit(void* Obj)
{
	((VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bUpdateBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::NewProp_bUpdateBounds = { "bUpdateBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), &Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::NewProp_bUpdateBounds_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::NewProp_bCalculatePureYaw_SetBit(void* Obj)
{
	((VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bCalculatePureYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::NewProp_bCalculatePureYaw = { "bCalculatePureYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), &Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::NewProp_bCalculatePureYaw_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::NewProp_bUpdateBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::NewProp_bCalculatePureYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "RegenerateOffsetComponentToWorld", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execRegenerateOffsetComponentToWorld)
{
	P_GET_UBOOL(Z_Param_bUpdateBounds);
	P_GET_UBOOL(Z_Param_bCalculatePureYaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateOffsetComponentToWorld(Z_Param_bUpdateBounds,Z_Param_bCalculatePureYaw);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function RegenerateOffsetComponentToWorld

// Begin Class AVRBaseCharacter Function Server_ReZeroSeating
struct VRBaseCharacter_eventServer_ReZeroSeating_Parms
{
	FTransform_NetQuantize NewTargetTransform;
	FTransform_NetQuantize NewInitialRelCameraTransform;
	bool bZeroToHead;
};
static FName NAME_AVRBaseCharacter_Server_ReZeroSeating = FName(TEXT("Server_ReZeroSeating"));
void AVRBaseCharacter::Server_ReZeroSeating(FTransform_NetQuantize NewTargetTransform, FTransform_NetQuantize NewInitialRelCameraTransform, bool bZeroToHead)
{
	VRBaseCharacter_eventServer_ReZeroSeating_Parms Parms;
	Parms.NewTargetTransform=NewTargetTransform;
	Parms.NewInitialRelCameraTransform=NewInitialRelCameraTransform;
	Parms.bZeroToHead=bZeroToHead ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_ReZeroSeating),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Re-zeros the seated settings\n" },
#endif
		{ "CPP_Default_bZeroToHead", "true" },
		{ "DisplayName", "ReZeroSeating" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Re-zeros the seated settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInitialRelCameraTransform;
	static void NewProp_bZeroToHead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroToHead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::NewProp_NewTargetTransform = { "NewTargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_ReZeroSeating_Parms, NewTargetTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 3972615260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::NewProp_NewInitialRelCameraTransform = { "NewInitialRelCameraTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_ReZeroSeating_Parms, NewInitialRelCameraTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 3972615260
void Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::NewProp_bZeroToHead_SetBit(void* Obj)
{
	((VRBaseCharacter_eventServer_ReZeroSeating_Parms*)Obj)->bZeroToHead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::NewProp_bZeroToHead = { "bZeroToHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventServer_ReZeroSeating_Parms), &Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::NewProp_bZeroToHead_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::NewProp_NewTargetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::NewProp_NewInitialRelCameraTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::NewProp_bZeroToHead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "Server_ReZeroSeating", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::PropPointers), sizeof(VRBaseCharacter_eventServer_ReZeroSeating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventServer_ReZeroSeating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execServer_ReZeroSeating)
{
	P_GET_STRUCT(FTransform_NetQuantize,Z_Param_NewTargetTransform);
	P_GET_STRUCT(FTransform_NetQuantize,Z_Param_NewInitialRelCameraTransform);
	P_GET_UBOOL(Z_Param_bZeroToHead);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ReZeroSeating_Validate(Z_Param_NewTargetTransform,Z_Param_NewInitialRelCameraTransform,Z_Param_bZeroToHead))
	{
		RPC_ValidateFailed(TEXT("Server_ReZeroSeating_Validate"));
		return;
	}
	P_THIS->Server_ReZeroSeating_Implementation(Z_Param_NewTargetTransform,Z_Param_NewInitialRelCameraTransform,Z_Param_bZeroToHead);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function Server_ReZeroSeating

// Begin Class AVRBaseCharacter Function Server_SeatedSnapTurn
struct VRBaseCharacter_eventServer_SeatedSnapTurn_Parms
{
	float Yaw;
};
static FName NAME_AVRBaseCharacter_Server_SeatedSnapTurn = FName(TEXT("Server_SeatedSnapTurn"));
void AVRBaseCharacter::Server_SeatedSnapTurn(float Yaw)
{
	VRBaseCharacter_eventServer_SeatedSnapTurn_Parms Parms;
	Parms.Yaw=Yaw;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SeatedSnapTurn),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Snapturn update\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Snapturn update" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SeatedSnapTurn_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::NewProp_Yaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "Server_SeatedSnapTurn", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::PropPointers), sizeof(VRBaseCharacter_eventServer_SeatedSnapTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventServer_SeatedSnapTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execServer_SeatedSnapTurn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SeatedSnapTurn_Validate(Z_Param_Yaw))
	{
		RPC_ValidateFailed(TEXT("Server_SeatedSnapTurn_Validate"));
		return;
	}
	P_THIS->Server_SeatedSnapTurn_Implementation(Z_Param_Yaw);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function Server_SeatedSnapTurn

// Begin Class AVRBaseCharacter Function Server_SendTransformCamera
struct VRBaseCharacter_eventServer_SendTransformCamera_Parms
{
	FBPVRComponentPosRep NewTransform;
};
static FName NAME_AVRBaseCharacter_Server_SendTransformCamera = FName(TEXT("Server_SendTransformCamera"));
void AVRBaseCharacter::Server_SendTransformCamera(FBPVRComponentPosRep NewTransform)
{
	VRBaseCharacter_eventServer_SendTransformCamera_Parms Parms;
	Parms.NewTransform=NewTransform;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformCamera),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// I'm sending it unreliable because it is being resent pretty often\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "I'm sending it unreliable because it is being resent pretty often" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformCamera_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(0, nullptr) }; // 2685054758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::NewProp_NewTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "Server_SendTransformCamera", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::PropPointers), sizeof(VRBaseCharacter_eventServer_SendTransformCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventServer_SendTransformCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execServer_SendTransformCamera)
{
	P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SendTransformCamera_Validate(Z_Param_NewTransform))
	{
		RPC_ValidateFailed(TEXT("Server_SendTransformCamera_Validate"));
		return;
	}
	P_THIS->Server_SendTransformCamera_Implementation(Z_Param_NewTransform);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function Server_SendTransformCamera

// Begin Class AVRBaseCharacter Function Server_SendTransformLeftController
struct VRBaseCharacter_eventServer_SendTransformLeftController_Parms
{
	FBPVRComponentPosRep NewTransform;
};
static FName NAME_AVRBaseCharacter_Server_SendTransformLeftController = FName(TEXT("Server_SendTransformLeftController"));
void AVRBaseCharacter::Server_SendTransformLeftController(FBPVRComponentPosRep NewTransform)
{
	VRBaseCharacter_eventServer_SendTransformLeftController_Parms Parms;
	Parms.NewTransform=NewTransform;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformLeftController),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformLeftController_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(0, nullptr) }; // 2685054758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::NewProp_NewTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "Server_SendTransformLeftController", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::PropPointers), sizeof(VRBaseCharacter_eventServer_SendTransformLeftController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventServer_SendTransformLeftController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execServer_SendTransformLeftController)
{
	P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SendTransformLeftController_Validate(Z_Param_NewTransform))
	{
		RPC_ValidateFailed(TEXT("Server_SendTransformLeftController_Validate"));
		return;
	}
	P_THIS->Server_SendTransformLeftController_Implementation(Z_Param_NewTransform);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function Server_SendTransformLeftController

// Begin Class AVRBaseCharacter Function Server_SendTransformRightController
struct VRBaseCharacter_eventServer_SendTransformRightController_Parms
{
	FBPVRComponentPosRep NewTransform;
};
static FName NAME_AVRBaseCharacter_Server_SendTransformRightController = FName(TEXT("Server_SendTransformRightController"));
void AVRBaseCharacter::Server_SendTransformRightController(FBPVRComponentPosRep NewTransform)
{
	VRBaseCharacter_eventServer_SendTransformRightController_Parms Parms;
	Parms.NewTransform=NewTransform;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformRightController),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformRightController_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(0, nullptr) }; // 2685054758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::NewProp_NewTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "Server_SendTransformRightController", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::PropPointers), sizeof(VRBaseCharacter_eventServer_SendTransformRightController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventServer_SendTransformRightController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execServer_SendTransformRightController)
{
	P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SendTransformRightController_Validate(Z_Param_NewTransform))
	{
		RPC_ValidateFailed(TEXT("Server_SendTransformRightController_Validate"));
		return;
	}
	P_THIS->Server_SendTransformRightController_Implementation(Z_Param_NewTransform);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function Server_SendTransformRightController

// Begin Class AVRBaseCharacter Function Server_SetSeatedMode
struct VRBaseCharacter_eventServer_SetSeatedMode_Parms
{
	USceneComponent* SeatParent;
	bool bSetSeatedMode;
	FTransform_NetQuantize TargetTransform;
	FTransform_NetQuantize InitialRelCameraTransform;
	float AllowedRadius;
	float AllowedRadiusThreshold;
	bool bZeroToHead;
	EVRConjoinedMovementModes PostSeatedMovementMode;
};
static FName NAME_AVRBaseCharacter_Server_SetSeatedMode = FName(TEXT("Server_SetSeatedMode"));
void AVRBaseCharacter::Server_SetSeatedMode(USceneComponent* SeatParent, bool bSetSeatedMode, FTransform_NetQuantize TargetTransform, FTransform_NetQuantize InitialRelCameraTransform, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead, EVRConjoinedMovementModes PostSeatedMovementMode)
{
	VRBaseCharacter_eventServer_SetSeatedMode_Parms Parms;
	Parms.SeatParent=SeatParent;
	Parms.bSetSeatedMode=bSetSeatedMode ? true : false;
	Parms.TargetTransform=TargetTransform;
	Parms.InitialRelCameraTransform=InitialRelCameraTransform;
	Parms.AllowedRadius=AllowedRadius;
	Parms.AllowedRadiusThreshold=AllowedRadiusThreshold;
	Parms.bZeroToHead=bZeroToHead ? true : false;
	Parms.PostSeatedMovementMode=PostSeatedMovementMode;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SetSeatedMode),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets seated mode on the character and then fires off an event to handle any special setup\n// Target Transform is for teleport location if standing up, or relative camera location when sitting down.\n// InitialRelCameraTransform is generally the relative transform of the camera at the time of requesting to sit.\n// ZeroToHead places central point on head, if false it will use foot location and ignore Z values instead.\n// Post Seated movement mode is the movement mode to switch too after seating is canceled, defaults to Walking and only uses it when un-seating.\n" },
#endif
		{ "CPP_Default_AllowedRadius", "40.000000" },
		{ "CPP_Default_AllowedRadiusThreshold", "20.000000" },
		{ "CPP_Default_bZeroToHead", "true" },
		{ "CPP_Default_PostSeatedMovementMode", "C_MOVE_Walking" },
		{ "DisplayName", "SetSeatedMode" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets seated mode on the character and then fires off an event to handle any special setup\nTarget Transform is for teleport location if standing up, or relative camera location when sitting down.\nInitialRelCameraTransform is generally the relative transform of the camera at the time of requesting to sit.\nZeroToHead places central point on head, if false it will use foot location and ignore Z values instead.\nPost Seated movement mode is the movement mode to switch too after seating is canceled, defaults to Walking and only uses it when un-seating." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeatParent;
	static void NewProp_bSetSeatedMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetSeatedMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelCameraTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AllowedRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AllowedRadiusThreshold;
	static void NewProp_bZeroToHead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroToHead;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostSeatedMovementMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PostSeatedMovementMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_SeatParent = { "SeatParent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, SeatParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatParent_MetaData), NewProp_SeatParent_MetaData) };
void Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_bSetSeatedMode_SetBit(void* Obj)
{
	((VRBaseCharacter_eventServer_SetSeatedMode_Parms*)Obj)->bSetSeatedMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_bSetSeatedMode = { "bSetSeatedMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventServer_SetSeatedMode_Parms), &Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_bSetSeatedMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 3972615260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_InitialRelCameraTransform = { "InitialRelCameraTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, InitialRelCameraTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 3972615260
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_AllowedRadius = { "AllowedRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, AllowedRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_AllowedRadiusThreshold = { "AllowedRadiusThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, AllowedRadiusThreshold), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_bZeroToHead_SetBit(void* Obj)
{
	((VRBaseCharacter_eventServer_SetSeatedMode_Parms*)Obj)->bZeroToHead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_bZeroToHead = { "bZeroToHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventServer_SetSeatedMode_Parms), &Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_bZeroToHead_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_PostSeatedMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_PostSeatedMovementMode = { "PostSeatedMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, PostSeatedMovementMode), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(0, nullptr) }; // 3080966818
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_SeatParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_bSetSeatedMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_TargetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_InitialRelCameraTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_AllowedRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_AllowedRadiusThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_bZeroToHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_PostSeatedMovementMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::NewProp_PostSeatedMovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "Server_SetSeatedMode", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::PropPointers), sizeof(VRBaseCharacter_eventServer_SetSeatedMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventServer_SetSeatedMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execServer_SetSeatedMode)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SeatParent);
	P_GET_UBOOL(Z_Param_bSetSeatedMode);
	P_GET_STRUCT(FTransform_NetQuantize,Z_Param_TargetTransform);
	P_GET_STRUCT(FTransform_NetQuantize,Z_Param_InitialRelCameraTransform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AllowedRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AllowedRadiusThreshold);
	P_GET_UBOOL(Z_Param_bZeroToHead);
	P_GET_ENUM(EVRConjoinedMovementModes,Z_Param_PostSeatedMovementMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SetSeatedMode_Validate(Z_Param_SeatParent,Z_Param_bSetSeatedMode,Z_Param_TargetTransform,Z_Param_InitialRelCameraTransform,Z_Param_AllowedRadius,Z_Param_AllowedRadiusThreshold,Z_Param_bZeroToHead,EVRConjoinedMovementModes(Z_Param_PostSeatedMovementMode)))
	{
		RPC_ValidateFailed(TEXT("Server_SetSeatedMode_Validate"));
		return;
	}
	P_THIS->Server_SetSeatedMode_Implementation(Z_Param_SeatParent,Z_Param_bSetSeatedMode,Z_Param_TargetTransform,Z_Param_InitialRelCameraTransform,Z_Param_AllowedRadius,Z_Param_AllowedRadiusThreshold,Z_Param_bZeroToHead,EVRConjoinedMovementModes(Z_Param_PostSeatedMovementMode));
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function Server_SetSeatedMode

// Begin Class AVRBaseCharacter Function SetActorLocationAndRotationVR
struct Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics
{
	struct VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms
	{
		FVector NewLoc;
		FRotator NewRot;
		bool bUseYawOnly;
		bool bAccountForHMDRotation;
		bool bTeleport;
		bool bRotateAroundCapsule;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the actors rotation and location taking into account the HMD as a pivot point (also moves the actor), returns the location difference from the rotation\n// If bRotateAroundCapsule is true then it rotates around the offset capsule, otherwise it rotates around the camera\n" },
#endif
		{ "CPP_Default_bAccountForHMDRotation", "true" },
		{ "CPP_Default_bRotateAroundCapsule", "true" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bUseYawOnly", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the actors rotation and location taking into account the HMD as a pivot point (also moves the actor), returns the location difference from the rotation\nIf bRotateAroundCapsule is true then it rotates around the offset capsule, otherwise it rotates around the camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRot;
	static void NewProp_bUseYawOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseYawOnly;
	static void NewProp_bAccountForHMDRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccountForHMDRotation;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_bRotateAroundCapsule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateAroundCapsule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_NewLoc = { "NewLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_NewRot = { "NewRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms, NewRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bUseYawOnly_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms*)Obj)->bUseYawOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bUseYawOnly = { "bUseYawOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bUseYawOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bAccountForHMDRotation_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms*)Obj)->bAccountForHMDRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bAccountForHMDRotation = { "bAccountForHMDRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bAccountForHMDRotation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bRotateAroundCapsule_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms*)Obj)->bRotateAroundCapsule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bRotateAroundCapsule = { "bRotateAroundCapsule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bRotateAroundCapsule_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_NewLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_NewRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bUseYawOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bAccountForHMDRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_bRotateAroundCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "SetActorLocationAndRotationVR", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execSetActorLocationAndRotationVR)
{
	P_GET_STRUCT(FVector,Z_Param_NewLoc);
	P_GET_STRUCT(FRotator,Z_Param_NewRot);
	P_GET_UBOOL(Z_Param_bUseYawOnly);
	P_GET_UBOOL(Z_Param_bAccountForHMDRotation);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_GET_UBOOL(Z_Param_bRotateAroundCapsule);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->SetActorLocationAndRotationVR(Z_Param_NewLoc,Z_Param_NewRot,Z_Param_bUseYawOnly,Z_Param_bAccountForHMDRotation,Z_Param_bTeleport,Z_Param_bRotateAroundCapsule);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function SetActorLocationAndRotationVR

// Begin Class AVRBaseCharacter Function SetActorLocationVR
struct Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics
{
	struct VRBaseCharacter_eventSetActorLocationVR_Parms
	{
		FVector NewLoc;
		bool bTeleport;
		bool bSetCapsuleLocation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the actors location taking into account the HMD as a pivot point, returns the location difference\n// If SetCapsuleLocation is true then it offsets the capsule to the location, otherwise it will move the Camera itself to the location\n" },
#endif
		{ "CPP_Default_bSetCapsuleLocation", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the actors location taking into account the HMD as a pivot point, returns the location difference\nIf SetCapsuleLocation is true then it offsets the capsule to the location, otherwise it will move the Camera itself to the location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLoc;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_bSetCapsuleLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetCapsuleLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_NewLoc = { "NewLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetActorLocationVR_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorLocationVR_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorLocationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_bSetCapsuleLocation_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorLocationVR_Parms*)Obj)->bSetCapsuleLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_bSetCapsuleLocation = { "bSetCapsuleLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorLocationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_bSetCapsuleLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetActorLocationVR_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_NewLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_bSetCapsuleLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "SetActorLocationVR", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::VRBaseCharacter_eventSetActorLocationVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::VRBaseCharacter_eventSetActorLocationVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execSetActorLocationVR)
{
	P_GET_STRUCT(FVector,Z_Param_NewLoc);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_GET_UBOOL(Z_Param_bSetCapsuleLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->SetActorLocationVR(Z_Param_NewLoc,Z_Param_bTeleport,Z_Param_bSetCapsuleLocation);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function SetActorLocationVR

// Begin Class AVRBaseCharacter Function SetActorRotationVR
struct Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics
{
	struct VRBaseCharacter_eventSetActorRotationVR_Parms
	{
		FRotator NewRot;
		bool bUseYawOnly;
		bool bAccountForHMDRotation;
		bool bRotateAroundCapsule;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the actors rotation taking into account the HMD as a pivot point (also moves the actor), returns the location difference\n// bAccountForHMDRotation sets the rot to have the HMD face the given rot, if it is false it ignores the HMD rotation\n// If bRotateAroundCapsule is true then it rotates around the offset capsule, otherwise it rotates around the camera\n" },
#endif
		{ "CPP_Default_bAccountForHMDRotation", "true" },
		{ "CPP_Default_bRotateAroundCapsule", "true" },
		{ "CPP_Default_bUseYawOnly", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the actors rotation taking into account the HMD as a pivot point (also moves the actor), returns the location difference\nbAccountForHMDRotation sets the rot to have the HMD face the given rot, if it is false it ignores the HMD rotation\nIf bRotateAroundCapsule is true then it rotates around the offset capsule, otherwise it rotates around the camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRot;
	static void NewProp_bUseYawOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseYawOnly;
	static void NewProp_bAccountForHMDRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccountForHMDRotation;
	static void NewProp_bRotateAroundCapsule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateAroundCapsule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_NewRot = { "NewRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetActorRotationVR_Parms, NewRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bUseYawOnly_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorRotationVR_Parms*)Obj)->bUseYawOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bUseYawOnly = { "bUseYawOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bUseYawOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bAccountForHMDRotation_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorRotationVR_Parms*)Obj)->bAccountForHMDRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bAccountForHMDRotation = { "bAccountForHMDRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bAccountForHMDRotation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bRotateAroundCapsule_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetActorRotationVR_Parms*)Obj)->bRotateAroundCapsule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bRotateAroundCapsule = { "bRotateAroundCapsule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetActorRotationVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bRotateAroundCapsule_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetActorRotationVR_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_NewRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bUseYawOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bAccountForHMDRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_bRotateAroundCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "SetActorRotationVR", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::VRBaseCharacter_eventSetActorRotationVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::VRBaseCharacter_eventSetActorRotationVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execSetActorRotationVR)
{
	P_GET_STRUCT(FRotator,Z_Param_NewRot);
	P_GET_UBOOL(Z_Param_bUseYawOnly);
	P_GET_UBOOL(Z_Param_bAccountForHMDRotation);
	P_GET_UBOOL(Z_Param_bRotateAroundCapsule);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->SetActorRotationVR(Z_Param_NewRot,Z_Param_bUseYawOnly,Z_Param_bAccountForHMDRotation,Z_Param_bRotateAroundCapsule);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function SetActorRotationVR

// Begin Class AVRBaseCharacter Function SetCharacterHalfHeightVR
struct Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics
{
	struct VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms
	{
		float HalfHeight;
		bool bUpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This sets the capsules half height, but also regenerates the offset transform instantly\n" },
#endif
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This sets the capsules half height, but also regenerates the offset transform instantly" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms*)Obj)->bUpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::NewProp_bUpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "SetCharacterHalfHeightVR", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execSetCharacterHalfHeightVR)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
	P_GET_UBOOL(Z_Param_bUpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function SetCharacterHalfHeightVR

// Begin Class AVRBaseCharacter Function SetCharacterSizeVR
struct Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics
{
	struct VRBaseCharacter_eventSetCharacterSizeVR_Parms
	{
		float NewRadius;
		float NewHalfHeight;
		bool bUpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This sets the capsules height, but also regenerates the offset transform instantly\n" },
#endif
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This sets the capsules height, but also regenerates the offset transform instantly" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight;
	static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterSizeVR_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::NewProp_NewHalfHeight = { "NewHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterSizeVR_Parms, NewHalfHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
{
	((VRBaseCharacter_eventSetCharacterSizeVR_Parms*)Obj)->bUpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacter_eventSetCharacterSizeVR_Parms), &Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::NewProp_NewRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::NewProp_NewHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::NewProp_bUpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "SetCharacterSizeVR", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::VRBaseCharacter_eventSetCharacterSizeVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::VRBaseCharacter_eventSetCharacterSizeVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execSetCharacterSizeVR)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHalfHeight);
	P_GET_UBOOL(Z_Param_bUpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function SetCharacterSizeVR

// Begin Class AVRBaseCharacter Function StopNavigationMovement
struct Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRBaseCharacter|Navigation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instantly stops pathing\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantly stops pathing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "StopNavigationMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execStopNavigationMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopNavigationMovement();
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function StopNavigationMovement

// Begin Class AVRBaseCharacter Function UpdateClimbingMovement
struct VRBaseCharacter_eventUpdateClimbingMovement_Parms
{
	float DeltaTime;
};
static FName NAME_AVRBaseCharacter_UpdateClimbingMovement = FName(TEXT("UpdateClimbingMovement"));
void AVRBaseCharacter::UpdateClimbingMovement(float DeltaTime)
{
	VRBaseCharacter_eventUpdateClimbingMovement_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_UpdateClimbingMovement),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event for adding to the climbing movement mode. Called by CharacterMovement if MovementMode is set to Climbing.\n\x09 * @note C++ code should override PhysCustom_Climbing() instead.\n\x09 */" },
#endif
		{ "DisplayName", "UpdateClimbingMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
		{ "ScriptName", "UpdateClimbingMovement" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for adding to the climbing movement mode. Called by CharacterMovement if MovementMode is set to Climbing.\n@note C++ code should override PhysCustom_Climbing() instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventUpdateClimbingMovement_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "UpdateClimbingMovement", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::PropPointers), sizeof(VRBaseCharacter_eventUpdateClimbingMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventUpdateClimbingMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execUpdateClimbingMovement)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateClimbingMovement_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function UpdateClimbingMovement

// Begin Class AVRBaseCharacter Function UpdateLowGravMovement
struct VRBaseCharacter_eventUpdateLowGravMovement_Parms
{
	float DeltaTime;
};
static FName NAME_AVRBaseCharacter_UpdateLowGravMovement = FName(TEXT("UpdateLowGravMovement"));
void AVRBaseCharacter::UpdateLowGravMovement(float DeltaTime)
{
	VRBaseCharacter_eventUpdateLowGravMovement_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_UpdateLowGravMovement),&Parms);
}
struct Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Event for adding to the climbing movement mode. Called by CharacterMovement if MovementMode is set to Climbing.\n\x09* @note C++ code should override PhysCustom_Climbing() instead.\n\x09*/" },
#endif
		{ "DisplayName", "UpdateLowGravMovement" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
		{ "ScriptName", "UpdateLowGravMovement" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for adding to the climbing movement mode. Called by CharacterMovement if MovementMode is set to Climbing.\n@note C++ code should override PhysCustom_Climbing() instead." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacter_eventUpdateLowGravMovement_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, nullptr, "UpdateLowGravMovement", nullptr, nullptr, Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::PropPointers), sizeof(VRBaseCharacter_eventUpdateLowGravMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBaseCharacter_eventUpdateLowGravMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRBaseCharacter::execUpdateLowGravMovement)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLowGravMovement_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AVRBaseCharacter Function UpdateLowGravMovement

// Begin Class AVRBaseCharacter
void AVRBaseCharacter::StaticRegisterNativesAVRBaseCharacter()
{
	UClass* Class = AVRBaseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActorWorldRotationVR", &AVRBaseCharacter::execAddActorWorldRotationVR },
		{ "ExtendedSimpleMoveToLocation", &AVRBaseCharacter::execExtendedSimpleMoveToLocation },
		{ "GetCurrentNavigationPathPoints", &AVRBaseCharacter::execGetCurrentNavigationPathPoints },
		{ "GetMoveStatus", &AVRBaseCharacter::execGetMoveStatus },
		{ "GetTeleportLocation", &AVRBaseCharacter::execGetTeleportLocation },
		{ "GetVRForwardVector", &AVRBaseCharacter::execGetVRForwardVector },
		{ "GetVRLocation", &AVRBaseCharacter::execGetVRLocation },
		{ "GetVRRightVector", &AVRBaseCharacter::execGetVRRightVector },
		{ "GetVRRotation", &AVRBaseCharacter::execGetVRRotation },
		{ "GetVRUpVector", &AVRBaseCharacter::execGetVRUpVector },
		{ "HasPartialPath", &AVRBaseCharacter::execHasPartialPath },
		{ "K2_GetVRHeadLocation", &AVRBaseCharacter::execK2_GetVRHeadLocation },
		{ "NotifyOfTeleport", &AVRBaseCharacter::execNotifyOfTeleport },
		{ "OnBeginWallPushback", &AVRBaseCharacter::execOnBeginWallPushback },
		{ "OnClimbingSteppedUp", &AVRBaseCharacter::execOnClimbingSteppedUp },
		{ "OnCustomMoveActionPerformed", &AVRBaseCharacter::execOnCustomMoveActionPerformed },
		{ "OnEndWallPushback", &AVRBaseCharacter::execOnEndWallPushback },
		{ "OnRep_CapsuleHeight", &AVRBaseCharacter::execOnRep_CapsuleHeight },
		{ "OnRep_SeatedCharInfo", &AVRBaseCharacter::execOnRep_SeatedCharInfo },
		{ "OnSeatedModeChanged", &AVRBaseCharacter::execOnSeatedModeChanged },
		{ "OnSeatThreshholdChanged", &AVRBaseCharacter::execOnSeatThreshholdChanged },
		{ "RegenerateOffsetComponentToWorld", &AVRBaseCharacter::execRegenerateOffsetComponentToWorld },
		{ "Server_ReZeroSeating", &AVRBaseCharacter::execServer_ReZeroSeating },
		{ "Server_SeatedSnapTurn", &AVRBaseCharacter::execServer_SeatedSnapTurn },
		{ "Server_SendTransformCamera", &AVRBaseCharacter::execServer_SendTransformCamera },
		{ "Server_SendTransformLeftController", &AVRBaseCharacter::execServer_SendTransformLeftController },
		{ "Server_SendTransformRightController", &AVRBaseCharacter::execServer_SendTransformRightController },
		{ "Server_SetSeatedMode", &AVRBaseCharacter::execServer_SetSeatedMode },
		{ "SetActorLocationAndRotationVR", &AVRBaseCharacter::execSetActorLocationAndRotationVR },
		{ "SetActorLocationVR", &AVRBaseCharacter::execSetActorLocationVR },
		{ "SetActorRotationVR", &AVRBaseCharacter::execSetActorRotationVR },
		{ "SetCharacterHalfHeightVR", &AVRBaseCharacter::execSetCharacterHalfHeightVR },
		{ "SetCharacterSizeVR", &AVRBaseCharacter::execSetCharacterSizeVR },
		{ "StopNavigationMovement", &AVRBaseCharacter::execStopNavigationMovement },
		{ "UpdateClimbingMovement", &AVRBaseCharacter::execUpdateClimbingMovement },
		{ "UpdateLowGravMovement", &AVRBaseCharacter::execUpdateLowGravMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRBaseCharacter);
UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister()
{
	return AVRBaseCharacter::StaticClass();
}
struct Z_Construct_UClass_AVRBaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningVRPlayerController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BaseVR Character movement component belongs to */" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BaseVR Character movement component belongs to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetainRoomscale_MetaData[] = {
		{ "Category", "VRBaseCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then we will retain roomscale tracking in relative space of the character.\n// If false than the movement component will offset to the hmd tracking and the tracking will be nulled out\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then we will retain roomscale tracking in relative space of the character.\nIf false than the movement component will offset to the hmd tracking and the tracking will be nulled out" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMovementVR_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used for replication of our RootComponent's position and velocity */" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for replication of our RootComponent's position and velocity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterTeleported_Bind_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Give my users direct access to an event for when the player has teleported\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Give my users direct access to an event for when the player has teleported" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterNetworkCorrected_Bind_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Give my users direct access to an event for when the player has been network corrected\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Give my users direct access to an event for when the player has been network corrected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStateReplicated_Bind_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Give my users direct access to an event for when the player state has changed\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Give my users direct access to an event for when the player state has changed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRReplicateCapsuleHeight_MetaData[] = {
		{ "Category", "VRBaseCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will replicate the capsule height on to clients, allows for dynamic capsule height changes in multiplayer\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will replicate the capsule height on to clients, allows for dynamic capsule height changes in multiplayer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCapsuleHeight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OnlyReplicated to simulated clients\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OnlyReplicated to simulated clients" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetComponentToWorld_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the offset location of the player, use this for when checking against player transform instead of the actors transform\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the offset location of the player, use this for when checking against player transform instead of the actors transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseExperimentalUnseatModeFix_MetaData[] = {
		{ "Category", "VRBaseCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will use the experimental method of unseating that clears some movement replication options.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will use the experimental method of unseating that clears some movement replication options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeatInformation_MetaData[] = {
		{ "Category", "Seating" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSeatThreshholdChanged_Bind_MetaData[] = {
		{ "Category", "Seating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to use an object\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to use an object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetSmoother_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRBaseCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This component is used with the normal character SkeletalMesh network smoothing system for simulated proxies\n// It will lerp the characters components back to zero on simulated proxies after a move is complete.\n// The simplest method of doing this was applying the exact same offset as the mesh gets to a base component that\n// tracked objects are attached to.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This component is used with the normal character SkeletalMesh network smoothing system for simulated proxies\nIt will lerp the characters components back to zero on simulated proxies after a move is complete.\nThe simplest method of doing this was applying the exact same offset as the mesh gets to a base component that\ntracked objects are attached to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRProxyComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRBaseCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is just a helper proxy component after the net smoother to make it easier to move tracking around for people\n// but still maintain the netsmoothers functionality\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is just a helper proxy component after the net smoother to make it easier to move tracking around for people\nbut still maintain the netsmoothers functionality" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRMovementReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRReplicatedCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRelativeAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightMotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNavigationFilterClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningVRPlayerController;
	static void NewProp_bRetainRoomscale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetainRoomscale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedMovementVR;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterTeleported_Bind;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterNetworkCorrected_Bind;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStateReplicated_Bind;
	static void NewProp_VRReplicateCapsuleHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VRReplicateCapsuleHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedCapsuleHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetComponentToWorld;
	static void NewProp_bUseExperimentalUnseatModeFix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExperimentalUnseatModeFix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeatInformation;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeatThreshholdChanged_Bind;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetSmoother;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VRProxyComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VRMovementReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VRReplicatedCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRelativeAttachment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMotionController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultNavigationFilterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR, "AddActorWorldRotationVR" }, // 3569548741
		{ &Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation, "ExtendedSimpleMoveToLocation" }, // 1060755371
		{ &Z_Construct_UFunction_AVRBaseCharacter_GetCurrentNavigationPathPoints, "GetCurrentNavigationPathPoints" }, // 2711795772
		{ &Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus, "GetMoveStatus" }, // 3244064345
		{ &Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation, "GetTeleportLocation" }, // 1525344433
		{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector, "GetVRForwardVector" }, // 2484600653
		{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation, "GetVRLocation" }, // 2520274891
		{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector, "GetVRRightVector" }, // 1377730386
		{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation, "GetVRRotation" }, // 3823083411
		{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector, "GetVRUpVector" }, // 4031928261
		{ &Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath, "HasPartialPath" }, // 4044524329
		{ &Z_Construct_UFunction_AVRBaseCharacter_K2_GetVRHeadLocation, "K2_GetVRHeadLocation" }, // 3908276605
		{ &Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport, "NotifyOfTeleport" }, // 2551909301
		{ &Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback, "OnBeginWallPushback" }, // 835670050
		{ &Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp, "OnClimbingSteppedUp" }, // 2563958780
		{ &Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed, "OnCustomMoveActionPerformed" }, // 3924688170
		{ &Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback, "OnEndWallPushback" }, // 54408070
		{ &Z_Construct_UFunction_AVRBaseCharacter_OnRep_CapsuleHeight, "OnRep_CapsuleHeight" }, // 2921334848
		{ &Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo, "OnRep_SeatedCharInfo" }, // 2626202951
		{ &Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged, "OnSeatedModeChanged" }, // 912274660
		{ &Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged, "OnSeatThreshholdChanged" }, // 1468795398
		{ &Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted, "ReceiveNavigationMoveCompleted" }, // 1317254828
		{ &Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld, "RegenerateOffsetComponentToWorld" }, // 3140196777
		{ &Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating, "Server_ReZeroSeating" }, // 3163877412
		{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SeatedSnapTurn, "Server_SeatedSnapTurn" }, // 2567438025
		{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera, "Server_SendTransformCamera" }, // 1561503397
		{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController, "Server_SendTransformLeftController" }, // 2677704074
		{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController, "Server_SendTransformRightController" }, // 2948461006
		{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode, "Server_SetSeatedMode" }, // 2789494799
		{ &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR, "SetActorLocationAndRotationVR" }, // 126755693
		{ &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationVR, "SetActorLocationVR" }, // 4146801567
		{ &Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR, "SetActorRotationVR" }, // 3809076790
		{ &Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR, "SetCharacterHalfHeightVR" }, // 2225913182
		{ &Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR, "SetCharacterSizeVR" }, // 441268557
		{ &Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement, "StopNavigationMovement" }, // 822219791
		{ &Z_Construct_UFunction_AVRBaseCharacter_UpdateClimbingMovement, "UpdateClimbingMovement" }, // 2036472268
		{ &Z_Construct_UFunction_AVRBaseCharacter_UpdateLowGravMovement, "UpdateLowGravMovement" }, // 229952702
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OwningVRPlayerController = { "OwningVRPlayerController", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, OwningVRPlayerController), Z_Construct_UClass_AVRPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningVRPlayerController_MetaData), NewProp_OwningVRPlayerController_MetaData) };
void Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_bRetainRoomscale_SetBit(void* Obj)
{
	((AVRBaseCharacter*)Obj)->bRetainRoomscale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_bRetainRoomscale = { "bRetainRoomscale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVRBaseCharacter), &Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_bRetainRoomscale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetainRoomscale_MetaData), NewProp_bRetainRoomscale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_ReplicatedMovementVR = { "ReplicatedMovementVR", "OnRep_ReplicatedMovement", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, ReplicatedMovementVR), Z_Construct_UScriptStruct_FRepMovementVRCharacter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedMovementVR_MetaData), NewProp_ReplicatedMovementVR_MetaData) }; // 791019887
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OnCharacterTeleported_Bind = { "OnCharacterTeleported_Bind", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, OnCharacterTeleported_Bind), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerTeleportedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCharacterTeleported_Bind_MetaData), NewProp_OnCharacterTeleported_Bind_MetaData) }; // 1242759482
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OnCharacterNetworkCorrected_Bind = { "OnCharacterNetworkCorrected_Bind", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, OnCharacterNetworkCorrected_Bind), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerNetworkCorrectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCharacterNetworkCorrected_Bind_MetaData), NewProp_OnCharacterNetworkCorrected_Bind_MetaData) }; // 3373760785
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OnPlayerStateReplicated_Bind = { "OnPlayerStateReplicated_Bind", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, OnPlayerStateReplicated_Bind), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRPlayerStateReplicatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerStateReplicated_Bind_MetaData), NewProp_OnPlayerStateReplicated_Bind_MetaData) }; // 2440536248
void Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRReplicateCapsuleHeight_SetBit(void* Obj)
{
	((AVRBaseCharacter*)Obj)->VRReplicateCapsuleHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRReplicateCapsuleHeight = { "VRReplicateCapsuleHeight", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVRBaseCharacter), &Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRReplicateCapsuleHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRReplicateCapsuleHeight_MetaData), NewProp_VRReplicateCapsuleHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_ReplicatedCapsuleHeight = { "ReplicatedCapsuleHeight", "OnRep_CapsuleHeight", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, ReplicatedCapsuleHeight), Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedCapsuleHeight_MetaData), NewProp_ReplicatedCapsuleHeight_MetaData) }; // 2727533211
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OffsetComponentToWorld = { "OffsetComponentToWorld", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, OffsetComponentToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetComponentToWorld_MetaData), NewProp_OffsetComponentToWorld_MetaData) };
void Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_bUseExperimentalUnseatModeFix_SetBit(void* Obj)
{
	((AVRBaseCharacter*)Obj)->bUseExperimentalUnseatModeFix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_bUseExperimentalUnseatModeFix = { "bUseExperimentalUnseatModeFix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVRBaseCharacter), &Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_bUseExperimentalUnseatModeFix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseExperimentalUnseatModeFix_MetaData), NewProp_bUseExperimentalUnseatModeFix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_SeatInformation = { "SeatInformation", "OnRep_SeatedCharInfo", (EPropertyFlags)0x0010008100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, SeatInformation), Z_Construct_UScriptStruct_FVRSeatedCharacterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeatInformation_MetaData), NewProp_SeatInformation_MetaData) }; // 1877259378
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OnSeatThreshholdChanged_Bind = { "OnSeatThreshholdChanged_Bind", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, OnSeatThreshholdChanged_Bind), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSeatThreshholdChanged_Bind_MetaData), NewProp_OnSeatThreshholdChanged_Bind_MetaData) }; // 3021048518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_NetSmoother = { "NetSmoother", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, NetSmoother), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetSmoother_MetaData), NewProp_NetSmoother_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRProxyComponent = { "VRProxyComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, VRProxyComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRProxyComponent_MetaData), NewProp_VRProxyComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRMovementReference = { "VRMovementReference", nullptr, (EPropertyFlags)0x01140000000a201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, VRMovementReference), Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRMovementReference_MetaData), NewProp_VRMovementReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRReplicatedCamera = { "VRReplicatedCamera", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, VRReplicatedCamera), Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRReplicatedCamera_MetaData), NewProp_VRReplicatedCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_ParentRelativeAttachment = { "ParentRelativeAttachment", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, ParentRelativeAttachment), Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRelativeAttachment_MetaData), NewProp_ParentRelativeAttachment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_LeftMotionController = { "LeftMotionController", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, LeftMotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMotionController_MetaData), NewProp_LeftMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_RightMotionController = { "RightMotionController", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, RightMotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightMotionController_MetaData), NewProp_RightMotionController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_DefaultNavigationFilterClass = { "DefaultNavigationFilterClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRBaseCharacter, DefaultNavigationFilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNavigationFilterClass_MetaData), NewProp_DefaultNavigationFilterClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRBaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OwningVRPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_bRetainRoomscale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_ReplicatedMovementVR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OnCharacterTeleported_Bind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OnCharacterNetworkCorrected_Bind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OnPlayerStateReplicated_Bind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRReplicateCapsuleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_ReplicatedCapsuleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OffsetComponentToWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_bUseExperimentalUnseatModeFix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_SeatInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_OnSeatThreshholdChanged_Bind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_NetSmoother,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRProxyComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRMovementReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_VRReplicatedCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_ParentRelativeAttachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_LeftMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_RightMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRBaseCharacter_Statics::NewProp_DefaultNavigationFilterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRBaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVRBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRBaseCharacter_Statics::ClassParams = {
	&AVRBaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVRBaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVRBaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRBaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRBaseCharacter()
{
	if (!Z_Registration_Info_UClass_AVRBaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRBaseCharacter.OuterSingleton, Z_Construct_UClass_AVRBaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRBaseCharacter.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRBaseCharacter>()
{
	return AVRBaseCharacter::StaticClass();
}
void AVRBaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ReplicatedMovementVR(TEXT("ReplicatedMovementVR"));
	static const FName Name_VRReplicateCapsuleHeight(TEXT("VRReplicateCapsuleHeight"));
	static const FName Name_ReplicatedCapsuleHeight(TEXT("ReplicatedCapsuleHeight"));
	static const FName Name_SeatInformation(TEXT("SeatInformation"));
	const bool bIsValid = true
		&& Name_ReplicatedMovementVR == ClassReps[(int32)ENetFields_Private::ReplicatedMovementVR].Property->GetFName()
		&& Name_VRReplicateCapsuleHeight == ClassReps[(int32)ENetFields_Private::VRReplicateCapsuleHeight].Property->GetFName()
		&& Name_ReplicatedCapsuleHeight == ClassReps[(int32)ENetFields_Private::ReplicatedCapsuleHeight].Property->GetFName()
		&& Name_SeatInformation == ClassReps[(int32)ENetFields_Private::SeatInformation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AVRBaseCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRBaseCharacter);
AVRBaseCharacter::~AVRBaseCharacter() {}
// End Class AVRBaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRepMovementVRCharacter::StaticStruct, Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics::NewStructOps, TEXT("RepMovementVRCharacter"), &Z_Registration_Info_UScriptStruct_RepMovementVRCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepMovementVRCharacter), 791019887U) },
		{ FVRSeatedCharacterInfo::StaticStruct, Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics::NewStructOps, TEXT("VRSeatedCharacterInfo"), &Z_Registration_Info_UScriptStruct_VRSeatedCharacterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRSeatedCharacterInfo), 1877259378U) },
		{ FVRReplicatedCapsuleHeight::StaticStruct, Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics::NewStructOps, TEXT("VRReplicatedCapsuleHeight"), &Z_Registration_Info_UScriptStruct_VRReplicatedCapsuleHeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRReplicatedCapsuleHeight), 2727533211U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRBaseCharacter, AVRBaseCharacter::StaticClass, TEXT("AVRBaseCharacter"), &Z_Registration_Info_UClass_AVRBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRBaseCharacter), 4160895715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_254342044(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
