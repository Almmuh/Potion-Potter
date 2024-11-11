// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VREPhysicsConstraintComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREPhysicsConstraintComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintFrame();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent_NoRegister();
// End Cross Module References

// Begin Class UVREPhysicsConstraintComponent Function GetAngularLimits
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics
{
	struct VREPhysicsConstraintComponent_eventGetAngularLimits_Parms
	{
		float Swing1Limit;
		float Swing2Limit;
		float TwistLimit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1Limit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2Limit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_Swing1Limit = { "Swing1Limit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetAngularLimits_Parms, Swing1Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_Swing2Limit = { "Swing2Limit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetAngularLimits_Parms, Swing2Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetAngularLimits_Parms, TwistLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_Swing1Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_Swing2Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_TwistLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetAngularLimits", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::VREPhysicsConstraintComponent_eventGetAngularLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::VREPhysicsConstraintComponent_eventGetAngularLimits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetAngularLimits)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Swing1Limit);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Swing2Limit);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TwistLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAngularLimits(Z_Param_Out_Swing1Limit,Z_Param_Out_Swing2Limit,Z_Param_Out_TwistLimit);
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function GetAngularLimits

// Begin Class UVREPhysicsConstraintComponent Function GetAngularOffset
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics
{
	struct VREPhysicsConstraintComponent_eventGetAngularOffset_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the angular offset on the constraint\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the angular offset on the constraint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetAngularOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetAngularOffset", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::VREPhysicsConstraintComponent_eventGetAngularOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::VREPhysicsConstraintComponent_eventGetAngularOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetAngularOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetAngularOffset();
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function GetAngularOffset

// Begin Class UVREPhysicsConstraintComponent Function GetConstraintReferenceFrame
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics
{
	struct VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms
	{
		TEnumAsByte<EConstraintFrame::Type> Frame;
		FTransform RefFrame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Frame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms, Frame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(0, nullptr) }; // 943043407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::NewProp_RefFrame = { "RefFrame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms, RefFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::NewProp_RefFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetConstraintReferenceFrame", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetConstraintReferenceFrame)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Frame);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_RefFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetConstraintReferenceFrame(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefFrame);
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function GetConstraintReferenceFrame

// Begin Class UVREPhysicsConstraintComponent Function GetCurrentLinearDistance
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics
{
	struct VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms
	{
		TEnumAsByte<EConstraintFrame::Type> FrameOfReference;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the current linear distance in world space on the joint in +/- from the initial reference frame\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current linear distance in world space on the joint in +/- from the initial reference frame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FrameOfReference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::NewProp_FrameOfReference = { "FrameOfReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms, FrameOfReference), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(0, nullptr) }; // 943043407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::NewProp_FrameOfReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetCurrentLinearDistance", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetCurrentLinearDistance)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FrameOfReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCurrentLinearDistance(EConstraintFrame::Type(Z_Param_FrameOfReference));
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function GetCurrentLinearDistance

// Begin Class UVREPhysicsConstraintComponent Function GetGlobalPose
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics
{
	struct VREPhysicsConstraintComponent_eventGetGlobalPose_Parms
	{
		TEnumAsByte<EConstraintFrame::Type> ConstraintFrame;
		FTransform GlobalPose;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::NewProp_ConstraintFrame = { "ConstraintFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetGlobalPose_Parms, ConstraintFrame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(0, nullptr) }; // 943043407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::NewProp_GlobalPose = { "GlobalPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetGlobalPose_Parms, GlobalPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::NewProp_ConstraintFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::NewProp_GlobalPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetGlobalPose", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::VREPhysicsConstraintComponent_eventGetGlobalPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::VREPhysicsConstraintComponent_eventGetGlobalPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetGlobalPose)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintFrame);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_GlobalPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGlobalPose(EConstraintFrame::Type(Z_Param_ConstraintFrame),Z_Param_Out_GlobalPose);
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function GetGlobalPose

// Begin Class UVREPhysicsConstraintComponent Function GetLinearLimits
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics
{
	struct VREPhysicsConstraintComponent_eventGetLinearLimits_Parms
	{
		float LinearLimit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::NewProp_LinearLimit = { "LinearLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetLinearLimits_Parms, LinearLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::NewProp_LinearLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetLinearLimits", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::VREPhysicsConstraintComponent_eventGetLinearLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::VREPhysicsConstraintComponent_eventGetLinearLimits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetLinearLimits)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LinearLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLinearLimits(Z_Param_Out_LinearLimit);
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function GetLinearLimits

// Begin Class UVREPhysicsConstraintComponent Function GetLocalPose
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics
{
	struct VREPhysicsConstraintComponent_eventGetLocalPose_Parms
	{
		TEnumAsByte<EConstraintFrame::Type> ConstraintFrame;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::NewProp_ConstraintFrame = { "ConstraintFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetLocalPose_Parms, ConstraintFrame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(0, nullptr) }; // 943043407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetLocalPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::NewProp_ConstraintFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetLocalPose", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::VREPhysicsConstraintComponent_eventGetLocalPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::VREPhysicsConstraintComponent_eventGetLocalPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetLocalPose)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetLocalPose(EConstraintFrame::Type(Z_Param_ConstraintFrame));
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function GetLocalPose

// Begin Class UVREPhysicsConstraintComponent Function SetAngularOffset
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics
{
	struct VREPhysicsConstraintComponent_eventSetAngularOffset_Parms
	{
		FRotator NewAngularOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the angular offset on the constraint and re-initializes it\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the angular offset on the constraint and re-initializes it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAngularOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::NewProp_NewAngularOffset = { "NewAngularOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventSetAngularOffset_Parms, NewAngularOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::NewProp_NewAngularOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "SetAngularOffset", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::VREPhysicsConstraintComponent_eventSetAngularOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::VREPhysicsConstraintComponent_eventSetAngularOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execSetAngularOffset)
{
	P_GET_STRUCT(FRotator,Z_Param_NewAngularOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularOffset(Z_Param_NewAngularOffset);
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function SetAngularOffset

// Begin Class UVREPhysicsConstraintComponent Function SetConstraintToForceBased
struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics
{
	struct VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms
	{
		bool bUseForceConstraint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseForceConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForceConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::NewProp_bUseForceConstraint_SetBit(void* Obj)
{
	((VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms*)Obj)->bUseForceConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::NewProp_bUseForceConstraint = { "bUseForceConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms), &Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::NewProp_bUseForceConstraint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::NewProp_bUseForceConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "SetConstraintToForceBased", nullptr, nullptr, Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execSetConstraintToForceBased)
{
	P_GET_UBOOL(Z_Param_bUseForceConstraint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConstraintToForceBased(Z_Param_bUseForceConstraint);
	P_NATIVE_END;
}
// End Class UVREPhysicsConstraintComponent Function SetConstraintToForceBased

// Begin Class UVREPhysicsConstraintComponent
void UVREPhysicsConstraintComponent::StaticRegisterNativesUVREPhysicsConstraintComponent()
{
	UClass* Class = UVREPhysicsConstraintComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAngularLimits", &UVREPhysicsConstraintComponent::execGetAngularLimits },
		{ "GetAngularOffset", &UVREPhysicsConstraintComponent::execGetAngularOffset },
		{ "GetConstraintReferenceFrame", &UVREPhysicsConstraintComponent::execGetConstraintReferenceFrame },
		{ "GetCurrentLinearDistance", &UVREPhysicsConstraintComponent::execGetCurrentLinearDistance },
		{ "GetGlobalPose", &UVREPhysicsConstraintComponent::execGetGlobalPose },
		{ "GetLinearLimits", &UVREPhysicsConstraintComponent::execGetLinearLimits },
		{ "GetLocalPose", &UVREPhysicsConstraintComponent::execGetLocalPose },
		{ "SetAngularOffset", &UVREPhysicsConstraintComponent::execSetAngularOffset },
		{ "SetConstraintToForceBased", &UVREPhysicsConstraintComponent::execSetConstraintToForceBased },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREPhysicsConstraintComponent);
UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent_NoRegister()
{
	return UVREPhysicsConstraintComponent::StaticClass();
}
struct Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09""A custom constraint component subclass that exposes additional missing functionality from the default one\n*/" },
#endif
		{ "HideCategories", "Activation Components|Activation Physics Mobility Activation Components|Activation Physics Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Misc/VREPhysicsConstraintComponent.h" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
		{ "ShowCategories", "Physics|Components|PhysicsConstraint" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A custom constraint component subclass that exposes additional missing functionality from the default one" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits, "GetAngularLimits" }, // 3516401916
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset, "GetAngularOffset" }, // 1076403361
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame, "GetConstraintReferenceFrame" }, // 1393927192
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance, "GetCurrentLinearDistance" }, // 991074594
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose, "GetGlobalPose" }, // 4128577568
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits, "GetLinearLimits" }, // 1307002771
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose, "GetLocalPose" }, // 2067770466
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset, "SetAngularOffset" }, // 1891044279
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased, "SetConstraintToForceBased" }, // 2187461472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREPhysicsConstraintComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicsConstraintComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::ClassParams = {
	&UVREPhysicsConstraintComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent()
{
	if (!Z_Registration_Info_UClass_UVREPhysicsConstraintComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREPhysicsConstraintComponent.OuterSingleton, Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVREPhysicsConstraintComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVREPhysicsConstraintComponent>()
{
	return UVREPhysicsConstraintComponent::StaticClass();
}
UVREPhysicsConstraintComponent::UVREPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVREPhysicsConstraintComponent);
UVREPhysicsConstraintComponent::~UVREPhysicsConstraintComponent() {}
// End Class UVREPhysicsConstraintComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVREPhysicsConstraintComponent, UVREPhysicsConstraintComponent::StaticClass, TEXT("UVREPhysicsConstraintComponent"), &Z_Registration_Info_UClass_UVREPhysicsConstraintComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREPhysicsConstraintComponent), 4181523435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_1763125520(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
