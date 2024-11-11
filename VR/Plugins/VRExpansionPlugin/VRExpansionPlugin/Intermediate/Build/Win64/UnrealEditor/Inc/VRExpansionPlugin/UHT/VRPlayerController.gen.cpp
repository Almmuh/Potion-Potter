// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRPlayerController.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBasePlayerController();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBasePlayerController_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLocalPlayer();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLocalPlayer_NoRegister();
// End Cross Module References

// Begin Class AVRBasePlayerController Function OnCameraManagerCreated
struct VRBasePlayerController_eventOnCameraManagerCreated_Parms
{
	APlayerCameraManager* CameraManager;
};
static FName NAME_AVRBasePlayerController_OnCameraManagerCreated = FName(TEXT("OnCameraManagerCreated"));
void AVRBasePlayerController::OnCameraManagerCreated(APlayerCameraManager* CameraManager)
{
	VRBasePlayerController_eventOnCameraManagerCreated_Parms Parms;
	Parms.CameraManager=CameraManager;
	ProcessEvent(FindFunctionChecked(NAME_AVRBasePlayerController_OnCameraManagerCreated),&Parms);
}
struct Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event called in BPs when the camera manager is created (only fired on locally controlled player controllers)\n" },
#endif
		{ "DisplayName", "OnCameraManagerCreated" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called in BPs when the camera manager is created (only fired on locally controlled player controllers)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRBasePlayerController_eventOnCameraManagerCreated_Parms, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::NewProp_CameraManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBasePlayerController, nullptr, "OnCameraManagerCreated", nullptr, nullptr, Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::PropPointers), sizeof(VRBasePlayerController_eventOnCameraManagerCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRBasePlayerController_eventOnCameraManagerCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVRBasePlayerController Function OnCameraManagerCreated

// Begin Class AVRBasePlayerController
void AVRBasePlayerController::StaticRegisterNativesAVRBasePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRBasePlayerController);
UClass* Z_Construct_UClass_AVRBasePlayerController_NoRegister()
{
	return AVRBasePlayerController::StaticClass();
}
struct Z_Construct_UClass_AVRBasePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A base player controller specifically for handling OnCameraManagerCreated.\n// Used in case you don't want the VRPlayerCharacter changes in a PendingPlayerController\n" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRPlayerController.h" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A base player controller specifically for handling OnCameraManagerCreated.\nUsed in case you don't want the VRPlayerCharacter changes in a PendingPlayerController" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated, "OnCameraManagerCreated" }, // 582538910
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRBasePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVRBasePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRBasePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRBasePlayerController_Statics::ClassParams = {
	&AVRBasePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRBasePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRBasePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRBasePlayerController()
{
	if (!Z_Registration_Info_UClass_AVRBasePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRBasePlayerController.OuterSingleton, Z_Construct_UClass_AVRBasePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRBasePlayerController.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRBasePlayerController>()
{
	return AVRBasePlayerController::StaticClass();
}
AVRBasePlayerController::AVRBasePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRBasePlayerController);
AVRBasePlayerController::~AVRBasePlayerController() {}
// End Class AVRBasePlayerController

// Begin Class AVRPlayerController
void AVRPlayerController::StaticRegisterNativesAVRPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRPlayerController);
UClass* Z_Construct_UClass_AVRPlayerController_NoRegister()
{
	return AVRPlayerController::StaticClass();
}
struct Z_Construct_UClass_AVRPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRPlayerController.h" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableServerUpdateCamera_MetaData[] = {
		{ "Category", "VRPlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Disable the ServerUpdateCamera function defaulted on in PlayerCameraManager\n// We are manually replicating the camera position and rotation ourselves anyway\n// Generally that function will just be additional replication overhead\n" },
#endif
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable the ServerUpdateCamera function defaulted on in PlayerCameraManager\nWe are manually replicating the camera position and rotation ourselves anyway\nGenerally that function will just be additional replication overhead" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDisableServerUpdateCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableServerUpdateCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_SetBit(void* Obj)
{
	((AVRPlayerController*)Obj)->bDisableServerUpdateCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera = { "bDisableServerUpdateCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVRPlayerController), &Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableServerUpdateCamera_MetaData), NewProp_bDisableServerUpdateCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVRPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVRBasePlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerController_Statics::ClassParams = {
	&AVRPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVRPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRPlayerController()
{
	if (!Z_Registration_Info_UClass_AVRPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRPlayerController.OuterSingleton, Z_Construct_UClass_AVRPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRPlayerController.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRPlayerController>()
{
	return AVRPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerController);
AVRPlayerController::~AVRPlayerController() {}
// End Class AVRPlayerController

// Begin Class UVRLocalPlayer
void UVRLocalPlayer::StaticRegisterNativesUVRLocalPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRLocalPlayer);
UClass* Z_Construct_UClass_UVRLocalPlayer_NoRegister()
{
	return UVRLocalPlayer::StaticClass();
}
struct Z_Construct_UClass_UVRLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Utility class, when set as the default local player it will spawn the target PlayerController class instead as the pending player controller\n*/" },
#endif
		{ "IncludePath", "VRPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ShortTooltip", "Utility class, when set as the default local player it will spawn the target PlayerController class instead as the pending one" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility class, when set as the default local player it will spawn the target PlayerController class instead as the pending player controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridePendingLevelPlayerControllerClass_MetaData[] = {
		{ "Category", "LocalPlayer" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverridePendingLevelPlayerControllerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRLocalPlayer_Statics::NewProp_OverridePendingLevelPlayerControllerClass = { "OverridePendingLevelPlayerControllerClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLocalPlayer, OverridePendingLevelPlayerControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridePendingLevelPlayerControllerClass_MetaData), NewProp_OverridePendingLevelPlayerControllerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLocalPlayer_Statics::NewProp_OverridePendingLevelPlayerControllerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLocalPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRLocalPlayer_Statics::ClassParams = {
	&UVRLocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVRLocalPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRLocalPlayer_Statics::PropPointers),
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRLocalPlayer()
{
	if (!Z_Registration_Info_UClass_UVRLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRLocalPlayer.OuterSingleton, Z_Construct_UClass_UVRLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRLocalPlayer.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRLocalPlayer>()
{
	return UVRLocalPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRLocalPlayer);
UVRLocalPlayer::~UVRLocalPlayer() {}
// End Class UVRLocalPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVRBasePlayerController, AVRBasePlayerController::StaticClass, TEXT("AVRBasePlayerController"), &Z_Registration_Info_UClass_AVRBasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRBasePlayerController), 1907338874U) },
		{ Z_Construct_UClass_AVRPlayerController, AVRPlayerController::StaticClass, TEXT("AVRPlayerController"), &Z_Registration_Info_UClass_AVRPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRPlayerController), 2037809455U) },
		{ Z_Construct_UClass_UVRLocalPlayer, UVRLocalPlayer::StaticClass, TEXT("UVRLocalPlayer"), &Z_Registration_Info_UClass_UVRLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRLocalPlayer), 2941552295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPlayerController_h_3087867094(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
