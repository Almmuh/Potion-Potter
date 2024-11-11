// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GripScripts/GS_Melee.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FBPGripPair;
struct FBPHitSurfaceProperties;
struct FBPLodgeComponentInfo;
struct FHitResult;
#ifdef VREXPANSIONPLUGIN_GS_Melee_generated_h
#error "GS_Melee.generated.h already included, missing '#pragma once' in GS_Melee.h"
#endif
#define VREXPANSIONPLUGIN_GS_Melee_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPHitSurfaceProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPHitSurfaceProperties>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPLodgeComponentInfo>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_164_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnMeleeShouldLodgeSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnMeleeShouldLodgeSignature, FBPLodgeComponentInfo LogComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, ECollisionChannel OtherCompCollisionChannel, FBPHitSurfaceProperties HitSurfaceProperties, FVector NormalImpulse, FHitResult const& Hit);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_165_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnMeleeOnHit_DelegateWrapper(const FMulticastScriptDelegate& VROnMeleeOnHit, FBPLodgeComponentInfo LogComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, ECollisionChannel OtherCompCollisionChannel, FBPHitSurfaceProperties HitSurfaceProperties, FVector NormalImpulse, FHitResult const& Hit);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_166_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnMeleeInvalidHitSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnMeleeInvalidHitSignature, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPrimaryAndSecondaryHands); \
	DECLARE_FUNCTION(execUpdateHandPositionAndRotation); \
	DECLARE_FUNCTION(execUpdateHandPosition); \
	DECLARE_FUNCTION(execSetIsLodged); \
	DECLARE_FUNCTION(execOnLodgeHitCallback);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGS_Melee(); \
	friend struct Z_Construct_UClass_UGS_Melee_Statics; \
public: \
	DECLARE_CLASS(UGS_Melee, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_Melee)


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_175_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGS_Melee(UGS_Melee&&); \
	UGS_Melee(const UGS_Melee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_Melee); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_Melee); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_Melee) \
	NO_API virtual ~UGS_Melee();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_172_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_175_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_175_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGS_Melee>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h


#define FOREACH_ENUM_EVRMELEEZONETYPE(op) \
	op(EVRMeleeZoneType::VRPMELLE_ZONETYPE_Stab) \
	op(EVRMeleeZoneType::VRPMELLE_ZONETYPE_Hit) \
	op(EVRMeleeZoneType::VRPMELLE_ZONETYPE_StabAndHit) 

enum class EVRMeleeZoneType : uint8;
template<> struct TIsUEnumClass<EVRMeleeZoneType> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleeZoneType>();

#define FOREACH_ENUM_EVRMELEECOMTYPE(op) \
	op(EVRMeleeComType::VRPMELEECOM_Normal) \
	op(EVRMeleeComType::VRPMELEECOM_BetweenHands) \
	op(EVRMeleeComType::VRPMELEECOM_PrimaryHand) 

enum class EVRMeleeComType : uint8;
template<> struct TIsUEnumClass<EVRMeleeComType> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleeComType>();

#define FOREACH_ENUM_EVRMELEEPRIMARYHANDTYPE(op) \
	op(EVRMeleePrimaryHandType::VRPHAND_Rear) \
	op(EVRMeleePrimaryHandType::VRPHAND_Front) \
	op(EVRMeleePrimaryHandType::VRPHAND_Slotted) 

enum class EVRMeleePrimaryHandType : uint8;
template<> struct TIsUEnumClass<EVRMeleePrimaryHandType> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMeleePrimaryHandType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
