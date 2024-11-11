// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/VREPhysicsConstraintComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VREPhysicsConstraintComponent_generated_h
#error "VREPhysicsConstraintComponent.generated.h already included, missing '#pragma once' in VREPhysicsConstraintComponent.h"
#endif
#define VREXPANSIONPLUGIN_VREPhysicsConstraintComponent_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAngularLimits); \
	DECLARE_FUNCTION(execGetLinearLimits); \
	DECLARE_FUNCTION(execSetAngularOffset); \
	DECLARE_FUNCTION(execGetAngularOffset); \
	DECLARE_FUNCTION(execGetCurrentLinearDistance); \
	DECLARE_FUNCTION(execGetGlobalPose); \
	DECLARE_FUNCTION(execGetLocalPose); \
	DECLARE_FUNCTION(execGetConstraintReferenceFrame); \
	DECLARE_FUNCTION(execSetConstraintToForceBased);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREPhysicsConstraintComponent(); \
	friend struct Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UVREPhysicsConstraintComponent, UPhysicsConstraintComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVREPhysicsConstraintComponent)


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVREPhysicsConstraintComponent(UVREPhysicsConstraintComponent&&); \
	UVREPhysicsConstraintComponent(const UVREPhysicsConstraintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREPhysicsConstraintComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREPhysicsConstraintComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREPhysicsConstraintComponent) \
	NO_API virtual ~UVREPhysicsConstraintComponent();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_20_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVREPhysicsConstraintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
