// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_InteractibleSettings.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_InteractibleSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_InteractibleSettings();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_InteractibleSettings_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGS_InteractionSettings();
// End Cross Module References

// Begin ScriptStruct FBPGS_InteractionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPGS_InteractionSettings;
class UScriptStruct* FBPGS_InteractionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPGS_InteractionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPGS_InteractionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPGS_InteractionSettings, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPGS_InteractionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BPGS_InteractionSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPGS_InteractionSettings>()
{
	return FBPGS_InteractionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitsInLocalSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGetInitialPositionsOnBeginPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitX_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitY_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitZ_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPitch_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitYaw_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitRoll_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreHandRotation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "editcondition", "!bGetInitialPositionsOnBeginPlay" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLinearTranslation_MetaData[] = {
		{ "Category", "Settings|Linear" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialAngularTranslation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "editcondition", "!bGetInitialPositionsOnBeginPlay" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAngularTranslation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularTranslation_MetaData[] = {
		{ "Category", "Settings|Angular" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bLimitsInLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitsInLocalSpace;
	static void NewProp_bGetInitialPositionsOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetInitialPositionsOnBeginPlay;
	static void NewProp_bLimitX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitX;
	static void NewProp_bLimitY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitY;
	static void NewProp_bLimitZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitZ;
	static void NewProp_bLimitPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPitch;
	static void NewProp_bLimitYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitYaw;
	static void NewProp_bLimitRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitRoll;
	static void NewProp_bIgnoreHandRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreHandRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLinearTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinLinearTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxLinearTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialAngularTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinAngularTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAngularTranslation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPGS_InteractionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bLimitsInLocalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace = { "bLimitsInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitsInLocalSpace_MetaData), NewProp_bLimitsInLocalSpace_MetaData) };
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bGetInitialPositionsOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay = { "bGetInitialPositionsOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGetInitialPositionsOnBeginPlay_MetaData), NewProp_bGetInitialPositionsOnBeginPlay_MetaData) };
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bLimitX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX = { "bLimitX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitX_MetaData), NewProp_bLimitX_MetaData) };
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bLimitY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY = { "bLimitY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitY_MetaData), NewProp_bLimitY_MetaData) };
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bLimitZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ = { "bLimitZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitZ_MetaData), NewProp_bLimitZ_MetaData) };
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bLimitPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch = { "bLimitPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitPitch_MetaData), NewProp_bLimitPitch_MetaData) };
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bLimitYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw = { "bLimitYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitYaw_MetaData), NewProp_bLimitYaw_MetaData) };
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bLimitRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll = { "bLimitRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitRoll_MetaData), NewProp_bLimitRoll_MetaData) };
void Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_SetBit(void* Obj)
{
	((FBPGS_InteractionSettings*)Obj)->bIgnoreHandRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation = { "bIgnoreHandRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBPGS_InteractionSettings), &Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreHandRotation_MetaData), NewProp_bIgnoreHandRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation = { "InitialLinearTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, InitialLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLinearTranslation_MetaData), NewProp_InitialLinearTranslation_MetaData) }; // 2552134291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation = { "MinLinearTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, MinLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLinearTranslation_MetaData), NewProp_MinLinearTranslation_MetaData) }; // 2552134291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation = { "MaxLinearTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, MaxLinearTranslation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLinearTranslation_MetaData), NewProp_MaxLinearTranslation_MetaData) }; // 2552134291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation = { "InitialAngularTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, InitialAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialAngularTranslation_MetaData), NewProp_InitialAngularTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation = { "MinAngularTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, MinAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAngularTranslation_MetaData), NewProp_MinAngularTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation = { "MaxAngularTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPGS_InteractionSettings, MaxAngularTranslation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngularTranslation_MetaData), NewProp_MaxAngularTranslation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitsInLocalSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bGetInitialPositionsOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bLimitRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_bIgnoreHandRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialLinearTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinLinearTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxLinearTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_InitialAngularTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MinAngularTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewProp_MaxAngularTranslation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"BPGS_InteractionSettings",
	Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::PropPointers),
	sizeof(FBPGS_InteractionSettings),
	alignof(FBPGS_InteractionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPGS_InteractionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BPGS_InteractionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPGS_InteractionSettings.InnerSingleton, Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPGS_InteractionSettings.InnerSingleton;
}
// End ScriptStruct FBPGS_InteractionSettings

// Begin Class UGS_InteractibleSettings Function RemoveHandRotation
struct Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flags the the interaction settings so that it will regenerate removing the hand rotation.\n// Use this if you just changed the relative hand transform.\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flags the the interaction settings so that it will regenerate removing the hand rotation.\nUse this if you just changed the relative hand transform." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGS_InteractibleSettings, nullptr, "RemoveHandRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGS_InteractibleSettings::execRemoveHandRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveHandRotation();
	P_NATIVE_END;
}
// End Class UGS_InteractibleSettings Function RemoveHandRotation

// Begin Class UGS_InteractibleSettings
void UGS_InteractibleSettings::StaticRegisterNativesUGS_InteractibleSettings()
{
	UClass* Class = UGS_InteractibleSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveHandRotation", &UGS_InteractibleSettings::execRemoveHandRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_InteractibleSettings);
UClass* Z_Construct_UClass_UGS_InteractibleSettings_NoRegister()
{
	return UGS_InteractibleSettings::StaticClass();
}
struct Z_Construct_UClass_UGS_InteractibleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A Grip script that overrides the default grip behavior and adds custom clamping logic instead,\n" },
#endif
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_InteractibleSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Grip script that overrides the default grip behavior and adds custom clamping logic instead," },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSettings_MetaData[] = {
		{ "Category", "InteractionSettings" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_InteractibleSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGS_InteractibleSettings_RemoveHandRotation, "RemoveHandRotation" }, // 1029135001
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_InteractibleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings = { "InteractionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_InteractibleSettings, InteractionSettings), Z_Construct_UScriptStruct_FBPGS_InteractionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSettings_MetaData), NewProp_InteractionSettings_MetaData) }; // 1485994676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_InteractibleSettings_Statics::NewProp_InteractionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGS_InteractibleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVRGripScriptBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_InteractibleSettings_Statics::ClassParams = {
	&UGS_InteractibleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_InteractibleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGS_InteractibleSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGS_InteractibleSettings()
{
	if (!Z_Registration_Info_UClass_UGS_InteractibleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_InteractibleSettings.OuterSingleton, Z_Construct_UClass_UGS_InteractibleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGS_InteractibleSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_InteractibleSettings>()
{
	return UGS_InteractibleSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_InteractibleSettings);
UGS_InteractibleSettings::~UGS_InteractibleSettings() {}
// End Class UGS_InteractibleSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_InteractibleSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBPGS_InteractionSettings::StaticStruct, Z_Construct_UScriptStruct_FBPGS_InteractionSettings_Statics::NewStructOps, TEXT("BPGS_InteractionSettings"), &Z_Registration_Info_UScriptStruct_BPGS_InteractionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPGS_InteractionSettings), 1485994676U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGS_InteractibleSettings, UGS_InteractibleSettings::StaticClass, TEXT("UGS_InteractibleSettings"), &Z_Registration_Info_UClass_UGS_InteractibleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_InteractibleSettings), 964407860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_InteractibleSettings_h_3673423550(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_InteractibleSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_InteractibleSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_InteractibleSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_InteractibleSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
