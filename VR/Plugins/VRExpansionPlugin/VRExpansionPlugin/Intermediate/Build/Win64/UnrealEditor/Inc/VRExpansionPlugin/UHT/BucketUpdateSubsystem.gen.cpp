// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/BucketUpdateSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBucketUpdateSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UBucketUpdateSubsystem();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UBucketUpdateSubsystem_NoRegister();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucket();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketContainer();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketDrop();
// End Cross Module References

// Begin Delegate FDynamicBucketUpdateTickSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "DynamicBucketUpdateTickSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDynamicBucketUpdateTickSignature_DelegateWrapper(const FScriptDelegate& DynamicBucketUpdateTickSignature)
{
	DynamicBucketUpdateTickSignature.ProcessDelegate<UObject>(NULL);
}
// End Delegate FDynamicBucketUpdateTickSignature

// Begin ScriptStruct FUpdateBucketDrop
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateBucketDrop;
class UScriptStruct* FUpdateBucketDrop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucketDrop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateBucketDrop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucketDrop, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucketDrop"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucketDrop.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucketDrop>()
{
	return FUpdateBucketDrop::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucketDrop>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"UpdateBucketDrop",
	nullptr,
	0,
	sizeof(FUpdateBucketDrop),
	alignof(FUpdateBucketDrop),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketDrop()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucketDrop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateBucketDrop.InnerSingleton, Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucketDrop.InnerSingleton;
}
// End ScriptStruct FUpdateBucketDrop

// Begin ScriptStruct FUpdateBucket
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateBucket;
class UScriptStruct* FUpdateBucket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateBucket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucket, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucket"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucket.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucket>()
{
	return FUpdateBucket::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateBucket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucket>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucket_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"UpdateBucket",
	nullptr,
	0,
	sizeof(FUpdateBucket),
	alignof(FUpdateBucket),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateBucket_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucket()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucket.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateBucket.InnerSingleton, Z_Construct_UScriptStruct_FUpdateBucket_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucket.InnerSingleton;
}
// End ScriptStruct FUpdateBucket

// Begin ScriptStruct FUpdateBucketContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateBucketContainer;
class UScriptStruct* FUpdateBucketContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucketContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateBucketContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateBucketContainer, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("UpdateBucketContainer"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucketContainer.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FUpdateBucketContainer>()
{
	return FUpdateBucketContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateBucketContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"UpdateBucketContainer",
	nullptr,
	0,
	sizeof(FUpdateBucketContainer),
	alignof(FUpdateBucketContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateBucketContainer()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateBucketContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateBucketContainer.InnerSingleton, Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateBucketContainer.InnerSingleton;
}
// End ScriptStruct FUpdateBucketContainer

// Begin Class UBucketUpdateSubsystem Function IsActive
struct Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics
{
	struct BucketUpdateSubsystem_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if an update bucket contains an entry with the passed in function\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if an update bucket contains an entry with the passed in function" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BucketUpdateSubsystem_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventIsActive_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::BucketUpdateSubsystem_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::BucketUpdateSubsystem_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBucketUpdateSubsystem::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// End Class UBucketUpdateSubsystem Function IsActive

// Begin Class UBucketUpdateSubsystem Function IsObjectFunctionInBucket
struct Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics
{
	struct BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms
	{
		UObject* InObject;
		FName FunctionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if an update bucket contains an entry with the passed in function\n" },
#endif
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Is Object In Bucket" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "IsObjectInBucket" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if an update bucket contains an entry with the passed in function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms, FunctionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "IsObjectFunctionInBucket", nullptr, nullptr, Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::BucketUpdateSubsystem_eventIsObjectFunctionInBucket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBucketUpdateSubsystem::execIsObjectFunctionInBucket)
{
	P_GET_OBJECT(UObject,Z_Param_InObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsObjectFunctionInBucket(Z_Param_InObject,Z_Param_FunctionName);
	P_NATIVE_END;
}
// End Class UBucketUpdateSubsystem Function IsObjectFunctionInBucket

// Begin Class UBucketUpdateSubsystem Function K2_AddObjectEventToBucket
struct Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics
{
	struct BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms
	{
		FScriptDelegate Delegate;
		int32 UpdateHTZ;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
		{ "CPP_Default_UpdateHTZ", "100" },
		{ "DisplayName", "Add Object to Bucket Updates by Event" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "AddBucketObjectEvent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateHTZ;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms, Delegate), Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 570405043
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_UpdateHTZ = { "UpdateHTZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms, UpdateHTZ), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_UpdateHTZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "K2_AddObjectEventToBucket", nullptr, nullptr, Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::BucketUpdateSubsystem_eventK2_AddObjectEventToBucket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBucketUpdateSubsystem::execK2_AddObjectEventToBucket)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_GET_PROPERTY(FIntProperty,Z_Param_UpdateHTZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_AddObjectEventToBucket(FDynamicBucketUpdateTickSignature(Z_Param_Delegate),Z_Param_UpdateHTZ);
	P_NATIVE_END;
}
// End Class UBucketUpdateSubsystem Function K2_AddObjectEventToBucket

// Begin Class UBucketUpdateSubsystem Function K2_AddObjectToBucket
struct Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics
{
	struct BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms
	{
		int32 UpdateHTZ;
		UObject* InObject;
		FName FunctionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds an object to an update bucket with the set HTZ, calls the passed in UFUNCTION name\n// If one of the bucket contains an entry with the function already then the existing one is removed and the new one is added\n" },
#endif
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "CPP_Default_UpdateHTZ", "100" },
		{ "DisplayName", "Add Object to Bucket Updates" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "AddObjectToBucket" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an object to an update bucket with the set HTZ, calls the passed in UFUNCTION name\nIf one of the bucket contains an entry with the function already then the existing one is removed and the new one is added" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateHTZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_UpdateHTZ = { "UpdateHTZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, UpdateHTZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms, FunctionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_UpdateHTZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "K2_AddObjectToBucket", nullptr, nullptr, Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::BucketUpdateSubsystem_eventK2_AddObjectToBucket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBucketUpdateSubsystem::execK2_AddObjectToBucket)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_UpdateHTZ);
	P_GET_OBJECT(UObject,Z_Param_InObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_AddObjectToBucket(Z_Param_UpdateHTZ,Z_Param_InObject,Z_Param_FunctionName);
	P_NATIVE_END;
}
// End Class UBucketUpdateSubsystem Function K2_AddObjectToBucket

// Begin Class UBucketUpdateSubsystem Function RemoveObjectFromAllBuckets
struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics
{
	struct BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms
	{
		UObject* InObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes ALL entries in the bucket update system with the specified object\n" },
#endif
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Remove Object From All Bucket Updates" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromAllBuckets" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes ALL entries in the bucket update system with the specified object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromAllBuckets", nullptr, nullptr, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::BucketUpdateSubsystem_eventRemoveObjectFromAllBuckets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromAllBuckets)
{
	P_GET_OBJECT(UObject,Z_Param_InObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromAllBuckets(Z_Param_InObject);
	P_NATIVE_END;
}
// End Class UBucketUpdateSubsystem Function RemoveObjectFromAllBuckets

// Begin Class UBucketUpdateSubsystem Function RemoveObjectFromBucketByEvent
struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics
{
	struct BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms
	{
		FScriptDelegate Delegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove the entry in the bucket updates with the passed in UFUNCTION name\n" },
#endif
		{ "DisplayName", "Remove Object From Bucket Updates By Event" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromBucketByEvent" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the entry in the bucket updates with the passed in UFUNCTION name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VRExpansionPlugin_DynamicBucketUpdateTickSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 570405043
void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromBucketByEvent", nullptr, nullptr, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::BucketUpdateSubsystem_eventRemoveObjectFromBucketByEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromBucketByEvent)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromBucketByEvent(FDynamicBucketUpdateTickSignature(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class UBucketUpdateSubsystem Function RemoveObjectFromBucketByEvent

// Begin Class UBucketUpdateSubsystem Function RemoveObjectFromBucketByFunctionName
struct Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics
{
	struct BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms
	{
		UObject* InObject;
		FName FunctionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BucketUpdateSubsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove the entry in the bucket updates with the passed in UFUNCTION name\n" },
#endif
		{ "CPP_Default_FunctionName", "None" },
		{ "CPP_Default_InObject", "None" },
		{ "DisplayName", "Remove Object From Bucket Updates By Function" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
		{ "ScriptName", "RemoveObjectFromBucketByFunction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the entry in the bucket updates with the passed in UFUNCTION name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms, FunctionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms), &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBucketUpdateSubsystem, nullptr, "RemoveObjectFromBucketByFunctionName", nullptr, nullptr, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::BucketUpdateSubsystem_eventRemoveObjectFromBucketByFunctionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBucketUpdateSubsystem::execRemoveObjectFromBucketByFunctionName)
{
	P_GET_OBJECT(UObject,Z_Param_InObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveObjectFromBucketByFunctionName(Z_Param_InObject,Z_Param_FunctionName);
	P_NATIVE_END;
}
// End Class UBucketUpdateSubsystem Function RemoveObjectFromBucketByFunctionName

// Begin Class UBucketUpdateSubsystem
void UBucketUpdateSubsystem::StaticRegisterNativesUBucketUpdateSubsystem()
{
	UClass* Class = UBucketUpdateSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsActive", &UBucketUpdateSubsystem::execIsActive },
		{ "IsObjectFunctionInBucket", &UBucketUpdateSubsystem::execIsObjectFunctionInBucket },
		{ "K2_AddObjectEventToBucket", &UBucketUpdateSubsystem::execK2_AddObjectEventToBucket },
		{ "K2_AddObjectToBucket", &UBucketUpdateSubsystem::execK2_AddObjectToBucket },
		{ "RemoveObjectFromAllBuckets", &UBucketUpdateSubsystem::execRemoveObjectFromAllBuckets },
		{ "RemoveObjectFromBucketByEvent", &UBucketUpdateSubsystem::execRemoveObjectFromBucketByEvent },
		{ "RemoveObjectFromBucketByFunctionName", &UBucketUpdateSubsystem::execRemoveObjectFromBucketByFunctionName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBucketUpdateSubsystem);
UClass* Z_Construct_UClass_UBucketUpdateSubsystem_NoRegister()
{
	return UBucketUpdateSubsystem::StaticClass();
}
struct Z_Construct_UClass_UBucketUpdateSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/BucketUpdateSubsystem.h" },
		{ "ModuleRelativePath", "Public/Misc/BucketUpdateSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_IsActive, "IsActive" }, // 2830729065
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_IsObjectFunctionInBucket, "IsObjectFunctionInBucket" }, // 434638928
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectEventToBucket, "K2_AddObjectEventToBucket" }, // 3758218440
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_K2_AddObjectToBucket, "K2_AddObjectToBucket" }, // 485903847
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromAllBuckets, "RemoveObjectFromAllBuckets" }, // 2047021923
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent, "RemoveObjectFromBucketByEvent" }, // 2212854922
		{ &Z_Construct_UFunction_UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName, "RemoveObjectFromBucketByFunctionName" }, // 1360892420
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBucketUpdateSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBucketUpdateSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBucketUpdateSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBucketUpdateSubsystem_Statics::ClassParams = {
	&UBucketUpdateSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBucketUpdateSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBucketUpdateSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBucketUpdateSubsystem()
{
	if (!Z_Registration_Info_UClass_UBucketUpdateSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBucketUpdateSubsystem.OuterSingleton, Z_Construct_UClass_UBucketUpdateSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBucketUpdateSubsystem.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UBucketUpdateSubsystem>()
{
	return UBucketUpdateSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBucketUpdateSubsystem);
UBucketUpdateSubsystem::~UBucketUpdateSubsystem() {}
// End Class UBucketUpdateSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUpdateBucketDrop::StaticStruct, Z_Construct_UScriptStruct_FUpdateBucketDrop_Statics::NewStructOps, TEXT("UpdateBucketDrop"), &Z_Registration_Info_UScriptStruct_UpdateBucketDrop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateBucketDrop), 4163024204U) },
		{ FUpdateBucket::StaticStruct, Z_Construct_UScriptStruct_FUpdateBucket_Statics::NewStructOps, TEXT("UpdateBucket"), &Z_Registration_Info_UScriptStruct_UpdateBucket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateBucket), 218935777U) },
		{ FUpdateBucketContainer::StaticStruct, Z_Construct_UScriptStruct_FUpdateBucketContainer_Statics::NewStructOps, TEXT("UpdateBucketContainer"), &Z_Registration_Info_UScriptStruct_UpdateBucketContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateBucketContainer), 2663417312U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBucketUpdateSubsystem, UBucketUpdateSubsystem::StaticClass, TEXT("UBucketUpdateSubsystem"), &Z_Registration_Info_UClass_UBucketUpdateSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBucketUpdateSubsystem), 2596383538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_1547632403(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_BucketUpdateSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
