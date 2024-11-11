// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRAIController();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRAIController_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRDetourCrowdAIController();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRDetourCrowdAIController_NoRegister();
// End Cross Module References

// Begin Class AVRAIController
void AVRAIController::StaticRegisterNativesAVRAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRAIController);
UClass* Z_Construct_UClass_AVRAIController_NoRegister()
{
	return AVRAIController::StaticClass();
}
struct Z_Construct_UClass_AVRAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRAIController.h" },
		{ "ModuleRelativePath", "Public/VRAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVRAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRAIController_Statics::ClassParams = {
	&AVRAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRAIController()
{
	if (!Z_Registration_Info_UClass_AVRAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRAIController.OuterSingleton, Z_Construct_UClass_AVRAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRAIController.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRAIController>()
{
	return AVRAIController::StaticClass();
}
AVRAIController::AVRAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRAIController);
AVRAIController::~AVRAIController() {}
// End Class AVRAIController

// Begin Class AVRDetourCrowdAIController
void AVRDetourCrowdAIController::StaticRegisterNativesAVRDetourCrowdAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRDetourCrowdAIController);
UClass* Z_Construct_UClass_AVRDetourCrowdAIController_NoRegister()
{
	return AVRDetourCrowdAIController::StaticClass();
}
struct Z_Construct_UClass_AVRDetourCrowdAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRAIController.h" },
		{ "ModuleRelativePath", "Public/VRAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRDetourCrowdAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVRDetourCrowdAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVRAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRDetourCrowdAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRDetourCrowdAIController_Statics::ClassParams = {
	&AVRDetourCrowdAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRDetourCrowdAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRDetourCrowdAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRDetourCrowdAIController()
{
	if (!Z_Registration_Info_UClass_AVRDetourCrowdAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRDetourCrowdAIController.OuterSingleton, Z_Construct_UClass_AVRDetourCrowdAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRDetourCrowdAIController.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRDetourCrowdAIController>()
{
	return AVRDetourCrowdAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRDetourCrowdAIController);
AVRDetourCrowdAIController::~AVRDetourCrowdAIController() {}
// End Class AVRDetourCrowdAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRAIController, AVRAIController::StaticClass, TEXT("AVRAIController"), &Z_Registration_Info_UClass_AVRAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRAIController), 957592989U) },
		{ Z_Construct_UClass_AVRDetourCrowdAIController, AVRDetourCrowdAIController::StaticClass, TEXT("AVRDetourCrowdAIController"), &Z_Registration_Info_UClass_AVRDetourCrowdAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRDetourCrowdAIController), 1484689644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_1472577335(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
