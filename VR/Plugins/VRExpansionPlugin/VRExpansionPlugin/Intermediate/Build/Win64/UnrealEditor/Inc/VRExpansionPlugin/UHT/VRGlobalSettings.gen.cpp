// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRGlobalSettings.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_GunTools.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_Melee.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGlobalSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGlobalSettings();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGlobalSettings_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPHitSurfaceProperties();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVirtualStockSettings();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
// End Cross Module References

// Begin ScriptStruct FBPVRControllerProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVRControllerProfile;
class UScriptStruct* FBPVRControllerProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRControllerProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVRControllerProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRControllerProfile, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRControllerProfile"));
	}
	return Z_Registration_Info_UScriptStruct_BPVRControllerProfile.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRControllerProfile>()
{
	return FBPVRControllerProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ControllerProfiles" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerName_MetaData[] = {
		{ "Category", "ControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of controller profile\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of controller profile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetTransform_MetaData[] = {
		{ "Category", "ControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset to use with this controller\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to use with this controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeperateHandOffsetTransforms_MetaData[] = {
		{ "Category", "ControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset to use with this controller\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to use with this controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetTransformRightHand_MetaData[] = {
		{ "Category", "ControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset to use with this controller\n" },
#endif
		{ "editcondition", "bUseSeperateHandOffsetTransforms" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset to use with this controller" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffsetTransform;
	static void NewProp_bUseSeperateHandOffsetTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeperateHandOffsetTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffsetTransformRightHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRControllerProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName = { "ControllerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRControllerProfile, ControllerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerName_MetaData), NewProp_ControllerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform = { "SocketOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRControllerProfile, SocketOffsetTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetTransform_MetaData), NewProp_SocketOffsetTransform_MetaData) }; // 3972615260
void Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_SetBit(void* Obj)
{
	((FBPVRControllerProfile*)Obj)->bUseSeperateHandOffsetTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms = { "bUseSeperateHandOffsetTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPVRControllerProfile), &Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSeperateHandOffsetTransforms_MetaData), NewProp_bUseSeperateHandOffsetTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand = { "SocketOffsetTransformRightHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRControllerProfile, SocketOffsetTransformRightHand), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetTransformRightHand_MetaData), NewProp_SocketOffsetTransformRightHand_MetaData) }; // 3972615260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_ControllerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_bUseSeperateHandOffsetTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewProp_SocketOffsetTransformRightHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"BPVRControllerProfile",
	Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::PropPointers),
	sizeof(FBPVRControllerProfile),
	alignof(FBPVRControllerProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPVRControllerProfile()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRControllerProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVRControllerProfile.InnerSingleton, Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPVRControllerProfile.InnerSingleton;
}
// End ScriptStruct FBPVRControllerProfile

// Begin Class UVRGlobalSettings Function AddControllerProfile
struct Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics
{
	struct VRGlobalSettings_eventAddControllerProfile_Parms
	{
		FBPVRControllerProfile NewProfile;
		bool bSaveOutToConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add a controller profile\n" },
#endif
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a controller profile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewProfile;
	static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_NewProfile = { "NewProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventAddControllerProfile_Parms, NewProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(0, nullptr) }; // 2232420908
void Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
{
	((VRGlobalSettings_eventAddControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig = { "bSaveOutToConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventAddControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_NewProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::NewProp_bSaveOutToConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "AddControllerProfile", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::VRGlobalSettings_eventAddControllerProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::VRGlobalSettings_eventAddControllerProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execAddControllerProfile)
{
	P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_NewProfile);
	P_GET_UBOOL(Z_Param_bSaveOutToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRGlobalSettings::AddControllerProfile(Z_Param_Out_NewProfile,Z_Param_bSaveOutToConfig);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function AddControllerProfile

// Begin Class UVRGlobalSettings Function AdjustTransformByControllerProfile
struct Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics
{
	struct VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms
	{
		FName OptionalControllerProfileName;
		FTransform SocketTransform;
		bool bIsRightHand;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adjust the transform of a socket for a particular controller model, if a name is not sent in, it will use the currently loaded one\n// If there is no currently loaded one, it will return the input transform as is.\n// If bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform\n" },
#endif
		{ "CPP_Default_bIsRightHand", "false" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adjust the transform of a socket for a particular controller model, if a name is not sent in, it will use the currently loaded one\nIf there is no currently loaded one, it will return the input transform as is.\nIf bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalControllerProfileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTransform;
	static void NewProp_bIsRightHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_OptionalControllerProfileName = { "OptionalControllerProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, OptionalControllerProfileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform = { "SocketTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, SocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTransform_MetaData), NewProp_SocketTransform_MetaData) };
void Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
{
	((VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms*)Obj)->bIsRightHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_OptionalControllerProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_SocketTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_bIsRightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "AdjustTransformByControllerProfile", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::VRGlobalSettings_eventAdjustTransformByControllerProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execAdjustTransformByControllerProfile)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_OptionalControllerProfileName);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform);
	P_GET_UBOOL(Z_Param_bIsRightHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByControllerProfile(Z_Param_OptionalControllerProfileName,Z_Param_Out_SocketTransform,Z_Param_bIsRightHand);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function AdjustTransformByControllerProfile

// Begin Class UVRGlobalSettings Function AdjustTransformByGivenControllerProfile
struct Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics
{
	struct VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms
	{
		FBPVRControllerProfile ControllerProfile;
		FTransform SocketTransform;
		bool bIsRightHand;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adjust the transform of a socket for a particular controller model\n// If there is no currently loaded one, it will return the input transform as is.\n// If bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform\n" },
#endif
		{ "CPP_Default_bIsRightHand", "false" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adjust the transform of a socket for a particular controller model\nIf there is no currently loaded one, it will return the input transform as is.\nIf bIsRightHand and the target profile uses seperate hand transforms it will use the right hand transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTransform;
	static void NewProp_bIsRightHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ControllerProfile = { "ControllerProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, ControllerProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(0, nullptr) }; // 2232420908
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform = { "SocketTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, SocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTransform_MetaData), NewProp_SocketTransform_MetaData) };
void Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand_SetBit(void* Obj)
{
	((VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms*)Obj)->bIsRightHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand = { "bIsRightHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ControllerProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_SocketTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_bIsRightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "AdjustTransformByGivenControllerProfile", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::VRGlobalSettings_eventAdjustTransformByGivenControllerProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execAdjustTransformByGivenControllerProfile)
{
	P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SocketTransform);
	P_GET_UBOOL(Z_Param_bIsRightHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UVRGlobalSettings::AdjustTransformByGivenControllerProfile(Z_Param_Out_ControllerProfile,Z_Param_Out_SocketTransform,Z_Param_bIsRightHand);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function AdjustTransformByGivenControllerProfile

// Begin Class UVRGlobalSettings Function DeleteControllerProfile
struct Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics
{
	struct VRGlobalSettings_eventDeleteControllerProfile_Parms
	{
		FName ControllerProfileName;
		bool bSaveOutToConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overwrite a controller profile\n" },
#endif
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overwrite a controller profile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
	static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_ControllerProfileName = { "ControllerProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventDeleteControllerProfile_Parms, ControllerProfileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
{
	((VRGlobalSettings_eventDeleteControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig = { "bSaveOutToConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventDeleteControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_ControllerProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::NewProp_bSaveOutToConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "DeleteControllerProfile", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::VRGlobalSettings_eventDeleteControllerProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::VRGlobalSettings_eventDeleteControllerProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execDeleteControllerProfile)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControllerProfileName);
	P_GET_UBOOL(Z_Param_bSaveOutToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRGlobalSettings::DeleteControllerProfile(Z_Param_ControllerProfileName,Z_Param_bSaveOutToConfig);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function DeleteControllerProfile

// Begin Class UVRGlobalSettings Function GetControllerProfile
struct Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics
{
	struct VRGlobalSettings_eventGetControllerProfile_Parms
	{
		FName ControllerProfileName;
		FBPVRControllerProfile OutProfile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a controller profile by name\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a controller profile by name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutProfile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ControllerProfileName = { "ControllerProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfile_Parms, ControllerProfileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_OutProfile = { "OutProfile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfile_Parms, OutProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(0, nullptr) }; // 2232420908
void Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGlobalSettings_eventGetControllerProfile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventGetControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ControllerProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_OutProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetControllerProfile", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::VRGlobalSettings_eventGetControllerProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::VRGlobalSettings_eventGetControllerProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execGetControllerProfile)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControllerProfileName);
	P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OutProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRGlobalSettings::GetControllerProfile(Z_Param_ControllerProfileName,Z_Param_Out_OutProfile);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function GetControllerProfile

// Begin Class UVRGlobalSettings Function GetControllerProfiles
struct Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics
{
	struct VRGlobalSettings_eventGetControllerProfiles_Parms
	{
		TArray<FBPVRControllerProfile> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get array of controller profiles\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get array of controller profiles" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(0, nullptr) }; // 2232420908
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetControllerProfiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2232420908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetControllerProfiles", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::VRGlobalSettings_eventGetControllerProfiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::VRGlobalSettings_eventGetControllerProfiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execGetControllerProfiles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FBPVRControllerProfile>*)Z_Param__Result=UVRGlobalSettings::GetControllerProfiles();
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function GetControllerProfiles

// Begin Class UVRGlobalSettings Function GetCurrentProfile
struct Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics
{
	struct VRGlobalSettings_eventGetCurrentProfile_Parms
	{
		bool bHadLoadedProfile;
		FBPVRControllerProfile ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get name of currently loaded profile (if one is loaded)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get name of currently loaded profile (if one is loaded)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bHadLoadedProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadLoadedProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile_SetBit(void* Obj)
{
	((VRGlobalSettings_eventGetCurrentProfile_Parms*)Obj)->bHadLoadedProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile = { "bHadLoadedProfile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventGetCurrentProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetCurrentProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(0, nullptr) }; // 2232420908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_bHadLoadedProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetCurrentProfile", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::VRGlobalSettings_eventGetCurrentProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::VRGlobalSettings_eventGetCurrentProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execGetCurrentProfile)
{
	P_GET_UBOOL_REF(Z_Param_Out_bHadLoadedProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBPVRControllerProfile*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfile(Z_Param_Out_bHadLoadedProfile);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function GetCurrentProfile

// Begin Class UVRGlobalSettings Function GetCurrentProfileName
struct Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics
{
	struct VRGlobalSettings_eventGetCurrentProfileName_Parms
	{
		bool bHadLoadedProfile;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get name of currently loaded profile (if one is loaded)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get name of currently loaded profile (if one is loaded)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bHadLoadedProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadLoadedProfile;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile_SetBit(void* Obj)
{
	((VRGlobalSettings_eventGetCurrentProfileName_Parms*)Obj)->bHadLoadedProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile = { "bHadLoadedProfile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventGetCurrentProfileName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetCurrentProfileName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_bHadLoadedProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetCurrentProfileName", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::VRGlobalSettings_eventGetCurrentProfileName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::VRGlobalSettings_eventGetCurrentProfileName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execGetCurrentProfileName)
{
	P_GET_UBOOL_REF(Z_Param_Out_bHadLoadedProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UVRGlobalSettings::GetCurrentProfileName(Z_Param_Out_bHadLoadedProfile);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function GetCurrentProfileName

// Begin Class UVRGlobalSettings Function GetMeleeSurfaceGlobalSettings
struct Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics
{
	struct VRGlobalSettings_eventGetMeleeSurfaceGlobalSettings_Parms
	{
		TArray<FBPHitSurfaceProperties> OutMeleeSurfaceSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeleeSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the values of the virtual stock settings\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the values of the virtual stock settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMeleeSurfaceSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMeleeSurfaceSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::NewProp_OutMeleeSurfaceSettings_Inner = { "OutMeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(0, nullptr) }; // 2752159392
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::NewProp_OutMeleeSurfaceSettings = { "OutMeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetMeleeSurfaceGlobalSettings_Parms, OutMeleeSurfaceSettings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2752159392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::NewProp_OutMeleeSurfaceSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::NewProp_OutMeleeSurfaceSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetMeleeSurfaceGlobalSettings", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::VRGlobalSettings_eventGetMeleeSurfaceGlobalSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::VRGlobalSettings_eventGetMeleeSurfaceGlobalSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execGetMeleeSurfaceGlobalSettings)
{
	P_GET_TARRAY_REF(FBPHitSurfaceProperties,Z_Param_Out_OutMeleeSurfaceSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRGlobalSettings::GetMeleeSurfaceGlobalSettings(Z_Param_Out_OutMeleeSurfaceSettings);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function GetMeleeSurfaceGlobalSettings

// Begin Class UVRGlobalSettings Function GetVirtualStockGlobalSettings
struct Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics
{
	struct VRGlobalSettings_eventGetVirtualStockGlobalSettings_Parms
	{
		FBPVirtualStockSettings OutVirtualStockSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GunSettings|VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the values of the virtual stock settings\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the values of the virtual stock settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutVirtualStockSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::NewProp_OutVirtualStockSettings = { "OutVirtualStockSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventGetVirtualStockGlobalSettings_Parms, OutVirtualStockSettings), Z_Construct_UScriptStruct_FBPVirtualStockSettings, METADATA_PARAMS(0, nullptr) }; // 3162766526
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::NewProp_OutVirtualStockSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "GetVirtualStockGlobalSettings", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::VRGlobalSettings_eventGetVirtualStockGlobalSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::VRGlobalSettings_eventGetVirtualStockGlobalSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execGetVirtualStockGlobalSettings)
{
	P_GET_STRUCT_REF(FBPVirtualStockSettings,Z_Param_Out_OutVirtualStockSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRGlobalSettings::GetVirtualStockGlobalSettings(Z_Param_Out_OutVirtualStockSettings);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function GetVirtualStockGlobalSettings

// Begin Class UVRGlobalSettings Function IsGlobalLerpEnabled
struct Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics
{
	struct VRGlobalSettings_eventIsGlobalLerpEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GlobalLerpToHand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Alter the values of the virtual stock settings and save them out\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alter the values of the virtual stock settings and save them out" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGlobalSettings_eventIsGlobalLerpEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventIsGlobalLerpEnabled_Parms), &Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "IsGlobalLerpEnabled", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::VRGlobalSettings_eventIsGlobalLerpEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::VRGlobalSettings_eventIsGlobalLerpEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execIsGlobalLerpEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRGlobalSettings::IsGlobalLerpEnabled();
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function IsGlobalLerpEnabled

// Begin Class UVRGlobalSettings Function LoadControllerProfile
struct Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics
{
	struct VRGlobalSettings_eventLoadControllerProfile_Parms
	{
		FBPVRControllerProfile ControllerProfile;
		bool bSetAsCurrentProfile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Load a controller profile\n// Action / Axis mappings overwrite ones with the same action/axis name in the input settings.\n// If you have an action/axis override but don't assign buttons to it then it will just delete it.\n// This can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\n// For when just changing the buttons isn't good enough\n// If bSetDefaults is true, will set this as the currently loaded profile\n// Otherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)\n// AS OF 4.25 AXIS and ACTION mappings do nothing, will be deleting around 4.26 #TODO: Delete around 4.26\n" },
#endif
		{ "CPP_Default_bSetAsCurrentProfile", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load a controller profile\nAction / Axis mappings overwrite ones with the same action/axis name in the input settings.\nIf you have an action/axis override but don't assign buttons to it then it will just delete it.\nThis can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\nFor when just changing the buttons isn't good enough\nIf bSetDefaults is true, will set this as the currently loaded profile\nOtherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)\nAS OF 4.25 AXIS and ACTION mappings do nothing, will be deleting around 4.26 #TODO: Delete around 4.26" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerProfile;
	static void NewProp_bSetAsCurrentProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile = { "ControllerProfile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventLoadControllerProfile_Parms, ControllerProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerProfile_MetaData), NewProp_ControllerProfile_MetaData) }; // 2232420908
void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile_SetBit(void* Obj)
{
	((VRGlobalSettings_eventLoadControllerProfile_Parms*)Obj)->bSetAsCurrentProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile = { "bSetAsCurrentProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGlobalSettings_eventLoadControllerProfile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventLoadControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ControllerProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_bSetAsCurrentProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "LoadControllerProfile", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::VRGlobalSettings_eventLoadControllerProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::VRGlobalSettings_eventLoadControllerProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execLoadControllerProfile)
{
	P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_ControllerProfile);
	P_GET_UBOOL(Z_Param_bSetAsCurrentProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfile(Z_Param_Out_ControllerProfile,Z_Param_bSetAsCurrentProfile);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function LoadControllerProfile

// Begin Class UVRGlobalSettings Function LoadControllerProfileByName
struct Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics
{
	struct VRGlobalSettings_eventLoadControllerProfileByName_Parms
	{
		FName ControllerProfileName;
		bool bSetAsCurrentProfile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Load a controller profile by name\n// Action / Axis mappings overwrite ones with the same action/axis name in the input settings.\n// If you have an action/axis override but don't assign buttons to it then it will just delete it.\n// This can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\n// For when just changing the buttons isn't good enough\n// If bSetDefaults is true, will set this as the currently loaded profile\n// Otherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)\n" },
#endif
		{ "CPP_Default_bSetAsCurrentProfile", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load a controller profile by name\nAction / Axis mappings overwrite ones with the same action/axis name in the input settings.\nIf you have an action/axis override but don't assign buttons to it then it will just delete it.\nThis can be useful for removing actions and using multiple actions (IE: Grip Touch, Grip Vive actions)\nFor when just changing the buttons isn't good enough\nIf bSetDefaults is true, will set this as the currently loaded profile\nOtherwise will just load it (useful for Left/Right handed profile additions and the like to have it false)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerProfileName;
	static void NewProp_bSetAsCurrentProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ControllerProfileName = { "ControllerProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventLoadControllerProfileByName_Parms, ControllerProfileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile_SetBit(void* Obj)
{
	((VRGlobalSettings_eventLoadControllerProfileByName_Parms*)Obj)->bSetAsCurrentProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile = { "bSetAsCurrentProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGlobalSettings_eventLoadControllerProfileByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventLoadControllerProfileByName_Parms), &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ControllerProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_bSetAsCurrentProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "LoadControllerProfileByName", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::VRGlobalSettings_eventLoadControllerProfileByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::VRGlobalSettings_eventLoadControllerProfileByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execLoadControllerProfileByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ControllerProfileName);
	P_GET_UBOOL(Z_Param_bSetAsCurrentProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRGlobalSettings::LoadControllerProfileByName(Z_Param_ControllerProfileName,Z_Param_bSetAsCurrentProfile);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function LoadControllerProfileByName

// Begin Class UVRGlobalSettings Function OverwriteControllerProfile
struct Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics
{
	struct VRGlobalSettings_eventOverwriteControllerProfile_Parms
	{
		FBPVRControllerProfile OverwritingProfile;
		bool bSaveOutToConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overwrite a controller profile\n" },
#endif
		{ "CPP_Default_bSaveOutToConfig", "true" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overwrite a controller profile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverwritingProfile;
	static void NewProp_bSaveOutToConfig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveOutToConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_OverwritingProfile = { "OverwritingProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventOverwriteControllerProfile_Parms, OverwritingProfile), Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(0, nullptr) }; // 2232420908
void Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit(void* Obj)
{
	((VRGlobalSettings_eventOverwriteControllerProfile_Parms*)Obj)->bSaveOutToConfig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig = { "bSaveOutToConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGlobalSettings_eventOverwriteControllerProfile_Parms), &Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_OverwritingProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::NewProp_bSaveOutToConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "OverwriteControllerProfile", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::VRGlobalSettings_eventOverwriteControllerProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::VRGlobalSettings_eventOverwriteControllerProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execOverwriteControllerProfile)
{
	P_GET_STRUCT_REF(FBPVRControllerProfile,Z_Param_Out_OverwritingProfile);
	P_GET_UBOOL(Z_Param_bSaveOutToConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRGlobalSettings::OverwriteControllerProfile(Z_Param_Out_OverwritingProfile,Z_Param_bSaveOutToConfig);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function OverwriteControllerProfile

// Begin Class UVRGlobalSettings Function SaveControllerProfiles
struct Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRControllerProfiles|Operations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Saved the VRGlobalSettings out to its config file, will include any alterations that you made to the profile\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saved the VRGlobalSettings out to its config file, will include any alterations that you made to the profile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "SaveControllerProfiles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execSaveControllerProfiles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRGlobalSettings::SaveControllerProfiles();
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function SaveControllerProfiles

// Begin Class UVRGlobalSettings Function SaveVirtualStockGlobalSettings
struct Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics
{
	struct VRGlobalSettings_eventSaveVirtualStockGlobalSettings_Parms
	{
		FBPVirtualStockSettings NewVirtualStockSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GunSettings|VirtualStock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Alter the values of the virtual stock settings and save them out\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alter the values of the virtual stock settings and save them out" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVirtualStockSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::NewProp_NewVirtualStockSettings = { "NewVirtualStockSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGlobalSettings_eventSaveVirtualStockGlobalSettings_Parms, NewVirtualStockSettings), Z_Construct_UScriptStruct_FBPVirtualStockSettings, METADATA_PARAMS(0, nullptr) }; // 3162766526
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::NewProp_NewVirtualStockSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGlobalSettings, nullptr, "SaveVirtualStockGlobalSettings", nullptr, nullptr, Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::VRGlobalSettings_eventSaveVirtualStockGlobalSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::VRGlobalSettings_eventSaveVirtualStockGlobalSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRGlobalSettings::execSaveVirtualStockGlobalSettings)
{
	P_GET_STRUCT(FBPVirtualStockSettings,Z_Param_NewVirtualStockSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRGlobalSettings::SaveVirtualStockGlobalSettings(Z_Param_NewVirtualStockSettings);
	P_NATIVE_END;
}
// End Class UVRGlobalSettings Function SaveVirtualStockGlobalSettings

// Begin Class UVRGlobalSettings
void UVRGlobalSettings::StaticRegisterNativesUVRGlobalSettings()
{
	UClass* Class = UVRGlobalSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddControllerProfile", &UVRGlobalSettings::execAddControllerProfile },
		{ "AdjustTransformByControllerProfile", &UVRGlobalSettings::execAdjustTransformByControllerProfile },
		{ "AdjustTransformByGivenControllerProfile", &UVRGlobalSettings::execAdjustTransformByGivenControllerProfile },
		{ "DeleteControllerProfile", &UVRGlobalSettings::execDeleteControllerProfile },
		{ "GetControllerProfile", &UVRGlobalSettings::execGetControllerProfile },
		{ "GetControllerProfiles", &UVRGlobalSettings::execGetControllerProfiles },
		{ "GetCurrentProfile", &UVRGlobalSettings::execGetCurrentProfile },
		{ "GetCurrentProfileName", &UVRGlobalSettings::execGetCurrentProfileName },
		{ "GetMeleeSurfaceGlobalSettings", &UVRGlobalSettings::execGetMeleeSurfaceGlobalSettings },
		{ "GetVirtualStockGlobalSettings", &UVRGlobalSettings::execGetVirtualStockGlobalSettings },
		{ "IsGlobalLerpEnabled", &UVRGlobalSettings::execIsGlobalLerpEnabled },
		{ "LoadControllerProfile", &UVRGlobalSettings::execLoadControllerProfile },
		{ "LoadControllerProfileByName", &UVRGlobalSettings::execLoadControllerProfileByName },
		{ "OverwriteControllerProfile", &UVRGlobalSettings::execOverwriteControllerProfile },
		{ "SaveControllerProfiles", &UVRGlobalSettings::execSaveControllerProfiles },
		{ "SaveVirtualStockGlobalSettings", &UVRGlobalSettings::execSaveVirtualStockGlobalSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRGlobalSettings);
UClass* Z_Construct_UClass_UVRGlobalSettings_NoRegister()
{
	return UVRGlobalSettings::StaticClass();
}
struct Z_Construct_UClass_UVRGlobalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VRGlobalSettings.h" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGrippableCharacterMeshComponentClass_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The skeletal mesh component class to use for grippable characters\n// If you set this to none it will fall back to the default grippable class so that it doesn't brick your project\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The skeletal mesh component class to use for grippable characters\nIf you set this to none it will fall back to the default grippable class so that it doesn't brick your project" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCollisionModificationForCollisionIgnore_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionIgnore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will use contact modification for the collision ignore subsystem\n// Its more expensive but works with non simulating pairs\n// #WARNING: Don't use yet EXPERIMENTAL\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will use contact modification for the collision ignore subsystem\nIts more expensive but works with non simulating pairs\n#WARNING: Don't use yet EXPERIMENTAL" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionIgnoreSubsystemUpdateRate_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionIgnore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of updates a second to use for the collision cleanup checks\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of updates a second to use for the collision cleanup checks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseChaosTranslationScalers_MetaData[] = {
		{ "Category", "ChaosPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether we should use the physx to chaos translation scalers or not\n// This should be off on native chaos projects that have been set with the correct stiffness and damping settings already\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether we should use the physx to chaos translation scalers or not\nThis should be off on native chaos projects that have been set with the correct stiffness and damping settings already" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetEngineChaosScalers_MetaData[] = {
		{ "Category", "ChaosPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will also set the engines chaos scalers as well to equal our overrides\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will also set the engines chaos scalers as well to equal our overrides" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveStiffnessScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraint drives when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraint drives when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveDampingScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraint drives when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraint drives when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveStiffnessScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraint drives when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraint drives when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveDampingScale_MetaData[] = {
		{ "Category", "ChaosPhysics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraint drives when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraint drives when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointStiffness_MetaData[] = {
		{ "Category", "ChaosPhysics|Constraints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hard joint stiffness\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hard joint stiffness" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftLinearStiffnessScale_MetaData[] = {
		{ "Category", "ChaosPhysics|Constraints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraints when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraints when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftLinearDampingScale_MetaData[] = {
		{ "Category", "ChaosPhysics|Constraints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraints when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraints when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftAngularStiffnessScale_MetaData[] = {
		{ "Category", "ChaosPhysics|Constraints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraints when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraints when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftAngularDampingScale_MetaData[] = {
		{ "Category", "ChaosPhysics|Constraints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraints when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraints when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointLinearBreakScale_MetaData[] = {
		{ "Category", "ChaosPhysics|Constraints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraints when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraints when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointAngularBreakScale_MetaData[] = {
		{ "Category", "ChaosPhysics|Constraints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A scaler to apply to constraints when chaos is active\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A scaler to apply to constraints when chaos is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLerpHybridWithSweepGrips_MetaData[] = {
		{ "Category", "HybridWithSweepLerp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If we should lerp hybrid with sweep grips out of collision\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we should lerp hybrid with sweep grips out of collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyLerpHybridRotation_MetaData[] = {
		{ "Category", "HybridWithSweepLerp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we only lerp the rotation of hybrid grips\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we only lerp the rotation of hybrid grips" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHybridWithSweepUseDistanceBasedLerp_MetaData[] = {
		{ "Category", "HybridWithSweepLerp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we calculate a speed off of the lerp duration and TInterp using it\n// The Hybrid with sweep lerp duration then is used to divide 1.0f (x10) to get the speed (lower duration = faster movement)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we calculate a speed off of the lerp duration and TInterp using it\nThe Hybrid with sweep lerp duration then is used to divide 1.0f (x10) to get the speed (lower duration = faster movement)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HybridWithSweepLerpDuration_MetaData[] = {
		{ "Category", "HybridWithSweepLerp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Duration that the typical lerp takes, for the distance based lerp this is turned into a speed value based off of 1.0f / it\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration that the typical lerp takes, for the distance based lerp this is turned into a speed value based off of 1.0f / it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGlobalLerpToHand_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipLerpToHandIfHeld_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceForLerp_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the initial grip distance is closer than this value then the lerping will not be performed.\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the initial grip distance is closer than this value then the lerping will not be performed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpDuration_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How many seconds the lerp should take\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds the lerp should take" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedForLerp_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The minimum speed (in UU per second) that that the lerp should have across the initial grip distance\n// Will speed the LerpSpeed up to try and maintain this initial speed if required\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum speed (in UU per second) that that the lerp should have across the initial grip distance\nWill speed the LerpSpeed up to try and maintain this initial speed if required" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedForLerp_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum speed (in UU per second) that the lerp should have across the initial grip distance\n// Will slow the LerpSpeed down to try and maintain this initial speed if required\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum speed (in UU per second) that the lerp should have across the initial grip distance\nWill slow the LerpSpeed down to try and maintain this initial speed if required" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpInterpolationMode_MetaData[] = {
		{ "Category", "GlobalLerpToHand" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurve_MetaData[] = {
		{ "Category", "GlobalLerpToHand|Curve" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to use a curve map to map the lerp to\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use a curve map to map the lerp to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalCurveToFollow_MetaData[] = {
		{ "Category", "GlobalLerpToHand|Curve" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The curve to follow when using a curve map, only uses from 0.0 - 1.0 of the curve timeline and maps it across the entire duration\n" },
#endif
		{ "editcondition", "bUseCurve" },
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve to follow when using a curve map, only uses from 0.0 - 1.0 of the curve timeline and maps it across the entire duration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeSurfaceSettings_MetaData[] = {
		{ "Category", "MeleeSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of surfaces and their properties for the melee script\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of surfaces and their properties for the melee script" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualStockSettings_MetaData[] = {
		{ "Category", "GunSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default global virtual stock settings for the gun script\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default global virtual stock settings for the gun script" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneEuroMinCutoff_MetaData[] = {
		{ "Category", "GunSettings|Secondary Grip 1Euro Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneEuroCutoffSlope_MetaData[] = {
		{ "Category", "GunSettings|Secondary Grip 1Euro Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneEuroDeltaCutoff_MetaData[] = {
		{ "Category", "GunSettings|Secondary Grip 1Euro Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setting to use for the OneEuro smoothing low pass filter when double gripping something held with a hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerProfiles_MetaData[] = {
		{ "Category", "ControllerProfiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controller profiles to store related information on a per profile basis\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGlobalSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controller profiles to store related information on a per profile basis" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultGrippableCharacterMeshComponentClass;
	static void NewProp_bUseCollisionModificationForCollisionIgnore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCollisionModificationForCollisionIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionIgnoreSubsystemUpdateRate;
	static void NewProp_bUseChaosTranslationScalers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseChaosTranslationScalers;
	static void NewProp_bSetEngineChaosScalers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetEngineChaosScalers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDriveStiffnessScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDriveDampingScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDriveStiffnessScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDriveDampingScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JointStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftLinearStiffnessScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftLinearDampingScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftAngularStiffnessScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftAngularDampingScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JointLinearBreakScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JointAngularBreakScale;
	static void NewProp_bLerpHybridWithSweepGrips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLerpHybridWithSweepGrips;
	static void NewProp_bOnlyLerpHybridRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyLerpHybridRotation;
	static void NewProp_bHybridWithSweepUseDistanceBasedLerp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHybridWithSweepUseDistanceBasedLerp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HybridWithSweepLerpDuration;
	static void NewProp_bUseGlobalLerpToHand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalLerpToHand;
	static void NewProp_bSkipLerpToHandIfHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipLerpToHandIfHeld;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceForLerp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedForLerp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedForLerp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LerpInterpolationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LerpInterpolationMode;
	static void NewProp_bUseCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalCurveToFollow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeSurfaceSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeleeSurfaceSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualStockSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OneEuroMinCutoff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OneEuroCutoffSlope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OneEuroDeltaCutoff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControllerProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControllerProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGlobalSettings_AddControllerProfile, "AddControllerProfile" }, // 1481526155
		{ &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByControllerProfile, "AdjustTransformByControllerProfile" }, // 1502391547
		{ &Z_Construct_UFunction_UVRGlobalSettings_AdjustTransformByGivenControllerProfile, "AdjustTransformByGivenControllerProfile" }, // 2581241372
		{ &Z_Construct_UFunction_UVRGlobalSettings_DeleteControllerProfile, "DeleteControllerProfile" }, // 538448128
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfile, "GetControllerProfile" }, // 2983082153
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetControllerProfiles, "GetControllerProfiles" }, // 2563870865
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfile, "GetCurrentProfile" }, // 1509702164
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetCurrentProfileName, "GetCurrentProfileName" }, // 913562525
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetMeleeSurfaceGlobalSettings, "GetMeleeSurfaceGlobalSettings" }, // 845174123
		{ &Z_Construct_UFunction_UVRGlobalSettings_GetVirtualStockGlobalSettings, "GetVirtualStockGlobalSettings" }, // 839350980
		{ &Z_Construct_UFunction_UVRGlobalSettings_IsGlobalLerpEnabled, "IsGlobalLerpEnabled" }, // 3851761306
		{ &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfile, "LoadControllerProfile" }, // 987247704
		{ &Z_Construct_UFunction_UVRGlobalSettings_LoadControllerProfileByName, "LoadControllerProfileByName" }, // 536220819
		{ &Z_Construct_UFunction_UVRGlobalSettings_OverwriteControllerProfile, "OverwriteControllerProfile" }, // 1736900060
		{ &Z_Construct_UFunction_UVRGlobalSettings_SaveControllerProfiles, "SaveControllerProfiles" }, // 2889025485
		{ &Z_Construct_UFunction_UVRGlobalSettings_SaveVirtualStockGlobalSettings, "SaveVirtualStockGlobalSettings" }, // 1968144386
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGlobalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_DefaultGrippableCharacterMeshComponentClass = { "DefaultGrippableCharacterMeshComponentClass", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, DefaultGrippableCharacterMeshComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGrippableCharacterMeshComponentClass_MetaData), NewProp_DefaultGrippableCharacterMeshComponentClass_MetaData) };
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCollisionModificationForCollisionIgnore_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bUseCollisionModificationForCollisionIgnore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCollisionModificationForCollisionIgnore = { "bUseCollisionModificationForCollisionIgnore", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCollisionModificationForCollisionIgnore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCollisionModificationForCollisionIgnore_MetaData), NewProp_bUseCollisionModificationForCollisionIgnore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_CollisionIgnoreSubsystemUpdateRate = { "CollisionIgnoreSubsystemUpdateRate", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, CollisionIgnoreSubsystemUpdateRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionIgnoreSubsystemUpdateRate_MetaData), NewProp_CollisionIgnoreSubsystemUpdateRate_MetaData) };
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseChaosTranslationScalers_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bUseChaosTranslationScalers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseChaosTranslationScalers = { "bUseChaosTranslationScalers", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseChaosTranslationScalers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseChaosTranslationScalers_MetaData), NewProp_bUseChaosTranslationScalers_MetaData) };
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bSetEngineChaosScalers_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bSetEngineChaosScalers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bSetEngineChaosScalers = { "bSetEngineChaosScalers", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bSetEngineChaosScalers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetEngineChaosScalers_MetaData), NewProp_bSetEngineChaosScalers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveStiffnessScale = { "LinearDriveStiffnessScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, LinearDriveStiffnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveStiffnessScale_MetaData), NewProp_LinearDriveStiffnessScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveDampingScale = { "LinearDriveDampingScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, LinearDriveDampingScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDriveDampingScale_MetaData), NewProp_LinearDriveDampingScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveStiffnessScale = { "AngularDriveStiffnessScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, AngularDriveStiffnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveStiffnessScale_MetaData), NewProp_AngularDriveStiffnessScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveDampingScale = { "AngularDriveDampingScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, AngularDriveDampingScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDriveDampingScale_MetaData), NewProp_AngularDriveDampingScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_JointStiffness = { "JointStiffness", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, JointStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointStiffness_MetaData), NewProp_JointStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_SoftLinearStiffnessScale = { "SoftLinearStiffnessScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, SoftLinearStiffnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftLinearStiffnessScale_MetaData), NewProp_SoftLinearStiffnessScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_SoftLinearDampingScale = { "SoftLinearDampingScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, SoftLinearDampingScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftLinearDampingScale_MetaData), NewProp_SoftLinearDampingScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_SoftAngularStiffnessScale = { "SoftAngularStiffnessScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, SoftAngularStiffnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftAngularStiffnessScale_MetaData), NewProp_SoftAngularStiffnessScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_SoftAngularDampingScale = { "SoftAngularDampingScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, SoftAngularDampingScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftAngularDampingScale_MetaData), NewProp_SoftAngularDampingScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_JointLinearBreakScale = { "JointLinearBreakScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, JointLinearBreakScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointLinearBreakScale_MetaData), NewProp_JointLinearBreakScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_JointAngularBreakScale = { "JointAngularBreakScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, JointAngularBreakScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointAngularBreakScale_MetaData), NewProp_JointAngularBreakScale_MetaData) };
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bLerpHybridWithSweepGrips_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bLerpHybridWithSweepGrips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bLerpHybridWithSweepGrips = { "bLerpHybridWithSweepGrips", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bLerpHybridWithSweepGrips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLerpHybridWithSweepGrips_MetaData), NewProp_bLerpHybridWithSweepGrips_MetaData) };
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bOnlyLerpHybridRotation_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bOnlyLerpHybridRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bOnlyLerpHybridRotation = { "bOnlyLerpHybridRotation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bOnlyLerpHybridRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyLerpHybridRotation_MetaData), NewProp_bOnlyLerpHybridRotation_MetaData) };
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bHybridWithSweepUseDistanceBasedLerp_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bHybridWithSweepUseDistanceBasedLerp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bHybridWithSweepUseDistanceBasedLerp = { "bHybridWithSweepUseDistanceBasedLerp", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bHybridWithSweepUseDistanceBasedLerp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHybridWithSweepUseDistanceBasedLerp_MetaData), NewProp_bHybridWithSweepUseDistanceBasedLerp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_HybridWithSweepLerpDuration = { "HybridWithSweepLerpDuration", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, HybridWithSweepLerpDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HybridWithSweepLerpDuration_MetaData), NewProp_HybridWithSweepLerpDuration_MetaData) };
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bUseGlobalLerpToHand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand = { "bUseGlobalLerpToHand", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGlobalLerpToHand_MetaData), NewProp_bUseGlobalLerpToHand_MetaData) };
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bSkipLerpToHandIfHeld_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bSkipLerpToHandIfHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bSkipLerpToHandIfHeld = { "bSkipLerpToHandIfHeld", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bSkipLerpToHandIfHeld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipLerpToHandIfHeld_MetaData), NewProp_bSkipLerpToHandIfHeld_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinDistanceForLerp = { "MinDistanceForLerp", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, MinDistanceForLerp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceForLerp_MetaData), NewProp_MinDistanceForLerp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpDuration = { "LerpDuration", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, LerpDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpDuration_MetaData), NewProp_LerpDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinSpeedForLerp = { "MinSpeedForLerp", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, MinSpeedForLerp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeedForLerp_MetaData), NewProp_MinSpeedForLerp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxSpeedForLerp = { "MaxSpeedForLerp", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, MaxSpeedForLerp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedForLerp_MetaData), NewProp_MaxSpeedForLerp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode = { "LerpInterpolationMode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, LerpInterpolationMode), Z_Construct_UEnum_VRExpansionPlugin_EVRLerpInterpolationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpInterpolationMode_MetaData), NewProp_LerpInterpolationMode_MetaData) }; // 1207162544
void Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve_SetBit(void* Obj)
{
	((UVRGlobalSettings*)Obj)->bUseCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve = { "bUseCurve", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRGlobalSettings), &Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCurve_MetaData), NewProp_bUseCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OptionalCurveToFollow = { "OptionalCurveToFollow", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, OptionalCurveToFollow), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalCurveToFollow_MetaData), NewProp_OptionalCurveToFollow_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings_Inner = { "MeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPHitSurfaceProperties, METADATA_PARAMS(0, nullptr) }; // 2752159392
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings = { "MeleeSurfaceSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, MeleeSurfaceSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeSurfaceSettings_MetaData), NewProp_MeleeSurfaceSettings_MetaData) }; // 2752159392
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_VirtualStockSettings = { "VirtualStockSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, VirtualStockSettings), Z_Construct_UScriptStruct_FBPVirtualStockSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualStockSettings_MetaData), NewProp_VirtualStockSettings_MetaData) }; // 3162766526
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff = { "OneEuroMinCutoff", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, OneEuroMinCutoff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneEuroMinCutoff_MetaData), NewProp_OneEuroMinCutoff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope = { "OneEuroCutoffSlope", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, OneEuroCutoffSlope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneEuroCutoffSlope_MetaData), NewProp_OneEuroCutoffSlope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff = { "OneEuroDeltaCutoff", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, OneEuroDeltaCutoff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneEuroDeltaCutoff_MetaData), NewProp_OneEuroDeltaCutoff_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_Inner = { "ControllerProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPVRControllerProfile, METADATA_PARAMS(0, nullptr) }; // 2232420908
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles = { "ControllerProfiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRGlobalSettings, ControllerProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerProfiles_MetaData), NewProp_ControllerProfiles_MetaData) }; // 2232420908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_DefaultGrippableCharacterMeshComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCollisionModificationForCollisionIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_CollisionIgnoreSubsystemUpdateRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseChaosTranslationScalers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bSetEngineChaosScalers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveStiffnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LinearDriveDampingScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveStiffnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_AngularDriveDampingScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_JointStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_SoftLinearStiffnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_SoftLinearDampingScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_SoftAngularStiffnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_SoftAngularDampingScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_JointLinearBreakScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_JointAngularBreakScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bLerpHybridWithSweepGrips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bOnlyLerpHybridRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bHybridWithSweepUseDistanceBasedLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_HybridWithSweepLerpDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseGlobalLerpToHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bSkipLerpToHandIfHeld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinDistanceForLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MinSpeedForLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MaxSpeedForLerp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_LerpInterpolationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_bUseCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OptionalCurveToFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_MeleeSurfaceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_VirtualStockSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroMinCutoff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroCutoffSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_OneEuroDeltaCutoff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGlobalSettings_Statics::NewProp_ControllerProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRGlobalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRGlobalSettings_Statics::ClassParams = {
	&UVRGlobalSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGlobalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRGlobalSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRGlobalSettings()
{
	if (!Z_Registration_Info_UClass_UVRGlobalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRGlobalSettings.OuterSingleton, Z_Construct_UClass_UVRGlobalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRGlobalSettings.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGlobalSettings>()
{
	return UVRGlobalSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGlobalSettings);
UVRGlobalSettings::~UVRGlobalSettings() {}
// End Class UVRGlobalSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBPVRControllerProfile::StaticStruct, Z_Construct_UScriptStruct_FBPVRControllerProfile_Statics::NewStructOps, TEXT("BPVRControllerProfile"), &Z_Registration_Info_UScriptStruct_BPVRControllerProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVRControllerProfile), 2232420908U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRGlobalSettings, UVRGlobalSettings::StaticClass, TEXT("UVRGlobalSettings"), &Z_Registration_Info_UClass_UVRGlobalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRGlobalSettings), 848423994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_486570410(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGlobalSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
