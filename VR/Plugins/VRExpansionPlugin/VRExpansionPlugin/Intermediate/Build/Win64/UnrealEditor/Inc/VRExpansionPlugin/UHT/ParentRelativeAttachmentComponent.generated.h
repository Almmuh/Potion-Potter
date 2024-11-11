// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParentRelativeAttachmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_ParentRelativeAttachmentComponent_generated_h
#error "ParentRelativeAttachmentComponent.generated.h already included, missing '#pragma once' in ParentRelativeAttachmentComponent.h"
#endif
#define VREXPANSIONPLUGIN_ParentRelativeAttachmentComponent_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_16_DELEGATE \
VREXPANSIONPLUGIN_API void FVRPRCBeginYawRotationEventSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPRCBeginYawRotationEventSignature);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPaused);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParentRelativeAttachmentComponent(); \
	friend struct Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics; \
public: \
	DECLARE_CLASS(UParentRelativeAttachmentComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UParentRelativeAttachmentComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UParentRelativeAttachmentComponent*>(this); }


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UParentRelativeAttachmentComponent(UParentRelativeAttachmentComponent&&); \
	UParentRelativeAttachmentComponent(const UParentRelativeAttachmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParentRelativeAttachmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParentRelativeAttachmentComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParentRelativeAttachmentComponent) \
	NO_API virtual ~UParentRelativeAttachmentComponent();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_39_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UParentRelativeAttachmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ParentRelativeAttachmentComponent_h


#define FOREACH_ENUM_EVR_PRC_ROTATIONMETHOD(op) \
	op(EVR_PRC_RotationMethod::PRC_ROT_HMD) \
	op(EVR_PRC_RotationMethod::PRC_ROT_HMDControllerBlend) \
	op(EVR_PRC_RotationMethod::PRC_ROT_ControllerHMDClamped) 

enum class EVR_PRC_RotationMethod : uint8;
template<> struct TIsUEnumClass<EVR_PRC_RotationMethod> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVR_PRC_RotationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
