// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRAIPerceptionOverrides.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRAIPerceptionOverrides() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISense_Sight_VR();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISense_Sight_VR_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR_NoRegister();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAISightEventVR();
// End Cross Module References

// Begin Class UAISenseConfig_Sight_VR
void UAISenseConfig_Sight_VR::StaticRegisterNativesUAISenseConfig_Sight_VR()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Sight_VR);
UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR_NoRegister()
{
	return UAISenseConfig_Sight_VR::StaticClass();
}
struct Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "AI Sight VR config" },
		{ "IncludePath", "Misc/VRAIPerceptionOverrides.h" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum sight distance to notice a target. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum sight distance to notice a target." },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum sight distance to see target that has been already seen. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum sight distance to see target that has been already seen." },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.\n\x09 *\x09The value represents the angle measured in relation to the forward vector, not the whole range. */" },
#endif
		{ "DisplayName", "PeripheralVisionHalfAngleDegrees" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.\n    The value represents the angle measured in relation to the forward vector, not the whole range." },
#endif
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[] = {
		{ "Category", "Sense" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointOfViewBackwardOffset_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Point of view move back distance for cone calculation. In conjunction with near clipping distance, this will act as a close by awareness and peripheral vision. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Point of view move back distance for cone calculation. In conjunction with near clipping distance, this will act as a close by awareness and peripheral vision." },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearClippingRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Near clipping distance, to be used with point of view backward offset. Will act as a close by awareness and peripheral vision */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Near clipping distance, to be used with point of view backward offset. Will act as a close by awareness and peripheral vision" },
#endif
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Implementation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSuccessRangeFromLastSeenLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointOfViewBackwardOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NearClippingRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Sight_VR>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, Implementation), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_Sight_VR_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Implementation_MetaData), NewProp_Implementation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadius_MetaData), NewProp_SightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, LoseSightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseSightRadius_MetaData), NewProp_LoseSightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees = { "PeripheralVisionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, PeripheralVisionAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralVisionAngleDegrees_MetaData), NewProp_PeripheralVisionAngleDegrees_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionByAffiliation_MetaData), NewProp_DetectionByAffiliation_MetaData) }; // 1287263908
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation = { "AutoSuccessRangeFromLastSeenLocation", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, AutoSuccessRangeFromLastSeenLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData), NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PointOfViewBackwardOffset = { "PointOfViewBackwardOffset", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, PointOfViewBackwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointOfViewBackwardOffset_MetaData), NewProp_PointOfViewBackwardOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_NearClippingRadius = { "NearClippingRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Sight_VR, NearClippingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearClippingRadius_MetaData), NewProp_NearClippingRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_Implementation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_LoseSightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PeripheralVisionAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_DetectionByAffiliation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_PointOfViewBackwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::NewProp_NearClippingRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::ClassParams = {
	&UAISenseConfig_Sight_VR::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::PropPointers),
	0,
	0x001010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseConfig_Sight_VR()
{
	if (!Z_Registration_Info_UClass_UAISenseConfig_Sight_VR.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Sight_VR.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Sight_VR_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseConfig_Sight_VR.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UAISenseConfig_Sight_VR>()
{
	return UAISenseConfig_Sight_VR::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Sight_VR);
UAISenseConfig_Sight_VR::~UAISenseConfig_Sight_VR() {}
// End Class UAISenseConfig_Sight_VR

// Begin ScriptStruct FAISightEventVR
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AISightEventVR;
class UScriptStruct* FAISightEventVR::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AISightEventVR.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AISightEventVR.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISightEventVR, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("AISightEventVR"));
	}
	return Z_Registration_Info_UScriptStruct_AISightEventVR.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FAISightEventVR>()
{
	return FAISightEventVR::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAISightEventVR_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeenActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeenActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISightEventVR>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor = { "SeenActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAISightEventVR, SeenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeenActor_MetaData), NewProp_SeenActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAISightEventVR, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observer_MetaData), NewProp_Observer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_SeenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewProp_Observer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISightEventVR_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"AISightEventVR",
	Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::PropPointers),
	sizeof(FAISightEventVR),
	alignof(FAISightEventVR),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEventVR_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAISightEventVR_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAISightEventVR()
{
	if (!Z_Registration_Info_UScriptStruct_AISightEventVR.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AISightEventVR.InnerSingleton, Z_Construct_UScriptStruct_FAISightEventVR_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AISightEventVR.InnerSingleton;
}
// End ScriptStruct FAISightEventVR

// Begin Class UAISense_Sight_VR
void UAISense_Sight_VR::StaticRegisterNativesUAISense_Sight_VR()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Sight_VR);
UClass* Z_Construct_UClass_UAISense_Sight_VR_NoRegister()
{
	return UAISense_Sight_VR::StaticClass();
}
struct Z_Construct_UClass_UAISense_Sight_VR_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Misc/VRAIPerceptionOverrides.h" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAsyncTracesPerTick_MetaData[] = {
		{ "Category", "AI Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of asynchronous traces that can be requested in a single update call*/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of asynchronous traces that can be requested in a single update call" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinQueriesPerTimeSliceCheck_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSlicePerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighImportanceQueryDistanceThreshold_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightLimitQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingQueriesBudgetReductionRatio_MetaData[] = {
		{ "Category", "AI Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines the amount of async trace queries to prevent based on the number of pending queries at the start of an update.\n\x09 * 1 means that the async trace budget is slashed by the pending queries count\n\x09 * 0 means that the async trace budget is not impacted by the pending queries\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the amount of async trace queries to prevent based on the number of pending queries at the start of an update.\n1 means that the async trace budget is slashed by the pending queries count\n0 means that the async trace budget is not impacted by the pending queries" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsynchronousTraceForDefaultSightQueries_MetaData[] = {
		{ "Category", "AI Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines if we are allowed to use asynchronous trace queries when there is no IAISightTargetInterface for a Target */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRAIPerceptionOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines if we are allowed to use asynchronous trace queries when there is no IAISightTargetInterface for a Target" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTracesPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAsyncTracesPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinQueriesPerTimeSliceCheck;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxTimeSlicePerTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighImportanceQueryDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxQueryImportance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightLimitQueryImportance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PendingQueriesBudgetReductionRatio;
	static void NewProp_bUseAsynchronousTraceForDefaultSightQueries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsynchronousTraceForDefaultSightQueries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Sight_VR>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick = { "MaxTracesPerTick", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxTracesPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTracesPerTick_MetaData), NewProp_MaxTracesPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxAsyncTracesPerTick = { "MaxAsyncTracesPerTick", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxAsyncTracesPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAsyncTracesPerTick_MetaData), NewProp_MaxAsyncTracesPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck = { "MinQueriesPerTimeSliceCheck", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight_VR, MinQueriesPerTimeSliceCheck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinQueriesPerTimeSliceCheck_MetaData), NewProp_MinQueriesPerTimeSliceCheck_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick = { "MaxTimeSlicePerTick", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxTimeSlicePerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeSlicePerTick_MetaData), NewProp_MaxTimeSlicePerTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold = { "HighImportanceQueryDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight_VR, HighImportanceQueryDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighImportanceQueryDistanceThreshold_MetaData), NewProp_HighImportanceQueryDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance = { "MaxQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight_VR, MaxQueryImportance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQueryImportance_MetaData), NewProp_MaxQueryImportance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance = { "SightLimitQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight_VR, SightLimitQueryImportance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightLimitQueryImportance_MetaData), NewProp_SightLimitQueryImportance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_PendingQueriesBudgetReductionRatio = { "PendingQueriesBudgetReductionRatio", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight_VR, PendingQueriesBudgetReductionRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingQueriesBudgetReductionRatio_MetaData), NewProp_PendingQueriesBudgetReductionRatio_MetaData) };
void Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_bUseAsynchronousTraceForDefaultSightQueries_SetBit(void* Obj)
{
	((UAISense_Sight_VR*)Obj)->bUseAsynchronousTraceForDefaultSightQueries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_bUseAsynchronousTraceForDefaultSightQueries = { "bUseAsynchronousTraceForDefaultSightQueries", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISense_Sight_VR), &Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_bUseAsynchronousTraceForDefaultSightQueries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsynchronousTraceForDefaultSightQueries_MetaData), NewProp_bUseAsynchronousTraceForDefaultSightQueries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTracesPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxAsyncTracesPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MinQueriesPerTimeSliceCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxTimeSlicePerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_HighImportanceQueryDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_MaxQueryImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_SightLimitQueryImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_PendingQueriesBudgetReductionRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_VR_Statics::NewProp_bUseAsynchronousTraceForDefaultSightQueries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_Sight_VR_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Sight_VR_Statics::ClassParams = {
	&UAISense_Sight_VR::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_VR_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Sight_VR_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Sight_VR()
{
	if (!Z_Registration_Info_UClass_UAISense_Sight_VR.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Sight_VR.OuterSingleton, Z_Construct_UClass_UAISense_Sight_VR_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Sight_VR.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UAISense_Sight_VR>()
{
	return UAISense_Sight_VR::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Sight_VR);
UAISense_Sight_VR::~UAISense_Sight_VR() {}
// End Class UAISense_Sight_VR

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAISightEventVR::StaticStruct, Z_Construct_UScriptStruct_FAISightEventVR_Statics::NewStructOps, TEXT("AISightEventVR"), &Z_Registration_Info_UScriptStruct_AISightEventVR, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAISightEventVR), 3568161652U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Sight_VR, UAISenseConfig_Sight_VR::StaticClass, TEXT("UAISenseConfig_Sight_VR"), &Z_Registration_Info_UClass_UAISenseConfig_Sight_VR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Sight_VR), 1165216168U) },
		{ Z_Construct_UClass_UAISense_Sight_VR, UAISense_Sight_VR::StaticClass, TEXT("UAISense_Sight_VR"), &Z_Registration_Info_UClass_UAISense_Sight_VR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Sight_VR), 602577740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_972219530(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRAIPerceptionOverrides_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
