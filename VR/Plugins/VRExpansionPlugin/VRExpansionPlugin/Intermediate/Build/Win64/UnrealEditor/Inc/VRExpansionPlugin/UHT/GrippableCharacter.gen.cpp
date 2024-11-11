// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableCharacter();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableCharacter_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister();
// End Cross Module References

// Begin Class AGrippableCharacter
void AGrippableCharacter::StaticRegisterNativesAGrippableCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrippableCharacter);
UClass* Z_Construct_UClass_AGrippableCharacter_NoRegister()
{
	return AGrippableCharacter::StaticClass();
}
struct Z_Construct_UClass_AGrippableCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Grippables/GrippableCharacter.h" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrippableMeshReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrippableCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A reference to the grippable character that can be used instead of casting the root, BP doesn't like the class override.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A reference to the grippable character that can be used instead of casting the root, BP doesn't like the class override." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewOriginationSocket_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A Custom bone to use on the character mesh as the originator for the perception systems sight sense\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Custom bone to use on the character mesh as the originator for the perception systems sight sense" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrippableMeshReference;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ViewOriginationSocket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrippableCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference = { "GrippableMeshReference", nullptr, (EPropertyFlags)0x01140000000a201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableCharacter, GrippableMeshReference), Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrippableMeshReference_MetaData), NewProp_GrippableMeshReference_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket = { "ViewOriginationSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableCharacter, ViewOriginationSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewOriginationSocket_MetaData), NewProp_ViewOriginationSocket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrippableCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrippableCharacter_Statics::ClassParams = {
	&AGrippableCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrippableCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrippableCharacter()
{
	if (!Z_Registration_Info_UClass_AGrippableCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrippableCharacter.OuterSingleton, Z_Construct_UClass_AGrippableCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrippableCharacter.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AGrippableCharacter>()
{
	return AGrippableCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrippableCharacter);
AGrippableCharacter::~AGrippableCharacter() {}
// End Class AGrippableCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrippableCharacter, AGrippableCharacter::StaticClass, TEXT("AGrippableCharacter"), &Z_Registration_Info_UClass_AGrippableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrippableCharacter), 3385895081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_95232934(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
