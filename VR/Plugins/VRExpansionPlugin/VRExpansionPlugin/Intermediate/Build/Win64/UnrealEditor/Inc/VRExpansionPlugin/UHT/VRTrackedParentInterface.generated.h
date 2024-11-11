// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRTrackedParentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class EBPVRWaistTrackingMode : uint8;
#ifdef VREXPANSIONPLUGIN_VRTrackedParentInterface_generated_h
#error "VRTrackedParentInterface.generated.h already included, missing '#pragma once' in VRTrackedParentInterface.h"
#endif
#define VREXPANSIONPLUGIN_VRTrackedParentInterface_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetTrackedParent);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VREXPANSIONPLUGIN_API UVRTrackedParentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRTrackedParentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VREXPANSIONPLUGIN_API, UVRTrackedParentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRTrackedParentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVRTrackedParentInterface(UVRTrackedParentInterface&&); \
	UVRTrackedParentInterface(const UVRTrackedParentInterface&); \
public: \
	VREXPANSIONPLUGIN_API virtual ~UVRTrackedParentInterface();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVRTrackedParentInterface(); \
	friend struct Z_Construct_UClass_UVRTrackedParentInterface_Statics; \
public: \
	DECLARE_CLASS(UVRTrackedParentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), VREXPANSIONPLUGIN_API) \
	DECLARE_SERIALIZER(UVRTrackedParentInterface)


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVRTrackedParentInterface() {} \
public: \
	typedef UVRTrackedParentInterface UClassType; \
	typedef IVRTrackedParentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_10_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_RPC_WRAPPERS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRTrackedParentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
