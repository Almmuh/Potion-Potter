// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/CharacterMovementCompTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementCompTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer();
// End Cross Module References

// Begin Enum EVRMoveAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMoveAction;
static UEnum* EVRMoveAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRMoveAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRMoveAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveAction"));
	}
	return Z_Registration_Info_UEnum_EVRMoveAction.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveAction>()
{
	return EVRMoveAction_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "VRMOVEACTION_CUSTOM1.Comment", "// Reserved from here up to 0x40\n" },
		{ "VRMOVEACTION_CUSTOM1.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM1" },
		{ "VRMOVEACTION_CUSTOM1.ToolTip", "Reserved from here up to 0x40" },
		{ "VRMOVEACTION_CUSTOM10.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM10" },
		{ "VRMOVEACTION_CUSTOM11.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM11" },
		{ "VRMOVEACTION_CUSTOM12.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM12" },
		{ "VRMOVEACTION_CUSTOM13.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM13" },
		{ "VRMOVEACTION_CUSTOM14.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM14" },
		{ "VRMOVEACTION_CUSTOM15.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM15" },
		{ "VRMOVEACTION_CUSTOM2.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM2" },
		{ "VRMOVEACTION_CUSTOM3.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM3" },
		{ "VRMOVEACTION_CUSTOM4.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM4" },
		{ "VRMOVEACTION_CUSTOM5.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM5" },
		{ "VRMOVEACTION_CUSTOM6.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM6" },
		{ "VRMOVEACTION_CUSTOM7.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM7" },
		{ "VRMOVEACTION_CUSTOM8.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM8" },
		{ "VRMOVEACTION_CUSTOM9.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM9" },
		{ "VRMOVEACTION_None.Name", "EVRMoveAction::VRMOVEACTION_None" },
		{ "VRMOVEACTION_PauseTracking.Name", "EVRMoveAction::VRMOVEACTION_PauseTracking" },
		{ "VRMOVEACTION_SetGravityDirection.Name", "EVRMoveAction::VRMOVEACTION_SetGravityDirection" },
		{ "VRMOVEACTION_SetRotation.Name", "EVRMoveAction::VRMOVEACTION_SetRotation" },
		{ "VRMOVEACTION_SnapTurn.Name", "EVRMoveAction::VRMOVEACTION_SnapTurn" },
		{ "VRMOVEACTION_StopAllMovement.Name", "EVRMoveAction::VRMOVEACTION_StopAllMovement" },
		{ "VRMOVEACTION_Teleport.Name", "EVRMoveAction::VRMOVEACTION_Teleport" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRMoveAction::VRMOVEACTION_None", (int64)EVRMoveAction::VRMOVEACTION_None },
		{ "EVRMoveAction::VRMOVEACTION_SnapTurn", (int64)EVRMoveAction::VRMOVEACTION_SnapTurn },
		{ "EVRMoveAction::VRMOVEACTION_Teleport", (int64)EVRMoveAction::VRMOVEACTION_Teleport },
		{ "EVRMoveAction::VRMOVEACTION_StopAllMovement", (int64)EVRMoveAction::VRMOVEACTION_StopAllMovement },
		{ "EVRMoveAction::VRMOVEACTION_SetRotation", (int64)EVRMoveAction::VRMOVEACTION_SetRotation },
		{ "EVRMoveAction::VRMOVEACTION_PauseTracking", (int64)EVRMoveAction::VRMOVEACTION_PauseTracking },
		{ "EVRMoveAction::VRMOVEACTION_SetGravityDirection", (int64)EVRMoveAction::VRMOVEACTION_SetGravityDirection },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM1", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM1 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM2", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM2 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM3", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM3 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM4", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM4 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM5", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM5 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM6", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM6 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM7", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM7 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM8", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM8 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM9", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM9 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM10", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM10 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM11", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM11 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM12", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM12 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM13", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM13 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM14", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM14 },
		{ "EVRMoveAction::VRMOVEACTION_CUSTOM15", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM15 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRMoveAction",
	"EVRMoveAction",
	Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction()
{
	if (!Z_Registration_Info_UEnum_EVRMoveAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMoveAction.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRMoveAction.InnerSingleton;
}
// End Enum EVRMoveAction

// Begin Enum EVRMoveActionVelocityRetention
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention;
static UEnum* EVRMoveActionVelocityRetention_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionVelocityRetention"));
	}
	return Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionVelocityRetention>()
{
	return EVRMoveActionVelocityRetention_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What to do with the players velocity when specific move actions are called\n// Default of none leaves it as is, for people with 0 ramp up time on acelleration\n// This likely won't be that useful.\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What to do with the players velocity when specific move actions are called\nDefault of none leaves it as is, for people with 0 ramp up time on acelleration\nThis likely won't be that useful." },
#endif
		{ "VRMOVEACTION_Velocity_Clear.Comment", "// Clears velocity entirely\n" },
		{ "VRMOVEACTION_Velocity_Clear.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear" },
		{ "VRMOVEACTION_Velocity_Clear.ToolTip", "Clears velocity entirely" },
		{ "VRMOVEACTION_Velocity_None.Comment", "// Leaves velocity as is\n" },
		{ "VRMOVEACTION_Velocity_None.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None" },
		{ "VRMOVEACTION_Velocity_None.ToolTip", "Leaves velocity as is" },
		{ "VRMOVEACTION_Velocity_Turn.Comment", "// Rotates the velocity to match new heading\n" },
		{ "VRMOVEACTION_Velocity_Turn.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn" },
		{ "VRMOVEACTION_Velocity_Turn.ToolTip", "Rotates the velocity to match new heading" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None },
		{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear },
		{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRMoveActionVelocityRetention",
	"EVRMoveActionVelocityRetention",
	Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention()
{
	if (!Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention.InnerSingleton;
}
// End Enum EVRMoveActionVelocityRetention

// Begin Enum EVRMoveActionDataReq
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMoveActionDataReq;
static UEnum* EVRMoveActionDataReq_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRMoveActionDataReq.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRMoveActionDataReq.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionDataReq"));
	}
	return Z_Registration_Info_UEnum_EVRMoveActionDataReq.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionDataReq>()
{
	return EVRMoveActionDataReq_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
		{ "VRMOVEACTIONDATA_LOC.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC" },
		{ "VRMOVEACTIONDATA_LOC_AND_ROT.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT" },
		{ "VRMOVEACTIONDATA_None.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_None" },
		{ "VRMOVEACTIONDATA_ROT.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_None", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_None },
		{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC },
		{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT },
		{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRMoveActionDataReq",
	"EVRMoveActionDataReq",
	Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq()
{
	if (!Z_Registration_Info_UEnum_EVRMoveActionDataReq.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMoveActionDataReq.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRMoveActionDataReq.InnerSingleton;
}
// End Enum EVRMoveActionDataReq

// Begin ScriptStruct FVRMoveActionContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMoveActionContainer;
class UScriptStruct* FVRMoveActionContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMoveActionContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMoveActionContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionContainer, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionContainer"));
	}
	return Z_Registration_Info_UScriptStruct_VRMoveActionContainer.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoveActionContainer>()
{
	return FVRMoveActionContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionDataReq_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionVel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionDeltaYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionObjectReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelRetentionSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveActionDataReq_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveActionDataReq;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionVel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionRot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveActionDeltaYaw;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveActionFlags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveActionObjectReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MoveActionObjectReferences;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelRetentionSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelRetentionSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) }; // 806081634
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq = { "MoveActionDataReq", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionDataReq), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionDataReq_MetaData), NewProp_MoveActionDataReq_MetaData) }; // 1617049485
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc = { "MoveActionLoc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionLoc_MetaData), NewProp_MoveActionLoc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel = { "MoveActionVel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionVel_MetaData), NewProp_MoveActionVel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot = { "MoveActionRot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionRot_MetaData), NewProp_MoveActionRot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDeltaYaw = { "MoveActionDeltaYaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionDeltaYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionDeltaYaw_MetaData), NewProp_MoveActionDeltaYaw_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags = { "MoveActionFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionFlags_MetaData), NewProp_MoveActionFlags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences_Inner = { "MoveActionObjectReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences = { "MoveActionObjectReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionObjectReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionObjectReferences_MetaData), NewProp_MoveActionObjectReferences_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting = { "VelRetentionSetting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionContainer, VelRetentionSetting), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelRetentionSetting_MetaData), NewProp_VelRetentionSetting_MetaData) }; // 161026801
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionVel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDeltaYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionObjectReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRMoveActionContainer",
	Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers),
	sizeof(FVRMoveActionContainer),
	alignof(FVRMoveActionContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer()
{
	if (!Z_Registration_Info_UScriptStruct_VRMoveActionContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMoveActionContainer.InnerSingleton, Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMoveActionContainer.InnerSingleton;
}
// End ScriptStruct FVRMoveActionContainer

// Begin ScriptStruct FVRMoveActionArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMoveActionArray;
class UScriptStruct* FVRMoveActionArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMoveActionArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMoveActionArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionArray, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionArray"));
	}
	return Z_Registration_Info_UScriptStruct_VRMoveActionArray.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoveActionArray>()
{
	return FVRMoveActionArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MoveActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner = { "MoveActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRMoveActionContainer, METADATA_PARAMS(0, nullptr) }; // 361489052
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions = { "MoveActions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoveActionArray, MoveActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActions_MetaData), NewProp_MoveActions_MetaData) }; // 361489052
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRMoveActionArray",
	Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers),
	sizeof(FVRMoveActionArray),
	alignof(FVRMoveActionArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray()
{
	if (!Z_Registration_Info_UScriptStruct_VRMoveActionArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMoveActionArray.InnerSingleton, Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMoveActionArray.InnerSingleton;
}
// End ScriptStruct FVRMoveActionArray

// Begin ScriptStruct FVRConditionalMoveRep
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRConditionalMoveRep;
class UScriptStruct* FVRConditionalMoveRep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep"));
	}
	return Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRConditionalMoveRep>()
{
	return FVRConditionalMoveRep::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomVRInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveActionArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomVRInputVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveActionArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector = { "CustomVRInputVector", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRConditionalMoveRep, CustomVRInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomVRInputVector_MetaData), NewProp_CustomVRInputVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity = { "RequestedVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRConditionalMoveRep, RequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedVelocity_MetaData), NewProp_RequestedVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray = { "MoveActionArray", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRConditionalMoveRep, MoveActionArray), Z_Construct_UScriptStruct_FVRMoveActionArray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveActionArray_MetaData), NewProp_MoveActionArray_MetaData) }; // 639272286
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRConditionalMoveRep",
	Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers),
	sizeof(FVRConditionalMoveRep),
	alignof(FVRConditionalMoveRep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep()
{
	if (!Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.InnerSingleton, Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRConditionalMoveRep.InnerSingleton;
}
// End ScriptStruct FVRConditionalMoveRep

// Begin ScriptStruct FVRConditionalMoveRep2
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2;
class UScriptStruct* FVRConditionalMoveRep2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep2, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep2"));
	}
	return Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRConditionalMoveRep2>()
{
	return FVRConditionalMoveRep2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// #TODO: DELETE THIS\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#TODO: DELETE THIS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Moved these here to avoid having to duplicate tons of properties\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moved these here to avoid having to duplicate tons of properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientBaseBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterMovementCompTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ClientPitch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientMovementBase_MetaData), NewProp_ClientMovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientBaseBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientBaseBoneName_MetaData), NewProp_ClientBaseBoneName_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw = { "ClientYaw", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientYaw_MetaData), NewProp_ClientYaw_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch = { "ClientPitch", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientPitch_MetaData), NewProp_ClientPitch_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientRoll), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientRoll_MetaData), NewProp_ClientRoll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRConditionalMoveRep2",
	Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers),
	sizeof(FVRConditionalMoveRep2),
	alignof(FVRConditionalMoveRep2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2()
{
	if (!Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.InnerSingleton, Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2.InnerSingleton;
}
// End ScriptStruct FVRConditionalMoveRep2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRMoveAction_StaticEnum, TEXT("EVRMoveAction"), &Z_Registration_Info_UEnum_EVRMoveAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 806081634U) },
		{ EVRMoveActionVelocityRetention_StaticEnum, TEXT("EVRMoveActionVelocityRetention"), &Z_Registration_Info_UEnum_EVRMoveActionVelocityRetention, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 161026801U) },
		{ EVRMoveActionDataReq_StaticEnum, TEXT("EVRMoveActionDataReq"), &Z_Registration_Info_UEnum_EVRMoveActionDataReq, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1617049485U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVRMoveActionContainer::StaticStruct, Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewStructOps, TEXT("VRMoveActionContainer"), &Z_Registration_Info_UScriptStruct_VRMoveActionContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMoveActionContainer), 361489052U) },
		{ FVRMoveActionArray::StaticStruct, Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewStructOps, TEXT("VRMoveActionArray"), &Z_Registration_Info_UScriptStruct_VRMoveActionArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMoveActionArray), 639272286U) },
		{ FVRConditionalMoveRep::StaticStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewStructOps, TEXT("VRConditionalMoveRep"), &Z_Registration_Info_UScriptStruct_VRConditionalMoveRep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRConditionalMoveRep), 1671299704U) },
		{ FVRConditionalMoveRep2::StaticStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewStructOps, TEXT("VRConditionalMoveRep2"), &Z_Registration_Info_UScriptStruct_VRConditionalMoveRep2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRConditionalMoveRep2), 1015937585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_4273061262(TEXT("/Script/VRExpansionPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_CharacterMovementCompTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
