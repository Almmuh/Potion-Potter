// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Mover/VRMoverComponent.h"
#include "Mover/Public/MoverSimulationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRMoverComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverInputProducerInterface_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverInputCmdContext();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRMoverBasePawn();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRMoverBasePawn_NoRegister();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_VRMovement();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoverHMDSyncState();
// End Cross Module References

// Begin ScriptStruct FLayeredMove_VRMovement
static_assert(std::is_polymorphic<FLayeredMove_VRMovement>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_VRMovement cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayeredMove_VRMovement;
class UScriptStruct* FLayeredMove_VRMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayeredMove_VRMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayeredMove_VRMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_VRMovement, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("LayeredMove_VRMovement"));
	}
	return Z_Registration_Info_UScriptStruct_LayeredMove_VRMovement.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FLayeredMove_VRMovement>()
{
	return FLayeredMove_VRMovement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Linear Velocity: A method of inducing a straight-line velocity on an actor over time  */" },
#endif
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Linear Velocity: A method of inducing a straight-line velocity on an actor over time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Mover" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Units per second, could be worldspace vs relative depending on Flags\n" },
#endif
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Units per second, could be worldspace vs relative depending on Flags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeOverTime_MetaData[] = {
		{ "Category", "Mover" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional curve float for controlling the magnitude of the velocity applied to the actor over the duration of the move\n" },
#endif
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional curve float for controlling the magnitude of the velocity applied to the actor over the duration of the move" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsFlags_MetaData[] = {
		{ "Category", "Mover" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// @see ELayeredMove_ConstantVelocitySettingsFlags\n" },
#endif
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@see ELayeredMove_ConstantVelocitySettingsFlags" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagnitudeOverTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SettingsFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_VRMovement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_VRMovement, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::NewProp_MagnitudeOverTime = { "MagnitudeOverTime", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_VRMovement, MagnitudeOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnitudeOverTime_MetaData), NewProp_MagnitudeOverTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::NewProp_SettingsFlags = { "SettingsFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_VRMovement, SettingsFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsFlags_MetaData), NewProp_SettingsFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::NewProp_MagnitudeOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::NewProp_SettingsFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_VRMovement",
	Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::PropPointers),
	sizeof(FLayeredMove_VRMovement),
	alignof(FLayeredMove_VRMovement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_VRMovement()
{
	if (!Z_Registration_Info_UScriptStruct_LayeredMove_VRMovement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayeredMove_VRMovement.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LayeredMove_VRMovement.InnerSingleton;
}
// End ScriptStruct FLayeredMove_VRMovement

// Begin ScriptStruct FVRMoverHMDSyncState
static_assert(std::is_polymorphic<FVRMoverHMDSyncState>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FVRMoverHMDSyncState cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMoverHMDSyncState;
class UScriptStruct* FVRMoverHMDSyncState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMoverHMDSyncState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMoverHMDSyncState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoverHMDSyncState, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoverHMDSyncState"));
	}
	return Z_Registration_Info_UScriptStruct_VRMoverHMDSyncState.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoverHMDSyncState>()
{
	return FVRMoverHMDSyncState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data block containing basic sync state information\n" },
#endif
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data block containing basic sync state information" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionIntent_MetaData[] = {
		{ "Category", "Mover" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement intent direction relative to MovementBase if set, world space otherwise. Magnitude of range (0-1)\n" },
#endif
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement intent direction relative to MovementBase if set, world space otherwise. Magnitude of range (0-1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirectionIntent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoverHMDSyncState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::NewProp_MoveDirectionIntent = { "MoveDirectionIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRMoverHMDSyncState, MoveDirectionIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirectionIntent_MetaData), NewProp_MoveDirectionIntent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::NewProp_MoveDirectionIntent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"VRMoverHMDSyncState",
	Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::PropPointers),
	sizeof(FVRMoverHMDSyncState),
	alignof(FVRMoverHMDSyncState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRMoverHMDSyncState()
{
	if (!Z_Registration_Info_UScriptStruct_VRMoverHMDSyncState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMoverHMDSyncState.InnerSingleton, Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRMoverHMDSyncState.InnerSingleton;
}
// End ScriptStruct FVRMoverHMDSyncState

// Begin Class AVRMoverBasePawn Function GetMoverComponent
struct Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics
{
	struct VRMoverBasePawn_eventGetMoverComponent_Parms
	{
		UMoverComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Accessor for the actor's movement component */" },
#endif
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accessor for the actor's movement component" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRMoverBasePawn_eventGetMoverComponent_Parms, ReturnValue), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRMoverBasePawn, nullptr, "GetMoverComponent", nullptr, nullptr, Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::VRMoverBasePawn_eventGetMoverComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::VRMoverBasePawn_eventGetMoverComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRMoverBasePawn::execGetMoverComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMoverComponent**)Z_Param__Result=P_THIS->GetMoverComponent();
	P_NATIVE_END;
}
// End Class AVRMoverBasePawn Function GetMoverComponent

// Begin Class AVRMoverBasePawn Function OnProduceInputInBlueprint
struct VRMoverBasePawn_eventOnProduceInputInBlueprint_Parms
{
	float DeltaMs;
	FMoverInputCmdContext InputCmd;
	FMoverInputCmdContext ReturnValue;
};
static FName NAME_AVRMoverBasePawn_OnProduceInputInBlueprint = FName(TEXT("OnProduceInputInBlueprint"));
FMoverInputCmdContext AVRMoverBasePawn::OnProduceInputInBlueprint(float DeltaMs, FMoverInputCmdContext InputCmd)
{
	VRMoverBasePawn_eventOnProduceInputInBlueprint_Parms Parms;
	Parms.DeltaMs=DeltaMs;
	Parms.InputCmd=InputCmd;
	ProcessEvent(FindFunctionChecked(NAME_AVRMoverBasePawn_OnProduceInputInBlueprint),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implement this event in Blueprints to author input for the next simulation frame. Consider also calling Parent event.\n" },
#endif
		{ "DisplayName", "On Produce Input" },
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
		{ "ScriptName", "OnProduceInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implement this event in Blueprints to author input for the next simulation frame. Consider also calling Parent event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaMs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::NewProp_DeltaMs = { "DeltaMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRMoverBasePawn_eventOnProduceInputInBlueprint_Parms, DeltaMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::NewProp_InputCmd = { "InputCmd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRMoverBasePawn_eventOnProduceInputInBlueprint_Parms, InputCmd), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(0, nullptr) }; // 2084391913
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRMoverBasePawn_eventOnProduceInputInBlueprint_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(0, nullptr) }; // 2084391913
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::NewProp_DeltaMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::NewProp_InputCmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRMoverBasePawn, nullptr, "OnProduceInputInBlueprint", nullptr, nullptr, Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::PropPointers), sizeof(VRMoverBasePawn_eventOnProduceInputInBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRMoverBasePawn_eventOnProduceInputInBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVRMoverBasePawn Function OnProduceInputInBlueprint

// Begin Class AVRMoverBasePawn
void AVRMoverBasePawn::StaticRegisterNativesAVRMoverBasePawn()
{
	UClass* Class = AVRMoverBasePawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMoverComponent", &AVRMoverBasePawn::execGetMoverComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRMoverBasePawn);
UClass* Z_Construct_UClass_AVRMoverBasePawn_NoRegister()
{
	return AVRMoverBasePawn::StaticClass();
}
struct Z_Construct_UClass_AVRMoverBasePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Mover/VRMoverComponent.h" },
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMotionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mover/VRMoverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMotionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRMoverBasePawn_GetMoverComponent, "GetMoverComponent" }, // 3844070763
		{ &Z_Construct_UFunction_AVRMoverBasePawn_OnProduceInputInBlueprint, "OnProduceInputInBlueprint" }, // 1126238286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRMoverBasePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRMoverBasePawn_Statics::NewProp_CharacterMotionComponent = { "CharacterMotionComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRMoverBasePawn, CharacterMotionComponent), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMotionComponent_MetaData), NewProp_CharacterMotionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRMoverBasePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRMoverBasePawn_Statics::NewProp_CharacterMotionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRMoverBasePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVRMoverBasePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRMoverBasePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVRMoverBasePawn_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMoverInputProducerInterface_NoRegister, (int32)VTABLE_OFFSET(AVRMoverBasePawn, IMoverInputProducerInterface), false },  // 2740451444
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRMoverBasePawn_Statics::ClassParams = {
	&AVRMoverBasePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVRMoverBasePawn_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVRMoverBasePawn_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRMoverBasePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRMoverBasePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRMoverBasePawn()
{
	if (!Z_Registration_Info_UClass_AVRMoverBasePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRMoverBasePawn.OuterSingleton, Z_Construct_UClass_AVRMoverBasePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRMoverBasePawn.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRMoverBasePawn>()
{
	return AVRMoverBasePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRMoverBasePawn);
AVRMoverBasePawn::~AVRMoverBasePawn() {}
// End Class AVRMoverBasePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeredMove_VRMovement::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics::NewStructOps, TEXT("LayeredMove_VRMovement"), &Z_Registration_Info_UScriptStruct_LayeredMove_VRMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_VRMovement), 2238569910U) },
		{ FVRMoverHMDSyncState::StaticStruct, Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics::NewStructOps, TEXT("VRMoverHMDSyncState"), &Z_Registration_Info_UScriptStruct_VRMoverHMDSyncState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMoverHMDSyncState), 2873303916U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRMoverBasePawn, AVRMoverBasePawn::StaticClass, TEXT("AVRMoverBasePawn"), &Z_Registration_Info_UClass_AVRMoverBasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRMoverBasePawn), 4268090343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_1117154242(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
