// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRPlayerStart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerStart() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerStart();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerStart_NoRegister();
// End Cross Module References

// Begin Class AVRPlayerStart
void AVRPlayerStart::StaticRegisterNativesAVRPlayerStart()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRPlayerStart);
UClass* Z_Construct_UClass_AVRPlayerStart_NoRegister()
{
	return AVRPlayerStart::StaticClass();
}
struct Z_Construct_UClass_AVRPlayerStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09""A normal player start except I replaced the root component with a scene component so that the spawn\n*\x09transform will match our VR characters.\n*/" },
#endif
		{ "HideCategories", "Collision Collision Lighting LightColor Force" },
		{ "IncludePath", "Misc/VRPlayerStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRPlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A normal player start except I replaced the root component with a scene component so that the spawn\ntransform will match our VR characters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRRootComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRPlayerStart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VRRootComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerStart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp = { "VRRootComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRPlayerStart, VRRootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRRootComp_MetaData), NewProp_VRRootComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerStart_Statics::NewProp_VRRootComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVRPlayerStart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerStart,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerStart_Statics::ClassParams = {
	&AVRPlayerStart::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerStart_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRPlayerStart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRPlayerStart()
{
	if (!Z_Registration_Info_UClass_AVRPlayerStart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRPlayerStart.OuterSingleton, Z_Construct_UClass_AVRPlayerStart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRPlayerStart.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRPlayerStart>()
{
	return AVRPlayerStart::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerStart);
AVRPlayerStart::~AVRPlayerStart() {}
// End Class AVRPlayerStart

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRPlayerStart, AVRPlayerStart::StaticClass, TEXT("AVRPlayerStart"), &Z_Registration_Info_UClass_AVRPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRPlayerStart), 637505960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_91989559(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRPlayerStart_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
