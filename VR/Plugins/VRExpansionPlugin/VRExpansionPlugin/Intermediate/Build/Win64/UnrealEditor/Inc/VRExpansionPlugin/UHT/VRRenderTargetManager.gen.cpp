// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRRenderTargetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRenderTargetManager() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasUVTri();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_ARenderTargetReplicationProxy();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_ARenderTargetReplicationProxy_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRenderTargetManager();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRenderTargetManager_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FClientRepData();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderDataStore();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderManagerOperation();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRenderManagerTri();
// End Cross Module References

// Begin ScriptStruct FBPVRReplicatedTextureStore
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BPVRReplicatedTextureStore;
class UScriptStruct* FBPVRReplicatedTextureStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRReplicatedTextureStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BPVRReplicatedTextureStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("BPVRReplicatedTextureStore"));
	}
	return Z_Registration_Info_UScriptStruct_BPVRReplicatedTextureStore.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FBPVRReplicatedTextureStore>()
{
	return FBPVRReplicatedTextureStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// #TODO: Dirty rects so don't have to send entire texture?\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#TODO: Dirty rects so don't have to send entire texture?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Not automatically replicated, we are skipping it so that the array isn't checked\n// We manually copy the data into the serialization buffer during netserialize and keep\n// a flip flop dirty flag\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not automatically replicated, we are skipping it so that the array isn't checked\nWe manually copy the data into the serialization buffer during netserialize and keep\na flip flop dirty flag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnpackedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsZipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PackedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PackedData;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_UnpackedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnpackedData;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
	static void NewProp_bIsZipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsZipped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPVRReplicatedTextureStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData_Inner = { "PackedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData = { "PackedData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRReplicatedTextureStore, PackedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedData_MetaData), NewProp_PackedData_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData_Inner = { "UnpackedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData = { "UnpackedData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRReplicatedTextureStore, UnpackedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnpackedData_MetaData), NewProp_UnpackedData_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRReplicatedTextureStore, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBPVRReplicatedTextureStore, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
void Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped_SetBit(void* Obj)
{
	((FBPVRReplicatedTextureStore*)Obj)->bIsZipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped = { "bIsZipped", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBPVRReplicatedTextureStore), &Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsZipped_MetaData), NewProp_bIsZipped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_PackedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_UnpackedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewProp_bIsZipped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"BPVRReplicatedTextureStore",
	Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::PropPointers),
	sizeof(FBPVRReplicatedTextureStore),
	alignof(FBPVRReplicatedTextureStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore()
{
	if (!Z_Registration_Info_UScriptStruct_BPVRReplicatedTextureStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BPVRReplicatedTextureStore.InnerSingleton, Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BPVRReplicatedTextureStore.InnerSingleton;
}
// End ScriptStruct FBPVRReplicatedTextureStore

// Begin ScriptStruct FRenderDataStore
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderDataStore;
class UScriptStruct* FRenderDataStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderDataStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderDataStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderDataStore, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RenderDataStore"));
	}
	return Z_Registration_Info_UScriptStruct_RenderDataStore.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRenderDataStore>()
{
	return FRenderDataStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRenderDataStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderDataStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderDataStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"RenderDataStore",
	nullptr,
	0,
	sizeof(FRenderDataStore),
	alignof(FRenderDataStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderDataStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRenderDataStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRenderDataStore()
{
	if (!Z_Registration_Info_UScriptStruct_RenderDataStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderDataStore.InnerSingleton, Z_Construct_UScriptStruct_FRenderDataStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RenderDataStore.InnerSingleton;
}
// End ScriptStruct FRenderDataStore

// Begin Enum ERenderManagerOperationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERenderManagerOperationType;
static UEnum* ERenderManagerOperationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERenderManagerOperationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERenderManagerOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ERenderManagerOperationType"));
	}
	return Z_Registration_Info_UEnum_ERenderManagerOperationType.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<ERenderManagerOperationType>()
{
	return ERenderManagerOperationType_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "Op_LineDraw.Name", "ERenderManagerOperationType::Op_LineDraw" },
		{ "Op_TexDraw.Name", "ERenderManagerOperationType::Op_TexDraw" },
		{ "Op_TriDraw.Name", "ERenderManagerOperationType::Op_TriDraw" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERenderManagerOperationType::Op_LineDraw", (int64)ERenderManagerOperationType::Op_LineDraw },
		{ "ERenderManagerOperationType::Op_TriDraw", (int64)ERenderManagerOperationType::Op_TriDraw },
		{ "ERenderManagerOperationType::Op_TexDraw", (int64)ERenderManagerOperationType::Op_TexDraw },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"ERenderManagerOperationType",
	"ERenderManagerOperationType",
	Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType()
{
	if (!Z_Registration_Info_UEnum_ERenderManagerOperationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERenderManagerOperationType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERenderManagerOperationType.InnerSingleton;
}
// End Enum ERenderManagerOperationType

// Begin ScriptStruct FRenderManagerTri
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderManagerTri;
class UScriptStruct* FRenderManagerTri::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderManagerTri.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderManagerTri.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderManagerTri, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RenderManagerTri"));
	}
	return Z_Registration_Info_UScriptStruct_RenderManagerTri.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRenderManagerTri>()
{
	return FRenderManagerTri::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRenderManagerTri_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderManagerTri>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderManagerTri_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"RenderManagerTri",
	nullptr,
	0,
	sizeof(FRenderManagerTri),
	alignof(FRenderManagerTri),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerTri_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRenderManagerTri_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRenderManagerTri()
{
	if (!Z_Registration_Info_UScriptStruct_RenderManagerTri.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderManagerTri.InnerSingleton, Z_Construct_UScriptStruct_FRenderManagerTri_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RenderManagerTri.InnerSingleton;
}
// End ScriptStruct FRenderManagerTri

// Begin ScriptStruct FRenderManagerOperation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderManagerOperation;
class UScriptStruct* FRenderManagerOperation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderManagerOperation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderManagerOperation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderManagerOperation, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RenderManagerOperation"));
	}
	return Z_Registration_Info_UScriptStruct_RenderManagerOperation.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRenderManagerOperation>()
{
	return FRenderManagerOperation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRenderManagerOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tris_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OwnerID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_P1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_P2;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tris_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tris;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderManagerOperation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OwnerID = { "OwnerID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, OwnerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerID_MetaData), NewProp_OwnerID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, OperationType), Z_Construct_UEnum_VRExpansionPlugin_ERenderManagerOperationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationType_MetaData), NewProp_OperationType_MetaData) }; // 1990726103
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, P1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1_MetaData), NewProp_P1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, P2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2_MetaData), NewProp_P2_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris_Inner = { "Tris", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRenderManagerTri, METADATA_PARAMS(0, nullptr) }; // 2317357442
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris = { "Tris", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, Tris), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tris_MetaData), NewProp_Tris_MetaData) }; // 2317357442
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderManagerOperation, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OwnerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_OperationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_P2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Tris,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"RenderManagerOperation",
	Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::PropPointers),
	sizeof(FRenderManagerOperation),
	alignof(FRenderManagerOperation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRenderManagerOperation()
{
	if (!Z_Registration_Info_UScriptStruct_RenderManagerOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderManagerOperation.InnerSingleton, Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RenderManagerOperation.InnerSingleton;
}
// End ScriptStruct FRenderManagerOperation

// Begin Class ARenderTargetReplicationProxy Function Ack_InitTextureSend
struct RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms
{
	int32 TotalDataCount;
};
static FName NAME_ARenderTargetReplicationProxy_Ack_InitTextureSend = FName(TEXT("Ack_InitTextureSend"));
void ARenderTargetReplicationProxy::Ack_InitTextureSend(int32 TotalDataCount)
{
	RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms Parms;
	Parms.TotalDataCount=TotalDataCount;
	ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_Ack_InitTextureSend),&Parms);
}
struct Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalDataCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::NewProp_TotalDataCount = { "TotalDataCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms, TotalDataCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::NewProp_TotalDataCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "Ack_InitTextureSend", nullptr, nullptr, Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::PropPointers), sizeof(RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::Function_MetaDataParams) };
static_assert(sizeof(RenderTargetReplicationProxy_eventAck_InitTextureSend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARenderTargetReplicationProxy::execAck_InitTextureSend)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TotalDataCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Ack_InitTextureSend_Validate(Z_Param_TotalDataCount))
	{
		RPC_ValidateFailed(TEXT("Ack_InitTextureSend_Validate"));
		return;
	}
	P_THIS->Ack_InitTextureSend_Implementation(Z_Param_TotalDataCount);
	P_NATIVE_END;
}
// End Class ARenderTargetReplicationProxy Function Ack_InitTextureSend

// Begin Class ARenderTargetReplicationProxy Function Ack_ReceiveTextureBlob
struct RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms
{
	int32 BlobCount;
};
static FName NAME_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob = FName(TEXT("Ack_ReceiveTextureBlob"));
void ARenderTargetReplicationProxy::Ack_ReceiveTextureBlob(int32 BlobCount)
{
	RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms Parms;
	Parms.BlobCount=BlobCount;
	ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob),&Parms);
}
struct Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlobCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::NewProp_BlobCount = { "BlobCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms, BlobCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::NewProp_BlobCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "Ack_ReceiveTextureBlob", nullptr, nullptr, Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::PropPointers), sizeof(RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::Function_MetaDataParams) };
static_assert(sizeof(RenderTargetReplicationProxy_eventAck_ReceiveTextureBlob_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARenderTargetReplicationProxy::execAck_ReceiveTextureBlob)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BlobCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Ack_ReceiveTextureBlob_Validate(Z_Param_BlobCount))
	{
		RPC_ValidateFailed(TEXT("Ack_ReceiveTextureBlob_Validate"));
		return;
	}
	P_THIS->Ack_ReceiveTextureBlob_Implementation(Z_Param_BlobCount);
	P_NATIVE_END;
}
// End Class ARenderTargetReplicationProxy Function Ack_ReceiveTextureBlob

// Begin Class ARenderTargetReplicationProxy Function InitTextureSend
struct RenderTargetReplicationProxy_eventInitTextureSend_Parms
{
	int32 Width;
	int32 Height;
	int32 TotalDataCount;
	int32 BlobCount;
	TEnumAsByte<EPixelFormat> PixelFormat;
	bool bIsZipped;
};
static FName NAME_ARenderTargetReplicationProxy_InitTextureSend = FName(TEXT("InitTextureSend"));
void ARenderTargetReplicationProxy::InitTextureSend(int32 Width, int32 Height, int32 TotalDataCount, int32 BlobCount, EPixelFormat PixelFormat, bool bIsZipped)
{
	RenderTargetReplicationProxy_eventInitTextureSend_Parms Parms;
	Parms.Width=Width;
	Parms.Height=Height;
	Parms.TotalDataCount=TotalDataCount;
	Parms.BlobCount=BlobCount;
	Parms.PixelFormat=PixelFormat;
	Parms.bIsZipped=bIsZipped ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_InitTextureSend),&Parms);
}
struct Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, bool bIsJPG*/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", bool bIsJPG" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalDataCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlobCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat;
	static void NewProp_bIsZipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsZipped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_TotalDataCount = { "TotalDataCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, TotalDataCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_BlobCount = { "BlobCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, BlobCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventInitTextureSend_Parms, PixelFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(0, nullptr) }; // 2609309733
void Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_bIsZipped_SetBit(void* Obj)
{
	((RenderTargetReplicationProxy_eventInitTextureSend_Parms*)Obj)->bIsZipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_bIsZipped = { "bIsZipped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RenderTargetReplicationProxy_eventInitTextureSend_Parms), &Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_bIsZipped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_TotalDataCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_BlobCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_PixelFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::NewProp_bIsZipped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "InitTextureSend", nullptr, nullptr, Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::PropPointers), sizeof(RenderTargetReplicationProxy_eventInitTextureSend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::Function_MetaDataParams) };
static_assert(sizeof(RenderTargetReplicationProxy_eventInitTextureSend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARenderTargetReplicationProxy::execInitTextureSend)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_PROPERTY(FIntProperty,Z_Param_TotalDataCount);
	P_GET_PROPERTY(FIntProperty,Z_Param_BlobCount);
	P_GET_PROPERTY(FByteProperty,Z_Param_PixelFormat);
	P_GET_UBOOL(Z_Param_bIsZipped);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitTextureSend_Implementation(Z_Param_Width,Z_Param_Height,Z_Param_TotalDataCount,Z_Param_BlobCount,EPixelFormat(Z_Param_PixelFormat),Z_Param_bIsZipped);
	P_NATIVE_END;
}
// End Class ARenderTargetReplicationProxy Function InitTextureSend

// Begin Class ARenderTargetReplicationProxy Function OnRep_Manager
struct Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "OnRep_Manager", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARenderTargetReplicationProxy::execOnRep_Manager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Manager();
	P_NATIVE_END;
}
// End Class ARenderTargetReplicationProxy Function OnRep_Manager

// Begin Class ARenderTargetReplicationProxy Function ReceiveTexture
struct RenderTargetReplicationProxy_eventReceiveTexture_Parms
{
	FBPVRReplicatedTextureStore TextureData;
};
static FName NAME_ARenderTargetReplicationProxy_ReceiveTexture = FName(TEXT("ReceiveTexture"));
void ARenderTargetReplicationProxy::ReceiveTexture(FBPVRReplicatedTextureStore const& TextureData)
{
	RenderTargetReplicationProxy_eventReceiveTexture_Parms Parms;
	Parms.TextureData=TextureData;
	ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_ReceiveTexture),&Parms);
}
struct Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventReceiveTexture_Parms, TextureData), Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureData_MetaData), NewProp_TextureData_MetaData) }; // 3957081846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::NewProp_TextureData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "ReceiveTexture", nullptr, nullptr, Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::PropPointers), sizeof(RenderTargetReplicationProxy_eventReceiveTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(RenderTargetReplicationProxy_eventReceiveTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARenderTargetReplicationProxy::execReceiveTexture)
{
	P_GET_STRUCT(FBPVRReplicatedTextureStore,Z_Param_TextureData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveTexture_Implementation(Z_Param_TextureData);
	P_NATIVE_END;
}
// End Class ARenderTargetReplicationProxy Function ReceiveTexture

// Begin Class ARenderTargetReplicationProxy Function ReceiveTextureBlob
struct RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms
{
	TArray<uint8> TextureBlob;
	int32 LocationInData;
	int32 BlobCount;
};
static FName NAME_ARenderTargetReplicationProxy_ReceiveTextureBlob = FName(TEXT("ReceiveTextureBlob"));
void ARenderTargetReplicationProxy::ReceiveTextureBlob(TArray<uint8> const& TextureBlob, int32 LocationInData, int32 BlobCount)
{
	RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms Parms;
	Parms.TextureBlob=TextureBlob;
	Parms.LocationInData=LocationInData;
	Parms.BlobCount=BlobCount;
	ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_ReceiveTextureBlob),&Parms);
}
struct Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureBlob_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureBlob_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureBlob;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocationInData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlobCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob_Inner = { "TextureBlob", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob = { "TextureBlob", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms, TextureBlob), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureBlob_MetaData), NewProp_TextureBlob_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_LocationInData = { "LocationInData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms, LocationInData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_BlobCount = { "BlobCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms, BlobCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_TextureBlob,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_LocationInData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::NewProp_BlobCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "ReceiveTextureBlob", nullptr, nullptr, Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::PropPointers), sizeof(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::Function_MetaDataParams) };
static_assert(sizeof(RenderTargetReplicationProxy_eventReceiveTextureBlob_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARenderTargetReplicationProxy::execReceiveTextureBlob)
{
	P_GET_TARRAY(uint8,Z_Param_TextureBlob);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocationInData);
	P_GET_PROPERTY(FIntProperty,Z_Param_BlobCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveTextureBlob_Implementation(Z_Param_TextureBlob,Z_Param_LocationInData,Z_Param_BlobCount);
	P_NATIVE_END;
}
// End Class ARenderTargetReplicationProxy Function ReceiveTextureBlob

// Begin Class ARenderTargetReplicationProxy Function SendLocalDrawOperations
struct RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms
{
	TArray<FRenderManagerOperation> LocalRenderOperationStoreList;
};
static FName NAME_ARenderTargetReplicationProxy_SendLocalDrawOperations = FName(TEXT("SendLocalDrawOperations"));
void ARenderTargetReplicationProxy::SendLocalDrawOperations(TArray<FRenderManagerOperation> const& LocalRenderOperationStoreList)
{
	RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms Parms;
	Parms.LocalRenderOperationStoreList=LocalRenderOperationStoreList;
	ProcessEvent(FindFunctionChecked(NAME_ARenderTargetReplicationProxy_SendLocalDrawOperations),&Parms);
}
struct Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalRenderOperationStoreList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRenderOperationStoreList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalRenderOperationStoreList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList_Inner = { "LocalRenderOperationStoreList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRenderManagerOperation, METADATA_PARAMS(0, nullptr) }; // 1692142507
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList = { "LocalRenderOperationStoreList", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms, LocalRenderOperationStoreList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalRenderOperationStoreList_MetaData), NewProp_LocalRenderOperationStoreList_MetaData) }; // 1692142507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::NewProp_LocalRenderOperationStoreList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "SendLocalDrawOperations", nullptr, nullptr, Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::PropPointers), sizeof(RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(RenderTargetReplicationProxy_eventSendLocalDrawOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARenderTargetReplicationProxy::execSendLocalDrawOperations)
{
	P_GET_TARRAY(FRenderManagerOperation,Z_Param_LocalRenderOperationStoreList);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->SendLocalDrawOperations_Validate(Z_Param_LocalRenderOperationStoreList))
	{
		RPC_ValidateFailed(TEXT("SendLocalDrawOperations_Validate"));
		return;
	}
	P_THIS->SendLocalDrawOperations_Implementation(Z_Param_LocalRenderOperationStoreList);
	P_NATIVE_END;
}
// End Class ARenderTargetReplicationProxy Function SendLocalDrawOperations

// Begin Class ARenderTargetReplicationProxy Function SendNextDataBlob
struct Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARenderTargetReplicationProxy, nullptr, "SendNextDataBlob", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARenderTargetReplicationProxy::execSendNextDataBlob)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendNextDataBlob();
	P_NATIVE_END;
}
// End Class ARenderTargetReplicationProxy Function SendNextDataBlob

// Begin Class ARenderTargetReplicationProxy
void ARenderTargetReplicationProxy::StaticRegisterNativesARenderTargetReplicationProxy()
{
	UClass* Class = ARenderTargetReplicationProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Ack_InitTextureSend", &ARenderTargetReplicationProxy::execAck_InitTextureSend },
		{ "Ack_ReceiveTextureBlob", &ARenderTargetReplicationProxy::execAck_ReceiveTextureBlob },
		{ "InitTextureSend", &ARenderTargetReplicationProxy::execInitTextureSend },
		{ "OnRep_Manager", &ARenderTargetReplicationProxy::execOnRep_Manager },
		{ "ReceiveTexture", &ARenderTargetReplicationProxy::execReceiveTexture },
		{ "ReceiveTextureBlob", &ARenderTargetReplicationProxy::execReceiveTextureBlob },
		{ "SendLocalDrawOperations", &ARenderTargetReplicationProxy::execSendLocalDrawOperations },
		{ "SendNextDataBlob", &ARenderTargetReplicationProxy::execSendNextDataBlob },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARenderTargetReplicationProxy);
UClass* Z_Construct_UClass_ARenderTargetReplicationProxy_NoRegister()
{
	return ARenderTargetReplicationProxy::StaticClass();
}
struct Z_Construct_UClass_ARenderTargetReplicationProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This class is used as a proxy to send owner only RPCs\n*/" },
#endif
		{ "IncludePath", "Misc/VRRenderTargetManager.h" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class is used as a proxy to send owner only RPCs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnersID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlobNum_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureBlobSize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum size of texture blobs to use for sending (size of chunks that it gets broken down into)\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum size of texture blobs to use for sending (size of chunks that it gets broken down into)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBytesPerSecondRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum bytes per second to send, you will want to play around with this and the\n// MaxClientRate settings in config in order to balance the bandwidth and avoid saturation\n// If you raise this above the max replication size of a 65k byte size then you will need\n// To adjust the max size in engine network settings.\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum bytes per second to send, you will want to play around with this and the\nMaxClientRate settings in config in order to balance the bandwidth and avoid saturation\nIf you raise this above the max replication size of a 65k byte size then you will need\nTo adjust the max size in engine network settings." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningManager;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OwnersID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureStore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlobNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureBlobSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBytesPerSecondRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_InitTextureSend, "Ack_InitTextureSend" }, // 4236579206
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob, "Ack_ReceiveTextureBlob" }, // 2786446940
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_InitTextureSend, "InitTextureSend" }, // 3617506145
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_OnRep_Manager, "OnRep_Manager" }, // 139887896
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTexture, "ReceiveTexture" }, // 3038682467
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_ReceiveTextureBlob, "ReceiveTextureBlob" }, // 2763877239
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_SendLocalDrawOperations, "SendLocalDrawOperations" }, // 1261588629
		{ &Z_Construct_UFunction_ARenderTargetReplicationProxy_SendNextDataBlob, "SendNextDataBlob" }, // 2028783661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenderTargetReplicationProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwningManager = { "OwningManager", "OnRep_Manager", (EPropertyFlags)0x0114000100080028, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, OwningManager), Z_Construct_UClass_UVRRenderTargetManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningManager_MetaData), NewProp_OwningManager_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwnersID = { "OwnersID", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, OwnersID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnersID_MetaData), NewProp_OwnersID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureStore = { "TextureStore", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, TextureStore), Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureStore_MetaData), NewProp_TextureStore_MetaData) }; // 3957081846
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_BlobNum = { "BlobNum", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, BlobNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlobNum_MetaData), NewProp_BlobNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureBlobSize = { "TextureBlobSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, TextureBlobSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureBlobSize_MetaData), NewProp_TextureBlobSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_MaxBytesPerSecondRate = { "MaxBytesPerSecondRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARenderTargetReplicationProxy, MaxBytesPerSecondRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBytesPerSecondRate_MetaData), NewProp_MaxBytesPerSecondRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwningManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_OwnersID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_BlobNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_TextureBlobSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::NewProp_MaxBytesPerSecondRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::ClassParams = {
	&ARenderTargetReplicationProxy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARenderTargetReplicationProxy()
{
	if (!Z_Registration_Info_UClass_ARenderTargetReplicationProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenderTargetReplicationProxy.OuterSingleton, Z_Construct_UClass_ARenderTargetReplicationProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARenderTargetReplicationProxy.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<ARenderTargetReplicationProxy>()
{
	return ARenderTargetReplicationProxy::StaticClass();
}
void ARenderTargetReplicationProxy::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OwningManager(TEXT("OwningManager"));
	static const FName Name_OwnersID(TEXT("OwnersID"));
	const bool bIsValid = true
		&& Name_OwningManager == ClassReps[(int32)ENetFields_Private::OwningManager].Property->GetFName()
		&& Name_OwnersID == ClassReps[(int32)ENetFields_Private::OwnersID].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARenderTargetReplicationProxy"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARenderTargetReplicationProxy);
ARenderTargetReplicationProxy::~ARenderTargetReplicationProxy() {}
// End Class ARenderTargetReplicationProxy

// Begin ScriptStruct FClientRepData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientRepData;
class UScriptStruct* FClientRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRepData, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ClientRepData"));
	}
	return Z_Registration_Info_UScriptStruct_ClientRepData.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FClientRepData>()
{
	return FClientRepData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClientRepData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicationProxy;
	static void NewProp_bIsRelevant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRelevant;
	static void NewProp_bIsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRepData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientRepData, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PC_MetaData), NewProp_PC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_ReplicationProxy = { "ReplicationProxy", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClientRepData, ReplicationProxy), Z_Construct_UClass_ARenderTargetReplicationProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationProxy_MetaData), NewProp_ReplicationProxy_MetaData) };
void Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant_SetBit(void* Obj)
{
	((FClientRepData*)Obj)->bIsRelevant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant = { "bIsRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClientRepData), &Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRelevant_MetaData), NewProp_bIsRelevant_MetaData) };
void Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty_SetBit(void* Obj)
{
	((FClientRepData*)Obj)->bIsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClientRepData), &Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDirty_MetaData), NewProp_bIsDirty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRepData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_PC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_ReplicationProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsRelevant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRepData_Statics::NewProp_bIsDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRepData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"ClientRepData",
	Z_Construct_UScriptStruct_FClientRepData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::PropPointers),
	sizeof(FClientRepData),
	alignof(FClientRepData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRepData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClientRepData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClientRepData()
{
	if (!Z_Registration_Info_UScriptStruct_ClientRepData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientRepData.InnerSingleton, Z_Construct_UScriptStruct_FClientRepData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClientRepData.InnerSingleton;
}
// End ScriptStruct FClientRepData

// Begin Class UVRRenderTargetManager Function AddLineDrawOperation
struct Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics
{
	struct VRRenderTargetManager_eventAddLineDrawOperation_Parms
	{
		FVector2D Point1;
		FVector2D Point2;
		FColor Color;
		int32 Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRRenderTargetManager|DrawingFunctions" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddLineDrawOperation_Parms, Point1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddLineDrawOperation_Parms, Point2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddLineDrawOperation_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddLineDrawOperation_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Point1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Point2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "AddLineDrawOperation", nullptr, nullptr, Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::VRRenderTargetManager_eventAddLineDrawOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::VRRenderTargetManager_eventAddLineDrawOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRRenderTargetManager::execAddLineDrawOperation)
{
	P_GET_STRUCT(FVector2D,Z_Param_Point1);
	P_GET_STRUCT(FVector2D,Z_Param_Point2);
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_GET_PROPERTY(FIntProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddLineDrawOperation(Z_Param_Point1,Z_Param_Point2,Z_Param_Color,Z_Param_Thickness);
	P_NATIVE_END;
}
// End Class UVRRenderTargetManager Function AddLineDrawOperation

// Begin Class UVRRenderTargetManager Function AddMaterialTrianglesDrawOperation
struct Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics
{
	struct VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms
	{
		TArray<FCanvasUVTri> Tris;
		UMaterial* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRRenderTargetManager|DrawingFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a draw operation for a triangle list, only takes the first vertex's color\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a draw operation for a triangle list, only takes the first vertex's color" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tris_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tris;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Tris_Inner = { "Tris", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(0, nullptr) }; // 1158045936
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Tris = { "Tris", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms, Tris), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1158045936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Tris_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Tris,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "AddMaterialTrianglesDrawOperation", nullptr, nullptr, Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::VRRenderTargetManager_eventAddMaterialTrianglesDrawOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRRenderTargetManager::execAddMaterialTrianglesDrawOperation)
{
	P_GET_TARRAY(FCanvasUVTri,Z_Param_Tris);
	P_GET_OBJECT(UMaterial,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMaterialTrianglesDrawOperation(Z_Param_Tris,Z_Param_Material);
	P_NATIVE_END;
}
// End Class UVRRenderTargetManager Function AddMaterialTrianglesDrawOperation

// Begin Class UVRRenderTargetManager Function AddTextureDrawOperation
struct Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics
{
	struct VRRenderTargetManager_eventAddTextureDrawOperation_Parms
	{
		FVector2D Position;
		UTexture2D* TextureToDisplay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRRenderTargetManager|DrawingFunctions" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureToDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddTextureDrawOperation_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::NewProp_TextureToDisplay = { "TextureToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventAddTextureDrawOperation_Parms, TextureToDisplay), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::NewProp_TextureToDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "AddTextureDrawOperation", nullptr, nullptr, Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::VRRenderTargetManager_eventAddTextureDrawOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::VRRenderTargetManager_eventAddTextureDrawOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRRenderTargetManager::execAddTextureDrawOperation)
{
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_GET_OBJECT(UTexture2D,Z_Param_TextureToDisplay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTextureDrawOperation(Z_Param_Position,Z_Param_TextureToDisplay);
	P_NATIVE_END;
}
// End Class UVRRenderTargetManager Function AddTextureDrawOperation

// Begin Class UVRRenderTargetManager Function DrawPoll
struct Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "DrawPoll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRRenderTargetManager::execDrawPoll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawPoll();
	P_NATIVE_END;
}
// End Class UVRRenderTargetManager Function DrawPoll

// Begin Class UVRRenderTargetManager Function GenerateTrisFromBoxPlaneIntersection
struct Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics
{
	struct VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms
	{
		UPrimitiveComponent* PrimToBoxCheck;
		FTransform WorldTransformOfPlane;
		FPlane LocalProjectionPlane;
		FVector2D PlaneSize;
		FColor UVColor;
		TArray<FCanvasUVTri> OutTris;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRRenderTargetManager|UtilityFunctions" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimToBoxCheck_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalProjectionPlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimToBoxCheck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransformOfPlane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalProjectionPlane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTris_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTris;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PrimToBoxCheck = { "PrimToBoxCheck", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, PrimToBoxCheck), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimToBoxCheck_MetaData), NewProp_PrimToBoxCheck_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_WorldTransformOfPlane = { "WorldTransformOfPlane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, WorldTransformOfPlane), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_LocalProjectionPlane = { "LocalProjectionPlane", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, LocalProjectionPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalProjectionPlane_MetaData), NewProp_LocalProjectionPlane_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PlaneSize = { "PlaneSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, PlaneSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_UVColor = { "UVColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, UVColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_OutTris_Inner = { "OutTris", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCanvasUVTri, METADATA_PARAMS(0, nullptr) }; // 1158045936
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_OutTris = { "OutTris", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms, OutTris), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1158045936
void Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms), &Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PrimToBoxCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_WorldTransformOfPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_LocalProjectionPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_PlaneSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_UVColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_OutTris_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_OutTris,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "GenerateTrisFromBoxPlaneIntersection", nullptr, nullptr, Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::VRRenderTargetManager_eventGenerateTrisFromBoxPlaneIntersection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRRenderTargetManager::execGenerateTrisFromBoxPlaneIntersection)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimToBoxCheck);
	P_GET_STRUCT(FTransform,Z_Param_WorldTransformOfPlane);
	P_GET_STRUCT_REF(FPlane,Z_Param_Out_LocalProjectionPlane);
	P_GET_STRUCT(FVector2D,Z_Param_PlaneSize);
	P_GET_STRUCT(FColor,Z_Param_UVColor);
	P_GET_TARRAY_REF(FCanvasUVTri,Z_Param_Out_OutTris);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateTrisFromBoxPlaneIntersection(Z_Param_PrimToBoxCheck,Z_Param_WorldTransformOfPlane,Z_Param_Out_LocalProjectionPlane,Z_Param_PlaneSize,Z_Param_UVColor,Z_Param_Out_OutTris);
	P_NATIVE_END;
}
// End Class UVRRenderTargetManager Function GenerateTrisFromBoxPlaneIntersection

// Begin Class UVRRenderTargetManager Function SendDrawOperations
struct VRRenderTargetManager_eventSendDrawOperations_Parms
{
	TArray<FRenderManagerOperation> RenderOperationStoreList;
};
static FName NAME_UVRRenderTargetManager_SendDrawOperations = FName(TEXT("SendDrawOperations"));
void UVRRenderTargetManager::SendDrawOperations(TArray<FRenderManagerOperation> const& RenderOperationStoreList)
{
	VRRenderTargetManager_eventSendDrawOperations_Parms Parms;
	Parms.RenderOperationStoreList=RenderOperationStoreList;
	ProcessEvent(FindFunctionChecked(NAME_UVRRenderTargetManager_SendDrawOperations),&Parms);
}
struct Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderOperationStoreList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderOperationStoreList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderOperationStoreList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList_Inner = { "RenderOperationStoreList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRenderManagerOperation, METADATA_PARAMS(0, nullptr) }; // 1692142507
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList = { "RenderOperationStoreList", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRRenderTargetManager_eventSendDrawOperations_Parms, RenderOperationStoreList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderOperationStoreList_MetaData), NewProp_RenderOperationStoreList_MetaData) }; // 1692142507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::NewProp_RenderOperationStoreList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRenderTargetManager, nullptr, "SendDrawOperations", nullptr, nullptr, Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::PropPointers), sizeof(VRRenderTargetManager_eventSendDrawOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRRenderTargetManager_eventSendDrawOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRRenderTargetManager::execSendDrawOperations)
{
	P_GET_TARRAY(FRenderManagerOperation,Z_Param_RenderOperationStoreList);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->SendDrawOperations_Validate(Z_Param_RenderOperationStoreList))
	{
		RPC_ValidateFailed(TEXT("SendDrawOperations_Validate"));
		return;
	}
	P_THIS->SendDrawOperations_Implementation(Z_Param_RenderOperationStoreList);
	P_NATIVE_END;
}
// End Class UVRRenderTargetManager Function SendDrawOperations

// Begin Class UVRRenderTargetManager
void UVRRenderTargetManager::StaticRegisterNativesUVRRenderTargetManager()
{
	UClass* Class = UVRRenderTargetManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLineDrawOperation", &UVRRenderTargetManager::execAddLineDrawOperation },
		{ "AddMaterialTrianglesDrawOperation", &UVRRenderTargetManager::execAddMaterialTrianglesDrawOperation },
		{ "AddTextureDrawOperation", &UVRRenderTargetManager::execAddTextureDrawOperation },
		{ "DrawPoll", &UVRRenderTargetManager::execDrawPoll },
		{ "GenerateTrisFromBoxPlaneIntersection", &UVRRenderTargetManager::execGenerateTrisFromBoxPlaneIntersection },
		{ "SendDrawOperations", &UVRRenderTargetManager::execSendDrawOperations },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRRenderTargetManager);
UClass* Z_Construct_UClass_UVRRenderTargetManager_NoRegister()
{
	return UVRRenderTargetManager::StaticClass();
}
struct Z_Construct_UClass_UVRRenderTargetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This class stores reading requests for rendertargets and iterates over them\n* It returns the pixel data at the end of processing\n* It references code from: https://github.com/TimmHess/UnrealImageCapture\n*/" },
#endif
		{ "IncludePath", "Misc/VRRenderTargetManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class stores reading requests for rendertargets and iterates over them\nIt returns the pixel data at the end of processing\nIt references code from: https://github.com/TimmHess/UnrealImageCapture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawRate_MetaData[] = {
		{ "Category", "RenderTargetManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rate to poll for drawing new operations\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate to poll for drawing new operations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStoringImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitiallyReplicateTexture_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingTextureBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureBlobSize_MetaData[] = {
		{ "Category", "RenderTargetManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum size of texture blobs to use for sending (size of chunks that it gets broken down into)\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum size of texture blobs to use for sending (size of chunks that it gets broken down into)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBytesPerSecondRate_MetaData[] = {
		{ "Category", "RenderTargetManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum bytes per second to send, you will want to play around with this and the\n// MaxClientRate settings in config in order to balance the bandwidth and avoid saturation\n// If you raise this above the max replication size of a 65k byte size then you will need\n// To adjust the max size in engine network settings.\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum bytes per second to send, you will want to play around with this and the\nMaxClientRate settings in config in order to balance the bandwidth and avoid saturation\nIf you raise this above the max replication size of a 65k byte size then you will need\nTo adjust the max size in engine network settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetWidth_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetHeight_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "Category", "RenderTargetManager" },
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetRelevancyLog_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PollRelevancyTime_MetaData[] = {
		{ "Category", "RenderTargetManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rate to poll for actor relevancy\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate to poll for actor relevancy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRRenderTargetManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalProxy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawHandle;
	static void NewProp_bIsStoringImage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStoringImage;
	static void NewProp_bInitiallyReplicateTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitiallyReplicateTexture;
	static void NewProp_bIsLoadingTextureBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingTextureBuffer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureBlobSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBytesPerSecondRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderTargetWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderTargetHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetRelevancyLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NetRelevancyLog;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PollRelevancyTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetStore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRRenderTargetManager_AddLineDrawOperation, "AddLineDrawOperation" }, // 2235801889
		{ &Z_Construct_UFunction_UVRRenderTargetManager_AddMaterialTrianglesDrawOperation, "AddMaterialTrianglesDrawOperation" }, // 2552478935
		{ &Z_Construct_UFunction_UVRRenderTargetManager_AddTextureDrawOperation, "AddTextureDrawOperation" }, // 3715652122
		{ &Z_Construct_UFunction_UVRRenderTargetManager_DrawPoll, "DrawPoll" }, // 4058851115
		{ &Z_Construct_UFunction_UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection, "GenerateTrisFromBoxPlaneIntersection" }, // 2591825801
		{ &Z_Construct_UFunction_UVRRenderTargetManager_SendDrawOperations, "SendDrawOperations" }, // 3208567162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRRenderTargetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_LocalProxy = { "LocalProxy", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, LocalProxy), Z_Construct_UClass_ARenderTargetReplicationProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalProxy_MetaData), NewProp_LocalProxy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawRate = { "DrawRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, DrawRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawRate_MetaData), NewProp_DrawRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawHandle = { "DrawHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, DrawHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawHandle_MetaData), NewProp_DrawHandle_MetaData) }; // 756291145
void Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage_SetBit(void* Obj)
{
	((UVRRenderTargetManager*)Obj)->bIsStoringImage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage = { "bIsStoringImage", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRRenderTargetManager), &Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStoringImage_MetaData), NewProp_bIsStoringImage_MetaData) };
void Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture_SetBit(void* Obj)
{
	((UVRRenderTargetManager*)Obj)->bInitiallyReplicateTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture = { "bInitiallyReplicateTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRRenderTargetManager), &Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitiallyReplicateTexture_MetaData), NewProp_bInitiallyReplicateTexture_MetaData) };
void Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer_SetBit(void* Obj)
{
	((UVRRenderTargetManager*)Obj)->bIsLoadingTextureBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer = { "bIsLoadingTextureBuffer", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVRRenderTargetManager), &Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadingTextureBuffer_MetaData), NewProp_bIsLoadingTextureBuffer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_TextureBlobSize = { "TextureBlobSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, TextureBlobSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureBlobSize_MetaData), NewProp_TextureBlobSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_MaxBytesPerSecondRate = { "MaxBytesPerSecondRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, MaxBytesPerSecondRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBytesPerSecondRate_MetaData), NewProp_MaxBytesPerSecondRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, RenderTarget), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetWidth = { "RenderTargetWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, RenderTargetWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetWidth_MetaData), NewProp_RenderTargetWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetHeight = { "RenderTargetHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, RenderTargetHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetHeight_MetaData), NewProp_RenderTargetHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, ClearColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog_Inner = { "NetRelevancyLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClientRepData, METADATA_PARAMS(0, nullptr) }; // 316082136
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog = { "NetRelevancyLog", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, NetRelevancyLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetRelevancyLog_MetaData), NewProp_NetRelevancyLog_MetaData) }; // 316082136
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_PollRelevancyTime = { "PollRelevancyTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, PollRelevancyTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PollRelevancyTime_MetaData), NewProp_PollRelevancyTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetStore = { "RenderTargetStore", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRRenderTargetManager, RenderTargetStore), Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetStore_MetaData), NewProp_RenderTargetStore_MetaData) }; // 3957081846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRRenderTargetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_LocalProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_DrawHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsStoringImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bInitiallyReplicateTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_bIsLoadingTextureBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_TextureBlobSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_MaxBytesPerSecondRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_NetRelevancyLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_PollRelevancyTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRRenderTargetManager_Statics::NewProp_RenderTargetStore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRRenderTargetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRRenderTargetManager_Statics::ClassParams = {
	&UVRRenderTargetManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRRenderTargetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRRenderTargetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRRenderTargetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRRenderTargetManager()
{
	if (!Z_Registration_Info_UClass_UVRRenderTargetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRRenderTargetManager.OuterSingleton, Z_Construct_UClass_UVRRenderTargetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRRenderTargetManager.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRRenderTargetManager>()
{
	return UVRRenderTargetManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRenderTargetManager);
UVRRenderTargetManager::~UVRRenderTargetManager() {}
// End Class UVRRenderTargetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERenderManagerOperationType_StaticEnum, TEXT("ERenderManagerOperationType"), &Z_Registration_Info_UEnum_ERenderManagerOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1990726103U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBPVRReplicatedTextureStore::StaticStruct, Z_Construct_UScriptStruct_FBPVRReplicatedTextureStore_Statics::NewStructOps, TEXT("BPVRReplicatedTextureStore"), &Z_Registration_Info_UScriptStruct_BPVRReplicatedTextureStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBPVRReplicatedTextureStore), 3957081846U) },
		{ FRenderDataStore::StaticStruct, Z_Construct_UScriptStruct_FRenderDataStore_Statics::NewStructOps, TEXT("RenderDataStore"), &Z_Registration_Info_UScriptStruct_RenderDataStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderDataStore), 1491791217U) },
		{ FRenderManagerTri::StaticStruct, Z_Construct_UScriptStruct_FRenderManagerTri_Statics::NewStructOps, TEXT("RenderManagerTri"), &Z_Registration_Info_UScriptStruct_RenderManagerTri, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderManagerTri), 2317357442U) },
		{ FRenderManagerOperation::StaticStruct, Z_Construct_UScriptStruct_FRenderManagerOperation_Statics::NewStructOps, TEXT("RenderManagerOperation"), &Z_Registration_Info_UScriptStruct_RenderManagerOperation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderManagerOperation), 1692142507U) },
		{ FClientRepData::StaticStruct, Z_Construct_UScriptStruct_FClientRepData_Statics::NewStructOps, TEXT("ClientRepData"), &Z_Registration_Info_UScriptStruct_ClientRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientRepData), 316082136U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARenderTargetReplicationProxy, ARenderTargetReplicationProxy::StaticClass, TEXT("ARenderTargetReplicationProxy"), &Z_Registration_Info_UClass_ARenderTargetReplicationProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenderTargetReplicationProxy), 625877910U) },
		{ Z_Construct_UClass_UVRRenderTargetManager, UVRRenderTargetManager::StaticClass, TEXT("UVRRenderTargetManager"), &Z_Registration_Info_UClass_UVRRenderTargetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRRenderTargetManager), 481604271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_26164606(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRRenderTargetManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
