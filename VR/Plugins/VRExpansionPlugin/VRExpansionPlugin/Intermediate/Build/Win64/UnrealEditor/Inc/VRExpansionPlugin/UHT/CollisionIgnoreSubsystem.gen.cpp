// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/CollisionIgnoreSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionIgnoreSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem_NoRegister();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChaosParticlePair();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePair();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePairArray();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionPrimPair();
// End Cross Module References

// Begin ScriptStruct FChaosParticlePair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosParticlePair;
class UScriptStruct* FChaosParticlePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosParticlePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosParticlePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosParticlePair, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ChaosParticlePair"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosParticlePair.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FChaosParticlePair>()
{
	return FChaosParticlePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosParticlePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosParticlePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosParticlePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"ChaosParticlePair",
	nullptr,
	0,
	sizeof(FChaosParticlePair),
	alignof(FChaosParticlePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosParticlePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosParticlePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosParticlePair()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosParticlePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosParticlePair.InnerSingleton, Z_Construct_UScriptStruct_FChaosParticlePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosParticlePair.InnerSingleton;
}
// End ScriptStruct FChaosParticlePair

// Begin ScriptStruct FCollisionPrimPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionPrimPair;
class UScriptStruct* FCollisionPrimPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionPrimPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionPrimPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionPrimPair, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionPrimPair"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionPrimPair.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionPrimPair>()
{
	return FCollisionPrimPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionPrimPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prim1_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prim2_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prim1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prim2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionPrimPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1 = { "Prim1", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionPrimPair, Prim1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prim1_MetaData), NewProp_Prim1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2 = { "Prim2", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionPrimPair, Prim2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prim2_MetaData), NewProp_Prim2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"CollisionPrimPair",
	Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers),
	sizeof(FCollisionPrimPair),
	alignof(FCollisionPrimPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionPrimPair()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionPrimPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionPrimPair.InnerSingleton, Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionPrimPair.InnerSingleton;
}
// End ScriptStruct FCollisionPrimPair

// Begin ScriptStruct FCollisionIgnorePair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionIgnorePair;
class UScriptStruct* FCollisionIgnorePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionIgnorePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionIgnorePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionIgnorePair, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionIgnorePair"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionIgnorePair.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionIgnorePair>()
{
	return FCollisionIgnorePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName1;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionIgnorePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1 = { "BoneName1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionIgnorePair, BoneName1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName1_MetaData), NewProp_BoneName1_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2 = { "BoneName2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionIgnorePair, BoneName2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName2_MetaData), NewProp_BoneName2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"CollisionIgnorePair",
	Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers),
	sizeof(FCollisionIgnorePair),
	alignof(FCollisionIgnorePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePair()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionIgnorePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionIgnorePair.InnerSingleton, Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionIgnorePair.InnerSingleton;
}
// End ScriptStruct FCollisionIgnorePair

// Begin ScriptStruct FCollisionIgnorePairArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray;
class UScriptStruct* FCollisionIgnorePairArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionIgnorePairArray, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionIgnorePairArray"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionIgnorePairArray>()
{
	return FCollisionIgnorePairArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PairArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PairArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PairArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionIgnorePairArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_Inner = { "PairArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollisionIgnorePair, METADATA_PARAMS(0, nullptr) }; // 3879133687
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray = { "PairArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionIgnorePairArray, PairArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PairArray_MetaData), NewProp_PairArray_MetaData) }; // 3879133687
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"CollisionIgnorePairArray",
	Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers),
	sizeof(FCollisionIgnorePairArray),
	alignof(FCollisionIgnorePairArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePairArray()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.InnerSingleton, Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.InnerSingleton;
}
// End ScriptStruct FCollisionIgnorePairArray

// Begin Class UCollisionIgnoreSubsystem Function CheckActiveFilters
struct Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionIgnoreSubsystem, nullptr, "CheckActiveFilters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCollisionIgnoreSubsystem::execCheckActiveFilters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckActiveFilters();
	P_NATIVE_END;
}
// End Class UCollisionIgnoreSubsystem Function CheckActiveFilters

// Begin Class UCollisionIgnoreSubsystem
void UCollisionIgnoreSubsystem::StaticRegisterNativesUCollisionIgnoreSubsystem()
{
	UClass* Class = UCollisionIgnoreSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckActiveFilters", &UCollisionIgnoreSubsystem::execCheckActiveFilters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionIgnoreSubsystem);
UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem_NoRegister()
{
	return UCollisionIgnoreSubsystem::StaticClass();
}
struct Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/CollisionIgnoreSubsystem.h" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTrackedPairs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovedPairs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TArray<FCollisionIgnorePair> CollisionTrackedPairs;\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TArray<FCollisionIgnorePair> CollisionTrackedPairs;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionTrackedPairs_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionTrackedPairs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CollisionTrackedPairs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedPairs_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedPairs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RemovedPairs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters, "CheckActiveFilters" }, // 2575753029
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionIgnoreSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_ValueProp = { "CollisionTrackedPairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCollisionIgnorePairArray, METADATA_PARAMS(0, nullptr) }; // 2071805398
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_Key_KeyProp = { "CollisionTrackedPairs_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollisionPrimPair, METADATA_PARAMS(0, nullptr) }; // 605740286
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs = { "CollisionTrackedPairs", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionIgnoreSubsystem, CollisionTrackedPairs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTrackedPairs_MetaData), NewProp_CollisionTrackedPairs_MetaData) }; // 605740286 2071805398
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_ValueProp = { "RemovedPairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCollisionIgnorePairArray, METADATA_PARAMS(0, nullptr) }; // 2071805398
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_Key_KeyProp = { "RemovedPairs_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollisionPrimPair, METADATA_PARAMS(0, nullptr) }; // 605740286
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs = { "RemovedPairs", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionIgnoreSubsystem, RemovedPairs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovedPairs_MetaData), NewProp_RemovedPairs_MetaData) }; // 605740286 2071805398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::ClassParams = {
	&UCollisionIgnoreSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem()
{
	if (!Z_Registration_Info_UClass_UCollisionIgnoreSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionIgnoreSubsystem.OuterSingleton, Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollisionIgnoreSubsystem.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UCollisionIgnoreSubsystem>()
{
	return UCollisionIgnoreSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionIgnoreSubsystem);
UCollisionIgnoreSubsystem::~UCollisionIgnoreSubsystem() {}
// End Class UCollisionIgnoreSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosParticlePair::StaticStruct, Z_Construct_UScriptStruct_FChaosParticlePair_Statics::NewStructOps, TEXT("ChaosParticlePair"), &Z_Registration_Info_UScriptStruct_ChaosParticlePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosParticlePair), 2774068708U) },
		{ FCollisionPrimPair::StaticStruct, Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewStructOps, TEXT("CollisionPrimPair"), &Z_Registration_Info_UScriptStruct_CollisionPrimPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionPrimPair), 605740286U) },
		{ FCollisionIgnorePair::StaticStruct, Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewStructOps, TEXT("CollisionIgnorePair"), &Z_Registration_Info_UScriptStruct_CollisionIgnorePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionIgnorePair), 3879133687U) },
		{ FCollisionIgnorePairArray::StaticStruct, Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewStructOps, TEXT("CollisionIgnorePairArray"), &Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionIgnorePairArray), 2071805398U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollisionIgnoreSubsystem, UCollisionIgnoreSubsystem::StaticClass, TEXT("UCollisionIgnoreSubsystem"), &Z_Registration_Info_UClass_UCollisionIgnoreSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionIgnoreSubsystem), 836036954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_2393026805(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
