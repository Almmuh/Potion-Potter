// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/VRLogComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
enum class EBPVRConsoleDrawType : uint8;
struct FKey;
#ifdef VREXPANSIONPLUGIN_VRLogComponent_generated_h
#error "VRLogComponent.generated.h already included, missing '#pragma once' in VRLogComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRLogComponent_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawConsoleToRenderTarget2D); \
	DECLARE_FUNCTION(execAppendTextToConsole); \
	DECLARE_FUNCTION(execSendKeyEventToConsole); \
	DECLARE_FUNCTION(execSetConsoleText);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRLogComponent(); \
	friend struct Z_Construct_UClass_UVRLogComponent_Statics; \
public: \
	DECLARE_CLASS(UVRLogComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRLogComponent)


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_200_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVRLogComponent(UVRLogComponent&&); \
	UVRLogComponent(const UVRLogComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRLogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRLogComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRLogComponent)


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_197_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_200_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRLogComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h


#define FOREACH_ENUM_EBPVRCONSOLEDRAWTYPE(op) \
	op(EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly) \
	op(EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly) 

enum class EBPVRConsoleDrawType : uint8;
template<> struct TIsUEnumClass<EBPVRConsoleDrawType> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRConsoleDrawType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
