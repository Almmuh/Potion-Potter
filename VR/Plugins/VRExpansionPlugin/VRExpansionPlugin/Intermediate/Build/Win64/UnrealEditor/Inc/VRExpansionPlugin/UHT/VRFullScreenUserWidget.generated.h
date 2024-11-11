// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/VRFullScreenUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class UUserWidget;
class UVRFullScreenUserWidget;
class UWorld;
enum class EVRWidgetDisplayType : uint8;
#ifdef VREXPANSIONPLUGIN_VRFullScreenUserWidget_generated_h
#error "VRFullScreenUserWidget.generated.h already included, missing '#pragma once' in VRFullScreenUserWidget.h"
#endif
#define VREXPANSIONPLUGIN_VRFullScreenUserWidget_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRFullScreenUserWidget_Viewport>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRFullScreenUserWidget_PostProcess>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPostProcessRenderTarget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execSetIsHidden); \
	DECLARE_FUNCTION(execHide); \
	DECLARE_FUNCTION(execDisplay); \
	DECLARE_FUNCTION(execIsDisplayRequested);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_219_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRFullScreenUserWidget(); \
	friend struct Z_Construct_UClass_UVRFullScreenUserWidget_Statics; \
public: \
	DECLARE_CLASS(UVRFullScreenUserWidget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRFullScreenUserWidget)


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_219_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVRFullScreenUserWidget(UVRFullScreenUserWidget&&); \
	UVRFullScreenUserWidget(const UVRFullScreenUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRFullScreenUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRFullScreenUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRFullScreenUserWidget) \
	NO_API virtual ~UVRFullScreenUserWidget();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_216_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_219_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_219_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_219_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_219_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRFullScreenUserWidget>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_370_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPostProcessRenderTarget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execSetWidgetVisible); \
	DECLARE_FUNCTION(execSetGameDisplayType); \
	DECLARE_FUNCTION(execSetPIEDisplayType); \
	DECLARE_FUNCTION(execGetPreviewWidgetComp);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_370_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRFullScreenUserWidgetActor(); \
	friend struct Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics; \
public: \
	DECLARE_CLASS(AVRFullScreenUserWidgetActor, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRFullScreenUserWidgetActor)


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_370_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVRFullScreenUserWidgetActor(AVRFullScreenUserWidgetActor&&); \
	AVRFullScreenUserWidgetActor(const AVRFullScreenUserWidgetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRFullScreenUserWidgetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRFullScreenUserWidgetActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRFullScreenUserWidgetActor) \
	NO_API virtual ~AVRFullScreenUserWidgetActor();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_367_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_370_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_370_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_370_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_370_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRFullScreenUserWidgetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h


#define FOREACH_ENUM_EVRWIDGETDISPLAYTYPE(op) \
	op(EVRWidgetDisplayType::Inactive) \
	op(EVRWidgetDisplayType::Viewport) \
	op(EVRWidgetDisplayType::PostProcess) 

enum class EVRWidgetDisplayType : uint8;
template<> struct TIsUEnumClass<EVRWidgetDisplayType> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRWidgetDisplayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
