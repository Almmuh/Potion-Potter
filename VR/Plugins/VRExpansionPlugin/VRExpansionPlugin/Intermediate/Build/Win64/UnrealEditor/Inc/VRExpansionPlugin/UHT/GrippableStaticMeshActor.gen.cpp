// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableStaticMeshActor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableDataTypes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippablePhysicsReplication.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableStaticMeshActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableStaticMeshActor();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableStaticMeshActor_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOptionalRepStaticMeshComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOptionalRepStaticMeshComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachmentWithWeld();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData();
// End Cross Module References

// Begin Class UOptionalRepStaticMeshComponent
void UOptionalRepStaticMeshComponent::StaticRegisterNativesUOptionalRepStaticMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionalRepStaticMeshComponent);
UClass* Z_Construct_UClass_UOptionalRepStaticMeshComponent_NoRegister()
{
	return UOptionalRepStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A component specifically for being able to turn off movement replication in the component at will\n* Has the upside of also being a blueprintable base since UE4 doesn't allow that with std ones\n*/" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Grippables/GrippableStaticMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component specifically for being able to turn off movement replication in the component at will\nHas the upside of also being a blueprintable base since UE4 doesn't allow that with std ones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "Component Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bReplicateMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionalRepStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
{
	((UOptionalRepStaticMeshComponent*)Obj)->bReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOptionalRepStaticMeshComponent), &Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateMovement_MetaData), NewProp_bReplicateMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::NewProp_bReplicateMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::ClassParams = {
	&UOptionalRepStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOptionalRepStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UOptionalRepStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionalRepStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UOptionalRepStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOptionalRepStaticMeshComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UOptionalRepStaticMeshComponent>()
{
	return UOptionalRepStaticMeshComponent::StaticClass();
}
void UOptionalRepStaticMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
	const bool bIsValid = true
		&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOptionalRepStaticMeshComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionalRepStaticMeshComponent);
UOptionalRepStaticMeshComponent::~UOptionalRepStaticMeshComponent() {}
// End Class UOptionalRepStaticMeshComponent

// Begin Class AGrippableStaticMeshActor Function AddToClientReplicationBucket
struct Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics
{
	struct GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add this to client side physics replication (until coming to rest or timeout period is hit)\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add this to client side physics replication (until coming to rest or timeout period is hit)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "AddToClientReplicationBucket", nullptr, nullptr, Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::GrippableStaticMeshActor_eventAddToClientReplicationBucket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execAddToClientReplicationBucket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddToClientReplicationBucket();
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function AddToClientReplicationBucket

// Begin Class AGrippableStaticMeshActor Function CeaseReplicationBlocking
struct Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "CeaseReplicationBlocking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execCeaseReplicationBlocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CeaseReplicationBlocking();
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function CeaseReplicationBlocking

// Begin Class AGrippableStaticMeshActor Function IsCurrentlyClientAuthThrowing
struct Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics
{
	struct GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if this object is currently client auth throwing\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if this object is currently client auth throwing" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "IsCurrentlyClientAuthThrowing", nullptr, nullptr, Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::GrippableStaticMeshActor_eventIsCurrentlyClientAuthThrowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execIsCurrentlyClientAuthThrowing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCurrentlyClientAuthThrowing();
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function IsCurrentlyClientAuthThrowing

// Begin Class AGrippableStaticMeshActor Function PollReplicationEvent
struct Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics
{
	struct GrippableStaticMeshActor_eventPollReplicationEvent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// From IVRReplicationInterface\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From IVRReplicationInterface" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GrippableStaticMeshActor_eventPollReplicationEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventPollReplicationEvent_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "PollReplicationEvent", nullptr, nullptr, Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::GrippableStaticMeshActor_eventPollReplicationEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::GrippableStaticMeshActor_eventPollReplicationEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execPollReplicationEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PollReplicationEvent();
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function PollReplicationEvent

// Begin Class AGrippableStaticMeshActor Function RemoveFromClientReplicationBucket
struct Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics
{
	struct GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove this from client side physics replication\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove this from client side physics replication" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "RemoveFromClientReplicationBucket", nullptr, nullptr, Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::GrippableStaticMeshActor_eventRemoveFromClientReplicationBucket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execRemoveFromClientReplicationBucket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveFromClientReplicationBucket();
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function RemoveFromClientReplicationBucket

// Begin Class AGrippableStaticMeshActor Function Server_EndClientAuthReplication
static FName NAME_AGrippableStaticMeshActor_Server_EndClientAuthReplication = FName(TEXT("Server_EndClientAuthReplication"));
void AGrippableStaticMeshActor::Server_EndClientAuthReplication()
{
	ProcessEvent(FindFunctionChecked(NAME_AGrippableStaticMeshActor_Server_EndClientAuthReplication),NULL);
}
struct Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the server that we are no longer trying to run the throwing auth\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the server that we are no longer trying to run the throwing auth" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "Server_EndClientAuthReplication", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execServer_EndClientAuthReplication)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_EndClientAuthReplication_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_EndClientAuthReplication_Validate"));
		return;
	}
	P_THIS->Server_EndClientAuthReplication_Implementation();
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function Server_EndClientAuthReplication

// Begin Class AGrippableStaticMeshActor Function Server_GetClientAuthReplication
struct GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms
{
	FRepMovementVR newMovement;
};
static FName NAME_AGrippableStaticMeshActor_Server_GetClientAuthReplication = FName(TEXT("Server_GetClientAuthReplication"));
void AGrippableStaticMeshActor::Server_GetClientAuthReplication(FRepMovementVR const& newMovement)
{
	GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms Parms;
	Parms.newMovement=newMovement;
	ProcessEvent(FindFunctionChecked(NAME_AGrippableStaticMeshActor_Server_GetClientAuthReplication),&Parms);
}
struct Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify the server about a new movement rep\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the server about a new movement rep" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_newMovement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_newMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement = { "newMovement", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms, newMovement), Z_Construct_UScriptStruct_FRepMovementVR, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_newMovement_MetaData), NewProp_newMovement_MetaData) }; // 506824488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::NewProp_newMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "Server_GetClientAuthReplication", nullptr, nullptr, Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::PropPointers), sizeof(GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(GrippableStaticMeshActor_eventServer_GetClientAuthReplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execServer_GetClientAuthReplication)
{
	P_GET_STRUCT(FRepMovementVR,Z_Param_newMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_GetClientAuthReplication_Validate(Z_Param_newMovement))
	{
		RPC_ValidateFailed(TEXT("Server_GetClientAuthReplication_Validate"));
		return;
	}
	P_THIS->Server_GetClientAuthReplication_Implementation(Z_Param_newMovement);
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function Server_GetClientAuthReplication

// Begin Class AGrippableStaticMeshActor Function SetDenyGripping
struct Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics
{
	struct GrippableStaticMeshActor_eventSetDenyGripping_Parms
	{
		bool bDenyGripping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDenyGripping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
{
	((GrippableStaticMeshActor_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrippableStaticMeshActor_eventSetDenyGripping_Parms), &Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::NewProp_bDenyGripping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "SetDenyGripping", nullptr, nullptr, Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::GrippableStaticMeshActor_eventSetDenyGripping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::GrippableStaticMeshActor_eventSetDenyGripping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execSetDenyGripping)
{
	P_GET_UBOOL(Z_Param_bDenyGripping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function SetDenyGripping

// Begin Class AGrippableStaticMeshActor Function SetGripPriority
struct Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics
{
	struct GrippableStaticMeshActor_eventSetGripPriority_Parms
	{
		int32 NewGripPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the grip priority on the FBPInterfaceSettings struct\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the grip priority on the FBPInterfaceSettings struct" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGripPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrippableStaticMeshActor_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::NewProp_NewGripPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrippableStaticMeshActor, nullptr, "SetGripPriority", nullptr, nullptr, Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::GrippableStaticMeshActor_eventSetGripPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::GrippableStaticMeshActor_eventSetGripPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGrippableStaticMeshActor::execSetGripPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGripPriority(Z_Param_NewGripPriority);
	P_NATIVE_END;
}
// End Class AGrippableStaticMeshActor Function SetGripPriority

// Begin Class AGrippableStaticMeshActor
void AGrippableStaticMeshActor::StaticRegisterNativesAGrippableStaticMeshActor()
{
	UClass* Class = AGrippableStaticMeshActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToClientReplicationBucket", &AGrippableStaticMeshActor::execAddToClientReplicationBucket },
		{ "CeaseReplicationBlocking", &AGrippableStaticMeshActor::execCeaseReplicationBlocking },
		{ "IsCurrentlyClientAuthThrowing", &AGrippableStaticMeshActor::execIsCurrentlyClientAuthThrowing },
		{ "PollReplicationEvent", &AGrippableStaticMeshActor::execPollReplicationEvent },
		{ "RemoveFromClientReplicationBucket", &AGrippableStaticMeshActor::execRemoveFromClientReplicationBucket },
		{ "Server_EndClientAuthReplication", &AGrippableStaticMeshActor::execServer_EndClientAuthReplication },
		{ "Server_GetClientAuthReplication", &AGrippableStaticMeshActor::execServer_GetClientAuthReplication },
		{ "SetDenyGripping", &AGrippableStaticMeshActor::execSetDenyGripping },
		{ "SetGripPriority", &AGrippableStaticMeshActor::execSetGripPriority },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrippableStaticMeshActor);
UClass* Z_Construct_UClass_AGrippableStaticMeshActor_NoRegister()
{
	return AGrippableStaticMeshActor::StaticClass();
}
struct Z_Construct_UClass_AGrippableStaticMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "Grippables/GrippableStaticMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentWeldReplication_MetaData[] = {
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateGripScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true then the grip script array will be considered for replication, if false then it will not\n// This is an optimization for when you have a lot of grip scripts in use, you can toggle this off in cases\n// where the object will never have a replicating script\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the grip script array will be considered for replication, if false then it will not\nThis is an optimization for when you have a lot of grip scripts in use, you can toggle this off in cases\nwhere the object will never have a replicating script" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when a object is dropped\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a object is dropped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when an object we hold is secondary gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an object we hold is secondary gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when an object we hold is secondary dropped\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an object we hold is secondary dropped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientAuthReplicationData_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that are set on this object */" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are set on this object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowIgnoringAttachOnOwner_MetaData[] = {
		{ "Category", "Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skips the attachment replication if we are locally owned and our grip settings say that we are a client authed grip.\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips the attachment replication if we are locally owned and our grip settings say that we are a client authed grip." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableStaticMeshActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentWeldReplication;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GripLogicScripts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GripLogicScripts;
	static void NewProp_bReplicateGripScripts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateGripScripts;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientAuthReplicationData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static void NewProp_bAllowIgnoringAttachOnOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowIgnoringAttachOnOwner;
	static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VRGripInterfaceSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_AddToClientReplicationBucket, "AddToClientReplicationBucket" }, // 1197528537
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_CeaseReplicationBlocking, "CeaseReplicationBlocking" }, // 2375503741
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing, "IsCurrentlyClientAuthThrowing" }, // 4099352037
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_PollReplicationEvent, "PollReplicationEvent" }, // 109778035
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_RemoveFromClientReplicationBucket, "RemoveFromClientReplicationBucket" }, // 3666248156
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_Server_EndClientAuthReplication, "Server_EndClientAuthReplication" }, // 4230656033
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_Server_GetClientAuthReplication, "Server_GetClientAuthReplication" }, // 3003330605
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_SetDenyGripping, "SetDenyGripping" }, // 4006050115
		{ &Z_Construct_UFunction_AGrippableStaticMeshActor_SetGripPriority, "SetGripPriority" }, // 1456339113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrippableStaticMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_AttachmentWeldReplication = { "AttachmentWeldReplication", "OnRep_AttachmentReplication", (EPropertyFlags)0x0010008100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, AttachmentWeldReplication), Z_Construct_UScriptStruct_FRepAttachmentWithWeld, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentWeldReplication_MetaData), NewProp_AttachmentWeldReplication_MetaData) }; // 2620582532
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripLogicScripts_Inner_MetaData), NewProp_GripLogicScripts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x012408800000003d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripLogicScripts_MetaData), NewProp_GripLogicScripts_MetaData) };
void Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts_SetBit(void* Obj)
{
	((AGrippableStaticMeshActor*)Obj)->bReplicateGripScripts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts = { "bReplicateGripScripts", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGrippableStaticMeshActor), &Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateGripScripts_MetaData), NewProp_bReplicateGripScripts_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGripped_MetaData), NewProp_OnGripped_MetaData) }; // 3815915342
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDropped_MetaData), NewProp_OnDropped_MetaData) }; // 1002007758
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSecondaryGripAdded_MetaData), NewProp_OnSecondaryGripAdded_MetaData) }; // 3815915342
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSecondaryGripRemoved_MetaData), NewProp_OnSecondaryGripRemoved_MetaData) }; // 3815915342
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_ClientAuthReplicationData = { "ClientAuthReplicationData", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, ClientAuthReplicationData), Z_Construct_UScriptStruct_FVRClientAuthReplicationData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientAuthReplicationData_MetaData), NewProp_ClientAuthReplicationData_MetaData) }; // 661940181
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
void Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_SetBit(void* Obj)
{
	((AGrippableStaticMeshActor*)Obj)->bAllowIgnoringAttachOnOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner = { "bAllowIgnoringAttachOnOwner", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGrippableStaticMeshActor), &Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowIgnoringAttachOnOwner_MetaData), NewProp_bAllowIgnoringAttachOnOwner_MetaData) };
void Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
{
	((AGrippableStaticMeshActor*)Obj)->bRepGripSettingsAndGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGrippableStaticMeshActor), &Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRepGripSettingsAndGameplayTags_MetaData), NewProp_bRepGripSettingsAndGameplayTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0020088000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrippableStaticMeshActor, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRGripInterfaceSettings_MetaData), NewProp_VRGripInterfaceSettings_MetaData) }; // 972051801
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrippableStaticMeshActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_AttachmentWeldReplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GripLogicScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bReplicateGripScripts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnGripped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_OnSecondaryGripRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_ClientAuthReplicationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bAllowIgnoringAttachOnOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_bRepGripSettingsAndGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableStaticMeshActor_Statics::NewProp_VRGripInterfaceSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrippableStaticMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(AGrippableStaticMeshActor, IVRGripInterface), false },  // 199302906
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AGrippableStaticMeshActor, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrippableStaticMeshActor_Statics::ClassParams = {
	&AGrippableStaticMeshActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGrippableStaticMeshActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableStaticMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrippableStaticMeshActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrippableStaticMeshActor()
{
	if (!Z_Registration_Info_UClass_AGrippableStaticMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrippableStaticMeshActor.OuterSingleton, Z_Construct_UClass_AGrippableStaticMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrippableStaticMeshActor.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AGrippableStaticMeshActor>()
{
	return AGrippableStaticMeshActor::StaticClass();
}
void AGrippableStaticMeshActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AttachmentWeldReplication(TEXT("AttachmentWeldReplication"));
	static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
	static const FName Name_bReplicateGripScripts(TEXT("bReplicateGripScripts"));
	static const FName Name_ClientAuthReplicationData(TEXT("ClientAuthReplicationData"));
	static const FName Name_GameplayTags(TEXT("GameplayTags"));
	static const FName Name_bAllowIgnoringAttachOnOwner(TEXT("bAllowIgnoringAttachOnOwner"));
	static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
	static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));
	const bool bIsValid = true
		&& Name_AttachmentWeldReplication == ClassReps[(int32)ENetFields_Private::AttachmentWeldReplication].Property->GetFName()
		&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
		&& Name_bReplicateGripScripts == ClassReps[(int32)ENetFields_Private::bReplicateGripScripts].Property->GetFName()
		&& Name_ClientAuthReplicationData == ClassReps[(int32)ENetFields_Private::ClientAuthReplicationData].Property->GetFName()
		&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
		&& Name_bAllowIgnoringAttachOnOwner == ClassReps[(int32)ENetFields_Private::bAllowIgnoringAttachOnOwner].Property->GetFName()
		&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
		&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGrippableStaticMeshActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrippableStaticMeshActor);
// End Class AGrippableStaticMeshActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOptionalRepStaticMeshComponent, UOptionalRepStaticMeshComponent::StaticClass, TEXT("UOptionalRepStaticMeshComponent"), &Z_Registration_Info_UClass_UOptionalRepStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionalRepStaticMeshComponent), 82831058U) },
		{ Z_Construct_UClass_AGrippableStaticMeshActor, AGrippableStaticMeshActor::StaticClass, TEXT("AGrippableStaticMeshActor"), &Z_Registration_Info_UClass_AGrippableStaticMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrippableStaticMeshActor), 1153413094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_3870355871(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableStaticMeshActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
