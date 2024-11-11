// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRMountComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRMountComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRMountComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRMountComponent_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
// End Cross Module References

// Begin Enum EVRInteractibleMountAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRInteractibleMountAxis;
static UEnum* EVRInteractibleMountAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleMountAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRInteractibleMountAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRInteractibleMountAxis"));
	}
	return Z_Registration_Info_UEnum_EVRInteractibleMountAxis.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleMountAxis>()
{
	return EVRInteractibleMountAxis_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axis_XZ.Comment", "/** Limit Rotation to Yaw and Roll */" },
		{ "Axis_XZ.Name", "EVRInteractibleMountAxis::Axis_XZ" },
		{ "Axis_XZ.ToolTip", "Limit Rotation to Yaw and Roll" },
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRInteractibleMountAxis::Axis_XZ", (int64)EVRInteractibleMountAxis::Axis_XZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRInteractibleMountAxis",
	"EVRInteractibleMountAxis",
	Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis()
{
	if (!Z_Registration_Info_UEnum_EVRInteractibleMountAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRInteractibleMountAxis.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRInteractibleMountAxis.InnerSingleton;
}
// End Enum EVRInteractibleMountAxis

// Begin Class UVRMountComponent Function ResetInitialMountLocation
struct Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRMountComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be called after the Mount is moved post begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be called after the Mount is moved post begin play" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, nullptr, "ResetInitialMountLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRMountComponent::execResetInitialMountLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetInitialMountLocation();
	P_NATIVE_END;
}
// End Class UVRMountComponent Function ResetInitialMountLocation

// Begin Class UVRMountComponent Function SetGripPriority
struct Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics
{
	struct VRMountComponent_eventSetGripPriority_Parms
	{
		int32 NewGripPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the grip priority\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the grip priority" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGripPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRMountComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMountComponent, nullptr, "SetGripPriority", nullptr, nullptr, Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::VRMountComponent_eventSetGripPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::VRMountComponent_eventSetGripPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRMountComponent_SetGripPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRMountComponent_SetGripPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRMountComponent::execSetGripPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGripPriority(Z_Param_NewGripPriority);
	P_NATIVE_END;
}
// End Class UVRMountComponent Function SetGripPriority

// Begin Class UVRMountComponent
void UVRMountComponent::StaticRegisterNativesUVRMountComponent()
{
	UClass* Class = UVRMountComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetInitialMountLocation", &UVRMountComponent::execResetInitialMountLocation },
		{ "SetGripPriority", &UVRMountComponent::execSetGripPriority },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRMountComponent);
UClass* Z_Construct_UClass_UVRMountComponent_NoRegister()
{
	return UVRMountComponent::StaticClass();
}
struct Z_Construct_UClass_UVRMountComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A mounted lever/interactible implementation - Created by SpaceHarry - Merged into the plugin 01/29/2018\n" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRMountComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A mounted lever/interactible implementation - Created by SpaceHarry - Merged into the plugin 01/29/2018" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountRotationAxis_MetaData[] = {
		{ "Category", "VRMountComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation axis to use, XY is combined X and Y, only LerpToZero and PositiveLimits work with this mode\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation axis to use, XY is combined X and Y, only LerpToZero and PositiveLimits work with this mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipingZone_MetaData[] = {
		{ "Category", "VRMountComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the mount is swirling around a 90 degree pitch increase this number by 0.1 steps. \n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the mount is swirling around a 90 degree pitch increase this number by 0.1 steps." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipReajustYawSpeed_MetaData[] = {
		{ "Category", "VRMountComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the mount feels lagging behind in yaw at some point after 90 degree pitch increase this number by 0.1 steps\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the mount feels lagging behind in yaw at some point after 90 degree pitch increase this number by 0.1 steps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that are set on this object */" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are set on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requires bReplicates to be true for the component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance before the object will break out of the hand, 0.0f == never will\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance before the object will break out of the hand, 0.0f == never will" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotRange_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we deny gripping on this object\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
		{ "ScriptName", "IsDenyGripping" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we deny gripping on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
		{ "ScriptName", "IsCurrentlyHeld" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingGrip_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set on grip notify, not net serializing\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles/VRMountComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set on grip notify, not net serializing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MountRotationAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MountRotationAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipingZone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipReajustYawSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GripPriority;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimarySlotRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondarySlotRange;
	static void NewProp_bDenyGripping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
	static void NewProp_bIsHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoldingGrip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRMountComponent_ResetInitialMountLocation, "ResetInitialMountLocation" }, // 2247415476
		{ &Z_Construct_UFunction_UVRMountComponent_SetGripPriority, "SetGripPriority" }, // 2150450532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRMountComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_MountRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_MountRotationAxis = { "MountRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, MountRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleMountAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountRotationAxis_MetaData), NewProp_MountRotationAxis_MetaData) }; // 2562938036
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_FlipingZone = { "FlipingZone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, FlipingZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipingZone_MetaData), NewProp_FlipingZone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_FlipReajustYawSpeed = { "FlipReajustYawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, FlipReajustYawSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipReajustYawSpeed_MetaData), NewProp_FlipReajustYawSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, GripPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripPriority_MetaData), NewProp_GripPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
void Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
{
	((UVRMountComponent*)Obj)->bRepGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRMountComponent), &Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepGameplayTags_MetaData), NewProp_bRepGameplayTags_MetaData) };
void Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
{
	((UVRMountComponent*)Obj)->bReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRMountComponent), &Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateMovement_MetaData), NewProp_bReplicateMovement_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_MovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_MovementReplicationSetting = { "MovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementReplicationSetting_MetaData), NewProp_MovementReplicationSetting_MetaData) }; // 2309891904
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, BreakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakDistance_MetaData), NewProp_BreakDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_PrimarySlotRange = { "PrimarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, PrimarySlotRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimarySlotRange_MetaData), NewProp_PrimarySlotRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_SecondarySlotRange = { "SecondarySlotRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, SecondarySlotRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondarySlotRange_MetaData), NewProp_SecondarySlotRange_MetaData) };
void Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
{
	((UVRMountComponent*)Obj)->bDenyGripping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRMountComponent), &Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDenyGripping_MetaData), NewProp_bDenyGripping_MetaData) };
void Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((UVRMountComponent*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRMountComponent), &Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHeld_MetaData), NewProp_bIsHeld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRMountComponent_Statics::NewProp_HoldingGrip = { "HoldingGrip", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRMountComponent, HoldingGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingGrip_MetaData), NewProp_HoldingGrip_MetaData) }; // 2048483295
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRMountComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_MountRotationAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_MountRotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_FlipingZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_FlipReajustYawSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_GripPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bRepGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_MovementReplicationSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_MovementReplicationSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_BreakDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_PrimarySlotRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_SecondarySlotRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bDenyGripping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_bIsHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRMountComponent_Statics::NewProp_HoldingGrip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRMountComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRMountComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRMountComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRMountComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRMountComponent, IVRGripInterface), false },  // 199302906
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRMountComponent, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRMountComponent_Statics::ClassParams = {
	&UVRMountComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRMountComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRMountComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRMountComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRMountComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRMountComponent()
{
	if (!Z_Registration_Info_UClass_UVRMountComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRMountComponent.OuterSingleton, Z_Construct_UClass_UVRMountComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRMountComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRMountComponent>()
{
	return UVRMountComponent::StaticClass();
}
void UVRMountComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_GameplayTags(TEXT("GameplayTags"));
	static const FName Name_bRepGameplayTags(TEXT("bRepGameplayTags"));
	static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
	const bool bIsValid = true
		&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
		&& Name_bRepGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGameplayTags].Property->GetFName()
		&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRMountComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRMountComponent);
// End Class UVRMountComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRInteractibleMountAxis_StaticEnum, TEXT("EVRInteractibleMountAxis"), &Z_Registration_Info_UEnum_EVRInteractibleMountAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2562938036U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRMountComponent, UVRMountComponent::StaticClass, TEXT("UVRMountComponent"), &Z_Registration_Info_UClass_UVRMountComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRMountComponent), 2308480831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_2824576572(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
