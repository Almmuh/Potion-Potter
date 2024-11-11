// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRExpansionFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRExpansionFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPLowPassPeakFilter();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
// End Cross Module References

// Begin Enum EBPHMDWornState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPHMDWornState;
static UEnum* EBPHMDWornState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBPHMDWornState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBPHMDWornState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPHMDWornState"));
	}
	return Z_Registration_Info_UEnum_EBPHMDWornState.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPHMDWornState>()
{
	return EBPHMDWornState_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Redefining this for blueprint as it wasn't declared as BlueprintType\n* Stores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NotWorn.DisplayName", "Not Worn" },
		{ "NotWorn.Name", "EBPHMDWornState::NotWorn" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Redefining this for blueprint as it wasn't declared as BlueprintType\nStores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown." },
#endif
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EBPHMDWornState::Unknown" },
		{ "Worn.DisplayName", "Worn" },
		{ "Worn.Name", "EBPHMDWornState::Worn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBPHMDWornState::Unknown", (int64)EBPHMDWornState::Unknown },
		{ "EBPHMDWornState::Worn", (int64)EBPHMDWornState::Worn },
		{ "EBPHMDWornState::NotWorn", (int64)EBPHMDWornState::NotWorn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EBPHMDWornState",
	"EBPHMDWornState",
	Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState()
{
	if (!Z_Registration_Info_UEnum_EBPHMDWornState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPHMDWornState.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBPHMDWornState.InnerSingleton;
}
// End Enum EBPHMDWornState

// Begin Class UVRExpansionFunctionLibrary Function AddSceneComponentByClass
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics
{
	struct VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms
	{
		UObject* Outer;
		TSubclassOf<USceneComponent> Class;
		FTransform ComponentRelativeTransform;
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a USceneComponent Subclass, that is based on the passed in Class, and added to the Outer(Actor) object\n" },
#endif
		{ "DisplayName", "Add Scene Component By Class" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a USceneComponent Subclass, that is based on the passed in Class, and added to the Outer(Actor) object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRelativeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentRelativeTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ComponentRelativeTransform = { "ComponentRelativeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, ComponentRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentRelativeTransform_MetaData), NewProp_ComponentRelativeTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ComponentRelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "AddSceneComponentByClass", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execAddSceneComponentByClass)
{
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentRelativeTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=UVRExpansionFunctionLibrary::AddSceneComponentByClass(Z_Param_Outer,Z_Param_Class,Z_Param_Out_ComponentRelativeTransform);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function AddSceneComponentByClass

// Begin Class UVRExpansionFunctionLibrary Function AreComponentsIgnoringCollisions
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics
{
	struct VRExpansionFunctionLibrary_eventAreComponentsIgnoringCollisions_Parms
	{
		UObject* WorldContextObject;
		UPrimitiveComponent* Prim1;
		UPrimitiveComponent* Prim2;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if the component is ignoring collisions with the specific component\n// This does not check per bone, but rather at scale if any part of them are ignoring each other\n" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if the component is ignoring collisions with the specific component\nThis does not check per bone, but rather at scale if any part of them are ignoring each other" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prim1_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prim2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prim1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prim2;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAreComponentsIgnoringCollisions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_Prim1 = { "Prim1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAreComponentsIgnoringCollisions_Parms, Prim1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prim1_MetaData), NewProp_Prim1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_Prim2 = { "Prim2", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAreComponentsIgnoringCollisions_Parms, Prim2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prim2_MetaData), NewProp_Prim2_MetaData) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventAreComponentsIgnoringCollisions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventAreComponentsIgnoringCollisions_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_Prim1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_Prim2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "AreComponentsIgnoringCollisions", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::VRExpansionFunctionLibrary_eventAreComponentsIgnoringCollisions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::VRExpansionFunctionLibrary_eventAreComponentsIgnoringCollisions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execAreComponentsIgnoringCollisions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Prim1);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Prim2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::AreComponentsIgnoringCollisions(Z_Param_WorldContextObject,Z_Param_Prim1,Z_Param_Prim2);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function AreComponentsIgnoringCollisions

// Begin Class UVRExpansionFunctionLibrary Function BPQuat_FindBetween
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics
{
	struct VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms
	{
		FVector Vec1;
		FVector Vec2;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a delta rotation to have Vec1 point towards Vec2, assumes that the v\n" },
#endif
		{ "DisplayName", "FindBetween" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a delta rotation to have Vec1 point towards Vec2, assumes that the v" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vec1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vec2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_Vec1 = { "Vec1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms, Vec1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_Vec2 = { "Vec2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms, Vec2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_Vec1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_Vec2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "BPQuat_FindBetween", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::VRExpansionFunctionLibrary_eventBPQuat_FindBetween_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execBPQuat_FindBetween)
{
	P_GET_STRUCT(FVector,Z_Param_Vec1);
	P_GET_STRUCT(FVector,Z_Param_Vec2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UVRExpansionFunctionLibrary::BPQuat_FindBetween(Z_Param_Vec1,Z_Param_Vec2);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function BPQuat_FindBetween

// Begin Class UVRExpansionFunctionLibrary Function BreakTransform_NetQuantize
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics
{
	struct VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms
	{
		FTransform_NetQuantize InTransform;
		FVector Location;
		FRotator Rotation;
		FVector Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Breaks apart a transform net quantize into location, rotation and scale */" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeBreakFunc", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Breaks apart a transform net quantize into location, rotation and scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, InTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTransform_MetaData), NewProp_InTransform_MetaData) }; // 3972615260
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "BreakTransform_NetQuantize", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execBreakTransform_NetQuantize)
{
	P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_InTransform);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::BreakTransform_NetQuantize(Z_Param_Out_InTransform,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_Scale);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function BreakTransform_NetQuantize

// Begin Class UVRExpansionFunctionLibrary Function Conv_FVectorToFVectorNetQuantize
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics
{
	struct VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms
	{
		FVector InVector;
		FVector_NetQuantize ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a vector into a FVector_NetQuantize */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToVector_NetQuantize (Vector)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a vector into a FVector_NetQuantize" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_FVectorToFVectorNetQuantize", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize(Z_Param_Out_InVector);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function Conv_FVectorToFVectorNetQuantize

// Begin Class UVRExpansionFunctionLibrary Function Conv_FVectorToFVectorNetQuantize10
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics
{
	struct VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms
	{
		FVector InVector;
		FVector_NetQuantize10 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a vector into a FVector_NetQuantize10 */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToVector_NetQuantize10 (Vector)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a vector into a FVector_NetQuantize10" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(0, nullptr) }; // 1191031901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_FVectorToFVectorNetQuantize10", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize10_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize10)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector_NetQuantize10*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize10(Z_Param_Out_InVector);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function Conv_FVectorToFVectorNetQuantize10

// Begin Class UVRExpansionFunctionLibrary Function Conv_FVectorToFVectorNetQuantize100
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics
{
	struct VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms
	{
		FVector InVector;
		FVector_NetQuantize100 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a vector into a FVector_NetQuantize100 */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToVector_NetQuantize100 (Vector)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a vector into a FVector_NetQuantize100" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(0, nullptr) }; // 2552134291
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_FVectorToFVectorNetQuantize100", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::VRExpansionFunctionLibrary_eventConv_FVectorToFVectorNetQuantize100_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize100)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector_NetQuantize100*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize100(Z_Param_Out_InVector);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function Conv_FVectorToFVectorNetQuantize100

// Begin Class UVRExpansionFunctionLibrary Function Conv_GripPairToGripID
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics
{
	struct VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms
	{
		FBPGripPair GripPair;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a FBPGripPair into a GripID */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToGripID (FBPGripPair)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a FBPGripPair into a GripID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripPair_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripPair;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_GripPair = { "GripPair", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms, GripPair), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripPair_MetaData), NewProp_GripPair_MetaData) }; // 2048483295
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_GripPair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_GripPairToGripID", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::VRExpansionFunctionLibrary_eventConv_GripPairToGripID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_GripPairToGripID)
{
	P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_GripPair);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_GripPairToGripID(Z_Param_Out_GripPair);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function Conv_GripPairToGripID

// Begin Class UVRExpansionFunctionLibrary Function Conv_GripPairToMotionController
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics
{
	struct VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms
	{
		FBPGripPair GripPair;
		UGripMotionControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a FBPGripPair into a MotionController */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToController (FBPGripPair)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a FBPGripPair into a MotionController" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripPair_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripPair;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_GripPair = { "GripPair", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms, GripPair), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripPair_MetaData), NewProp_GripPair_MetaData) }; // 2048483295
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms, ReturnValue), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_GripPair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_GripPairToMotionController", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::VRExpansionFunctionLibrary_eventConv_GripPairToMotionController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_GripPairToMotionController)
{
	P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_GripPair);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGripMotionControllerComponent**)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_GripPairToMotionController(Z_Param_Out_GripPair);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function Conv_GripPairToMotionController

// Begin Class UVRExpansionFunctionLibrary Function Conv_TransformToTransformNetQuantize
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics
{
	struct VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms
	{
		FTransform InTransform;
		FTransform_NetQuantize ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a FTransform into a FTransform_NetQuantize */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToTransform_NetQuantize (Transform)" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a FTransform into a FTransform_NetQuantize" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTransform_MetaData), NewProp_InTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 3972615260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_InTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "Conv_TransformToTransformNetQuantize", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execConv_TransformToTransformNetQuantize)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_TransformToTransformNetQuantize(Z_Param_Out_InTransform);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function Conv_TransformToTransformNetQuantize

// Begin Class UVRExpansionFunctionLibrary Function EqualEqual_FBPActorGripInformation
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics
{
	struct VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms
	{
		FBPActorGripInformation A;
		FBPActorGripInformation B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns true if the values are equal (A == B) */" },
#endif
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal VR Grip" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms, A), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 134483386
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms, B), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 134483386
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "EqualEqual_FBPActorGripInformation", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execEqualEqual_FBPActorGripInformation)
{
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_A);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::EqualEqual_FBPActorGripInformation(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function EqualEqual_FBPActorGripInformation

// Begin Class UVRExpansionFunctionLibrary Function GetFirstGameplayTagWithExactParent
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics
{
	struct VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms
	{
		FGameplayTag DirectParentTag;
		FGameplayTagContainer BaseContainer;
		FGameplayTag FoundTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Determine if any tag in the BaseContainer has the exact same direct parent tag and returns the first one\n\x09* @param TagParent\x09\x09Required direct parent tag\n\x09* @param BaseContainer\x09""Container containing values to check\n\n\x09* @return True if any tag was found and also returns the tag\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine if any tag in the BaseContainer has the exact same direct parent tag and returns the first one\n@param TagParent              Required direct parent tag\n@param BaseContainer  Container containing values to check\n\n@return True if any tag was found and also returns the tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectParentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoundTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_DirectParentTag = { "DirectParentTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms, DirectParentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_BaseContainer = { "BaseContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms, BaseContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseContainer_MetaData), NewProp_BaseContainer_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_FoundTag = { "FoundTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms, FoundTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_DirectParentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_BaseContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_FoundTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetFirstGameplayTagWithExactParent", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::VRExpansionFunctionLibrary_eventGetFirstGameplayTagWithExactParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetFirstGameplayTagWithExactParent)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DirectParentTag);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_BaseContainer);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_FoundTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetFirstGameplayTagWithExactParent(Z_Param_DirectParentTag,Z_Param_Out_BaseContainer,Z_Param_Out_FoundTag);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetFirstGameplayTagWithExactParent

// Begin Class UVRExpansionFunctionLibrary Function GetGameViewportClient
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics
{
	struct VRExpansionFunctionLibrary_eventGetGameViewportClient_Parms
	{
		UObject* WorldContextObject;
		UGameViewportClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGameViewportClient_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGameViewportClient_Parms, ReturnValue), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetGameViewportClient", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::VRExpansionFunctionLibrary_eventGetGameViewportClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::VRExpansionFunctionLibrary_eventGetGameViewportClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetGameViewportClient)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameViewportClient**)Z_Param__Result=UVRExpansionFunctionLibrary::GetGameViewportClient(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetGameViewportClient

// Begin Class UVRExpansionFunctionLibrary Function GetGripSlotInRangeByTypeName
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics
{
	struct VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms
	{
		FName SlotType;
		AActor* Actor;
		FVector WorldLocation;
		float MaxRange;
		bool bHadSlotInRange;
		FTransform SlotWorldTransform;
		FName SlotName;
		UGripMotionControllerComponent* QueryController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRGrip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets if an actors root component contains a grip slot within range\n" },
#endif
		{ "CPP_Default_QueryController", "None" },
		{ "DisplayName", "GetGripSlotInRangeByTypeName" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets if an actors root component contains a grip slot within range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static void NewProp_bHadSlotInRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotType = { "SlotType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, SlotType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, MaxRange), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms*)Obj)->bHadSlotInRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_QueryController = { "QueryController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, QueryController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryController_MetaData), NewProp_QueryController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_bHadSlotInRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::NewProp_QueryController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetGripSlotInRangeByTypeName", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotType);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_QueryController);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName(Z_Param_SlotType,Z_Param_Actor,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_QueryController);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetGripSlotInRangeByTypeName

// Begin Class UVRExpansionFunctionLibrary Function GetGripSlotInRangeByTypeName_Component
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics
{
	struct VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms
	{
		FName SlotType;
		USceneComponent* Component;
		FVector WorldLocation;
		float MaxRange;
		bool bHadSlotInRange;
		FTransform SlotWorldTransform;
		FName SlotName;
		UGripMotionControllerComponent* QueryController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRGrip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets if an actors root component contains a grip slot within range\n" },
#endif
		{ "CPP_Default_QueryController", "None" },
		{ "DisplayName", "GetGripSlotInRangeByTypeName_Component" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets if an actors root component contains a grip slot within range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static void NewProp_bHadSlotInRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotType = { "SlotType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, SlotType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, MaxRange), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms*)Obj)->bHadSlotInRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_QueryController = { "QueryController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, QueryController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryController_MetaData), NewProp_QueryController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_bHadSlotInRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::NewProp_QueryController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetGripSlotInRangeByTypeName_Component", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName_Component)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotType);
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_QueryController);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName_Component(Z_Param_SlotType,Z_Param_Component,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_QueryController);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetGripSlotInRangeByTypeName_Component

// Begin Class UVRExpansionFunctionLibrary Function GetHandFromMotionSourceName
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics
{
	struct VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms
	{
		FName MotionSource;
		EControllerHand Hand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
		{ "DisplayName", "GetHandFromMotionSourceName" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MotionSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms, MotionSource), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_MotionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetHandFromMotionSourceName", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::VRExpansionFunctionLibrary_eventGetHandFromMotionSourceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetHandFromMotionSourceName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
	P_GET_ENUM_REF(EControllerHand,Z_Param_Out_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHandFromMotionSourceName(Z_Param_MotionSource,(EControllerHand&)(Z_Param_Out_Hand));
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetHandFromMotionSourceName

// Begin Class UVRExpansionFunctionLibrary Function GetHMDPureYaw
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics
{
	struct VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms
	{
		FRotator HMDRotation;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the unwound yaw of the HMD\n" },
#endif
		{ "DisplayName", "GetHMDPureYaw" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the unwound yaw of the HMD" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HMDRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::NewProp_HMDRotation = { "HMDRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms, HMDRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::NewProp_HMDRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetHMDPureYaw", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetHMDPureYaw)
{
	P_GET_STRUCT(FRotator,Z_Param_HMDRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDPureYaw(Z_Param_HMDRotation);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetHMDPureYaw

// Begin Class UVRExpansionFunctionLibrary Function GetHMDType
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics
{
	struct VRExpansionFunctionLibrary_eventGetHMDType_Parms
	{
		EBPHMDDeviceType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets whether an HMD device is connected\n" },
#endif
		{ "DisplayName", "GetHMDType" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether an HMD device is connected" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType, METADATA_PARAMS(0, nullptr) }; // 3126994654
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetHMDType", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::VRExpansionFunctionLibrary_eventGetHMDType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::VRExpansionFunctionLibrary_eventGetHMDType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetHMDType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBPHMDDeviceType*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDType();
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetHMDType

// Begin Class UVRExpansionFunctionLibrary Function GetIsActorMovable
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics
{
	struct VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms
	{
		AActor* ActorToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets whether an HMD device is connected\n" },
#endif
		{ "DisplayName", "GetIsActorMovable" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether an HMD device is connected" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms, ActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ActorToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetIsActorMovable", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetIsActorMovable)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsActorMovable(Z_Param_ActorToCheck);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetIsActorMovable

// Begin Class UVRExpansionFunctionLibrary Function GetIsHMDConnected
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics
{
	struct VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets whether an HMD device is connected\n" },
#endif
		{ "DisplayName", "GetIsHMDConnected" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether an HMD device is connected" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetIsHMDConnected", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetIsHMDConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDConnected();
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetIsHMDConnected

// Begin Class UVRExpansionFunctionLibrary Function GetIsHMDWorn
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics
{
	struct VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms
	{
		EBPHMDWornState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets whether an HMD device is connected\n" },
#endif
		{ "DisplayName", "GetIsHMDWorn" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether an HMD device is connected" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState, METADATA_PARAMS(0, nullptr) }; // 793957824
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetIsHMDWorn", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetIsHMDWorn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBPHMDWornState*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDWorn();
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetIsHMDWorn

// Begin Class UVRExpansionFunctionLibrary Function GetPeak_PeakLowPassFilter
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics
{
	struct VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms
	{
		FBPLowPassPeakFilter TargetPeakFilter;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LowPassFilter_Peak" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the peak value of the Peak Low Pass Filter */" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the peak value of the Peak Low Pass Filter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPeakFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::NewProp_TargetPeakFilter = { "TargetPeakFilter", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms, TargetPeakFilter), Z_Construct_UScriptStruct_FBPLowPassPeakFilter, METADATA_PARAMS(0, nullptr) }; // 589734722
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::NewProp_TargetPeakFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "GetPeak_PeakLowPassFilter", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::VRExpansionFunctionLibrary_eventGetPeak_PeakLowPassFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execGetPeak_PeakLowPassFilter)
{
	P_GET_STRUCT_REF(FBPLowPassPeakFilter,Z_Param_Out_TargetPeakFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVRExpansionFunctionLibrary::GetPeak_PeakLowPassFilter(Z_Param_Out_TargetPeakFilter);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function GetPeak_PeakLowPassFilter

// Begin Class UVRExpansionFunctionLibrary Function IsActiveGrip
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics
{
	struct VRExpansionFunctionLibrary_eventIsActiveGrip_Parms
	{
		FBPActorGripInformation Grip;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns true if the grip is active (both valid and not paused) */" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the grip is active (both valid and not paused)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grip;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::NewProp_Grip = { "Grip", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventIsActiveGrip_Parms, Grip), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grip_MetaData), NewProp_Grip_MetaData) }; // 134483386
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventIsActiveGrip_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventIsActiveGrip_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::NewProp_Grip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "IsActiveGrip", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::VRExpansionFunctionLibrary_eventIsActiveGrip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::VRExpansionFunctionLibrary_eventIsActiveGrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execIsActiveGrip)
{
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsActiveGrip(Z_Param_Out_Grip);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function IsActiveGrip

// Begin Class UVRExpansionFunctionLibrary Function IsComponentIgnoringCollision
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics
{
	struct VRExpansionFunctionLibrary_eventIsComponentIgnoringCollision_Parms
	{
		UObject* WorldContextObject;
		UPrimitiveComponent* Prim1;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if the component is ignoring any collisions\n" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if the component is ignoring any collisions" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prim1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prim1;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventIsComponentIgnoringCollision_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::NewProp_Prim1 = { "Prim1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventIsComponentIgnoringCollision_Parms, Prim1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prim1_MetaData), NewProp_Prim1_MetaData) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventIsComponentIgnoringCollision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventIsComponentIgnoringCollision_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::NewProp_Prim1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "IsComponentIgnoringCollision", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::VRExpansionFunctionLibrary_eventIsComponentIgnoringCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::VRExpansionFunctionLibrary_eventIsComponentIgnoringCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execIsComponentIgnoringCollision)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Prim1);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsComponentIgnoringCollision(Z_Param_WorldContextObject,Z_Param_Prim1);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function IsComponentIgnoringCollision

// Begin Class UVRExpansionFunctionLibrary Function IsInVREditorPreview
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics
{
	struct VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets whether the game is running in VRPreview\n" },
#endif
		{ "DisplayName", "IsInVREditorPreview" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether the game is running in VRPreview" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "IsInVREditorPreview", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execIsInVREditorPreview)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreview();
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function IsInVREditorPreview

// Begin Class UVRExpansionFunctionLibrary Function IsInVREditorPreviewOrGame
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics
{
	struct VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets whether the game is running in VRPreview or is a non editor build game (returns true for either).\n" },
#endif
		{ "DisplayName", "IsInVREditorPreviewOrGame" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets whether the game is running in VRPreview or is a non editor build game (returns true for either)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "IsInVREditorPreviewOrGame", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execIsInVREditorPreviewOrGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreviewOrGame();
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function IsInVREditorPreviewOrGame

// Begin Class UVRExpansionFunctionLibrary Function LowPassFilter_Exponential
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics
{
	struct VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms
	{
		FVector lastAverage;
		FVector newSample;
		FVector newAverage;
		float sampleFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A exponential low pass filter\n" },
#endif
		{ "CPP_Default_sampleFactor", "0.250000" },
		{ "DisplayName", "LowPassFilter_Exponential" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A exponential low pass filter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lastAverage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_newSample;
	static const UECodeGen_Private::FStructPropertyParams NewProp_newAverage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sampleFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_lastAverage = { "lastAverage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, lastAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_newSample = { "newSample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, newSample), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_newAverage = { "newAverage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, newAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_sampleFactor = { "sampleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, sampleFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_lastAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_newSample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_newAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::NewProp_sampleFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "LowPassFilter_Exponential", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execLowPassFilter_Exponential)
{
	P_GET_STRUCT(FVector,Z_Param_lastAverage);
	P_GET_STRUCT(FVector,Z_Param_newSample);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_newAverage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_sampleFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::LowPassFilter_Exponential(Z_Param_lastAverage,Z_Param_newSample,Z_Param_Out_newAverage,Z_Param_sampleFactor);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function LowPassFilter_Exponential

// Begin Class UVRExpansionFunctionLibrary Function LowPassFilter_RollingAverage
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics
{
	struct VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms
	{
		FVector lastAverage;
		FVector newSample;
		FVector newAverage;
		int32 numSamples;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A Rolling average low pass filter\n" },
#endif
		{ "CPP_Default_numSamples", "10" },
		{ "DisplayName", "LowPassFilter_RollingAverage" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Rolling average low pass filter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_lastAverage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_newSample;
	static const UECodeGen_Private::FStructPropertyParams NewProp_newAverage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_lastAverage = { "lastAverage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, lastAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_newSample = { "newSample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, newSample), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_newAverage = { "newAverage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, newAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_numSamples = { "numSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, numSamples), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_lastAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_newSample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_newAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::NewProp_numSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "LowPassFilter_RollingAverage", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execLowPassFilter_RollingAverage)
{
	P_GET_STRUCT(FVector,Z_Param_lastAverage);
	P_GET_STRUCT(FVector,Z_Param_newSample);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_newAverage);
	P_GET_PROPERTY(FIntProperty,Z_Param_numSamples);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::LowPassFilter_RollingAverage(Z_Param_lastAverage,Z_Param_newSample,Z_Param_Out_newAverage,Z_Param_numSamples);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function LowPassFilter_RollingAverage

// Begin Class UVRExpansionFunctionLibrary Function MakeTransform_NetQuantize
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics
{
	struct VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms
	{
		FVector Location;
		FRotator Rotation;
		FVector Scale;
		FTransform_NetQuantize ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make a transform net quantize from location, rotation and scale */" },
#endif
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "Scale", "1,1,1" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a transform net quantize from location, rotation and scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 3972615260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MakeTransform_NetQuantize", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMakeTransform_NetQuantize)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeTransform_NetQuantize(Z_Param_Location,Z_Param_Rotation,Z_Param_Scale);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function MakeTransform_NetQuantize

// Begin Class UVRExpansionFunctionLibrary Function MakeVector_NetQuantize
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics
{
	struct VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms
	{
		FVector InVector;
		FVector_NetQuantize ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make a transform net quantize from location, rotation and scale */" },
#endif
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "Scale", "1,1,1" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a transform net quantize from location, rotation and scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MakeVector_NetQuantize", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::VRExpansionFunctionLibrary_eventMakeVector_NetQuantize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMakeVector_NetQuantize)
{
	P_GET_STRUCT(FVector,Z_Param_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeVector_NetQuantize(Z_Param_InVector);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function MakeVector_NetQuantize

// Begin Class UVRExpansionFunctionLibrary Function MakeVector_NetQuantize10
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics
{
	struct VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms
	{
		FVector InVector;
		FVector_NetQuantize10 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make a transform net quantize10 from location, rotation and scale */" },
#endif
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "Scale", "1,1,1" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a transform net quantize10 from location, rotation and scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(0, nullptr) }; // 1191031901
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MakeVector_NetQuantize10", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::VRExpansionFunctionLibrary_eventMakeVector_NetQuantize10_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMakeVector_NetQuantize10)
{
	P_GET_STRUCT(FVector,Z_Param_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector_NetQuantize10*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeVector_NetQuantize10(Z_Param_InVector);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function MakeVector_NetQuantize10

// Begin Class UVRExpansionFunctionLibrary Function MakeVector_NetQuantize100
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics
{
	struct VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms
	{
		FVector InVector;
		FVector_NetQuantize100 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary|FVectorNetQuantize" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make a transform net quantize100 from location, rotation and scale */" },
#endif
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "Scale", "1,1,1" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make a transform net quantize100 from location, rotation and scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(0, nullptr) }; // 2552134291
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::NewProp_InVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MakeVector_NetQuantize100", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::VRExpansionFunctionLibrary_eventMakeVector_NetQuantize100_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMakeVector_NetQuantize100)
{
	P_GET_STRUCT(FVector,Z_Param_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector_NetQuantize100*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeVector_NetQuantize100(Z_Param_InVector);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function MakeVector_NetQuantize100

// Begin Class UVRExpansionFunctionLibrary Function MatchesAnyTagsWithDirectParentTag
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics
{
	struct VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms
	{
		FGameplayTag DirectParentTag;
		FGameplayTagContainer BaseContainer;
		FGameplayTagContainer OtherContainer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Determine if any tag in the BaseContainer matches against any tag in OtherContainer with a required direct parent for both\n\x09*\n\x09* @param TagParent\x09\x09Required direct parent tag\n\x09* @param BaseContainer\x09""Container containing values to check\n\x09* @param OtherContainer\x09""Container to check against.\n\x09*\n\x09* @return True if any tag was found that matches any tags explicitly present in OtherContainer with the same DirectParent\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine if any tag in the BaseContainer matches against any tag in OtherContainer with a required direct parent for both\n\n@param TagParent              Required direct parent tag\n@param BaseContainer  Container containing values to check\n@param OtherContainer Container to check against.\n\n@return True if any tag was found that matches any tags explicitly present in OtherContainer with the same DirectParent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectParentTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_DirectParentTag = { "DirectParentTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms, DirectParentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_BaseContainer = { "BaseContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms, BaseContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseContainer_MetaData), NewProp_BaseContainer_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherContainer_MetaData), NewProp_OtherContainer_MetaData) }; // 3352185621
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_DirectParentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_BaseContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_OtherContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "MatchesAnyTagsWithDirectParentTag", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::VRExpansionFunctionLibrary_eventMatchesAnyTagsWithDirectParentTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execMatchesAnyTagsWithDirectParentTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_DirectParentTag);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_BaseContainer);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::MatchesAnyTagsWithDirectParentTag(Z_Param_DirectParentTag,Z_Param_Out_BaseContainer,Z_Param_Out_OtherContainer);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function MatchesAnyTagsWithDirectParentTag

// Begin Class UVRExpansionFunctionLibrary Function NonAuthorityMinimumAreaRectangle
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics
{
	struct VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms
	{
		UObject* WorldContextObject;
		TArray<FVector> InVerts;
		FVector SampleSurfaceNormal;
		FVector OutRectCenter;
		FRotator OutRectRotation;
		float OutSideLengthX;
		float OutSideLengthY;
		bool bDebugDraw;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Finds the minimum area rectangle that encloses all of the points in InVerts\n\x09* Engine default version is server only for some reason\n\x09* Uses algorithm found in http://www.geometrictools.com/Documentation/MinimumAreaRectangle.pdf\n\x09*\n\x09* @param\x09\x09InVerts\x09- Points to enclose in the rectangle\n\x09* @outparam\x09OutRectCenter - Center of the enclosing rectangle\n\x09* @outparam\x09OutRectSideA - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideB\n\x09* @outparam\x09OutRectSideB - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideA\n\x09*/" },
#endif
		{ "CPP_Default_bDebugDraw", "false" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the minimum area rectangle that encloses all of the points in InVerts\nEngine default version is server only for some reason\nUses algorithm found in http://www.geometrictools.com/Documentation/MinimumAreaRectangle.pdf\n\n@param                InVerts - Points to enclose in the rectangle\n@outparam     OutRectCenter - Center of the enclosing rectangle\n@outparam     OutRectSideA - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideB\n@outparam     OutRectSideB - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideA" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVerts_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleSurfaceNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVerts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InVerts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleSurfaceNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRectCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRectRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSideLengthX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSideLengthY;
	static void NewProp_bDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts_Inner = { "InVerts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts = { "InVerts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, InVerts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVerts_MetaData), NewProp_InVerts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal = { "SampleSurfaceNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, SampleSurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleSurfaceNormal_MetaData), NewProp_SampleSurfaceNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutRectCenter = { "OutRectCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutRectCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutRectRotation = { "OutRectRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutRectRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutSideLengthX = { "OutSideLengthX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutSideLengthX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutSideLengthY = { "OutSideLengthY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutSideLengthY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms*)Obj)->bDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_InVerts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutRectCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutRectRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutSideLengthX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_OutSideLengthY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::NewProp_bDebugDraw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "NonAuthorityMinimumAreaRectangle", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execNonAuthorityMinimumAreaRectangle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_InVerts);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SampleSurfaceNormal);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRectCenter);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRectRotation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSideLengthX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSideLengthY);
	P_GET_UBOOL(Z_Param_bDebugDraw);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::NonAuthorityMinimumAreaRectangle(Z_Param_WorldContextObject,Z_Param_Out_InVerts,Z_Param_Out_SampleSurfaceNormal,Z_Param_Out_OutRectCenter,Z_Param_Out_OutRectRotation,Z_Param_Out_OutSideLengthX,Z_Param_Out_OutSideLengthY,Z_Param_bDebugDraw);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function NonAuthorityMinimumAreaRectangle

// Begin Class UVRExpansionFunctionLibrary Function RemoveActorCollisionIgnore
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics
{
	struct VRExpansionFunctionLibrary_eventRemoveActorCollisionIgnore_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes all collision ignore matches for the given actor\n" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all collision ignore matches for the given actor" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRemoveActorCollisionIgnore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::NewProp_Actor1 = { "Actor1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRemoveActorCollisionIgnore_Parms, Actor1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::NewProp_Actor1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "RemoveActorCollisionIgnore", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::VRExpansionFunctionLibrary_eventRemoveActorCollisionIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::VRExpansionFunctionLibrary_eventRemoveActorCollisionIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execRemoveActorCollisionIgnore)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor1);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::RemoveActorCollisionIgnore(Z_Param_WorldContextObject,Z_Param_Actor1);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function RemoveActorCollisionIgnore

// Begin Class UVRExpansionFunctionLibrary Function RemoveObjectCollisionIgnore
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics
{
	struct VRExpansionFunctionLibrary_eventRemoveObjectCollisionIgnore_Parms
	{
		UObject* WorldContextObject;
		UPrimitiveComponent* Prim1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes all collision ignore matches for the given primitive object\n" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all collision ignore matches for the given primitive object" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prim1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prim1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRemoveObjectCollisionIgnore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::NewProp_Prim1 = { "Prim1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRemoveObjectCollisionIgnore_Parms, Prim1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prim1_MetaData), NewProp_Prim1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::NewProp_Prim1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "RemoveObjectCollisionIgnore", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::VRExpansionFunctionLibrary_eventRemoveObjectCollisionIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::VRExpansionFunctionLibrary_eventRemoveObjectCollisionIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execRemoveObjectCollisionIgnore)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Prim1);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::RemoveObjectCollisionIgnore(Z_Param_WorldContextObject,Z_Param_Prim1);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function RemoveObjectCollisionIgnore

// Begin Class UVRExpansionFunctionLibrary Function ResetEuroSmoothingFilter
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics
{
	struct VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms
	{
		FBPEuroLowPassFilter TargetEuroFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EuroLowPassFilter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets a Euro Low Pass Filter so that the first time it is used again it is clean */" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets a Euro Low Pass Filter so that the first time it is used again it is clean" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEuroFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::NewProp_TargetEuroFilter = { "TargetEuroFilter", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms, TargetEuroFilter), Z_Construct_UScriptStruct_FBPEuroLowPassFilter, METADATA_PARAMS(0, nullptr) }; // 266062801
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::NewProp_TargetEuroFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "ResetEuroSmoothingFilter", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execResetEuroSmoothingFilter)
{
	P_GET_STRUCT_REF(FBPEuroLowPassFilter,Z_Param_Out_TargetEuroFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::ResetEuroSmoothingFilter(Z_Param_Out_TargetEuroFilter);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function ResetEuroSmoothingFilter

// Begin Class UVRExpansionFunctionLibrary Function ResetPeakLowPassFilter
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics
{
	struct VRExpansionFunctionLibrary_eventResetPeakLowPassFilter_Parms
	{
		FBPLowPassPeakFilter TargetPeakFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LowPassFilter_Peak" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets a Filter so that the first time it is used again it is clean */" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets a Filter so that the first time it is used again it is clean" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPeakFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::NewProp_TargetPeakFilter = { "TargetPeakFilter", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventResetPeakLowPassFilter_Parms, TargetPeakFilter), Z_Construct_UScriptStruct_FBPLowPassPeakFilter, METADATA_PARAMS(0, nullptr) }; // 589734722
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::NewProp_TargetPeakFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "ResetPeakLowPassFilter", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::VRExpansionFunctionLibrary_eventResetPeakLowPassFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::VRExpansionFunctionLibrary_eventResetPeakLowPassFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execResetPeakLowPassFilter)
{
	P_GET_STRUCT_REF(FBPLowPassPeakFilter,Z_Param_Out_TargetPeakFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::ResetPeakLowPassFilter(Z_Param_Out_TargetPeakFilter);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function ResetPeakLowPassFilter

// Begin Class UVRExpansionFunctionLibrary Function RotateAroundPivot
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics
{
	struct VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms
	{
		FRotator RotationDelta;
		FVector OriginalLocation;
		FRotator OriginalRotation;
		FVector PivotPoint;
		FVector NewLocation;
		FRotator NewRotation;
		bool bUseOriginalYawOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRExpansionFunctions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies a delta rotation around a pivot point, if bUseOriginalYawOnly is true then it only takes the original Yaw into account (characters)\n" },
#endif
		{ "CPP_Default_bUseOriginalYawOnly", "true" },
		{ "DisplayName", "RotateAroundPivot" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a delta rotation around a pivot point, if bUseOriginalYawOnly is true then it only takes the original Yaw into account (characters)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationDelta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bUseOriginalYawOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOriginalYawOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_RotationDelta = { "RotationDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, RotationDelta), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_OriginalLocation = { "OriginalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_OriginalRotation = { "OriginalRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, OriginalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_PivotPoint = { "PivotPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_bUseOriginalYawOnly_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms*)Obj)->bUseOriginalYawOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_bUseOriginalYawOnly = { "bUseOriginalYawOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_bUseOriginalYawOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_RotationDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_OriginalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_OriginalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_PivotPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::NewProp_bUseOriginalYawOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "RotateAroundPivot", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execRotateAroundPivot)
{
	P_GET_STRUCT(FRotator,Z_Param_RotationDelta);
	P_GET_STRUCT(FVector,Z_Param_OriginalLocation);
	P_GET_STRUCT(FRotator,Z_Param_OriginalRotation);
	P_GET_STRUCT(FVector,Z_Param_PivotPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
	P_GET_UBOOL(Z_Param_bUseOriginalYawOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::RotateAroundPivot(Z_Param_RotationDelta,Z_Param_OriginalLocation,Z_Param_OriginalRotation,Z_Param_PivotPoint,Z_Param_Out_NewLocation,Z_Param_Out_NewRotation,Z_Param_bUseOriginalYawOnly);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function RotateAroundPivot

// Begin Class UVRExpansionFunctionLibrary Function RunEuroSmoothingFilter
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics
{
	struct VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms
	{
		FBPEuroLowPassFilter TargetEuroFilter;
		FVector InRawValue;
		float DeltaTime;
		FVector SmoothedValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "EuroLowPassFilter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runs the smoothing function of a Euro Low Pass Filter */" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs the smoothing function of a Euro Low Pass Filter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEuroFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRawValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_TargetEuroFilter = { "TargetEuroFilter", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, TargetEuroFilter), Z_Construct_UScriptStruct_FBPEuroLowPassFilter, METADATA_PARAMS(0, nullptr) }; // 266062801
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_InRawValue = { "InRawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, InRawValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_SmoothedValue = { "SmoothedValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, SmoothedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_TargetEuroFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_InRawValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::NewProp_SmoothedValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "RunEuroSmoothingFilter", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execRunEuroSmoothingFilter)
{
	P_GET_STRUCT_REF(FBPEuroLowPassFilter,Z_Param_Out_TargetEuroFilter);
	P_GET_STRUCT(FVector,Z_Param_InRawValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SmoothedValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::RunEuroSmoothingFilter(Z_Param_Out_TargetEuroFilter,Z_Param_InRawValue,Z_Param_DeltaTime,Z_Param_Out_SmoothedValue);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function RunEuroSmoothingFilter

// Begin Class UVRExpansionFunctionLibrary Function SetActorsIgnoreAllCollision
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics
{
	struct VRExpansionFunctionLibrary_eventSetActorsIgnoreAllCollision_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor1;
		AActor* Actor2;
		bool bIgnoreCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets two actors to entirely ignore collision between them\n" },
#endif
		{ "CPP_Default_Actor1", "None" },
		{ "CPP_Default_Actor2", "None" },
		{ "CPP_Default_bIgnoreCollision", "true" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets two actors to entirely ignore collision between them" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor2;
	static void NewProp_bIgnoreCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetActorsIgnoreAllCollision_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_Actor1 = { "Actor1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetActorsIgnoreAllCollision_Parms, Actor1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_Actor2 = { "Actor2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetActorsIgnoreAllCollision_Parms, Actor2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_bIgnoreCollision_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventSetActorsIgnoreAllCollision_Parms*)Obj)->bIgnoreCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_bIgnoreCollision = { "bIgnoreCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventSetActorsIgnoreAllCollision_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_bIgnoreCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_Actor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_Actor2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::NewProp_bIgnoreCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "SetActorsIgnoreAllCollision", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::VRExpansionFunctionLibrary_eventSetActorsIgnoreAllCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::VRExpansionFunctionLibrary_eventSetActorsIgnoreAllCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execSetActorsIgnoreAllCollision)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor1);
	P_GET_OBJECT(AActor,Z_Param_Actor2);
	P_GET_UBOOL(Z_Param_bIgnoreCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::SetActorsIgnoreAllCollision(Z_Param_WorldContextObject,Z_Param_Actor1,Z_Param_Actor2,Z_Param_bIgnoreCollision);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function SetActorsIgnoreAllCollision

// Begin Class UVRExpansionFunctionLibrary Function SetObjectsIgnoreCollision
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics
{
	struct VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms
	{
		UObject* WorldContextObject;
		UPrimitiveComponent* Prim1;
		FName OptionalBoneName1;
		bool bAddChildBones1;
		UPrimitiveComponent* Prim2;
		FName OptionalBoneName2;
		bool bAddChildBones2;
		bool bIgnoreCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "VRExpansionFunctions|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets two primitive components to ignore collision between two specific bodies\n// If bAddChildBones is true then it will also add all child bones of the given bone (or the entire skeleton if no name is given)\n" },
#endif
		{ "CPP_Default_bAddChildBones1", "false" },
		{ "CPP_Default_bAddChildBones2", "false" },
		{ "CPP_Default_bIgnoreCollision", "true" },
		{ "CPP_Default_OptionalBoneName1", "None" },
		{ "CPP_Default_OptionalBoneName2", "None" },
		{ "CPP_Default_Prim1", "None" },
		{ "CPP_Default_Prim2", "None" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets two primitive components to ignore collision between two specific bodies\nIf bAddChildBones is true then it will also add all child bones of the given bone (or the entire skeleton if no name is given)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prim1_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prim2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prim1;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalBoneName1;
	static void NewProp_bAddChildBones1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddChildBones1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Prim2;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalBoneName2;
	static void NewProp_bAddChildBones2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddChildBones2;
	static void NewProp_bIgnoreCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim1 = { "Prim1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, Prim1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prim1_MetaData), NewProp_Prim1_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_OptionalBoneName1 = { "OptionalBoneName1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, OptionalBoneName1), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bAddChildBones1_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms*)Obj)->bAddChildBones1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bAddChildBones1 = { "bAddChildBones1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bAddChildBones1_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim2 = { "Prim2", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, Prim2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prim2_MetaData), NewProp_Prim2_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_OptionalBoneName2 = { "OptionalBoneName2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms, OptionalBoneName2), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bAddChildBones2_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms*)Obj)->bAddChildBones2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bAddChildBones2 = { "bAddChildBones2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bAddChildBones2_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bIgnoreCollision_SetBit(void* Obj)
{
	((VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms*)Obj)->bIgnoreCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bIgnoreCollision = { "bIgnoreCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms), &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bIgnoreCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_OptionalBoneName1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bAddChildBones1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_Prim2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_OptionalBoneName2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bAddChildBones2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::NewProp_bIgnoreCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "SetObjectsIgnoreCollision", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::VRExpansionFunctionLibrary_eventSetObjectsIgnoreCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execSetObjectsIgnoreCollision)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Prim1);
	P_GET_PROPERTY(FNameProperty,Z_Param_OptionalBoneName1);
	P_GET_UBOOL(Z_Param_bAddChildBones1);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Prim2);
	P_GET_PROPERTY(FNameProperty,Z_Param_OptionalBoneName2);
	P_GET_UBOOL(Z_Param_bAddChildBones2);
	P_GET_UBOOL(Z_Param_bIgnoreCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::SetObjectsIgnoreCollision(Z_Param_WorldContextObject,Z_Param_Prim1,Z_Param_OptionalBoneName1,Z_Param_bAddChildBones1,Z_Param_Prim2,Z_Param_OptionalBoneName2,Z_Param_bAddChildBones2,Z_Param_bIgnoreCollision);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function SetObjectsIgnoreCollision

// Begin Class UVRExpansionFunctionLibrary Function SmoothUpdateLaserSpline
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics
{
	struct VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms
	{
		USplineComponent* LaserSplineComponent;
		TArray<USplineMeshComponent*> LaserSplineMeshComponents;
		FVector InStartLocation;
		FVector InEndLocation;
		FVector InForward;
		float LaserRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRExpansionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applies the same laser smoothing that the vr editor uses to an array of points\n" },
#endif
		{ "DisplayName", "Smooth Update Laser Spline" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies the same laser smoothing that the vr editor uses to an array of points" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaserSplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaserSplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaserSplineMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LaserSplineMeshComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InEndLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InForward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineComponent = { "LaserSplineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserSplineComponent_MetaData), NewProp_LaserSplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents_Inner = { "LaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents = { "LaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserSplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaserSplineMeshComponents_MetaData), NewProp_LaserSplineMeshComponents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InStartLocation = { "InStartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InEndLocation = { "InEndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InForward = { "InForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserRadius = { "LaserRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserSplineMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_InForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::NewProp_LaserRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "SmoothUpdateLaserSpline", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execSmoothUpdateLaserSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_LaserSplineComponent);
	P_GET_TARRAY(USplineMeshComponent*,Z_Param_LaserSplineMeshComponents);
	P_GET_STRUCT(FVector,Z_Param_InStartLocation);
	P_GET_STRUCT(FVector,Z_Param_InEndLocation);
	P_GET_STRUCT(FVector,Z_Param_InForward);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LaserRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::SmoothUpdateLaserSpline(Z_Param_LaserSplineComponent,Z_Param_LaserSplineMeshComponents,Z_Param_InStartLocation,Z_Param_InEndLocation,Z_Param_InForward,Z_Param_LaserRadius);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function SmoothUpdateLaserSpline

// Begin Class UVRExpansionFunctionLibrary Function UpdatePeakLowPassFilter
struct Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics
{
	struct VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms
	{
		FBPLowPassPeakFilter TargetPeakFilter;
		FVector NewSample;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LowPassFilter_Peak" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds an entry to the Peak low pass filter */" },
#endif
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an entry to the Peak low pass filter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPeakFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSample;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::NewProp_TargetPeakFilter = { "TargetPeakFilter", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms, TargetPeakFilter), Z_Construct_UScriptStruct_FBPLowPassPeakFilter, METADATA_PARAMS(0, nullptr) }; // 589734722
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::NewProp_NewSample = { "NewSample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms, NewSample), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::NewProp_TargetPeakFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::NewProp_NewSample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, nullptr, "UpdatePeakLowPassFilter", nullptr, nullptr, Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::VRExpansionFunctionLibrary_eventUpdatePeakLowPassFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRExpansionFunctionLibrary::execUpdatePeakLowPassFilter)
{
	P_GET_STRUCT_REF(FBPLowPassPeakFilter,Z_Param_Out_TargetPeakFilter);
	P_GET_STRUCT(FVector,Z_Param_NewSample);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVRExpansionFunctionLibrary::UpdatePeakLowPassFilter(Z_Param_Out_TargetPeakFilter,Z_Param_NewSample);
	P_NATIVE_END;
}
// End Class UVRExpansionFunctionLibrary Function UpdatePeakLowPassFilter

// Begin Class UVRExpansionFunctionLibrary
void UVRExpansionFunctionLibrary::StaticRegisterNativesUVRExpansionFunctionLibrary()
{
	UClass* Class = UVRExpansionFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSceneComponentByClass", &UVRExpansionFunctionLibrary::execAddSceneComponentByClass },
		{ "AreComponentsIgnoringCollisions", &UVRExpansionFunctionLibrary::execAreComponentsIgnoringCollisions },
		{ "BPQuat_FindBetween", &UVRExpansionFunctionLibrary::execBPQuat_FindBetween },
		{ "BreakTransform_NetQuantize", &UVRExpansionFunctionLibrary::execBreakTransform_NetQuantize },
		{ "Conv_FVectorToFVectorNetQuantize", &UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize },
		{ "Conv_FVectorToFVectorNetQuantize10", &UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize10 },
		{ "Conv_FVectorToFVectorNetQuantize100", &UVRExpansionFunctionLibrary::execConv_FVectorToFVectorNetQuantize100 },
		{ "Conv_GripPairToGripID", &UVRExpansionFunctionLibrary::execConv_GripPairToGripID },
		{ "Conv_GripPairToMotionController", &UVRExpansionFunctionLibrary::execConv_GripPairToMotionController },
		{ "Conv_TransformToTransformNetQuantize", &UVRExpansionFunctionLibrary::execConv_TransformToTransformNetQuantize },
		{ "EqualEqual_FBPActorGripInformation", &UVRExpansionFunctionLibrary::execEqualEqual_FBPActorGripInformation },
		{ "GetFirstGameplayTagWithExactParent", &UVRExpansionFunctionLibrary::execGetFirstGameplayTagWithExactParent },
		{ "GetGameViewportClient", &UVRExpansionFunctionLibrary::execGetGameViewportClient },
		{ "GetGripSlotInRangeByTypeName", &UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName },
		{ "GetGripSlotInRangeByTypeName_Component", &UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName_Component },
		{ "GetHandFromMotionSourceName", &UVRExpansionFunctionLibrary::execGetHandFromMotionSourceName },
		{ "GetHMDPureYaw", &UVRExpansionFunctionLibrary::execGetHMDPureYaw },
		{ "GetHMDType", &UVRExpansionFunctionLibrary::execGetHMDType },
		{ "GetIsActorMovable", &UVRExpansionFunctionLibrary::execGetIsActorMovable },
		{ "GetIsHMDConnected", &UVRExpansionFunctionLibrary::execGetIsHMDConnected },
		{ "GetIsHMDWorn", &UVRExpansionFunctionLibrary::execGetIsHMDWorn },
		{ "GetPeak_PeakLowPassFilter", &UVRExpansionFunctionLibrary::execGetPeak_PeakLowPassFilter },
		{ "IsActiveGrip", &UVRExpansionFunctionLibrary::execIsActiveGrip },
		{ "IsComponentIgnoringCollision", &UVRExpansionFunctionLibrary::execIsComponentIgnoringCollision },
		{ "IsInVREditorPreview", &UVRExpansionFunctionLibrary::execIsInVREditorPreview },
		{ "IsInVREditorPreviewOrGame", &UVRExpansionFunctionLibrary::execIsInVREditorPreviewOrGame },
		{ "LowPassFilter_Exponential", &UVRExpansionFunctionLibrary::execLowPassFilter_Exponential },
		{ "LowPassFilter_RollingAverage", &UVRExpansionFunctionLibrary::execLowPassFilter_RollingAverage },
		{ "MakeTransform_NetQuantize", &UVRExpansionFunctionLibrary::execMakeTransform_NetQuantize },
		{ "MakeVector_NetQuantize", &UVRExpansionFunctionLibrary::execMakeVector_NetQuantize },
		{ "MakeVector_NetQuantize10", &UVRExpansionFunctionLibrary::execMakeVector_NetQuantize10 },
		{ "MakeVector_NetQuantize100", &UVRExpansionFunctionLibrary::execMakeVector_NetQuantize100 },
		{ "MatchesAnyTagsWithDirectParentTag", &UVRExpansionFunctionLibrary::execMatchesAnyTagsWithDirectParentTag },
		{ "NonAuthorityMinimumAreaRectangle", &UVRExpansionFunctionLibrary::execNonAuthorityMinimumAreaRectangle },
		{ "RemoveActorCollisionIgnore", &UVRExpansionFunctionLibrary::execRemoveActorCollisionIgnore },
		{ "RemoveObjectCollisionIgnore", &UVRExpansionFunctionLibrary::execRemoveObjectCollisionIgnore },
		{ "ResetEuroSmoothingFilter", &UVRExpansionFunctionLibrary::execResetEuroSmoothingFilter },
		{ "ResetPeakLowPassFilter", &UVRExpansionFunctionLibrary::execResetPeakLowPassFilter },
		{ "RotateAroundPivot", &UVRExpansionFunctionLibrary::execRotateAroundPivot },
		{ "RunEuroSmoothingFilter", &UVRExpansionFunctionLibrary::execRunEuroSmoothingFilter },
		{ "SetActorsIgnoreAllCollision", &UVRExpansionFunctionLibrary::execSetActorsIgnoreAllCollision },
		{ "SetObjectsIgnoreCollision", &UVRExpansionFunctionLibrary::execSetObjectsIgnoreCollision },
		{ "SmoothUpdateLaserSpline", &UVRExpansionFunctionLibrary::execSmoothUpdateLaserSpline },
		{ "UpdatePeakLowPassFilter", &UVRExpansionFunctionLibrary::execUpdatePeakLowPassFilter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRExpansionFunctionLibrary);
UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary_NoRegister()
{
	return UVRExpansionFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VRExpansionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass, "AddSceneComponentByClass" }, // 1074869467
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_AreComponentsIgnoringCollisions, "AreComponentsIgnoringCollisions" }, // 59078929
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_BPQuat_FindBetween, "BPQuat_FindBetween" }, // 787549146
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize, "BreakTransform_NetQuantize" }, // 2441860923
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize, "Conv_FVectorToFVectorNetQuantize" }, // 617878885
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10, "Conv_FVectorToFVectorNetQuantize10" }, // 978963229
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100, "Conv_FVectorToFVectorNetQuantize100" }, // 2952062703
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToGripID, "Conv_GripPairToGripID" }, // 885900200
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_GripPairToMotionController, "Conv_GripPairToMotionController" }, // 1134848835
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize, "Conv_TransformToTransformNetQuantize" }, // 1789375245
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation, "EqualEqual_FBPActorGripInformation" }, // 3125168356
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent, "GetFirstGameplayTagWithExactParent" }, // 2026997549
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGameViewportClient, "GetGameViewportClient" }, // 2467984217
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName, "GetGripSlotInRangeByTypeName" }, // 1502553239
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component, "GetGripSlotInRangeByTypeName_Component" }, // 995260938
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHandFromMotionSourceName, "GetHandFromMotionSourceName" }, // 3592560144
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw, "GetHMDPureYaw" }, // 9520368
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType, "GetHMDType" }, // 1373105496
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable, "GetIsActorMovable" }, // 1595851447
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected, "GetIsHMDConnected" }, // 2094420062
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn, "GetIsHMDWorn" }, // 321526172
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter, "GetPeak_PeakLowPassFilter" }, // 3115312425
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsActiveGrip, "IsActiveGrip" }, // 4283790350
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsComponentIgnoringCollision, "IsComponentIgnoringCollision" }, // 489244419
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview, "IsInVREditorPreview" }, // 1143254557
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame, "IsInVREditorPreviewOrGame" }, // 1199353661
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential, "LowPassFilter_Exponential" }, // 3304204972
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage, "LowPassFilter_RollingAverage" }, // 3666612254
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize, "MakeTransform_NetQuantize" }, // 2370091883
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize, "MakeVector_NetQuantize" }, // 542739622
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize10, "MakeVector_NetQuantize10" }, // 1417866245
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeVector_NetQuantize100, "MakeVector_NetQuantize100" }, // 3863348276
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag, "MatchesAnyTagsWithDirectParentTag" }, // 4011209222
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle, "NonAuthorityMinimumAreaRectangle" }, // 2256979378
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveActorCollisionIgnore, "RemoveActorCollisionIgnore" }, // 1537068801
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RemoveObjectCollisionIgnore, "RemoveObjectCollisionIgnore" }, // 1074014964
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter, "ResetEuroSmoothingFilter" }, // 706992916
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetPeakLowPassFilter, "ResetPeakLowPassFilter" }, // 2405527623
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot, "RotateAroundPivot" }, // 2116510255
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter, "RunEuroSmoothingFilter" }, // 3956523279
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetActorsIgnoreAllCollision, "SetActorsIgnoreAllCollision" }, // 2978417239
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision, "SetObjectsIgnoreCollision" }, // 4176773878
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline, "SmoothUpdateLaserSpline" }, // 3261751039
		{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter, "UpdatePeakLowPassFilter" }, // 3176119968
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRExpansionFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::ClassParams = {
	&UVRExpansionFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UVRExpansionFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRExpansionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVRExpansionFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRExpansionFunctionLibrary.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRExpansionFunctionLibrary>()
{
	return UVRExpansionFunctionLibrary::StaticClass();
}
UVRExpansionFunctionLibrary::UVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRExpansionFunctionLibrary);
UVRExpansionFunctionLibrary::~UVRExpansionFunctionLibrary() {}
// End Class UVRExpansionFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBPHMDWornState_StaticEnum, TEXT("EBPHMDWornState"), &Z_Registration_Info_UEnum_EBPHMDWornState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 793957824U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRExpansionFunctionLibrary, UVRExpansionFunctionLibrary::StaticClass, TEXT("UVRExpansionFunctionLibrary"), &Z_Registration_Info_UClass_UVRExpansionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRExpansionFunctionLibrary), 1314307685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_3352063118(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
