// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/VRRenderTargetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UPrimitiveComponent;
class UTexture2D;
struct FBPVRReplicatedTextureStore;
struct FCanvasUVTri;
struct FColor;
struct FRenderManagerOperation;
#ifdef VREXPANSIONPLUGIN_VRRenderTargetManager_generated_h
#error "VRRenderTargetManager.generated.h already included, missing '#pragma once' in VRRenderTargetManager.h"
#endif
#define VREXPANSIONPLUGIN_VRRenderTargetManager_generated_h

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPVRReplicatedTextureStore>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRenderDataStore_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FRenderDataStore>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRenderManagerTri_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FRenderManagerTri>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRenderManagerOperation_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FRenderManagerOperation>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveTexture_Implementation(FBPVRReplicatedTextureStore const& TextureData); \
	virtual bool Ack_ReceiveTextureBlob_Validate(int32 ); \
	virtual void Ack_ReceiveTextureBlob_Implementation(int32 BlobCount); \
	virtual void ReceiveTextureBlob_Implementation(TArray<uint8> const& TextureBlob, int32 LocationInData, int32 BlobCount); \
	virtual bool Ack_InitTextureSend_Validate(int32 ); \
	virtual void Ack_InitTextureSend_Implementation(int32 TotalDataCount); \
	virtual void InitTextureSend_Implementation(int32 Width, int32 Height, int32 TotalDataCount, int32 BlobCount, EPixelFormat PixelFormat, bool bIsZipped); \
	virtual bool SendLocalDrawOperations_Validate(TArray<FRenderManagerOperation> const& ); \
	virtual void SendLocalDrawOperations_Implementation(TArray<FRenderManagerOperation> const& LocalRenderOperationStoreList); \
	DECLARE_FUNCTION(execReceiveTexture); \
	DECLARE_FUNCTION(execAck_ReceiveTextureBlob); \
	DECLARE_FUNCTION(execReceiveTextureBlob); \
	DECLARE_FUNCTION(execAck_InitTextureSend); \
	DECLARE_FUNCTION(execInitTextureSend); \
	DECLARE_FUNCTION(execSendLocalDrawOperations); \
	DECLARE_FUNCTION(execSendNextDataBlob); \
	DECLARE_FUNCTION(execOnRep_Manager);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_CALLBACK_WRAPPERS
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARenderTargetReplicationProxy(); \
	friend struct Z_Construct_UClass_ARenderTargetReplicationProxy_Statics; \
public: \
	DECLARE_CLASS(ARenderTargetReplicationProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARenderTargetReplicationProxy) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwningManager=NETFIELD_REP_START, \
		OwnersID, \
		NETFIELD_REP_END=OwnersID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARenderTargetReplicationProxy(ARenderTargetReplicationProxy&&); \
	ARenderTargetReplicationProxy(const ARenderTargetReplicationProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARenderTargetReplicationProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARenderTargetReplicationProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARenderTargetReplicationProxy) \
	NO_API virtual ~ARenderTargetReplicationProxy();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_178_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_CALLBACK_WRAPPERS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class ARenderTargetReplicationProxy>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientRepData_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FClientRepData>();

#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SendDrawOperations_Validate(TArray<FRenderManagerOperation> const& ); \
	virtual void SendDrawOperations_Implementation(TArray<FRenderManagerOperation> const& RenderOperationStoreList); \
	DECLARE_FUNCTION(execGenerateTrisFromBoxPlaneIntersection); \
	DECLARE_FUNCTION(execDrawPoll); \
	DECLARE_FUNCTION(execAddMaterialTrianglesDrawOperation); \
	DECLARE_FUNCTION(execAddTextureDrawOperation); \
	DECLARE_FUNCTION(execAddLineDrawOperation); \
	DECLARE_FUNCTION(execSendDrawOperations);


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_CALLBACK_WRAPPERS
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRRenderTargetManager(); \
	friend struct Z_Construct_UClass_UVRRenderTargetManager_Statics; \
public: \
	DECLARE_CLASS(UVRRenderTargetManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRRenderTargetManager)


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVRRenderTargetManager(UVRRenderTargetManager&&); \
	UVRRenderTargetManager(const UVRRenderTargetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRRenderTargetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRRenderTargetManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRRenderTargetManager) \
	NO_API virtual ~UVRRenderTargetManager();


#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_277_PROLOG
#define FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_CALLBACK_WRAPPERS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_INCLASS_NO_PURE_DECLS \
	FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_280_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRRenderTargetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h


#define FOREACH_ENUM_ERENDERMANAGEROPERATIONTYPE(op) \
	op(ERenderManagerOperationType::Op_LineDraw) \
	op(ERenderManagerOperationType::Op_TriDraw) \
	op(ERenderManagerOperationType::Op_TexDraw) 

enum class ERenderManagerOperationType : uint8;
template<> struct TIsUEnumClass<ERenderManagerOperationType> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<ERenderManagerOperationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
