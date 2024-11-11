// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacterMovementComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References

// Begin Class UVRCharacterMovementComponent
void UVRCharacterMovementComponent::StaticRegisterNativesUVRCharacterMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRCharacterMovementComponent);
UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister()
{
	return UVRCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UVRCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);\n" },
#endif
		{ "IncludePath", "VRCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMovementMerging_MetaData[] = {
		{ "Category", "VRCharacterMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allow merging movement replication (may cause issues when >10 players due to capsule location\n" },
#endif
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow merging movement replication (may cause issues when >10 players due to capsule location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunClientCorrectionToHMD_MetaData[] = {
		{ "Category", "VRCharacterMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true we will run client corrections off of the HMD location instead of actor, this is a settable value to allow backwards compatibility\n" },
#endif
		{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true we will run client corrections off of the HMD location instead of actor, this is a settable value to allow backwards compatibility" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VRRootCapsule;
	static void NewProp_bAllowMovementMerging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMovementMerging;
	static void NewProp_bRunClientCorrectionToHMD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunClientCorrectionToHMD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule = { "VRRootCapsule", nullptr, (EPropertyFlags)0x011400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRRootCapsule_MetaData), NewProp_VRRootCapsule_MetaData) };
void Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_SetBit(void* Obj)
{
	((UVRCharacterMovementComponent*)Obj)->bAllowMovementMerging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging = { "bAllowMovementMerging", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRCharacterMovementComponent), &Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMovementMerging_MetaData), NewProp_bAllowMovementMerging_MetaData) };
void Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD_SetBit(void* Obj)
{
	((UVRCharacterMovementComponent*)Obj)->bRunClientCorrectionToHMD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD = { "bRunClientCorrectionToHMD", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRCharacterMovementComponent), &Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunClientCorrectionToHMD_MetaData), NewProp_bRunClientCorrectionToHMD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_VRRootCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bAllowMovementMerging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRCharacterMovementComponent_Statics::NewProp_bRunClientCorrectionToHMD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRCharacterMovementComponent_Statics::ClassParams = {
	&UVRCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UVRCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UVRCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRCharacterMovementComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRCharacterMovementComponent>()
{
	return UVRCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRCharacterMovementComponent);
UVRCharacterMovementComponent::~UVRCharacterMovementComponent() {}
// End Class UVRCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRCharacterMovementComponent, UVRCharacterMovementComponent::StaticClass, TEXT("UVRCharacterMovementComponent"), &Z_Registration_Info_UClass_UVRCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRCharacterMovementComponent), 3403897199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_3651818508(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
