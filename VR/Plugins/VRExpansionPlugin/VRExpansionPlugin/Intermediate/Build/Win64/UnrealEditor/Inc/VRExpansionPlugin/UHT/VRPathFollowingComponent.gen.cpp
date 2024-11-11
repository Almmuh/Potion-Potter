// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRPathFollowingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPathFollowingComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRPathFollowingComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRPathFollowingComponent_NoRegister();
// End Cross Module References

// Begin Class UVRPathFollowingComponent
void UVRPathFollowingComponent::StaticRegisterNativesUVRPathFollowingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRPathFollowingComponent);
UClass* Z_Construct_UClass_UVRPathFollowingComponent_NoRegister()
{
	return UVRPathFollowingComponent::StaticClass();
}
struct Z_Construct_UClass_UVRPathFollowingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VRPathFollowingComponent.h" },
		{ "ModuleRelativePath", "Public/VRPathFollowingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRMovementComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRPathFollowingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VRMovementComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRPathFollowingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp = { "VRMovementComp", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRPathFollowingComponent, VRMovementComp), Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRMovementComp_MetaData), NewProp_VRMovementComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRPathFollowingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRPathFollowingComponent_Statics::ClassParams = {
	&UVRPathFollowingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRPathFollowingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRPathFollowingComponent()
{
	if (!Z_Registration_Info_UClass_UVRPathFollowingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRPathFollowingComponent.OuterSingleton, Z_Construct_UClass_UVRPathFollowingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRPathFollowingComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRPathFollowingComponent>()
{
	return UVRPathFollowingComponent::StaticClass();
}
UVRPathFollowingComponent::UVRPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRPathFollowingComponent);
UVRPathFollowingComponent::~UVRPathFollowingComponent() {}
// End Class UVRPathFollowingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRPathFollowingComponent, UVRPathFollowingComponent::StaticClass, TEXT("UVRPathFollowingComponent"), &Z_Registration_Info_UClass_UVRPathFollowingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRPathFollowingComponent), 3973094886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_2944409357(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
