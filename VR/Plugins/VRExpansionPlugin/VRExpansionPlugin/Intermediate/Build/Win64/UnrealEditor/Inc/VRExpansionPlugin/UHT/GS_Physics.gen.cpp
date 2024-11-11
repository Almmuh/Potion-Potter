// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_Physics.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Physics() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Physics();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Physics_NoRegister();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings();
// End Cross Module References

// Begin Class UGS_Physics
void UGS_Physics::StaticRegisterNativesUGS_Physics()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_Physics);
UClass* Z_Construct_UClass_UGS_Physics_NoRegister()
{
	return UGS_Physics::StaticClass();
}
struct Z_Construct_UClass_UGS_Physics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A pure physics multi hand interaction grip script, expects that bAllowMultiGrips is set on the parent object*\n*/" },
#endif
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Physics.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A pure physics multi hand interaction grip script, expects that bAllowMultiGrips is set on the parent object*" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleHandPhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grip settings to use when a single hand is gripping, overrides interface defaults\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip settings to use when a single hand is gripping, overrides interface defaults" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiHandPhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grip settings to use when multiple hands are gripping\n// Overrides interface defaults\n" },
#endif
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip settings to use when multiple hands are gripping\nOverrides interface defaults" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleHandPhysicsSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiHandPhysicsSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_Physics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings = { "SingleHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Physics, SingleHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleHandPhysicsSettings_MetaData), NewProp_SingleHandPhysicsSettings_MetaData) }; // 4071461839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings = { "MultiHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGS_Physics, MultiHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiHandPhysicsSettings_MetaData), NewProp_MultiHandPhysicsSettings_MetaData) }; // 4071461839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_Physics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGS_Physics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGS_Default,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_Physics_Statics::ClassParams = {
	&UGS_Physics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGS_Physics_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::Class_MetaDataParams), Z_Construct_UClass_UGS_Physics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGS_Physics()
{
	if (!Z_Registration_Info_UClass_UGS_Physics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_Physics.OuterSingleton, Z_Construct_UClass_UGS_Physics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGS_Physics.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_Physics>()
{
	return UGS_Physics::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_Physics);
UGS_Physics::~UGS_Physics() {}
// End Class UGS_Physics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGS_Physics, UGS_Physics::StaticClass, TEXT("UGS_Physics"), &Z_Registration_Info_UClass_UGS_Physics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_Physics), 830978965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_525895309(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
