// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRBaseCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacterMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature();
// End Cross Module References

// Begin Delegate FVROnPerformClimbingStepUp
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms
	{
		FVector FinalStepUpLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when to handle a climbing step up, will override default step up logic if is bound to. */" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when to handle a climbing step up, will override default step up logic if is bound to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalStepUpLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::NewProp_FinalStepUpLocation = { "FinalStepUpLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms, FinalStepUpLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::NewProp_FinalStepUpLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnPerformClimbingStepUp__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVROnPerformClimbingStepUp_DelegateWrapper(const FMulticastScriptDelegate& VROnPerformClimbingStepUp, FVector FinalStepUpLocation)
{
	struct _Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms
	{
		FVector FinalStepUpLocation;
	};
	_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms Parms;
	Parms.FinalStepUpLocation=FinalStepUpLocation;
	VROnPerformClimbingStepUp.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVROnPerformClimbingStepUp

// Begin Class UVRBaseCharacterMovementComponent Function AddCustomReplicatedMovement
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics
{
	struct VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms
	{
		FVector Movement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacterMovementComponent|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add in the custom replicated movement that climbing mode uses, this is a cutom vector that is applied to character movements\n// on the next tick as a movement input..\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add in the custom replicated movement that climbing mode uses, this is a cutom vector that is applied to character movements\non the next tick as a movement input.." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms, Movement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::NewProp_Movement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "AddCustomReplicatedMovement", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execAddCustomReplicatedMovement)
{
	P_GET_STRUCT(FVector,Z_Param_Movement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCustomReplicatedMovement(Z_Param_Movement);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function AddCustomReplicatedMovement

// Begin Class UVRBaseCharacterMovementComponent Function ClearCustomReplicatedMovement
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacterMovementComponent|VRLocations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears the custom replicated movement, can be used to cancel movements if the mode changes\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the custom replicated movement, can be used to cancel movements if the mode changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "ClearCustomReplicatedMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execClearCustomReplicatedMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCustomReplicatedMovement();
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function ClearCustomReplicatedMovement

// Begin Class UVRBaseCharacterMovementComponent Function GetCustomInputVector
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics
{
	struct VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the current CustomInputVector for use in custom movement modes\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current CustomInputVector for use in custom movement modes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "GetCustomInputVector", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execGetCustomInputVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCustomInputVector();
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function GetCustomInputVector

// Begin Class UVRBaseCharacterMovementComponent Function GetReplicatedMovementMode
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics
{
	struct VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms
	{
		EVRConjoinedMovementModes ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Call this to convert the current movement mode to a Conjoined one for reference\n\x09*\n\x09* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n\x09* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n\x09* For a total of 6 Custom movement modes past the currently implemented plugin ones.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Call this to convert the current movement mode to a Conjoined one for reference\n*\n* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n* For a total of 6 Custom movement modes past the currently implemented plugin ones." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(0, nullptr) }; // 3080966818
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "GetReplicatedMovementMode", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execGetReplicatedMovementMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EVRConjoinedMovementModes*)Z_Param__Result=P_THIS->GetReplicatedMovementMode();
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function GetReplicatedMovementMode

// Begin Class UVRBaseCharacterMovementComponent Function PerformMoveAction_Custom
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics
{
	struct VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms
	{
		EVRMoveAction MoveActionToPerform;
		EVRMoveActionDataReq DataRequirementsForMoveAction;
		FVector MoveActionVector;
		FRotator MoveActionRotator;
		uint8 MoveActionFlags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Perform a custom moveaction that you define, will call the OnCustomMoveActionPerformed event in the character when processed so you can run your own logic\n// Be sure to set the minimum data replication requirements for your move action in order to save on replication.\n// Flags will always replicate if it is non zero\n" },
#endif
		{ "CPP_Default_MoveActionFlags", "0" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform a custom moveaction that you define, will call the OnCustomMoveActionPerformed event in the character when processed so you can run your own logic\nBe sure to set the minimum data replication requirements for your move action in order to save on replication.\nFlags will always replicate if it is non zero" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveActionToPerform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveActionToPerform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataRequirementsForMoveAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataRequirementsForMoveAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionRotator;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveActionFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform = { "MoveActionToPerform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionToPerform), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(0, nullptr) }; // 806081634
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction = { "DataRequirementsForMoveAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, DataRequirementsForMoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(0, nullptr) }; // 1617049485
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionVector = { "MoveActionVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionRotator = { "MoveActionRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionFlags = { "MoveActionFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionFlags), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_Custom", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_Custom)
{
	P_GET_ENUM(EVRMoveAction,Z_Param_MoveActionToPerform);
	P_GET_ENUM(EVRMoveActionDataReq,Z_Param_DataRequirementsForMoveAction);
	P_GET_STRUCT(FVector,Z_Param_MoveActionVector);
	P_GET_STRUCT(FRotator,Z_Param_MoveActionRotator);
	P_GET_PROPERTY(FByteProperty,Z_Param_MoveActionFlags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformMoveAction_Custom(EVRMoveAction(Z_Param_MoveActionToPerform),EVRMoveActionDataReq(Z_Param_DataRequirementsForMoveAction),Z_Param_MoveActionVector,Z_Param_MoveActionRotator,Z_Param_MoveActionFlags);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function PerformMoveAction_Custom

// Begin Class UVRBaseCharacterMovementComponent Function PerformMoveAction_SetGravityDirection
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics
{
	struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SetGravityDirection_Parms
	{
		FVector NewGravityDirection;
		bool bOrientToNewGravity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the gravity direction for the character manually (optionall auto align to the new gravity)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the gravity direction for the character manually (optionall auto align to the new gravity)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
	static void NewProp_bOrientToNewGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientToNewGravity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetGravityDirection_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::NewProp_bOrientToNewGravity_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_SetGravityDirection_Parms*)Obj)->bOrientToNewGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::NewProp_bOrientToNewGravity = { "bOrientToNewGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetGravityDirection_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::NewProp_bOrientToNewGravity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::NewProp_NewGravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::NewProp_bOrientToNewGravity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_SetGravityDirection", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_SetGravityDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_SetGravityDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_SetGravityDirection)
{
	P_GET_STRUCT(FVector,Z_Param_NewGravityDirection);
	P_GET_UBOOL(Z_Param_bOrientToNewGravity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformMoveAction_SetGravityDirection(Z_Param_NewGravityDirection,Z_Param_bOrientToNewGravity);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function PerformMoveAction_SetGravityDirection

// Begin Class UVRBaseCharacterMovementComponent Function PerformMoveAction_SetRotation
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics
{
	struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms
	{
		float NewYaw;
		EVRMoveActionVelocityRetention VelocityRetention;
		bool bFlagGripTeleport;
		bool bFlagCharacterTeleport;
		bool bRotateAroundCapsule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Perform a rotation set in line with the move actions system\n// This node specifically sets the FACING direction to a value, where your HMD is pointed\n// If bRotateAroundCapsule is true then the rotation is around the offset capsule (neck) rather than the actual camera location\n" },
#endif
		{ "CPP_Default_bFlagCharacterTeleport", "false" },
		{ "CPP_Default_bFlagGripTeleport", "false" },
		{ "CPP_Default_bRotateAroundCapsule", "true" },
		{ "CPP_Default_VelocityRetention", "VRMOVEACTION_Velocity_None" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform a rotation set in line with the move actions system\nThis node specifically sets the FACING direction to a value, where your HMD is pointed\nIf bRotateAroundCapsule is true then the rotation is around the offset capsule (neck) rather than the actual camera location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewYaw;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityRetention_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityRetention;
	static void NewProp_bFlagGripTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagGripTeleport;
	static void NewProp_bFlagCharacterTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagCharacterTeleport;
	static void NewProp_bRotateAroundCapsule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateAroundCapsule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_NewYaw = { "NewYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms, NewYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_VelocityRetention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_VelocityRetention = { "VelocityRetention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms, VelocityRetention), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(0, nullptr) }; // 161026801
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagGripTeleport_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms*)Obj)->bFlagGripTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagGripTeleport = { "bFlagGripTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagGripTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagCharacterTeleport_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms*)Obj)->bFlagCharacterTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagCharacterTeleport = { "bFlagCharacterTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagCharacterTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bRotateAroundCapsule_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms*)Obj)->bRotateAroundCapsule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bRotateAroundCapsule = { "bRotateAroundCapsule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bRotateAroundCapsule_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_NewYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_VelocityRetention_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_VelocityRetention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagGripTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagCharacterTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bRotateAroundCapsule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_SetRotation", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_SetRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewYaw);
	P_GET_ENUM(EVRMoveActionVelocityRetention,Z_Param_VelocityRetention);
	P_GET_UBOOL(Z_Param_bFlagGripTeleport);
	P_GET_UBOOL(Z_Param_bFlagCharacterTeleport);
	P_GET_UBOOL(Z_Param_bRotateAroundCapsule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformMoveAction_SetRotation(Z_Param_NewYaw,EVRMoveActionVelocityRetention(Z_Param_VelocityRetention),Z_Param_bFlagGripTeleport,Z_Param_bFlagCharacterTeleport,Z_Param_bRotateAroundCapsule);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function PerformMoveAction_SetRotation

// Begin Class UVRBaseCharacterMovementComponent Function PerformMoveAction_SetTrackingPaused
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics
{
	struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SetTrackingPaused_Parms
	{
		bool bNewTrackingPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set tracking paused for our root capsule and replicate the location to all connections\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set tracking paused for our root capsule and replicate the location to all connections" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNewTrackingPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewTrackingPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::NewProp_bNewTrackingPaused_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_SetTrackingPaused_Parms*)Obj)->bNewTrackingPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::NewProp_bNewTrackingPaused = { "bNewTrackingPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetTrackingPaused_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::NewProp_bNewTrackingPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::NewProp_bNewTrackingPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_SetTrackingPaused", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_SetTrackingPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_SetTrackingPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_SetTrackingPaused)
{
	P_GET_UBOOL(Z_Param_bNewTrackingPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformMoveAction_SetTrackingPaused(Z_Param_bNewTrackingPaused);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function PerformMoveAction_SetTrackingPaused

// Begin Class UVRBaseCharacterMovementComponent Function PerformMoveAction_SnapTurn
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics
{
	struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms
	{
		float SnapTurnDeltaYaw;
		EVRMoveActionVelocityRetention VelocityRetention;
		bool bFlagGripTeleport;
		bool bFlagCharacterTeleport;
		bool bRotateAroundCapsule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Perform a snap turn in line with the move action system\n// If bRotateAroundCapsule is true then the rotation is around the offset capsule (neck) rather than the actual camera location\n" },
#endif
		{ "CPP_Default_bFlagCharacterTeleport", "false" },
		{ "CPP_Default_bFlagGripTeleport", "false" },
		{ "CPP_Default_bRotateAroundCapsule", "true" },
		{ "CPP_Default_VelocityRetention", "VRMOVEACTION_Velocity_None" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform a snap turn in line with the move action system\nIf bRotateAroundCapsule is true then the rotation is around the offset capsule (neck) rather than the actual camera location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapTurnDeltaYaw;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityRetention_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityRetention;
	static void NewProp_bFlagGripTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagGripTeleport;
	static void NewProp_bFlagCharacterTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlagCharacterTeleport;
	static void NewProp_bRotateAroundCapsule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateAroundCapsule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_SnapTurnDeltaYaw = { "SnapTurnDeltaYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms, SnapTurnDeltaYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_VelocityRetention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_VelocityRetention = { "VelocityRetention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms, VelocityRetention), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(0, nullptr) }; // 161026801
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagGripTeleport_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms*)Obj)->bFlagGripTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagGripTeleport = { "bFlagGripTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagGripTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagCharacterTeleport_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms*)Obj)->bFlagCharacterTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagCharacterTeleport = { "bFlagCharacterTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagCharacterTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bRotateAroundCapsule_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms*)Obj)->bRotateAroundCapsule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bRotateAroundCapsule = { "bRotateAroundCapsule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bRotateAroundCapsule_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_SnapTurnDeltaYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_VelocityRetention_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_VelocityRetention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagGripTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagCharacterTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bRotateAroundCapsule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_SnapTurn", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_SnapTurn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SnapTurnDeltaYaw);
	P_GET_ENUM(EVRMoveActionVelocityRetention,Z_Param_VelocityRetention);
	P_GET_UBOOL(Z_Param_bFlagGripTeleport);
	P_GET_UBOOL(Z_Param_bFlagCharacterTeleport);
	P_GET_UBOOL(Z_Param_bRotateAroundCapsule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformMoveAction_SnapTurn(Z_Param_SnapTurnDeltaYaw,EVRMoveActionVelocityRetention(Z_Param_VelocityRetention),Z_Param_bFlagGripTeleport,Z_Param_bFlagCharacterTeleport,Z_Param_bRotateAroundCapsule);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function PerformMoveAction_SnapTurn

// Begin Class UVRBaseCharacterMovementComponent Function PerformMoveAction_StopAllMovement
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Perform StopAllMovementImmediately in line with the move action system\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform StopAllMovementImmediately in line with the move action system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_StopAllMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_StopAllMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformMoveAction_StopAllMovement();
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function PerformMoveAction_StopAllMovement

// Begin Class UVRBaseCharacterMovementComponent Function PerformMoveAction_Teleport
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics
{
	struct VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms
	{
		FVector TeleportLocation;
		FRotator TeleportRotation;
		EVRMoveActionVelocityRetention VelocityRetention;
		bool bSkipEncroachmentCheck;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Perform a teleport in line with the move action system\n" },
#endif
		{ "CPP_Default_bSkipEncroachmentCheck", "false" },
		{ "CPP_Default_VelocityRetention", "VRMOVEACTION_Velocity_None" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perform a teleport in line with the move action system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeleportLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeleportRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityRetention_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityRetention;
	static void NewProp_bSkipEncroachmentCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipEncroachmentCheck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportLocation = { "TeleportLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, TeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportRotation = { "TeleportRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, TeleportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_VelocityRetention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_VelocityRetention = { "VelocityRetention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, VelocityRetention), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(0, nullptr) }; // 161026801
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms*)Obj)->bSkipEncroachmentCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck = { "bSkipEncroachmentCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_VelocityRetention_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_VelocityRetention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_Teleport", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_Teleport)
{
	P_GET_STRUCT(FVector,Z_Param_TeleportLocation);
	P_GET_STRUCT(FRotator,Z_Param_TeleportRotation);
	P_GET_ENUM(EVRMoveActionVelocityRetention,Z_Param_VelocityRetention);
	P_GET_UBOOL(Z_Param_bSkipEncroachmentCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformMoveAction_Teleport(Z_Param_TeleportLocation,Z_Param_TeleportRotation,EVRMoveActionVelocityRetention(Z_Param_VelocityRetention),Z_Param_bSkipEncroachmentCheck);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function PerformMoveAction_Teleport

// Begin Class UVRBaseCharacterMovementComponent Function RewindVRMovement
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics
{
	struct VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rewind the relative movement that we had with the HMD, this is exposed to Blueprint so that custom movement modes can use it to rewind prior to movement actions.\n// Returns the Vector required to get back to the original position (for custom movement modes)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rewind the relative movement that we had with the HMD, this is exposed to Blueprint so that custom movement modes can use it to rewind prior to movement actions.\nReturns the Vector required to get back to the original position (for custom movement modes)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "RewindVRMovement", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execRewindVRMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->RewindVRMovement();
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function RewindVRMovement

// Begin Class UVRBaseCharacterMovementComponent Function SetAutoOrientToFloorNormal
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics
{
	struct VRBaseCharacterMovementComponent_eventSetAutoOrientToFloorNormal_Parms
	{
		bool bAutoOrient;
		bool bRevertGravityWhenDisabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacterMovementComponent|Wall Walking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the value of bAutoOrientToFloorNormal in a manner that cleans up when removed\n" },
#endif
		{ "CPP_Default_bRevertGravityWhenDisabled", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the value of bAutoOrientToFloorNormal in a manner that cleans up when removed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutoOrient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoOrient;
	static void NewProp_bRevertGravityWhenDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertGravityWhenDisabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::NewProp_bAutoOrient_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventSetAutoOrientToFloorNormal_Parms*)Obj)->bAutoOrient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::NewProp_bAutoOrient = { "bAutoOrient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventSetAutoOrientToFloorNormal_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::NewProp_bAutoOrient_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::NewProp_bRevertGravityWhenDisabled_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventSetAutoOrientToFloorNormal_Parms*)Obj)->bRevertGravityWhenDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::NewProp_bRevertGravityWhenDisabled = { "bRevertGravityWhenDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventSetAutoOrientToFloorNormal_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::NewProp_bRevertGravityWhenDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::NewProp_bAutoOrient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::NewProp_bRevertGravityWhenDisabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "SetAutoOrientToFloorNormal", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::VRBaseCharacterMovementComponent_eventSetAutoOrientToFloorNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::VRBaseCharacterMovementComponent_eventSetAutoOrientToFloorNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execSetAutoOrientToFloorNormal)
{
	P_GET_UBOOL(Z_Param_bAutoOrient);
	P_GET_UBOOL(Z_Param_bRevertGravityWhenDisabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoOrientToFloorNormal(Z_Param_bAutoOrient,Z_Param_bRevertGravityWhenDisabled);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function SetAutoOrientToFloorNormal

// Begin Class UVRBaseCharacterMovementComponent Function SetCharacterToNewGravity
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics
{
	struct VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms
	{
		FVector NewGravityDirection;
		bool bOrientToNewGravity;
		float Deltatime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacterMovementComponent|Wall Walking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Directly set new gravity (does not replicate, move action is preferrable) \n" },
#endif
		{ "CPP_Default_bOrientToNewGravity", "true" },
		{ "CPP_Default_Deltatime", "1.000000" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Directly set new gravity (does not replicate, move action is preferrable)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
	static void NewProp_bOrientToNewGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientToNewGravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deltatime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_bOrientToNewGravity_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms*)Obj)->bOrientToNewGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_bOrientToNewGravity = { "bOrientToNewGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_bOrientToNewGravity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_Deltatime = { "Deltatime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms, Deltatime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_NewGravityDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_bOrientToNewGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_Deltatime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "SetCharacterToNewGravity", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::VRBaseCharacterMovementComponent_eventSetCharacterToNewGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execSetCharacterToNewGravity)
{
	P_GET_STRUCT(FVector,Z_Param_NewGravityDirection);
	P_GET_UBOOL(Z_Param_bOrientToNewGravity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Deltatime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCharacterToNewGravity(Z_Param_NewGravityDirection,Z_Param_bOrientToNewGravity,Z_Param_Deltatime);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function SetCharacterToNewGravity

// Begin Class UVRBaseCharacterMovementComponent Function SetClimbingMode
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics
{
	struct VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms
	{
		bool bIsClimbing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsClimbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClimbing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing_SetBit(void* Obj)
{
	((VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms*)Obj)->bIsClimbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing = { "bIsClimbing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "SetClimbingMode", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execSetClimbingMode)
{
	P_GET_UBOOL(Z_Param_bIsClimbing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClimbingMode(Z_Param_bIsClimbing);
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function SetClimbingMode

// Begin Class UVRBaseCharacterMovementComponent Function SetReplicatedMovementMode
struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics
{
	struct VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms
	{
		EVRConjoinedMovementModes NewMovementMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* This is called client side to make a replicated movement mode change that hits the server in the saved move.\n\x09*\n\x09* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n\x09* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n\x09* For a total of 6 Custom movement modes past the currently implemented plugin ones.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This is called client side to make a replicated movement mode change that hits the server in the saved move.\n*\n* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n* For a total of 6 Custom movement modes past the currently implemented plugin ones." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovementMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(0, nullptr) }; // 3080966818
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "SetReplicatedMovementMode", nullptr, nullptr, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execSetReplicatedMovementMode)
{
	P_GET_ENUM(EVRConjoinedMovementModes,Z_Param_NewMovementMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReplicatedMovementMode(EVRConjoinedMovementModes(Z_Param_NewMovementMode));
	P_NATIVE_END;
}
// End Class UVRBaseCharacterMovementComponent Function SetReplicatedMovementMode

// Begin Class UVRBaseCharacterMovementComponent
void UVRBaseCharacterMovementComponent::StaticRegisterNativesUVRBaseCharacterMovementComponent()
{
	UClass* Class = UVRBaseCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCustomReplicatedMovement", &UVRBaseCharacterMovementComponent::execAddCustomReplicatedMovement },
		{ "ClearCustomReplicatedMovement", &UVRBaseCharacterMovementComponent::execClearCustomReplicatedMovement },
		{ "GetCustomInputVector", &UVRBaseCharacterMovementComponent::execGetCustomInputVector },
		{ "GetReplicatedMovementMode", &UVRBaseCharacterMovementComponent::execGetReplicatedMovementMode },
		{ "PerformMoveAction_Custom", &UVRBaseCharacterMovementComponent::execPerformMoveAction_Custom },
		{ "PerformMoveAction_SetGravityDirection", &UVRBaseCharacterMovementComponent::execPerformMoveAction_SetGravityDirection },
		{ "PerformMoveAction_SetRotation", &UVRBaseCharacterMovementComponent::execPerformMoveAction_SetRotation },
		{ "PerformMoveAction_SetTrackingPaused", &UVRBaseCharacterMovementComponent::execPerformMoveAction_SetTrackingPaused },
		{ "PerformMoveAction_SnapTurn", &UVRBaseCharacterMovementComponent::execPerformMoveAction_SnapTurn },
		{ "PerformMoveAction_StopAllMovement", &UVRBaseCharacterMovementComponent::execPerformMoveAction_StopAllMovement },
		{ "PerformMoveAction_Teleport", &UVRBaseCharacterMovementComponent::execPerformMoveAction_Teleport },
		{ "RewindVRMovement", &UVRBaseCharacterMovementComponent::execRewindVRMovement },
		{ "SetAutoOrientToFloorNormal", &UVRBaseCharacterMovementComponent::execSetAutoOrientToFloorNormal },
		{ "SetCharacterToNewGravity", &UVRBaseCharacterMovementComponent::execSetCharacterToNewGravity },
		{ "SetClimbingMode", &UVRBaseCharacterMovementComponent::execSetClimbingMode },
		{ "SetReplicatedMovementMode", &UVRBaseCharacterMovementComponent::execSetReplicatedMovementMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRBaseCharacterMovementComponent);
UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister()
{
	return UVRBaseCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* The base class for our VR characters, contains common logic across them, not to be used directly\n*/" },
#endif
		{ "IncludePath", "VRBaseCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The base class for our VR characters, contains common logic across them, not to be used directly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseVRCharacterOwner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BaseVR Character movement component belongs to */" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BaseVR Character movement component belongs to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseClientControlRotation_MetaData[] = {
		{ "Category", "VRBaseCharacterMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When true will use the default engines behavior of setting rotation to match the clients instead of simulating rotations, this is really only here for FPS test pawns\n// And non VRCharacter classes (simple character will use this)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true will use the default engines behavior of setting rotation to match the clients instead of simulating rotations, this is really only here for FPS test pawns\nAnd non VRCharacter classes (simple character will use this)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSimulatedTickWhenSmoothingMovement_MetaData[] = {
		{ "Category", "VRBaseCharacterMovementComponent|Smoothing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When true remote proxies will no longer attempt to estimate player moves when motion smoothing is enabled.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true remote proxies will no longer attempt to estimate player moves when motion smoothing is enabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCapHMDMovementToMaxMovementSpeed_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When true the hmd movement injection speed is capped to the maximum movement speed\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true the hmd movement injection speed is capped to the maximum movement speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoOrientToFloorNormal_MetaData[] = {
		{ "Category", "VRMovement|Wall Walking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then when in walking mode the character will attempt to automatically orient itself to the normal of the floor it is standing on\n// Both the rotation and gravity vector will be effected.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then when in walking mode the character will attempt to automatically orient itself to the normal of the floor it is standing on\nBoth the rotation and gravity vector will be effected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendGravityFloorChanges_MetaData[] = {
		{ "Category", "VRMovement|Wall Walking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then we will attempt to blend all gravity based floor changes as long as they are within the max walking angle of the CMC\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then we will attempt to blend all gravity based floor changes as long as they are within the max walking angle of the CMC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorOrientationChangeBlendRate_MetaData[] = {
		{ "Category", "VRMovement|Wall Walking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rate at which we will blend the change in rotation for wall walking\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rate at which we will blend the change in rotation for wall walking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerformClimbingStepUp_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a valid climbing step up movement is found, if bound to the default auto step up is not performed to let custom step up logic happen instead.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a valid climbing step up movement is found, if bound to the default auto step up is not performed to let custom step up logic happen instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRWallSlideScaler_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setting this higher will divide the wall slide effect by this value, to reduce collision sliding.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setting this higher will divide the wall slide effect by this value, to reduce collision sliding." },
#endif
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingLossThreshold_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Any movement above this value we will consider as have been a tracking jump and null out the movement in the character\n// Raise this value higher if players are noticing freezing when moving quickly.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any movement above this value we will consider as have been a tracking jump and null out the movement in the character\nRaise this value higher if players are noticing freezing when moving quickly." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoldPositionOnTrackingLossThresholdHit_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If we hit the tracking loss threshold then rewind position instead of running to the new location\n// Will force the HMD to stay in its original spot prior to the tracking jump\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we hit the tracking loss threshold then rewind position instead of running to the new location\nWill force the HMD to stay in its original spot prior to the tracking jump" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will never count a physicsbody channel component as the floor, to prevent jitter / physics problems.\n// Make sure that you set simulating objects to the physics body channel if you want this to work correctly\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will never count a physicsbody channel component as the floor, to prevent jitter / physics problems.\nMake sure that you set simulating objects to the physics body channel if you want this to work correctly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunControlRotationInMovementComponent_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will run the control rotation in the CMC instead of in the player controller\n// This puts the player rotation into the scoped movement (perf savings) and also ensures it is properly rotated prior to movement\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will run the control rotation in the CMC instead of in the player controller\nThis puts the player rotation into the scoped movement (perf savings) and also ensures it is properly rotated prior to movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepHeight_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Height to auto step up\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height to auto step up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRClimbingEdgeRejectDistance_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Custom distance that is required before accepting a climbing stepup\n\x09*  This is to help with cases where head wobble causes falling backwards\n\x09*  Do NOT set to larger than capsule radius!\n\x09*  #TODO: Port to SimpleCharacter as well\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom distance that is required before accepting a climbing stepup\n      *  This is to help with cases where head wobble causes falling backwards\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepUpMultiplier_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher values make it easier to trigger a step up onto a platform and moves you farther in to the base *DEFUNCT*\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher values make it easier to trigger a step up onto a platform and moves you farther in to the base *DEFUNCT*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampClimbingStepUp_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will clamp the maximum movement on climbing step up to: VRClimbingStepUpMaxSize\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will clamp the maximum movement on climbing step up to: VRClimbingStepUpMaxSize" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepUpMaxSize_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum X/Y vector size to use when climbing stepping up (prevents very deep step ups from large movements).\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum X/Y vector size to use when climbing stepping up (prevents very deep step ups from large movements)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true will automatically set falling when a stepup occurs during climbing\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true will automatically set falling when a stepup occurs during climbing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRClimbingMaxReleaseVelocitySize_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max velocity on releasing a climbing grip\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max velocity on releasing a climbing grip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VREdgeRejectDistance_MetaData[] = {
		{ "Category", "VRMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Custom distance that is required before accepting a walking stepup\n\x09*  This is to help promote stepping up, engine default is 0.15f, generally you want it lower than that\n\x09*  Do NOT set to larger than capsule radius!\n\x09*  #TODO: Port to SimpleCharacter as well\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom distance that is required before accepting a walking stepup\n      *  This is to help promote stepping up, engine default is 0.15f, generally you want it lower than that\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPostClimbMovement_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default movement mode to switch to post climb ended, only used if SetDefaultPostClimbMovementOnStepUp is true\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default movement mode to switch to post climb ended, only used if SetDefaultPostClimbMovementOnStepUp is true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRLowGravWallFrictionScaler_MetaData[] = {
		{ "Category", "VRMovement|LowGrav" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setting this below 1.0 will change how fast you de-accelerate when touching a wall\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setting this below 1.0 will change how fast you de-accelerate when touching a wall" },
#endif
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData[] = {
		{ "Category", "VRMovement|LowGrav" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then low grav will ignore the default physics volume fluid friction, useful if you have a mix of low grav and normal movement\n" },
#endif
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then low grav will ignore the default physics volume fluid friction, useful if you have a mix of low grav and normal movement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseVRCharacterOwner;
	static void NewProp_bUseClientControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClientControlRotation;
	static void NewProp_bDisableSimulatedTickWhenSmoothingMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSimulatedTickWhenSmoothingMovement;
	static void NewProp_bCapHMDMovementToMaxMovementSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapHMDMovementToMaxMovementSpeed;
	static void NewProp_bAutoOrientToFloorNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoOrientToFloorNormal;
	static void NewProp_bBlendGravityFloorChanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendGravityFloorChanges;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorOrientationChangeBlendRate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerformClimbingStepUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VRWallSlideScaler;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackingLossThreshold;
	static void NewProp_bHoldPositionOnTrackingLossThresholdHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldPositionOnTrackingLossThresholdHit;
	static void NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSimulatingComponentsInFloorCheck;
	static void NewProp_bRunControlRotationInMovementComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunControlRotationInMovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VRClimbingEdgeRejectDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepUpMultiplier;
	static void NewProp_bClampClimbingStepUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampClimbingStepUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepUpMaxSize;
	static void NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetDefaultPostClimbMovementOnStepUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VRClimbingMaxReleaseVelocitySize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VREdgeRejectDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPostClimbMovement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPostClimbMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VRLowGravWallFrictionScaler;
	static void NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VRLowGravIgnoresDefaultFluidFriction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement, "AddCustomReplicatedMovement" }, // 2154549871
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement, "ClearCustomReplicatedMovement" }, // 221125414
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector, "GetCustomInputVector" }, // 3677509677
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode, "GetReplicatedMovementMode" }, // 2180746592
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom, "PerformMoveAction_Custom" }, // 776775913
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetGravityDirection, "PerformMoveAction_SetGravityDirection" }, // 1226147151
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation, "PerformMoveAction_SetRotation" }, // 1955948305
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetTrackingPaused, "PerformMoveAction_SetTrackingPaused" }, // 3078900052
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn, "PerformMoveAction_SnapTurn" }, // 4102575179
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement, "PerformMoveAction_StopAllMovement" }, // 1414392472
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport, "PerformMoveAction_Teleport" }, // 3906382071
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement, "RewindVRMovement" }, // 123469769
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetAutoOrientToFloorNormal, "SetAutoOrientToFloorNormal" }, // 2265209993
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCharacterToNewGravity, "SetCharacterToNewGravity" }, // 2730263426
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode, "SetClimbingMode" }, // 2881143864
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode, "SetReplicatedMovementMode" }, // 3488976685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRBaseCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_BaseVRCharacterOwner = { "BaseVRCharacterOwner", nullptr, (EPropertyFlags)0x0114000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, BaseVRCharacterOwner), Z_Construct_UClass_AVRCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseVRCharacterOwner_MetaData), NewProp_BaseVRCharacterOwner_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bUseClientControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation = { "bUseClientControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseClientControlRotation_MetaData), NewProp_bUseClientControlRotation_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bDisableSimulatedTickWhenSmoothingMovement_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bDisableSimulatedTickWhenSmoothingMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bDisableSimulatedTickWhenSmoothingMovement = { "bDisableSimulatedTickWhenSmoothingMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bDisableSimulatedTickWhenSmoothingMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSimulatedTickWhenSmoothingMovement_MetaData), NewProp_bDisableSimulatedTickWhenSmoothingMovement_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bCapHMDMovementToMaxMovementSpeed_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bCapHMDMovementToMaxMovementSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bCapHMDMovementToMaxMovementSpeed = { "bCapHMDMovementToMaxMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bCapHMDMovementToMaxMovementSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCapHMDMovementToMaxMovementSpeed_MetaData), NewProp_bCapHMDMovementToMaxMovementSpeed_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bAutoOrientToFloorNormal_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bAutoOrientToFloorNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bAutoOrientToFloorNormal = { "bAutoOrientToFloorNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bAutoOrientToFloorNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoOrientToFloorNormal_MetaData), NewProp_bAutoOrientToFloorNormal_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bBlendGravityFloorChanges_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bBlendGravityFloorChanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bBlendGravityFloorChanges = { "bBlendGravityFloorChanges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bBlendGravityFloorChanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendGravityFloorChanges_MetaData), NewProp_bBlendGravityFloorChanges_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_FloorOrientationChangeBlendRate = { "FloorOrientationChangeBlendRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, FloorOrientationChangeBlendRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorOrientationChangeBlendRate_MetaData), NewProp_FloorOrientationChangeBlendRate_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_OnPerformClimbingStepUp = { "OnPerformClimbingStepUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, OnPerformClimbingStepUp), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerformClimbingStepUp_MetaData), NewProp_OnPerformClimbingStepUp_MetaData) }; // 3833846021
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler = { "VRWallSlideScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRWallSlideScaler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRWallSlideScaler_MetaData), NewProp_VRWallSlideScaler_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_TrackingLossThreshold = { "TrackingLossThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, TrackingLossThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingLossThreshold_MetaData), NewProp_TrackingLossThreshold_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bHoldPositionOnTrackingLossThresholdHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit = { "bHoldPositionOnTrackingLossThresholdHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoldPositionOnTrackingLossThresholdHit_MetaData), NewProp_bHoldPositionOnTrackingLossThresholdHit_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bIgnoreSimulatingComponentsInFloorCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck = { "bIgnoreSimulatingComponentsInFloorCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData), NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bRunControlRotationInMovementComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent = { "bRunControlRotationInMovementComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunControlRotationInMovementComponent_MetaData), NewProp_bRunControlRotationInMovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight = { "VRClimbingStepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRClimbingStepHeight_MetaData), NewProp_VRClimbingStepHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance = { "VRClimbingEdgeRejectDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingEdgeRejectDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRClimbingEdgeRejectDistance_MetaData), NewProp_VRClimbingEdgeRejectDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier = { "VRClimbingStepUpMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepUpMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRClimbingStepUpMultiplier_MetaData), NewProp_VRClimbingStepUpMultiplier_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->bClampClimbingStepUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp = { "bClampClimbingStepUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampClimbingStepUp_MetaData), NewProp_bClampClimbingStepUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMaxSize = { "VRClimbingStepUpMaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepUpMaxSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRClimbingStepUpMaxSize_MetaData), NewProp_VRClimbingStepUpMaxSize_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->SetDefaultPostClimbMovementOnStepUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp = { "SetDefaultPostClimbMovementOnStepUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData), NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize = { "VRClimbingMaxReleaseVelocitySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingMaxReleaseVelocitySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRClimbingMaxReleaseVelocitySize_MetaData), NewProp_VRClimbingMaxReleaseVelocitySize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance = { "VREdgeRejectDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VREdgeRejectDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VREdgeRejectDistance_MetaData), NewProp_VREdgeRejectDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement = { "DefaultPostClimbMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, DefaultPostClimbMovement), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPostClimbMovement_MetaData), NewProp_DefaultPostClimbMovement_MetaData) }; // 3080966818
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler = { "VRLowGravWallFrictionScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRLowGravWallFrictionScaler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRLowGravWallFrictionScaler_MetaData), NewProp_VRLowGravWallFrictionScaler_MetaData) };
void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit(void* Obj)
{
	((UVRBaseCharacterMovementComponent*)Obj)->VRLowGravIgnoresDefaultFluidFriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction = { "VRLowGravIgnoresDefaultFluidFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData), NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_BaseVRCharacterOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bUseClientControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bDisableSimulatedTickWhenSmoothingMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bCapHMDMovementToMaxMovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bAutoOrientToFloorNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bBlendGravityFloorChanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_FloorOrientationChangeBlendRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_OnPerformClimbingStepUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_TrackingLossThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMaxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::ClassParams = {
	&UVRBaseCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UVRBaseCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRBaseCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRBaseCharacterMovementComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRBaseCharacterMovementComponent>()
{
	return UVRBaseCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRBaseCharacterMovementComponent);
UVRBaseCharacterMovementComponent::~UVRBaseCharacterMovementComponent() {}
// End Class UVRBaseCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRBaseCharacterMovementComponent, UVRBaseCharacterMovementComponent::StaticClass, TEXT("UVRBaseCharacterMovementComponent"), &Z_Registration_Info_UClass_UVRBaseCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRBaseCharacterMovementComponent), 4074085543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_550316622(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
