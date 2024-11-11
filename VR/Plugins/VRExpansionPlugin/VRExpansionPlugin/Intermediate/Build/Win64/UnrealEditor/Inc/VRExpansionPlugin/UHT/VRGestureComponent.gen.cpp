// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRGestureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGestureComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGesturesDatabase();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGesturesDatabase_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGestureComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGestureComponent_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRGesture();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSettings();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSplineDraw();
// End Cross Module References

// Begin Enum EVRGestureState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRGestureState;
static UEnum* EVRGestureState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRGestureState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRGestureState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGestureState"));
	}
	return Z_Registration_Info_UEnum_EVRGestureState.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureState>()
{
	return EVRGestureState_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GES_Detecting.Name", "EVRGestureState::GES_Detecting" },
		{ "GES_None.Name", "EVRGestureState::GES_None" },
		{ "GES_Recording.Name", "EVRGestureState::GES_Recording" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRGestureState::GES_None", (int64)EVRGestureState::GES_None },
		{ "EVRGestureState::GES_Recording", (int64)EVRGestureState::GES_Recording },
		{ "EVRGestureState::GES_Detecting", (int64)EVRGestureState::GES_Detecting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRGestureState",
	"EVRGestureState",
	Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState()
{
	if (!Z_Registration_Info_UEnum_EVRGestureState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRGestureState.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRGestureState.InnerSingleton;
}
// End Enum EVRGestureState

// Begin Enum EVRGestureMirrorMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRGestureMirrorMode;
static UEnum* EVRGestureMirrorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRGestureMirrorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRGestureMirrorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGestureMirrorMode"));
	}
	return Z_Registration_Info_UEnum_EVRGestureMirrorMode.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureMirrorMode>()
{
	return EVRGestureMirrorMode_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GES_MirrorBoth.Name", "EVRGestureMirrorMode::GES_MirrorBoth" },
		{ "GES_MirrorLeft.Name", "EVRGestureMirrorMode::GES_MirrorLeft" },
		{ "GES_MirrorRight.Name", "EVRGestureMirrorMode::GES_MirrorRight" },
		{ "GES_NoMirror.Name", "EVRGestureMirrorMode::GES_NoMirror" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRGestureMirrorMode::GES_NoMirror", (int64)EVRGestureMirrorMode::GES_NoMirror },
		{ "EVRGestureMirrorMode::GES_MirrorLeft", (int64)EVRGestureMirrorMode::GES_MirrorLeft },
		{ "EVRGestureMirrorMode::GES_MirrorRight", (int64)EVRGestureMirrorMode::GES_MirrorRight },
		{ "EVRGestureMirrorMode::GES_MirrorBoth", (int64)EVRGestureMirrorMode::GES_MirrorBoth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRGestureMirrorMode",
	"EVRGestureMirrorMode",
	Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode()
{
	if (!Z_Registration_Info_UEnum_EVRGestureMirrorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRGestureMirrorMode.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRGestureMirrorMode.InnerSingleton;
}
// End Enum EVRGestureMirrorMode

// Begin Enum EVRGestureFlattenAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRGestureFlattenAxis;
static UEnum* EVRGestureFlattenAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRGestureFlattenAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRGestureFlattenAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGestureFlattenAxis"));
	}
	return Z_Registration_Info_UEnum_EVRGestureFlattenAxis.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureFlattenAxis>()
{
	return EVRGestureFlattenAxis_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GES_DontFlatten.Name", "EVRGestureFlattenAxis::GES_DontFlatten" },
		{ "GES_FlattenX.Name", "EVRGestureFlattenAxis::GES_FlattenX" },
		{ "GES_FlattenY.Name", "EVRGestureFlattenAxis::GES_FlattenY" },
		{ "GES_FlattenZ.Name", "EVRGestureFlattenAxis::GES_FlattenZ" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRGestureFlattenAxis::GES_FlattenX", (int64)EVRGestureFlattenAxis::GES_FlattenX },
		{ "EVRGestureFlattenAxis::GES_FlattenY", (int64)EVRGestureFlattenAxis::GES_FlattenY },
		{ "EVRGestureFlattenAxis::GES_FlattenZ", (int64)EVRGestureFlattenAxis::GES_FlattenZ },
		{ "EVRGestureFlattenAxis::GES_DontFlatten", (int64)EVRGestureFlattenAxis::GES_DontFlatten },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRGestureFlattenAxis",
	"EVRGestureFlattenAxis",
	Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis()
{
	if (!Z_Registration_Info_UEnum_EVRGestureFlattenAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRGestureFlattenAxis.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRGestureFlattenAxis.InnerSingleton;
}
// End Enum EVRGestureFlattenAxis

// Begin ScriptStruct FVRGestureSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRGestureSettings;
class UScriptStruct* FVRGestureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRGestureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRGestureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRGestureSettings, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRGestureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VRGestureSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRGestureSettings>()
{
	return FVRGestureSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRGestureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_Gesture_Length_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum length to start recognizing this gesture at\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum length to start recognizing this gesture at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_firstThreshold_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum distance between the last observations before throwing out this gesture, raise this to make it easier to start checking this gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance between the last observations before throwing out this gesture, raise this to make it easier to start checking this gesture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullThreshold_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Full threshold before detecting the gesture, raise this to lower accuracy but make it easier to detect this gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full threshold before detecting the gesture, raise this to lower accuracy but make it easier to detect this gesture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorMode_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set to left/right, will mirror the detected gesture if the gesture component is set to match that value\n// If set to Both mode, the gesture will be checked both normal and mirrored and the best match will be chosen\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to left/right, will mirror the detected gesture if the gesture component is set to match that value\nIf set to Both mode, the gesture will be checked both normal and mirrored and the best match will be chosen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled this gesture will be checked when inside a DB\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled this gesture will be checked when inside a DB" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableScaling_MetaData[] = {
		{ "Category", "VRGesture|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled this gesture will have sample data scaled to it when recognizing (if false you will want to record the gesture without scaling)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled this gesture will have sample data scaled to it when recognizing (if false you will want to record the gesture without scaling)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minimum_Gesture_Length;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_firstThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FullThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorMode;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bEnableScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScaling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRGestureSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_Minimum_Gesture_Length = { "Minimum_Gesture_Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGestureSettings, Minimum_Gesture_Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_Gesture_Length_MetaData), NewProp_Minimum_Gesture_Length_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_firstThreshold = { "firstThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGestureSettings, firstThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_firstThreshold_MetaData), NewProp_firstThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_FullThreshold = { "FullThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGestureSettings, FullThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullThreshold_MetaData), NewProp_FullThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode = { "MirrorMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGestureSettings, MirrorMode), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorMode_MetaData), NewProp_MirrorMode_MetaData) }; // 36457936
void Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FVRGestureSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRGestureSettings), &Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnableScaling_SetBit(void* Obj)
{
	((FVRGestureSettings*)Obj)->bEnableScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnableScaling = { "bEnableScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRGestureSettings), &Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnableScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableScaling_MetaData), NewProp_bEnableScaling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRGestureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_Minimum_Gesture_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_firstThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_FullThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_MirrorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewProp_bEnableScaling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRGestureSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRGestureSettings",
	Z_Construct_UScriptStruct_FVRGestureSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::PropPointers),
	sizeof(FVRGestureSettings),
	alignof(FVRGestureSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRGestureSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSettings()
{
	if (!Z_Registration_Info_UScriptStruct_VRGestureSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRGestureSettings.InnerSingleton, Z_Construct_UScriptStruct_FVRGestureSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRGestureSettings.InnerSingleton;
}
// End ScriptStruct FVRGestureSettings

// Begin ScriptStruct FVRGesture
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRGesture;
class UScriptStruct* FVRGesture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRGesture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRGesture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRGesture, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRGesture"));
	}
	return Z_Registration_Info_UScriptStruct_VRGesture.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRGesture>()
{
	return FVRGesture::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRGesture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "VRGesture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the recorded gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the recorded gesture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GestureType_MetaData[] = {
		{ "Category", "VRGesture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum uint8 for end user use\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum uint8 for end user use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[] = {
		{ "Category", "VRGesture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Samples in the recorded gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Samples in the recorded gesture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GestureSize_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GestureSettings_MetaData[] = {
		{ "Category", "VRGesture" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GestureType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GestureSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GestureSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRGesture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGesture, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureType = { "GestureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGesture, GestureType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GestureType_MetaData), NewProp_GestureType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGesture, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Samples_MetaData), NewProp_Samples_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSize = { "GestureSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGesture, GestureSize), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GestureSize_MetaData), NewProp_GestureSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSettings = { "GestureSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGesture, GestureSettings), Z_Construct_UScriptStruct_FVRGestureSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GestureSettings_MetaData), NewProp_GestureSettings_MetaData) }; // 2241483993
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_Samples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGesture_Statics::NewProp_GestureSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRGesture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRGesture",
	Z_Construct_UScriptStruct_FVRGesture_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::PropPointers),
	sizeof(FVRGesture),
	alignof(FVRGesture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGesture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRGesture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRGesture()
{
	if (!Z_Registration_Info_UScriptStruct_VRGesture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRGesture.InnerSingleton, Z_Construct_UScriptStruct_FVRGesture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRGesture.InnerSingleton;
}
// End ScriptStruct FVRGesture

// Begin Class UGesturesDatabase Function FillSplineWithGesture
struct Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics
{
	struct GesturesDatabase_eventFillSplineWithGesture_Parms
	{
		FVRGesture Gesture;
		USplineComponent* SplineComponent;
		bool bCenterPointsOnSpline;
		bool bScaleToBounds;
		float OptionalBounds;
		bool bUseCurvedPoints;
		bool bFillInSplineMeshComponents;
		UStaticMesh* Mesh;
		UMaterial* MeshMat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fills a spline component with a gesture, optionally also generates spline mesh components for it (uses ones already attached if possible)\n" },
#endif
		{ "CPP_Default_bCenterPointsOnSpline", "true" },
		{ "CPP_Default_bFillInSplineMeshComponents", "true" },
		{ "CPP_Default_bScaleToBounds", "false" },
		{ "CPP_Default_bUseCurvedPoints", "true" },
		{ "CPP_Default_Mesh", "None" },
		{ "CPP_Default_MeshMat", "None" },
		{ "CPP_Default_OptionalBounds", "0.000000" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fills a spline component with a gesture, optionally also generates spline mesh components for it (uses ones already attached if possible)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gesture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static void NewProp_bCenterPointsOnSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterPointsOnSpline;
	static void NewProp_bScaleToBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleToBounds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptionalBounds;
	static void NewProp_bUseCurvedPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurvedPoints;
	static void NewProp_bFillInSplineMeshComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillInSplineMeshComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshMat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, Gesture), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(0, nullptr) }; // 3645796078
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
void Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bCenterPointsOnSpline_SetBit(void* Obj)
{
	((GesturesDatabase_eventFillSplineWithGesture_Parms*)Obj)->bCenterPointsOnSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bCenterPointsOnSpline = { "bCenterPointsOnSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bCenterPointsOnSpline_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bScaleToBounds_SetBit(void* Obj)
{
	((GesturesDatabase_eventFillSplineWithGesture_Parms*)Obj)->bScaleToBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bScaleToBounds = { "bScaleToBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bScaleToBounds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_OptionalBounds = { "OptionalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, OptionalBounds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bUseCurvedPoints_SetBit(void* Obj)
{
	((GesturesDatabase_eventFillSplineWithGesture_Parms*)Obj)->bUseCurvedPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bUseCurvedPoints = { "bUseCurvedPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bUseCurvedPoints_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bFillInSplineMeshComponents_SetBit(void* Obj)
{
	((GesturesDatabase_eventFillSplineWithGesture_Parms*)Obj)->bFillInSplineMeshComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bFillInSplineMeshComponents = { "bFillInSplineMeshComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GesturesDatabase_eventFillSplineWithGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bFillInSplineMeshComponents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_MeshMat = { "MeshMat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GesturesDatabase_eventFillSplineWithGesture_Parms, MeshMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_Gesture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bCenterPointsOnSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bScaleToBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_OptionalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bUseCurvedPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_bFillInSplineMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::NewProp_MeshMat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGesturesDatabase, nullptr, "FillSplineWithGesture", nullptr, nullptr, Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::GesturesDatabase_eventFillSplineWithGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::GesturesDatabase_eventFillSplineWithGesture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGesturesDatabase::execFillSplineWithGesture)
{
	P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_Gesture);
	P_GET_OBJECT(USplineComponent,Z_Param_SplineComponent);
	P_GET_UBOOL(Z_Param_bCenterPointsOnSpline);
	P_GET_UBOOL(Z_Param_bScaleToBounds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OptionalBounds);
	P_GET_UBOOL(Z_Param_bUseCurvedPoints);
	P_GET_UBOOL(Z_Param_bFillInSplineMeshComponents);
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_OBJECT(UMaterial,Z_Param_MeshMat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FillSplineWithGesture(Z_Param_Out_Gesture,Z_Param_SplineComponent,Z_Param_bCenterPointsOnSpline,Z_Param_bScaleToBounds,Z_Param_OptionalBounds,Z_Param_bUseCurvedPoints,Z_Param_bFillInSplineMeshComponents,Z_Param_Mesh,Z_Param_MeshMat);
	P_NATIVE_END;
}
// End Class UGesturesDatabase Function FillSplineWithGesture

// Begin Class UGesturesDatabase Function ImportSplineAsGesture
struct Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics
{
	struct GesturesDatabase_eventImportSplineAsGesture_Parms
	{
		USplineComponent* HostSplineComponent;
		FString GestureName;
		bool bKeepSplineCurves;
		float SegmentLen;
		bool bScaleToDatabase;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Imports a spline as a gesture, Segment len is the max segment length (will break lines up into lengths of this size)\n" },
#endif
		{ "CPP_Default_bKeepSplineCurves", "true" },
		{ "CPP_Default_bScaleToDatabase", "true" },
		{ "CPP_Default_SegmentLen", "10.000000" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Imports a spline as a gesture, Segment len is the max segment length (will break lines up into lengths of this size)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostSplineComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GestureName;
	static void NewProp_bKeepSplineCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepSplineCurves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLen;
	static void NewProp_bScaleToDatabase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleToDatabase;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_HostSplineComponent = { "HostSplineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GesturesDatabase_eventImportSplineAsGesture_Parms, HostSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostSplineComponent_MetaData), NewProp_HostSplineComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_GestureName = { "GestureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GesturesDatabase_eventImportSplineAsGesture_Parms, GestureName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bKeepSplineCurves_SetBit(void* Obj)
{
	((GesturesDatabase_eventImportSplineAsGesture_Parms*)Obj)->bKeepSplineCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bKeepSplineCurves = { "bKeepSplineCurves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GesturesDatabase_eventImportSplineAsGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bKeepSplineCurves_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_SegmentLen = { "SegmentLen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GesturesDatabase_eventImportSplineAsGesture_Parms, SegmentLen), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bScaleToDatabase_SetBit(void* Obj)
{
	((GesturesDatabase_eventImportSplineAsGesture_Parms*)Obj)->bScaleToDatabase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bScaleToDatabase = { "bScaleToDatabase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GesturesDatabase_eventImportSplineAsGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bScaleToDatabase_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GesturesDatabase_eventImportSplineAsGesture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GesturesDatabase_eventImportSplineAsGesture_Parms), &Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_HostSplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_GestureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bKeepSplineCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_SegmentLen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_bScaleToDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGesturesDatabase, nullptr, "ImportSplineAsGesture", nullptr, nullptr, Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::GesturesDatabase_eventImportSplineAsGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::GesturesDatabase_eventImportSplineAsGesture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGesturesDatabase::execImportSplineAsGesture)
{
	P_GET_OBJECT(USplineComponent,Z_Param_HostSplineComponent);
	P_GET_PROPERTY(FStrProperty,Z_Param_GestureName);
	P_GET_UBOOL(Z_Param_bKeepSplineCurves);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SegmentLen);
	P_GET_UBOOL(Z_Param_bScaleToDatabase);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ImportSplineAsGesture(Z_Param_HostSplineComponent,Z_Param_GestureName,Z_Param_bKeepSplineCurves,Z_Param_SegmentLen,Z_Param_bScaleToDatabase);
	P_NATIVE_END;
}
// End Class UGesturesDatabase Function ImportSplineAsGesture

// Begin Class UGesturesDatabase Function RecalculateGestures
struct Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics
{
	struct GesturesDatabase_eventRecalculateGestures_Parms
	{
		bool bScaleToDatabase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Recalculate size of gestures and re-scale them to the TargetGestureScale (if bScaleToDatabase is true)\n" },
#endif
		{ "CPP_Default_bScaleToDatabase", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recalculate size of gestures and re-scale them to the TargetGestureScale (if bScaleToDatabase is true)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bScaleToDatabase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleToDatabase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::NewProp_bScaleToDatabase_SetBit(void* Obj)
{
	((GesturesDatabase_eventRecalculateGestures_Parms*)Obj)->bScaleToDatabase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::NewProp_bScaleToDatabase = { "bScaleToDatabase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GesturesDatabase_eventRecalculateGestures_Parms), &Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::NewProp_bScaleToDatabase_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::NewProp_bScaleToDatabase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGesturesDatabase, nullptr, "RecalculateGestures", nullptr, nullptr, Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::GesturesDatabase_eventRecalculateGestures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::GesturesDatabase_eventRecalculateGestures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGesturesDatabase::execRecalculateGestures)
{
	P_GET_UBOOL(Z_Param_bScaleToDatabase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalculateGestures(Z_Param_bScaleToDatabase);
	P_NATIVE_END;
}
// End Class UGesturesDatabase Function RecalculateGestures

// Begin Class UGesturesDatabase
void UGesturesDatabase::StaticRegisterNativesUGesturesDatabase()
{
	UClass* Class = UGesturesDatabase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FillSplineWithGesture", &UGesturesDatabase::execFillSplineWithGesture },
		{ "ImportSplineAsGesture", &UGesturesDatabase::execImportSplineAsGesture },
		{ "RecalculateGestures", &UGesturesDatabase::execRecalculateGestures },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGesturesDatabase);
UClass* Z_Construct_UClass_UGesturesDatabase_NoRegister()
{
	return UGesturesDatabase::StaticClass();
}
struct Z_Construct_UClass_UGesturesDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Items Database DataAsset, here we can save all of our game items\n*/" },
#endif
		{ "IncludePath", "VRGestureComponent.h" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Items Database DataAsset, here we can save all of our game items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gestures_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gestures in this database\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gestures in this database" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGestureScale_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gestures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Gestures;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetGestureScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGesturesDatabase_FillSplineWithGesture, "FillSplineWithGesture" }, // 154149079
		{ &Z_Construct_UFunction_UGesturesDatabase_ImportSplineAsGesture, "ImportSplineAsGesture" }, // 4130990797
		{ &Z_Construct_UFunction_UGesturesDatabase_RecalculateGestures, "RecalculateGestures" }, // 9342781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGesturesDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures_Inner = { "Gestures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(0, nullptr) }; // 3645796078
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures = { "Gestures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGesturesDatabase, Gestures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gestures_MetaData), NewProp_Gestures_MetaData) }; // 3645796078
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_TargetGestureScale = { "TargetGestureScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGesturesDatabase, TargetGestureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGestureScale_MetaData), NewProp_TargetGestureScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGesturesDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_Gestures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGesturesDatabase_Statics::NewProp_TargetGestureScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGesturesDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGesturesDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGesturesDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGesturesDatabase_Statics::ClassParams = {
	&UGesturesDatabase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGesturesDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGesturesDatabase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGesturesDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGesturesDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGesturesDatabase()
{
	if (!Z_Registration_Info_UClass_UGesturesDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGesturesDatabase.OuterSingleton, Z_Construct_UClass_UGesturesDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGesturesDatabase.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGesturesDatabase>()
{
	return UGesturesDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGesturesDatabase);
UGesturesDatabase::~UGesturesDatabase() {}
// End Class UGesturesDatabase

// Begin ScriptStruct FVRGestureSplineDraw
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRGestureSplineDraw;
class UScriptStruct* FVRGestureSplineDraw::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRGestureSplineDraw.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRGestureSplineDraw.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRGestureSplineDraw, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRGestureSplineDraw"));
	}
	return Z_Registration_Info_UScriptStruct_VRGestureSplineDraw.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRGestureSplineDraw>()
{
	return FVRGestureSplineDraw::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRGestureSplineDraw>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGestureSplineDraw, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes_Inner = { "SplineMeshes", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes = { "SplineMeshes", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRGestureSplineDraw, SplineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshes_MetaData), NewProp_SplineMeshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewProp_SplineMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRGestureSplineDraw",
	Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::PropPointers),
	sizeof(FVRGestureSplineDraw),
	alignof(FVRGestureSplineDraw),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRGestureSplineDraw()
{
	if (!Z_Registration_Info_UScriptStruct_VRGestureSplineDraw.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRGestureSplineDraw.InnerSingleton, Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRGestureSplineDraw.InnerSingleton;
}
// End ScriptStruct FVRGestureSplineDraw

// Begin Delegate FVRGestureDetectedSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms
	{
		uint8 GestureType;
		FString DetectedGestureName;
		int32 DetectedGestureIndex;
		UGesturesDatabase* GestureDataBase;
		FVector OriginalUnscaledGestureSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the lever state changes. */" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the lever state changes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GestureType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DetectedGestureName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DetectedGestureIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GestureDataBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalUnscaledGestureSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_GestureType = { "GestureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, GestureType), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_DetectedGestureName = { "DetectedGestureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, DetectedGestureName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_DetectedGestureIndex = { "DetectedGestureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, DetectedGestureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_GestureDataBase = { "GestureDataBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, GestureDataBase), Z_Construct_UClass_UGesturesDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_OriginalUnscaledGestureSize = { "OriginalUnscaledGestureSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms, OriginalUnscaledGestureSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_GestureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_DetectedGestureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_DetectedGestureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_GestureDataBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::NewProp_OriginalUnscaledGestureSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRGestureDetectedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVRGestureDetectedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGestureDetectedSignature, uint8 GestureType, const FString& DetectedGestureName, int32 DetectedGestureIndex, UGesturesDatabase* GestureDataBase, FVector OriginalUnscaledGestureSize)
{
	struct _Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms
	{
		uint8 GestureType;
		FString DetectedGestureName;
		int32 DetectedGestureIndex;
		UGesturesDatabase* GestureDataBase;
		FVector OriginalUnscaledGestureSize;
	};
	_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms Parms;
	Parms.GestureType=GestureType;
	Parms.DetectedGestureName=DetectedGestureName;
	Parms.DetectedGestureIndex=DetectedGestureIndex;
	Parms.GestureDataBase=GestureDataBase;
	Parms.OriginalUnscaledGestureSize=OriginalUnscaledGestureSize;
	VRGestureDetectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVRGestureDetectedSignature

// Begin Class UVRGestureComponent Function BeginRecording
struct Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics
{
	struct VRGestureComponent_eventBeginRecording_Parms
	{
		bool bRunDetection;
		EVRGestureFlattenAxis FlattenAxis;
		bool bDrawGesture;
		bool bDrawAsSpline;
		int32 SamplingHTZ;
		int32 SampleBufferSize;
		float ClampingTolerance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Function to begin recording a gesture for detection or saving\n\x09*\n\x09* bRunDetection: Should we detect gestures or only record them\n\x09* bFlattenGestue: Should we flatten the gesture into 2 dimensions (more stable detection and recording, less pretty visually)\n\x09* bDrawGesture: Should we draw the gesture during recording of it\n\x09* bDrawAsSpline: If true we will use spline meshes, if false we will draw as debug lines\n\x09* SamplingHTZ: How many times a second we will record a gesture point, recording is done with a timer now, i would steer away \n\x09* from htz > possible frames as that could cause double timer updates with how timers are implemented.\n\x09* SampleBufferSize: How many points we will store in history at a time\n\x09* ClampingTolerance: If larger than 0.0, we will clamp points to a grid of this size\n\x09*/" },
#endif
		{ "CPP_Default_bDrawAsSpline", "false" },
		{ "CPP_Default_bDrawGesture", "true" },
		{ "CPP_Default_ClampingTolerance", "0.010000" },
		{ "CPP_Default_FlattenAxis", "GES_FlattenX" },
		{ "CPP_Default_SampleBufferSize", "60" },
		{ "CPP_Default_SamplingHTZ", "30" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to begin recording a gesture for detection or saving\n      *\n      * bRunDetection: Should we detect gestures or only record them\n      * bFlattenGestue: Should we flatten the gesture into 2 dimensions (more stable detection and recording, less pretty visually)\n      * bDrawGesture: Should we draw the gesture during recording of it\n      * bDrawAsSpline: If true we will use spline meshes, if false we will draw as debug lines\n      * SamplingHTZ: How many times a second we will record a gesture point, recording is done with a timer now, i would steer away\n      * from htz > possible frames as that could cause double timer updates with how timers are implemented.\n      * SampleBufferSize: How many points we will store in history at a time\n      * ClampingTolerance: If larger than 0.0, we will clamp points to a grid of this size" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bRunDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunDetection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlattenAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FlattenAxis;
	static void NewProp_bDrawGesture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawGesture;
	static void NewProp_bDrawAsSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawAsSpline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingHTZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleBufferSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampingTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bRunDetection_SetBit(void* Obj)
{
	((VRGestureComponent_eventBeginRecording_Parms*)Obj)->bRunDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bRunDetection = { "bRunDetection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGestureComponent_eventBeginRecording_Parms), &Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bRunDetection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_FlattenAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_FlattenAxis = { "FlattenAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventBeginRecording_Parms, FlattenAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureFlattenAxis, METADATA_PARAMS(0, nullptr) }; // 2808336025
void Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawGesture_SetBit(void* Obj)
{
	((VRGestureComponent_eventBeginRecording_Parms*)Obj)->bDrawGesture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawGesture = { "bDrawGesture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGestureComponent_eventBeginRecording_Parms), &Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawGesture_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawAsSpline_SetBit(void* Obj)
{
	((VRGestureComponent_eventBeginRecording_Parms*)Obj)->bDrawAsSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawAsSpline = { "bDrawAsSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGestureComponent_eventBeginRecording_Parms), &Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawAsSpline_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_SamplingHTZ = { "SamplingHTZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventBeginRecording_Parms, SamplingHTZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_SampleBufferSize = { "SampleBufferSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventBeginRecording_Parms, SampleBufferSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_ClampingTolerance = { "ClampingTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventBeginRecording_Parms, ClampingTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bRunDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_FlattenAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_FlattenAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawGesture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_bDrawAsSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_SamplingHTZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_SampleBufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::NewProp_ClampingTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, nullptr, "BeginRecording", nullptr, nullptr, Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::VRGestureComponent_eventBeginRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::VRGestureComponent_eventBeginRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGestureComponent_BeginRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_BeginRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGestureComponent::execBeginRecording)
{
	P_GET_UBOOL(Z_Param_bRunDetection);
	P_GET_ENUM(EVRGestureFlattenAxis,Z_Param_FlattenAxis);
	P_GET_UBOOL(Z_Param_bDrawGesture);
	P_GET_UBOOL(Z_Param_bDrawAsSpline);
	P_GET_PROPERTY(FIntProperty,Z_Param_SamplingHTZ);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleBufferSize);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ClampingTolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginRecording(Z_Param_bRunDetection,EVRGestureFlattenAxis(Z_Param_FlattenAxis),Z_Param_bDrawGesture,Z_Param_bDrawAsSpline,Z_Param_SamplingHTZ,Z_Param_SampleBufferSize,Z_Param_ClampingTolerance);
	P_NATIVE_END;
}
// End Class UVRGestureComponent Function BeginRecording

// Begin Class UVRGestureComponent Function ClearRecording
struct Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears the current recording\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the current recording" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, nullptr, "ClearRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRGestureComponent_ClearRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_ClearRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGestureComponent::execClearRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearRecording();
	P_NATIVE_END;
}
// End Class UVRGestureComponent Function ClearRecording

// Begin Class UVRGestureComponent Function DrawDebugGesture
struct Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics
{
	struct VRGestureComponent_eventDrawDebugGesture_Parms
	{
		UObject* WorldContextObject;
		FTransform StartTransform;
		FVRGesture GestureToDraw;
		FColor Color;
		bool bPersistentLines;
		uint8 DepthPriority;
		float LifeTime;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draw a gesture with a debug line batch\n" },
#endif
		{ "CPP_Default_bPersistentLines", "false" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_LifeTime", "-1.000000" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw a gesture with a debug line batch" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GestureToDraw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_bPersistentLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistentLines;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_GestureToDraw = { "GestureToDraw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, GestureToDraw), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(0, nullptr) }; // 3645796078
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_bPersistentLines_SetBit(void* Obj)
{
	((VRGestureComponent_eventDrawDebugGesture_Parms*)Obj)->bPersistentLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_bPersistentLines = { "bPersistentLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGestureComponent_eventDrawDebugGesture_Parms), &Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_bPersistentLines_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventDrawDebugGesture_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_StartTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_GestureToDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_bPersistentLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_DepthPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, nullptr, "DrawDebugGesture", nullptr, nullptr, Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::VRGestureComponent_eventDrawDebugGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::VRGestureComponent_eventDrawDebugGesture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGestureComponent::execDrawDebugGesture)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_StartTransform);
	P_GET_STRUCT(FVRGesture,Z_Param_GestureToDraw);
	P_GET_STRUCT_REF(FColor,Z_Param_Out_Color);
	P_GET_UBOOL(Z_Param_bPersistentLines);
	P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugGesture(Z_Param_WorldContextObject,Z_Param_Out_StartTransform,Z_Param_GestureToDraw,Z_Param_Out_Color,Z_Param_bPersistentLines,Z_Param_DepthPriority,Z_Param_LifeTime,Z_Param_Thickness);
	P_NATIVE_END;
}
// End Class UVRGestureComponent Function DrawDebugGesture

// Begin Class UVRGestureComponent Function EndRecording
struct Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics
{
	struct VRGestureComponent_eventEndRecording_Parms
	{
		FVRGesture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ends recording and returns the recorded gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends recording and returns the recorded gesture" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventEndRecording_Parms, ReturnValue), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(0, nullptr) }; // 3645796078
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, nullptr, "EndRecording", nullptr, nullptr, Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::VRGestureComponent_eventEndRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::VRGestureComponent_eventEndRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGestureComponent_EndRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_EndRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGestureComponent::execEndRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVRGesture*)Z_Param__Result=P_THIS->EndRecording();
	P_NATIVE_END;
}
// End Class UVRGestureComponent Function EndRecording

// Begin Class UVRGestureComponent Function OnGestureDetected
struct VRGestureComponent_eventOnGestureDetected_Parms
{
	uint8 GestureType;
	FString DetectedGestureName;
	int32 DetectedGestureIndex;
	UGesturesDatabase* GestureDatabase;
	FVector OriginalUnscaledGestureSize;
};
static FName NAME_UVRGestureComponent_OnGestureDetected = FName(TEXT("OnGestureDetected"));
void UVRGestureComponent::OnGestureDetected(uint8 GestureType, FString& DetectedGestureName, int32& DetectedGestureIndex, UGesturesDatabase* GestureDatabase, FVector OriginalUnscaledGestureSize)
{
	VRGestureComponent_eventOnGestureDetected_Parms Parms;
	Parms.GestureType=GestureType;
	Parms.DetectedGestureName=DetectedGestureName;
	Parms.DetectedGestureIndex=DetectedGestureIndex;
	Parms.GestureDatabase=GestureDatabase;
	Parms.OriginalUnscaledGestureSize=OriginalUnscaledGestureSize;
	ProcessEvent(FindFunctionChecked(NAME_UVRGestureComponent_OnGestureDetected),&Parms);
	DetectedGestureName=Parms.DetectedGestureName;
	DetectedGestureIndex=Parms.DetectedGestureIndex;
}
struct Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of obeservations vectors.\n//int dim; // Not needed, this is just dimensionality\n// Can be used for arrays of samples (IE: multiple points), could add back in eventually\n// if I decide to support three point tracked gestures or something at some point, but its a waste for single point.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of obeservations vectors.\nint dim;  Not needed, this is just dimensionality\nCan be used for arrays of samples (IE: multiple points), could add back in eventually\nif I decide to support three point tracked gestures or something at some point, but its a waste for single point." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GestureType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DetectedGestureName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DetectedGestureIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GestureDatabase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalUnscaledGestureSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_GestureType = { "GestureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, GestureType), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_DetectedGestureName = { "DetectedGestureName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, DetectedGestureName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_DetectedGestureIndex = { "DetectedGestureIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, DetectedGestureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_GestureDatabase = { "GestureDatabase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, GestureDatabase), Z_Construct_UClass_UGesturesDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_OriginalUnscaledGestureSize = { "OriginalUnscaledGestureSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventOnGestureDetected_Parms, OriginalUnscaledGestureSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_GestureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_DetectedGestureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_DetectedGestureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_GestureDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::NewProp_OriginalUnscaledGestureSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, nullptr, "OnGestureDetected", nullptr, nullptr, Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::PropPointers), sizeof(VRGestureComponent_eventOnGestureDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGestureComponent_eventOnGestureDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVRGestureComponent Function OnGestureDetected

// Begin Class UVRGestureComponent Function RecalculateGestureSize
struct Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics
{
	struct VRGestureComponent_eventRecalculateGestureSize_Parms
	{
		FVRGesture InputGesture;
		UGesturesDatabase* GestureDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Recalculates a gestures size and re-scales it to the given database\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recalculates a gestures size and re-scales it to the given database" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputGesture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GestureDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::NewProp_InputGesture = { "InputGesture", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventRecalculateGestureSize_Parms, InputGesture), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(0, nullptr) }; // 3645796078
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::NewProp_GestureDB = { "GestureDB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventRecalculateGestureSize_Parms, GestureDB), Z_Construct_UClass_UGesturesDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::NewProp_InputGesture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::NewProp_GestureDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, nullptr, "RecalculateGestureSize", nullptr, nullptr, Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::VRGestureComponent_eventRecalculateGestureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::VRGestureComponent_eventRecalculateGestureSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGestureComponent::execRecalculateGestureSize)
{
	P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_InputGesture);
	P_GET_OBJECT(UGesturesDatabase,Z_Param_GestureDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalculateGestureSize(Z_Param_Out_InputGesture,Z_Param_GestureDB);
	P_NATIVE_END;
}
// End Class UVRGestureComponent Function RecalculateGestureSize

// Begin Class UVRGestureComponent Function SaveRecording
struct Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics
{
	struct VRGestureComponent_eventSaveRecording_Parms
	{
		FVRGesture Recording;
		FString RecordingName;
		bool bScaleRecordingToDatabase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Saves a VRGesture to the database, if Scale To Database is true then it will scale the data\n" },
#endif
		{ "CPP_Default_bScaleRecordingToDatabase", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves a VRGesture to the database, if Scale To Database is true then it will scale the data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Recording;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordingName;
	static void NewProp_bScaleRecordingToDatabase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleRecordingToDatabase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_Recording = { "Recording", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventSaveRecording_Parms, Recording), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(0, nullptr) }; // 3645796078
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_RecordingName = { "RecordingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGestureComponent_eventSaveRecording_Parms, RecordingName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_bScaleRecordingToDatabase_SetBit(void* Obj)
{
	((VRGestureComponent_eventSaveRecording_Parms*)Obj)->bScaleRecordingToDatabase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_bScaleRecordingToDatabase = { "bScaleRecordingToDatabase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGestureComponent_eventSaveRecording_Parms), &Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_bScaleRecordingToDatabase_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_Recording,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_RecordingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::NewProp_bScaleRecordingToDatabase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGestureComponent, nullptr, "SaveRecording", nullptr, nullptr, Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::VRGestureComponent_eventSaveRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::VRGestureComponent_eventSaveRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGestureComponent_SaveRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGestureComponent_SaveRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGestureComponent::execSaveRecording)
{
	P_GET_STRUCT_REF(FVRGesture,Z_Param_Out_Recording);
	P_GET_PROPERTY(FStrProperty,Z_Param_RecordingName);
	P_GET_UBOOL(Z_Param_bScaleRecordingToDatabase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveRecording(Z_Param_Out_Recording,Z_Param_RecordingName,Z_Param_bScaleRecordingToDatabase);
	P_NATIVE_END;
}
// End Class UVRGestureComponent Function SaveRecording

// Begin Class UVRGestureComponent
void UVRGestureComponent::StaticRegisterNativesUVRGestureComponent()
{
	UClass* Class = UVRGestureComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginRecording", &UVRGestureComponent::execBeginRecording },
		{ "ClearRecording", &UVRGestureComponent::execClearRecording },
		{ "DrawDebugGesture", &UVRGestureComponent::execDrawDebugGesture },
		{ "EndRecording", &UVRGestureComponent::execEndRecording },
		{ "RecalculateGestureSize", &UVRGestureComponent::execRecalculateGestureSize },
		{ "SaveRecording", &UVRGestureComponent::execSaveRecording },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRGestureComponent);
UClass* Z_Construct_UClass_UVRGestureComponent_NoRegister()
{
	return UVRGestureComponent::StaticClass();
}
struct Z_Construct_UClass_UVRGestureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A scene component that can sample its positions to record / track VR gestures\n* Core code is from https://social.msdn.microsoft.com/Forums/en-US/4a428391-82df-445a-a867-557f284bd4b1/dynamic-time-warping-to-recognize-gestures?forum=kinectsdk\n* I would also like to acknowledge RuneBerg as he appears to have used the same core codebase and I discovered that halfway through implementing this\n* If this algorithm should not prove stable enough I will likely look into using a more complex and faster one in the future, I have several modifications\n* to the base DTW algorithm noted from a few research papers. I only implemented this one first as it was a single header file and the quickest to implement.\n*/" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VRGestureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scene component that can sample its positions to record / track VR gestures\nCore code is from https://social.msdn.microsoft.com/Forums/en-US/4a428391-82df-445a-a867-557f284bd4b1/dynamic-time-warping-to-recognize-gestures?forum=kinectsdk\nI would also like to acknowledge RuneBerg as he appears to have used the same core codebase and I discovered that halfway through implementing this\nIf this algorithm should not prove stable enough I will likely look into using a more complex and faster one in the future, I have several modifications\nto the base DTW algorithm noted from a few research papers. I only implemented this one first as it was a single header file and the quickest to implement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGestureDetected_Bind_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to use an object\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to use an object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GesturesDB_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Known sequences\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Known sequences" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SameSampleTolerance_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tolerance within we throw out duplicate samples\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tolerance within we throw out duplicate samples" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirroringHand_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If a gesture is set to match this value then detection will mirror the gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a gesture is set to match this value then detection will mirror the gesture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tolerance within we throw out duplicate samples\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tolerance within we throw out duplicate samples" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSplinesCurved_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should we draw splines curved or straight\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we draw splines curved or straight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGetGestureInWorldSpace_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If false will get the gesture in relative space instead\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false will get the gesture in relative space instead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMesh_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh to use when drawing splines\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh to use when drawing splines" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshScaler_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scaler to apply to the spline mesh components\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaler to apply to the spline mesh components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMaterial_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to use when drawing splines\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to use when drawing splines" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxSlope_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum vertical or horizontal steps in a row in the lookup table before throwing out a gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum vertical or horizontal steps in a row in the lookup table before throwing out a gesture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "VRGestures" },
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GestureLog_MetaData[] = {
		{ "Category", "VRGestures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Currently recording gesture\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGestureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently recording gesture" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGestureDetected_Bind;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GesturesDB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SameSampleTolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirroringHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MirroringHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static void NewProp_bDrawSplinesCurved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSplinesCurved;
	static void NewProp_bGetGestureInWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetGestureInWorldSpace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineMeshScaler;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxSlope;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GestureLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGestureComponent_BeginRecording, "BeginRecording" }, // 1737150959
		{ &Z_Construct_UFunction_UVRGestureComponent_ClearRecording, "ClearRecording" }, // 2537017553
		{ &Z_Construct_UFunction_UVRGestureComponent_DrawDebugGesture, "DrawDebugGesture" }, // 837007548
		{ &Z_Construct_UFunction_UVRGestureComponent_EndRecording, "EndRecording" }, // 2439970636
		{ &Z_Construct_UFunction_UVRGestureComponent_OnGestureDetected, "OnGestureDetected" }, // 2615097990
		{ &Z_Construct_UFunction_UVRGestureComponent_RecalculateGestureSize, "RecalculateGestureSize" }, // 2216248822
		{ &Z_Construct_UFunction_UVRGestureComponent_SaveRecording, "SaveRecording" }, // 1200622486
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGestureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_OnGestureDetected_Bind = { "OnGestureDetected_Bind", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, OnGestureDetected_Bind), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRGestureDetectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGestureDetected_Bind_MetaData), NewProp_OnGestureDetected_Bind_MetaData) }; // 296357092
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GesturesDB = { "GesturesDB", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, GesturesDB), Z_Construct_UClass_UGesturesDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GesturesDB_MetaData), NewProp_GesturesDB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SameSampleTolerance = { "SameSampleTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, SameSampleTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SameSampleTolerance_MetaData), NewProp_SameSampleTolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand = { "MirroringHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, MirroringHand), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureMirrorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirroringHand_MetaData), NewProp_MirroringHand_MetaData) }; // 36457936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, TargetCharacter), Z_Construct_UClass_AVRBaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCharacter_MetaData), NewProp_TargetCharacter_MetaData) };
void Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved_SetBit(void* Obj)
{
	((UVRGestureComponent*)Obj)->bDrawSplinesCurved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved = { "bDrawSplinesCurved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGestureComponent), &Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSplinesCurved_MetaData), NewProp_bDrawSplinesCurved_MetaData) };
void Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace_SetBit(void* Obj)
{
	((UVRGestureComponent*)Obj)->bGetGestureInWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace = { "bGetGestureInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGestureComponent), &Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGetGestureInWorldSpace_MetaData), NewProp_bGetGestureInWorldSpace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMesh = { "SplineMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, SplineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMesh_MetaData), NewProp_SplineMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMeshScaler = { "SplineMeshScaler", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, SplineMeshScaler), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMeshScaler_MetaData), NewProp_SplineMeshScaler_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMaterial = { "SplineMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, SplineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMaterial_MetaData), NewProp_SplineMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_maxSlope = { "maxSlope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, maxSlope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxSlope_MetaData), NewProp_maxSlope_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, CurrentState), Z_Construct_UEnum_VRExpansionPlugin_EVRGestureState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 468705647
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GestureLog = { "GestureLog", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGestureComponent, GestureLog), Z_Construct_UScriptStruct_FVRGesture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GestureLog_MetaData), NewProp_GestureLog_MetaData) }; // 3645796078
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGestureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_OnGestureDetected_Bind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GesturesDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SameSampleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_MirroringHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bDrawSplinesCurved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_bGetGestureInWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMeshScaler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_SplineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_maxSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGestureComponent_Statics::NewProp_GestureLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRGestureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRGestureComponent_Statics::ClassParams = {
	&UVRGestureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRGestureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGestureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRGestureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRGestureComponent()
{
	if (!Z_Registration_Info_UClass_UVRGestureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRGestureComponent.OuterSingleton, Z_Construct_UClass_UVRGestureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRGestureComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGestureComponent>()
{
	return UVRGestureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGestureComponent);
UVRGestureComponent::~UVRGestureComponent() {}
// End Class UVRGestureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRGestureState_StaticEnum, TEXT("EVRGestureState"), &Z_Registration_Info_UEnum_EVRGestureState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 468705647U) },
		{ EVRGestureMirrorMode_StaticEnum, TEXT("EVRGestureMirrorMode"), &Z_Registration_Info_UEnum_EVRGestureMirrorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 36457936U) },
		{ EVRGestureFlattenAxis_StaticEnum, TEXT("EVRGestureFlattenAxis"), &Z_Registration_Info_UEnum_EVRGestureFlattenAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2808336025U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVRGestureSettings::StaticStruct, Z_Construct_UScriptStruct_FVRGestureSettings_Statics::NewStructOps, TEXT("VRGestureSettings"), &Z_Registration_Info_UScriptStruct_VRGestureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRGestureSettings), 2241483993U) },
		{ FVRGesture::StaticStruct, Z_Construct_UScriptStruct_FVRGesture_Statics::NewStructOps, TEXT("VRGesture"), &Z_Registration_Info_UScriptStruct_VRGesture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRGesture), 3645796078U) },
		{ FVRGestureSplineDraw::StaticStruct, Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics::NewStructOps, TEXT("VRGestureSplineDraw"), &Z_Registration_Info_UScriptStruct_VRGestureSplineDraw, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRGestureSplineDraw), 257954022U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGesturesDatabase, UGesturesDatabase::StaticClass, TEXT("UGesturesDatabase"), &Z_Registration_Info_UClass_UGesturesDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGesturesDatabase), 3237082865U) },
		{ Z_Construct_UClass_UVRGestureComponent, UVRGestureComponent::StaticClass, TEXT("UVRGestureComponent"), &Z_Registration_Info_UClass_UVRGestureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRGestureComponent), 457589757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_14841856(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
