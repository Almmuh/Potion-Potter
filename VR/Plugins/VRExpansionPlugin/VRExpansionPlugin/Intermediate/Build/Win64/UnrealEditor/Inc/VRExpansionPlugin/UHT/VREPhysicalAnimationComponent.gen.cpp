// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VREPhysicalAnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREPhysicalAnimationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent_NoRegister();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWeldedBoneDriverData();
// End Cross Module References

// Begin ScriptStruct FWeldedBoneDriverData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeldedBoneDriverData;
class UScriptStruct* FWeldedBoneDriverData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeldedBoneDriverData, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("WeldedBoneDriverData"));
	}
	return Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FWeldedBoneDriverData>()
{
	return FWeldedBoneDriverData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeldedBoneDriverData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"WeldedBoneDriverData",
	nullptr,
	0,
	sizeof(FWeldedBoneDriverData),
	alignof(FWeldedBoneDriverData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeldedBoneDriverData()
{
	if (!Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.InnerSingleton, Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeldedBoneDriverData.InnerSingleton;
}
// End ScriptStruct FWeldedBoneDriverData

// Begin Class UVREPhysicalAnimationComponent Function IsWeldedBoneDriverPaused
struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics
{
	struct VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms), &Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "IsWeldedBoneDriverPaused", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::VREPhysicalAnimationComponent_eventIsWeldedBoneDriverPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execIsWeldedBoneDriverPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeldedBoneDriverPaused();
	P_NATIVE_END;
}
// End Class UVREPhysicalAnimationComponent Function IsWeldedBoneDriverPaused

// Begin Class UVREPhysicalAnimationComponent Function RefreshWeldedBoneDriver
struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Refreshes the welded bone driver, use this in cases where the body may have changed (such as welding to another body or switching physics)\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refreshes the welded bone driver, use this in cases where the body may have changed (such as welding to another body or switching physics)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "RefreshWeldedBoneDriver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execRefreshWeldedBoneDriver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshWeldedBoneDriver();
	P_NATIVE_END;
}
// End Class UVREPhysicalAnimationComponent Function RefreshWeldedBoneDriver

// Begin Class UVREPhysicalAnimationComponent Function SetupWeldedBoneDriver
struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics
{
	struct VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms
	{
		TArray<FName> BaseBoneNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to setup the welded body driver, initializes all mappings and caches shape contexts\n// Requires that SetSkeletalMesh be called first\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to setup the welded body driver, initializes all mappings and caches shape contexts\nRequires that SetSkeletalMesh be called first" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BaseBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseBoneNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames_Inner = { "BaseBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames = { "BaseBoneNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms, BaseBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::NewProp_BaseBoneNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "SetupWeldedBoneDriver", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::VREPhysicalAnimationComponent_eventSetupWeldedBoneDriver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execSetupWeldedBoneDriver)
{
	P_GET_TARRAY(FName,Z_Param_BaseBoneNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupWeldedBoneDriver(Z_Param_BaseBoneNames);
	P_NATIVE_END;
}
// End Class UVREPhysicalAnimationComponent Function SetupWeldedBoneDriver

// Begin Class UVREPhysicalAnimationComponent Function SetWeldedBoneDriverPaused
struct Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics
{
	struct VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms
	{
		bool bPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PhysicalAnimation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the welded bone driver to be paused, you can also stop the component from ticking but that will also stop any physical animations going on\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the welded bone driver to be paused, you can also stop the component from ticking but that will also stop any physical animations going on" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused_SetBit(void* Obj)
{
	((VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms*)Obj)->bPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms), &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::NewProp_bPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicalAnimationComponent, nullptr, "SetWeldedBoneDriverPaused", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::VREPhysicalAnimationComponent_eventSetWeldedBoneDriverPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicalAnimationComponent::execSetWeldedBoneDriverPaused)
{
	P_GET_UBOOL(Z_Param_bPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeldedBoneDriverPaused(Z_Param_bPaused);
	P_NATIVE_END;
}
// End Class UVREPhysicalAnimationComponent Function SetWeldedBoneDriverPaused

// Begin Class UVREPhysicalAnimationComponent
void UVREPhysicalAnimationComponent::StaticRegisterNativesUVREPhysicalAnimationComponent()
{
	UClass* Class = UVREPhysicalAnimationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsWeldedBoneDriverPaused", &UVREPhysicalAnimationComponent::execIsWeldedBoneDriverPaused },
		{ "RefreshWeldedBoneDriver", &UVREPhysicalAnimationComponent::execRefreshWeldedBoneDriver },
		{ "SetupWeldedBoneDriver", &UVREPhysicalAnimationComponent::execSetupWeldedBoneDriver },
		{ "SetWeldedBoneDriverPaused", &UVREPhysicalAnimationComponent::execSetWeldedBoneDriverPaused },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREPhysicalAnimationComponent);
UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent_NoRegister()
{
	return UVREPhysicalAnimationComponent::StaticClass();
}
struct Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "IncludePath", "Misc/VREPhysicalAnimationComponent.h" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the welded bone driver paused */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the welded bone driver paused" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetPhysicsSleepSensitivity_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** IF true then we will auto adjust the sleep settings of the body so that it won't rest during welded bone driving */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IF true then we will auto adjust the sleep settings of the body so that it won't rest during welded bone driving" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SleepThresholdMultiplier_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The threshold multiplier to set on the body */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The threshold multiplier to set on the body" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseWeldedBoneDriverNames_MetaData[] = {
		{ "Category", "WeldedBoneDriver" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Base bone to use as the bone driver root */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Base bone to use as the bone driver root" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneDriverMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VREPhysicalAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
	static void NewProp_bAutoSetPhysicsSleepSensitivity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetPhysicsSleepSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepThresholdMultiplier;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BaseWeldedBoneDriverNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseWeldedBoneDriverNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneDriverMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneDriverMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused, "IsWeldedBoneDriverPaused" }, // 2316005037
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver, "RefreshWeldedBoneDriver" }, // 4049137160
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetupWeldedBoneDriver, "SetupWeldedBoneDriver" }, // 1362399947
		{ &Z_Construct_UFunction_UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused, "SetWeldedBoneDriverPaused" }, // 2044138436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREPhysicalAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_SetBit(void* Obj)
{
	((UVREPhysicalAnimationComponent*)Obj)->bIsPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVREPhysicalAnimationComponent), &Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPaused_MetaData), NewProp_bIsPaused_MetaData) };
void Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_SetBit(void* Obj)
{
	((UVREPhysicalAnimationComponent*)Obj)->bAutoSetPhysicsSleepSensitivity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity = { "bAutoSetPhysicsSleepSensitivity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVREPhysicalAnimationComponent), &Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSetPhysicsSleepSensitivity_MetaData), NewProp_bAutoSetPhysicsSleepSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier = { "SleepThresholdMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, SleepThresholdMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SleepThresholdMultiplier_MetaData), NewProp_SleepThresholdMultiplier_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_Inner = { "BaseWeldedBoneDriverNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames = { "BaseWeldedBoneDriverNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, BaseWeldedBoneDriverNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseWeldedBoneDriverNames_MetaData), NewProp_BaseWeldedBoneDriverNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_Inner = { "BoneDriverMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeldedBoneDriverData, METADATA_PARAMS(0, nullptr) }; // 2329330398
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap = { "BoneDriverMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVREPhysicalAnimationComponent, BoneDriverMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneDriverMap_MetaData), NewProp_BoneDriverMap_MetaData) }; // 2329330398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bIsPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_bAutoSetPhysicsSleepSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_SleepThresholdMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BaseWeldedBoneDriverNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::NewProp_BoneDriverMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicalAnimationComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::ClassParams = {
	&UVREPhysicalAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVREPhysicalAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UVREPhysicalAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREPhysicalAnimationComponent.OuterSingleton, Z_Construct_UClass_UVREPhysicalAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVREPhysicalAnimationComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVREPhysicalAnimationComponent>()
{
	return UVREPhysicalAnimationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVREPhysicalAnimationComponent);
UVREPhysicalAnimationComponent::~UVREPhysicalAnimationComponent() {}
// End Class UVREPhysicalAnimationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeldedBoneDriverData::StaticStruct, Z_Construct_UScriptStruct_FWeldedBoneDriverData_Statics::NewStructOps, TEXT("WeldedBoneDriverData"), &Z_Registration_Info_UScriptStruct_WeldedBoneDriverData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeldedBoneDriverData), 2329330398U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVREPhysicalAnimationComponent, UVREPhysicalAnimationComponent::StaticClass, TEXT("UVREPhysicalAnimationComponent"), &Z_Registration_Info_UClass_UVREPhysicalAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREPhysicalAnimationComponent), 3489148860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_3168425347(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicalAnimationComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
