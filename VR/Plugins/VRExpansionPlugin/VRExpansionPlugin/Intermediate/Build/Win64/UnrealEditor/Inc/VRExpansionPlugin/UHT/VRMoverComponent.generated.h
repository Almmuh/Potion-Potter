// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mover/VRMoverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoverComponent;
struct FMoverInputCmdContext;
#ifdef VREXPANSIONPLUGIN_VRMoverComponent_generated_h
#error "VRMoverComponent.generated.h already included, missing '#pragma once' in VRMoverComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRMoverComponent_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_VRMovement_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FLayeredMove_VRMovement>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRMoverHMDSyncState_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRMoverHMDSyncState>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMoverComponent);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_CALLBACK_WRAPPERS
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRMoverBasePawn(); \
	friend struct Z_Construct_UClass_AVRMoverBasePawn_Statics; \
public: \
	DECLARE_CLASS(AVRMoverBasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRMoverBasePawn) \
	virtual UObject* _getUObject() const override { return const_cast<AVRMoverBasePawn*>(this); }


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVRMoverBasePawn(AVRMoverBasePawn&&); \
	AVRMoverBasePawn(const AVRMoverBasePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRMoverBasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRMoverBasePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRMoverBasePawn) \
	NO_API virtual ~AVRMoverBasePawn();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_120_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_CALLBACK_WRAPPERS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRMoverBasePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Mover_VRMoverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
