// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/OptionalRepSkeletalMeshActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_OptionalRepSkeletalMeshActor_generated_h
#error "OptionalRepSkeletalMeshActor.generated.h already included, missing '#pragma once' in OptionalRepSkeletalMeshActor.h"
#endif
#define VREXPANSIONPLUGIN_OptionalRepSkeletalMeshActor_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoRepSphereComponent(); \
	friend struct Z_Construct_UClass_UNoRepSphereComponent_Statics; \
public: \
	DECLARE_CLASS(UNoRepSphereComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UNoRepSphereComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNoRepSphereComponent(UNoRepSphereComponent&&); \
	UNoRepSphereComponent(const UNoRepSphereComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoRepSphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoRepSphereComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoRepSphereComponent) \
	NO_API virtual ~UNoRepSphereComponent();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_15_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UNoRepSphereComponent>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunctionVR_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FSkeletalMeshComponentEndPhysicsTickFunctionVR>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLocalBounds);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInversePhysicsSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UInversePhysicsSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UInversePhysicsSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInversePhysicsSkeletalMeshComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicateMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=bReplicateMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInversePhysicsSkeletalMeshComponent(UInversePhysicsSkeletalMeshComponent&&); \
	UInversePhysicsSkeletalMeshComponent(const UInversePhysicsSkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInversePhysicsSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInversePhysicsSkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInversePhysicsSkeletalMeshComponent) \
	NO_API virtual ~UInversePhysicsSkeletalMeshComponent();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_62_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_65_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UInversePhysicsSkeletalMeshComponent>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOptionalRepGrippableSkeletalMeshActor(); \
	friend struct Z_Construct_UClass_AOptionalRepGrippableSkeletalMeshActor_Statics; \
public: \
	DECLARE_CLASS(AOptionalRepGrippableSkeletalMeshActor, ASkeletalMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOptionalRepGrippableSkeletalMeshActor) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIgnoreAttachmentReplication=NETFIELD_REP_START, \
		bIgnorePhysicsReplication, \
		NETFIELD_REP_END=bIgnorePhysicsReplication	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_123_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOptionalRepGrippableSkeletalMeshActor(AOptionalRepGrippableSkeletalMeshActor&&); \
	AOptionalRepGrippableSkeletalMeshActor(const AOptionalRepGrippableSkeletalMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOptionalRepGrippableSkeletalMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOptionalRepGrippableSkeletalMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOptionalRepGrippableSkeletalMeshActor) \
	NO_API virtual ~AOptionalRepGrippableSkeletalMeshActor();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_120_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_123_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AOptionalRepGrippableSkeletalMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_OptionalRepSkeletalMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
