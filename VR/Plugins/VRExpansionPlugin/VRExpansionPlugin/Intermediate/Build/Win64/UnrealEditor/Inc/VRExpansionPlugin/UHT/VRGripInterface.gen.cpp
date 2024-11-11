// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRGripInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGripInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
// End Cross Module References

// Begin Delegate FVROnGripSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVROnGripSignature_Parms
	{
		UGripMotionControllerComponent* GrippingController;
		FBPActorGripInformation GripInformation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the controller grips a new object. */" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the controller grips a new object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnGripSignature_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrippingController_MetaData), NewProp_GrippingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnGripSignature_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GrippingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::NewProp_GripInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnGripSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnGripSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnGripSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVROnGripSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnGripSignature, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
{
	struct _Script_VRExpansionPlugin_eventVROnGripSignature_Parms
	{
		UGripMotionControllerComponent* GrippingController;
		FBPActorGripInformation GripInformation;
	};
	_Script_VRExpansionPlugin_eventVROnGripSignature_Parms Parms;
	Parms.GrippingController=GrippingController;
	Parms.GripInformation=GripInformation;
	VROnGripSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVROnGripSignature

// Begin Delegate FVROnDropSignature
struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics
{
	struct _Script_VRExpansionPlugin_eventVROnDropSignature_Parms
	{
		UGripMotionControllerComponent* GrippingController;
		FBPActorGripInformation GripInformation;
		bool bWasSocketed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for notification when the controller drops a gripped object. */" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for notification when the controller drops a gripped object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static void NewProp_bWasSocketed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnDropSignature_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrippingController_MetaData), NewProp_GrippingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnDropSignature_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
void Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
{
	((_Script_VRExpansionPlugin_eventVROnDropSignature_Parms*)Obj)->bWasSocketed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_VRExpansionPlugin_eventVROnDropSignature_Parms), &Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GrippingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_GripInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::NewProp_bWasSocketed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnDropSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnDropSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::_Script_VRExpansionPlugin_eventVROnDropSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVROnDropSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnDropSignature, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
{
	struct _Script_VRExpansionPlugin_eventVROnDropSignature_Parms
	{
		UGripMotionControllerComponent* GrippingController;
		FBPActorGripInformation GripInformation;
		bool bWasSocketed;
	};
	_Script_VRExpansionPlugin_eventVROnDropSignature_Parms Parms;
	Parms.GrippingController=GrippingController;
	Parms.GripInformation=GripInformation;
	Parms.bWasSocketed=bWasSocketed ? true : false;
	VROnDropSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVROnDropSignature

// Begin Interface UVRGripInterface Function AdvancedGripSettings
struct VRGripInterface_eventAdvancedGripSettings_Parms
{
	FBPAdvGripSettings ReturnValue;
};
FBPAdvGripSettings IVRGripInterface::AdvancedGripSettings()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AdvancedGripSettings instead.");
	VRGripInterface_eventAdvancedGripSettings_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
FBPAdvGripSettings IVRGripInterface::Execute_AdvancedGripSettings(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventAdvancedGripSettings_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_AdvancedGripSettings);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->AdvancedGripSettings_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the advanced physics settings for this grip\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the advanced physics settings for this grip" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(0, nullptr) }; // 3150106177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "AdvancedGripSettings", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::PropPointers), sizeof(VRGripInterface_eventAdvancedGripSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventAdvancedGripSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execAdvancedGripSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBPAdvGripSettings*)Z_Param__Result=P_THIS->AdvancedGripSettings_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function AdvancedGripSettings

// Begin Interface UVRGripInterface Function AllowsMultipleGrips
struct VRGripInterface_eventAllowsMultipleGrips_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventAllowsMultipleGrips_Parms()
		: ReturnValue(false)
	{
	}
};
bool IVRGripInterface::AllowsMultipleGrips()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AllowsMultipleGrips instead.");
	VRGripInterface_eventAllowsMultipleGrips_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_AllowsMultipleGrips = FName(TEXT("AllowsMultipleGrips"));
bool IVRGripInterface::Execute_AllowsMultipleGrips(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventAllowsMultipleGrips_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_AllowsMultipleGrips);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->AllowsMultipleGrips_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if an object allows multiple grips at one time\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an object allows multiple grips at one time" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripInterface_eventAllowsMultipleGrips_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventAllowsMultipleGrips_Parms), &Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "AllowsMultipleGrips", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::PropPointers), sizeof(VRGripInterface_eventAllowsMultipleGrips_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventAllowsMultipleGrips_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execAllowsMultipleGrips)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AllowsMultipleGrips_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function AllowsMultipleGrips

// Begin Interface UVRGripInterface Function ClosestGripSlotInRange
struct VRGripInterface_eventClosestGripSlotInRange_Parms
{
	FVector WorldLocation;
	bool bSecondarySlot;
	bool bHadSlotInRange;
	FTransform SlotWorldTransform;
	FName SlotName;
	UGripMotionControllerComponent* CallingController;
	FName OverridePrefix;
};
void IVRGripInterface::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClosestGripSlotInRange instead.");
}
static FName NAME_UVRGripInterface_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
void IVRGripInterface::Execute_ClosestGripSlotInRange(UObject* O, FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventClosestGripSlotInRange_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_ClosestGripSlotInRange);
	if (Func)
	{
		Parms.WorldLocation=WorldLocation;
		Parms.bSecondarySlot=bSecondarySlot;
		Parms.bHadSlotInRange=bHadSlotInRange;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.SlotName=SlotName;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		O->ProcessEvent(Func, &Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
		SlotName=Parms.SlotName;
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->ClosestGripSlotInRange_Implementation(WorldLocation,bSecondarySlot,bHadSlotInRange,SlotWorldTransform,SlotName,CallingController,OverridePrefix);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called to get the closest grip socket in range\n\x09 * @param WorldLocation - World Location to check near\n\x09 * @param bSecondarySlot - True if this is a check for a secondary slot or not\n\x09 * @param CallingController - Controller checking for the slot (can be used in overrides for per hand checks)\n\x09 * @param OverridePrefix - A different substring to check against in the socket names to find relevant ones\n\x09 */" },
#endif
		{ "CPP_Default_CallingController", "None" },
		{ "CPP_Default_OverridePrefix", "None" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to get the closest grip socket in range\n@param WorldLocation - World Location to check near\n@param bSecondarySlot - True if this is a check for a secondary slot or not\n@param CallingController - Controller checking for the slot (can be used in overrides for per hand checks)\n@param OverridePrefix - A different substring to check against in the socket names to find relevant ones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static void NewProp_bSecondarySlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecondarySlot;
	static void NewProp_bHadSlotInRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverridePrefix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit(void* Obj)
{
	((VRGripInterface_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot = { "bSecondarySlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
{
	((VRGripInterface_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController = { "CallingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingController_MetaData), NewProp_CallingController_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix = { "OverridePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_CallingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "ClosestGripSlotInRange", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::PropPointers), sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execClosestGripSlotInRange)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_UBOOL(Z_Param_bSecondarySlot);
	P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController);
	P_GET_PROPERTY(FNameProperty,Z_Param_OverridePrefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClosestGripSlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_bSecondarySlot,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_CallingController,Z_Param_OverridePrefix);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function ClosestGripSlotInRange

// Begin Interface UVRGripInterface Function DenyGripping
struct VRGripInterface_eventDenyGripping_Parms
{
	UGripMotionControllerComponent* GripInitiator;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventDenyGripping_Parms()
		: ReturnValue(false)
	{
	}
};
bool IVRGripInterface::DenyGripping(UGripMotionControllerComponent* GripInitiator)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DenyGripping instead.");
	VRGripInterface_eventDenyGripping_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_DenyGripping = FName(TEXT("DenyGripping"));
bool IVRGripInterface::Execute_DenyGripping(UObject* O, UGripMotionControllerComponent* GripInitiator)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventDenyGripping_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_DenyGripping);
	if (Func)
	{
		Parms.GripInitiator=GripInitiator;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->DenyGripping_Implementation(GripInitiator);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set up as deny instead of allow so that default allows for gripping\n" },
#endif
		{ "CPP_Default_GripInitiator", "None" },
		{ "DisplayName", "IsDenyingGrips" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInitiator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GripInitiator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_GripInitiator = { "GripInitiator", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventDenyGripping_Parms, GripInitiator), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInitiator_MetaData), NewProp_GripInitiator_MetaData) };
void Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripInterface_eventDenyGripping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventDenyGripping_Parms), &Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_GripInitiator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "DenyGripping", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::PropPointers), sizeof(VRGripInterface_eventDenyGripping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventDenyGripping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_DenyGripping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_DenyGripping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execDenyGripping)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripInitiator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DenyGripping_Implementation(Z_Param_GripInitiator);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function DenyGripping

// Begin Interface UVRGripInterface Function GetGripScripts
struct VRGripInterface_eventGetGripScripts_Parms
{
	TArray<UVRGripScriptBase*> ArrayReference;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventGetGripScripts_Parms()
		: ReturnValue(false)
	{
	}
};
bool IVRGripInterface::GetGripScripts(TArray<UVRGripScriptBase*>& ArrayReference)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripScripts instead.");
	VRGripInterface_eventGetGripScripts_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_GetGripScripts = FName(TEXT("GetGripScripts"));
bool IVRGripInterface::Execute_GetGripScripts(UObject* O, TArray<UVRGripScriptBase*>& ArrayReference)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventGetGripScripts_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetGripScripts);
	if (Func)
	{
		Parms.ArrayReference=ArrayReference;
		O->ProcessEvent(Func, &Parms);
		ArrayReference=Parms.ArrayReference;
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetGripScripts_Implementation(ArrayReference);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get grip scripts\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get grip scripts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayReference_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrayReference_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayReference;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_Inner = { "ArrayReference", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference = { "ArrayReference", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripScripts_Parms, ArrayReference), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayReference_MetaData), NewProp_ArrayReference_MetaData) };
void Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripInterface_eventGetGripScripts_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventGetGripScripts_Parms), &Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ArrayReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetGripScripts", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::PropPointers), sizeof(VRGripInterface_eventGetGripScripts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventGetGripScripts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripScripts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetGripScripts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execGetGripScripts)
{
	P_GET_TARRAY_REF(UVRGripScriptBase*,Z_Param_Out_ArrayReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGripScripts_Implementation(Z_Param_Out_ArrayReference);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function GetGripScripts

// Begin Interface UVRGripInterface Function GetGripStiffnessAndDamping
struct VRGripInterface_eventGetGripStiffnessAndDamping_Parms
{
	float GripStiffnessOut;
	float GripDampingOut;
};
void IVRGripInterface::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripStiffnessAndDamping instead.");
}
static FName NAME_UVRGripInterface_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
void IVRGripInterface::Execute_GetGripStiffnessAndDamping(UObject* O, float& GripStiffnessOut, float& GripDampingOut)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventGetGripStiffnessAndDamping_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetGripStiffnessAndDamping);
	if (Func)
	{
		Parms.GripStiffnessOut=GripStiffnessOut;
		Parms.GripDampingOut=GripDampingOut;
		O->ProcessEvent(Func, &Parms);
		GripStiffnessOut=Parms.GripStiffnessOut;
		GripDampingOut=Parms.GripDampingOut;
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->GetGripStiffnessAndDamping_Implementation(GripStiffnessOut,GripDampingOut);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What grip stiffness and damping to use if using a physics constraint\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What grip stiffness and damping to use if using a physics constraint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut = { "GripStiffnessOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut = { "GripDampingOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetGripStiffnessAndDamping", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::PropPointers), sizeof(VRGripInterface_eventGetGripStiffnessAndDamping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventGetGripStiffnessAndDamping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execGetGripStiffnessAndDamping)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripStiffnessOut);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripDampingOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGripStiffnessAndDamping_Implementation(Z_Param_Out_GripStiffnessOut,Z_Param_Out_GripDampingOut);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function GetGripStiffnessAndDamping

// Begin Interface UVRGripInterface Function GetPrimaryGripType
struct VRGripInterface_eventGetPrimaryGripType_Parms
{
	bool bIsSlot;
	EGripCollisionType ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventGetPrimaryGripType_Parms()
		: ReturnValue((EGripCollisionType)0)
	{
	}
};
EGripCollisionType IVRGripInterface::GetPrimaryGripType(bool bIsSlot)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPrimaryGripType instead.");
	VRGripInterface_eventGetPrimaryGripType_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
EGripCollisionType IVRGripInterface::Execute_GetPrimaryGripType(UObject* O, bool bIsSlot)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventGetPrimaryGripType_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetPrimaryGripType);
	if (Func)
	{
		Parms.bIsSlot=bIsSlot;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetPrimaryGripType_Implementation(bIsSlot);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grip type to use\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip type to use" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit(void* Obj)
{
	((VRGripInterface_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot = { "bIsSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventGetPrimaryGripType_Parms), &Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(0, nullptr) }; // 4208186323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_bIsSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GetPrimaryGripType", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::PropPointers), sizeof(VRGripInterface_eventGetPrimaryGripType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventGetPrimaryGripType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execGetPrimaryGripType)
{
	P_GET_UBOOL(Z_Param_bIsSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGripCollisionType*)Z_Param__Result=P_THIS->GetPrimaryGripType_Implementation(Z_Param_bIsSlot);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function GetPrimaryGripType

// Begin Interface UVRGripInterface Function GripBreakDistance
struct VRGripInterface_eventGripBreakDistance_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventGripBreakDistance_Parms()
		: ReturnValue(0)
	{
	}
};
float IVRGripInterface::GripBreakDistance()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripBreakDistance instead.");
	VRGripInterface_eventGripBreakDistance_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_GripBreakDistance = FName(TEXT("GripBreakDistance"));
float IVRGripInterface::Execute_GripBreakDistance(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventGripBreakDistance_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripBreakDistance);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GripBreakDistance_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What distance to break a grip at (only relevent with physics enabled grips\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripBreakDistance", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::PropPointers), sizeof(VRGripInterface_eventGripBreakDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventGripBreakDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_GripBreakDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripBreakDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execGripBreakDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GripBreakDistance_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function GripBreakDistance

// Begin Interface UVRGripInterface Function GripLateUpdateSetting
struct VRGripInterface_eventGripLateUpdateSetting_Parms
{
	EGripLateUpdateSettings ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventGripLateUpdateSetting_Parms()
		: ReturnValue((EGripLateUpdateSettings)0)
	{
	}
};
EGripLateUpdateSettings IVRGripInterface::GripLateUpdateSetting()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripLateUpdateSetting instead.");
	VRGripInterface_eventGripLateUpdateSetting_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
EGripLateUpdateSettings IVRGripInterface::Execute_GripLateUpdateSetting(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventGripLateUpdateSetting_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripLateUpdateSetting);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GripLateUpdateSetting_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Define the late update setting\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define the late update setting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(0, nullptr) }; // 3549350265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripLateUpdateSetting", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::PropPointers), sizeof(VRGripInterface_eventGripLateUpdateSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventGripLateUpdateSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execGripLateUpdateSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGripLateUpdateSettings*)Z_Param__Result=P_THIS->GripLateUpdateSetting_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function GripLateUpdateSetting

// Begin Interface UVRGripInterface Function GripMovementReplicationType
struct VRGripInterface_eventGripMovementReplicationType_Parms
{
	EGripMovementReplicationSettings ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventGripMovementReplicationType_Parms()
		: ReturnValue((EGripMovementReplicationSettings)0)
	{
	}
};
EGripMovementReplicationSettings IVRGripInterface::GripMovementReplicationType()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripMovementReplicationType instead.");
	VRGripInterface_eventGripMovementReplicationType_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
EGripMovementReplicationSettings IVRGripInterface::Execute_GripMovementReplicationType(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventGripMovementReplicationType_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripMovementReplicationType);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GripMovementReplicationType_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Define which movement repliation setting to use\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define which movement repliation setting to use" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(0, nullptr) }; // 2309891904
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "GripMovementReplicationType", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::PropPointers), sizeof(VRGripInterface_eventGripMovementReplicationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventGripMovementReplicationType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execGripMovementReplicationType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGripMovementReplicationSettings*)Z_Param__Result=P_THIS->GripMovementReplicationType_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function GripMovementReplicationType

// Begin Interface UVRGripInterface Function IsHeld
struct VRGripInterface_eventIsHeld_Parms
{
	TArray<FBPGripPair> HoldingControllers;
	bool bIsHeld;
};
void IVRGripInterface::IsHeld(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsHeld instead.");
}
static FName NAME_UVRGripInterface_IsHeld = FName(TEXT("IsHeld"));
void IVRGripInterface::Execute_IsHeld(UObject* O, TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventIsHeld_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_IsHeld);
	if (Func)
	{
		Parms.HoldingControllers=HoldingControllers;
		Parms.bIsHeld=bIsHeld;
		O->ProcessEvent(Func, &Parms);
		HoldingControllers=Parms.HoldingControllers;
		bIsHeld=Parms.bIsHeld;
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->IsHeld_Implementation(HoldingControllers,bIsHeld);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if the object is held and if so, which controllers are holding it\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if the object is held and if so, which controllers are holding it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoldingControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoldingControllers;
	static void NewProp_bIsHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingControllers_Inner = { "HoldingControllers", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(0, nullptr) }; // 2048483295
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingControllers = { "HoldingControllers", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventIsHeld_Parms, HoldingControllers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2048483295
void Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((VRGripInterface_eventIsHeld_Parms*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventIsHeld_Parms), &Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_HoldingControllers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::NewProp_bIsHeld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "IsHeld", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::PropPointers), sizeof(VRGripInterface_eventIsHeld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventIsHeld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_IsHeld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_IsHeld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execIsHeld)
{
	P_GET_TARRAY_REF(FBPGripPair,Z_Param_Out_HoldingControllers);
	P_GET_UBOOL_REF(Z_Param_Out_bIsHeld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IsHeld_Implementation(Z_Param_Out_HoldingControllers,Z_Param_Out_bIsHeld);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function IsHeld

// Begin Interface UVRGripInterface Function OnChildGrip
struct VRGripInterface_eventOnChildGrip_Parms
{
	UGripMotionControllerComponent* GrippingController;
	FBPActorGripInformation GripInformation;
};
void IVRGripInterface::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChildGrip instead.");
}
static FName NAME_UVRGripInterface_OnChildGrip = FName(TEXT("OnChildGrip"));
void IVRGripInterface::Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventOnChildGrip_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnChildGrip);
	if (Func)
	{
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnChildGrip_Implementation(GrippingController,GripInformation);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when child component is gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrippingController_MetaData), NewProp_GrippingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GrippingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::NewProp_GripInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnChildGrip", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::PropPointers), sizeof(VRGripInterface_eventOnChildGrip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventOnChildGrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnChildGrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnChildGrip)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnChildGrip

// Begin Interface UVRGripInterface Function OnChildGripRelease
struct VRGripInterface_eventOnChildGripRelease_Parms
{
	UGripMotionControllerComponent* ReleasingController;
	FBPActorGripInformation GripInformation;
	bool bWasSocketed;
};
void IVRGripInterface::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChildGripRelease instead.");
}
static FName NAME_UVRGripInterface_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
void IVRGripInterface::Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventOnChildGripRelease_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnChildGripRelease);
	if (Func)
	{
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnChildGripRelease_Implementation(ReleasingController,GripInformation,bWasSocketed);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when child component is released\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static void NewProp_bWasSocketed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleasingController_MetaData), NewProp_ReleasingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
void Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
{
	((VRGripInterface_eventOnChildGripRelease_Parms*)Obj)->bWasSocketed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventOnChildGripRelease_Parms), &Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_ReleasingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_GripInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::NewProp_bWasSocketed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnChildGripRelease", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::PropPointers), sizeof(VRGripInterface_eventOnChildGripRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventOnChildGripRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnChildGripRelease)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_GET_UBOOL(Z_Param_bWasSocketed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnChildGripRelease

// Begin Interface UVRGripInterface Function OnEndSecondaryUsed
void IVRGripInterface::OnEndSecondaryUsed()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndSecondaryUsed instead.");
}
static FName NAME_UVRGripInterface_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
void IVRGripInterface::Execute_OnEndSecondaryUsed(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnEndSecondaryUsed);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnEndSecondaryUsed_Implementation();
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to stop using an object\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to stop using an object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnEndSecondaryUsed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnEndSecondaryUsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndSecondaryUsed_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnEndSecondaryUsed

// Begin Interface UVRGripInterface Function OnEndUsed
void IVRGripInterface::OnEndUsed()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndUsed instead.");
}
static FName NAME_UVRGripInterface_OnEndUsed = FName(TEXT("OnEndUsed"));
void IVRGripInterface::Execute_OnEndUsed(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnEndUsed);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnEndUsed_Implementation();
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to stop using an object\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to stop using an object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnEndUsed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndUsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnEndUsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnEndUsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndUsed_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnEndUsed

// Begin Interface UVRGripInterface Function OnGrip
struct VRGripInterface_eventOnGrip_Parms
{
	UGripMotionControllerComponent* GrippingController;
	FBPActorGripInformation GripInformation;
};
void IVRGripInterface::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGrip instead.");
}
static FName NAME_UVRGripInterface_OnGrip = FName(TEXT("OnGrip"));
void IVRGripInterface::Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventOnGrip_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnGrip);
	if (Func)
	{
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnGrip_Implementation(GrippingController,GripInformation);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrippingController_MetaData), NewProp_GrippingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GrippingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::NewProp_GripInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnGrip", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::PropPointers), sizeof(VRGripInterface_eventOnGrip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventOnGrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_OnGrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnGrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnGrip)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnGrip

// Begin Interface UVRGripInterface Function OnGripRelease
struct VRGripInterface_eventOnGripRelease_Parms
{
	UGripMotionControllerComponent* ReleasingController;
	FBPActorGripInformation GripInformation;
	bool bWasSocketed;
};
void IVRGripInterface::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGripRelease instead.");
}
static FName NAME_UVRGripInterface_OnGripRelease = FName(TEXT("OnGripRelease"));
void IVRGripInterface::Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventOnGripRelease_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnGripRelease);
	if (Func)
	{
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnGripRelease_Implementation(ReleasingController,GripInformation,bWasSocketed);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when grip is released\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static void NewProp_bWasSocketed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleasingController_MetaData), NewProp_ReleasingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
void Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
{
	((VRGripInterface_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventOnGripRelease_Parms), &Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_ReleasingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_GripInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::NewProp_bWasSocketed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnGripRelease", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::PropPointers), sizeof(VRGripInterface_eventOnGripRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventOnGripRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_OnGripRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnGripRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnGripRelease)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_GET_UBOOL(Z_Param_bWasSocketed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnGripRelease

// Begin Interface UVRGripInterface Function OnInput
struct VRGripInterface_eventOnInput_Parms
{
	FKey Key;
	TEnumAsByte<EInputEvent> KeyEvent;
};
void IVRGripInterface::OnInput(FKey Key, EInputEvent KeyEvent)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInput instead.");
}
static FName NAME_UVRGripInterface_OnInput = FName(TEXT("OnInput"));
void IVRGripInterface::Execute_OnInput(UObject* O, FKey Key, EInputEvent KeyEvent)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventOnInput_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnInput);
	if (Func)
	{
		Parms.Key=Key;
		Parms.KeyEvent=KeyEvent;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnInput_Implementation(Key,KeyEvent);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to send an action event to the object\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to send an action event to the object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(0, nullptr) }; // 2776698617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::NewProp_KeyEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnInput", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::PropPointers), sizeof(VRGripInterface_eventOnInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventOnInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_OnInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnInput)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInput_Implementation(Z_Param_Key,EInputEvent(Z_Param_KeyEvent));
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnInput

// Begin Interface UVRGripInterface Function OnSecondaryGrip
struct VRGripInterface_eventOnSecondaryGrip_Parms
{
	UGripMotionControllerComponent* GripOwningController;
	USceneComponent* SecondaryGripComponent;
	FBPActorGripInformation GripInformation;
};
void IVRGripInterface::OnSecondaryGrip(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryGrip instead.");
}
static FName NAME_UVRGripInterface_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
void IVRGripInterface::Execute_OnSecondaryGrip(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventOnSecondaryGrip_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryGrip);
	if (Func)
	{
		Parms.GripOwningController=GripOwningController;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnSecondaryGrip_Implementation(GripOwningController,SecondaryGripComponent,GripInformation);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when secondary gripped\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GripOwningController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripOwningController_MetaData), NewProp_GripOwningController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryGripComponent_MetaData), NewProp_SecondaryGripComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripOwningController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::NewProp_GripInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryGrip", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::PropPointers), sizeof(VRGripInterface_eventOnSecondaryGrip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventOnSecondaryGrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnSecondaryGrip)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
	P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSecondaryGrip_Implementation(Z_Param_GripOwningController,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnSecondaryGrip

// Begin Interface UVRGripInterface Function OnSecondaryGripRelease
struct VRGripInterface_eventOnSecondaryGripRelease_Parms
{
	UGripMotionControllerComponent* GripOwningController;
	USceneComponent* ReleasingSecondaryGripComponent;
	FBPActorGripInformation GripInformation;
};
void IVRGripInterface::OnSecondaryGripRelease(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryGripRelease instead.");
}
static FName NAME_UVRGripInterface_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
void IVRGripInterface::Execute_OnSecondaryGripRelease(UObject* O, UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventOnSecondaryGripRelease_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryGripRelease);
	if (Func)
	{
		Parms.GripOwningController=GripOwningController;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnSecondaryGripRelease_Implementation(GripOwningController,ReleasingSecondaryGripComponent,GripInformation);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered on the interfaced object when secondary grip is released\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GripOwningController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripOwningController_MetaData), NewProp_GripOwningController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleasingSecondaryGripComponent_MetaData), NewProp_ReleasingSecondaryGripComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripOwningController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryGripRelease", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::PropPointers), sizeof(VRGripInterface_eventOnSecondaryGripRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventOnSecondaryGripRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnSecondaryGripRelease)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
	P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_GripOwningController,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnSecondaryGripRelease

// Begin Interface UVRGripInterface Function OnSecondaryUsed
void IVRGripInterface::OnSecondaryUsed()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryUsed instead.");
}
static FName NAME_UVRGripInterface_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
void IVRGripInterface::Execute_OnSecondaryUsed(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryUsed);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnSecondaryUsed_Implementation();
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to use an object\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to use an object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnSecondaryUsed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnSecondaryUsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSecondaryUsed_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnSecondaryUsed

// Begin Interface UVRGripInterface Function OnUsed
void IVRGripInterface::OnUsed()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUsed instead.");
}
static FName NAME_UVRGripInterface_OnUsed = FName(TEXT("OnUsed"));
void IVRGripInterface::Execute_OnUsed(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnUsed);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->OnUsed_Implementation();
	}
}
struct Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call to use an object\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call to use an object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "OnUsed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRGripInterface_OnUsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_OnUsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execOnUsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUsed_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function OnUsed

// Begin Interface UVRGripInterface Function RequestsSocketing
struct VRGripInterface_eventRequestsSocketing_Parms
{
	USceneComponent* ParentToSocketTo;
	FName OptionalSocketName;
	FTransform_NetQuantize RelativeTransform;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventRequestsSocketing_Parms()
		: ReturnValue(false)
	{
	}
};
bool IVRGripInterface::RequestsSocketing(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestsSocketing instead.");
	VRGripInterface_eventRequestsSocketing_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_RequestsSocketing = FName(TEXT("RequestsSocketing"));
bool IVRGripInterface::Execute_RequestsSocketing(UObject* O, USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventRequestsSocketing_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_RequestsSocketing);
	if (Func)
	{
		Parms.ParentToSocketTo=ParentToSocketTo;
		Parms.OptionalSocketName=OptionalSocketName;
		Parms.RelativeTransform=RelativeTransform;
		O->ProcessEvent(Func, &Parms);
		ParentToSocketTo=Parms.ParentToSocketTo;
		OptionalSocketName=Parms.OptionalSocketName;
		RelativeTransform=Parms.RelativeTransform;
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->RequestsSocketing_Implementation(ParentToSocketTo,OptionalSocketName,RelativeTransform);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns if the object requests to be socketed to something\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if the object requests to be socketed to something" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentToSocketTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentToSocketTo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo = { "ParentToSocketTo", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, ParentToSocketTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentToSocketTo_MetaData), NewProp_ParentToSocketTo_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, OptionalSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventRequestsSocketing_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 3972615260
void Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripInterface_eventRequestsSocketing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventRequestsSocketing_Parms), &Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ParentToSocketTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_OptionalSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "RequestsSocketing", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::PropPointers), sizeof(VRGripInterface_eventRequestsSocketing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventRequestsSocketing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_RequestsSocketing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_RequestsSocketing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execRequestsSocketing)
{
	P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ParentToSocketTo);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OptionalSocketName);
	P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestsSocketing_Implementation(P_ARG_GC_BARRIER(Z_Param_Out_ParentToSocketTo),Z_Param_Out_OptionalSocketName,Z_Param_Out_RelativeTransform);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function RequestsSocketing

// Begin Interface UVRGripInterface Function SecondaryGripType
struct VRGripInterface_eventSecondaryGripType_Parms
{
	ESecondaryGripType ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventSecondaryGripType_Parms()
		: ReturnValue((ESecondaryGripType)0)
	{
	}
};
ESecondaryGripType IVRGripInterface::SecondaryGripType()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SecondaryGripType instead.");
	VRGripInterface_eventSecondaryGripType_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_SecondaryGripType = FName(TEXT("SecondaryGripType"));
ESecondaryGripType IVRGripInterface::Execute_SecondaryGripType(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventSecondaryGripType_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SecondaryGripType);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->SecondaryGripType_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Double Grip Type\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Double Grip Type" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(0, nullptr) }; // 358475553
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SecondaryGripType", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::PropPointers), sizeof(VRGripInterface_eventSecondaryGripType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventSecondaryGripType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_SecondaryGripType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SecondaryGripType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execSecondaryGripType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESecondaryGripType*)Z_Param__Result=P_THIS->SecondaryGripType_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function SecondaryGripType

// Begin Interface UVRGripInterface Function SetHeld
struct VRGripInterface_eventSetHeld_Parms
{
	UGripMotionControllerComponent* HoldingController;
	uint8 GripID;
	bool bIsHeld;
};
void IVRGripInterface::SetHeld(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHeld instead.");
}
static FName NAME_UVRGripInterface_SetHeld = FName(TEXT("SetHeld"));
void IVRGripInterface::Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventSetHeld_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SetHeld);
	if (Func)
	{
		Parms.HoldingController=HoldingController;
		Parms.GripID=GripID;
		Parms.bIsHeld=bIsHeld;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->SetHeld_Implementation(HoldingController,GripID,bIsHeld);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*BlueprintCallable,*/" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintCallable," },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GripID;
	static void NewProp_bIsHeld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventSetHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingController_MetaData), NewProp_HoldingController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventSetHeld_Parms, GripID), nullptr, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
{
	((VRGripInterface_eventSetHeld_Parms*)Obj)->bIsHeld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventSetHeld_Parms), &Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_HoldingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_GripID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::NewProp_bIsHeld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SetHeld", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::PropPointers), sizeof(VRGripInterface_eventSetHeld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventSetHeld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_SetHeld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SetHeld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execSetHeld)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController);
	P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
	P_GET_UBOOL(Z_Param_bIsHeld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_GripID,Z_Param_bIsHeld);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function SetHeld

// Begin Interface UVRGripInterface Function SimulateOnDrop
struct VRGripInterface_eventSimulateOnDrop_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventSimulateOnDrop_Parms()
		: ReturnValue(false)
	{
	}
};
bool IVRGripInterface::SimulateOnDrop()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SimulateOnDrop instead.");
	VRGripInterface_eventSimulateOnDrop_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
bool IVRGripInterface::Execute_SimulateOnDrop(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventSimulateOnDrop_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SimulateOnDrop);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->SimulateOnDrop_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should this object simulate on drop\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this object simulate on drop" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRGripInterface_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRGripInterface_eventSimulateOnDrop_Parms), &Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "SimulateOnDrop", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::PropPointers), sizeof(VRGripInterface_eventSimulateOnDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventSimulateOnDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execSimulateOnDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SimulateOnDrop_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function SimulateOnDrop

// Begin Interface UVRGripInterface Function TeleportBehavior
struct VRGripInterface_eventTeleportBehavior_Parms
{
	EGripInterfaceTeleportBehavior ReturnValue;

	/** Constructor, initializes return property only **/
	VRGripInterface_eventTeleportBehavior_Parms()
		: ReturnValue((EGripInterfaceTeleportBehavior)0)
	{
	}
};
EGripInterfaceTeleportBehavior IVRGripInterface::TeleportBehavior()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TeleportBehavior instead.");
	VRGripInterface_eventTeleportBehavior_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UVRGripInterface_TeleportBehavior = FName(TEXT("TeleportBehavior"));
EGripInterfaceTeleportBehavior IVRGripInterface::Execute_TeleportBehavior(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventTeleportBehavior_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_TeleportBehavior);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		Parms.ReturnValue = I->TeleportBehavior_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How an interfaced object behaves when teleporting\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How an interfaced object behaves when teleporting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(0, nullptr) }; // 22795384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "TeleportBehavior", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::PropPointers), sizeof(VRGripInterface_eventTeleportBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventTeleportBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_TeleportBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_TeleportBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execTeleportBehavior)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGripInterfaceTeleportBehavior*)Z_Param__Result=P_THIS->TeleportBehavior_Implementation();
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function TeleportBehavior

// Begin Interface UVRGripInterface Function TickGrip
struct VRGripInterface_eventTickGrip_Parms
{
	UGripMotionControllerComponent* GrippingController;
	FBPActorGripInformation GripInformation;
	float DeltaTime;
};
void IVRGripInterface::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TickGrip instead.");
}
static FName NAME_UVRGripInterface_TickGrip = FName(TEXT("TickGrip"));
void IVRGripInterface::Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
	VRGripInterface_eventTickGrip_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_TickGrip);
	if (Func)
	{
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		Parms.DeltaTime=DeltaTime;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
	{
		I->TickGrip_Implementation(GrippingController,GripInformation,DeltaTime);
	}
}
struct Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic\n" },
#endif
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrippingController_MetaData), NewProp_GrippingController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripInformation_MetaData), NewProp_GripInformation_MetaData) }; // 134483386
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GrippingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_GripInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, nullptr, "TickGrip", nullptr, nullptr, Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::PropPointers), sizeof(VRGripInterface_eventTickGrip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::Function_MetaDataParams) };
static_assert(sizeof(VRGripInterface_eventTickGrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRGripInterface_TickGrip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRGripInterface_TickGrip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRGripInterface::execTickGrip)
{
	P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
	P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Interface UVRGripInterface Function TickGrip

// Begin Interface UVRGripInterface
void UVRGripInterface::StaticRegisterNativesUVRGripInterface()
{
	UClass* Class = UVRGripInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvancedGripSettings", &IVRGripInterface::execAdvancedGripSettings },
		{ "AllowsMultipleGrips", &IVRGripInterface::execAllowsMultipleGrips },
		{ "ClosestGripSlotInRange", &IVRGripInterface::execClosestGripSlotInRange },
		{ "DenyGripping", &IVRGripInterface::execDenyGripping },
		{ "GetGripScripts", &IVRGripInterface::execGetGripScripts },
		{ "GetGripStiffnessAndDamping", &IVRGripInterface::execGetGripStiffnessAndDamping },
		{ "GetPrimaryGripType", &IVRGripInterface::execGetPrimaryGripType },
		{ "GripBreakDistance", &IVRGripInterface::execGripBreakDistance },
		{ "GripLateUpdateSetting", &IVRGripInterface::execGripLateUpdateSetting },
		{ "GripMovementReplicationType", &IVRGripInterface::execGripMovementReplicationType },
		{ "IsHeld", &IVRGripInterface::execIsHeld },
		{ "OnChildGrip", &IVRGripInterface::execOnChildGrip },
		{ "OnChildGripRelease", &IVRGripInterface::execOnChildGripRelease },
		{ "OnEndSecondaryUsed", &IVRGripInterface::execOnEndSecondaryUsed },
		{ "OnEndUsed", &IVRGripInterface::execOnEndUsed },
		{ "OnGrip", &IVRGripInterface::execOnGrip },
		{ "OnGripRelease", &IVRGripInterface::execOnGripRelease },
		{ "OnInput", &IVRGripInterface::execOnInput },
		{ "OnSecondaryGrip", &IVRGripInterface::execOnSecondaryGrip },
		{ "OnSecondaryGripRelease", &IVRGripInterface::execOnSecondaryGripRelease },
		{ "OnSecondaryUsed", &IVRGripInterface::execOnSecondaryUsed },
		{ "OnUsed", &IVRGripInterface::execOnUsed },
		{ "RequestsSocketing", &IVRGripInterface::execRequestsSocketing },
		{ "SecondaryGripType", &IVRGripInterface::execSecondaryGripType },
		{ "SetHeld", &IVRGripInterface::execSetHeld },
		{ "SimulateOnDrop", &IVRGripInterface::execSimulateOnDrop },
		{ "TeleportBehavior", &IVRGripInterface::execTeleportBehavior },
		{ "TickGrip", &IVRGripInterface::execTickGrip },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRGripInterface);
UClass* Z_Construct_UClass_UVRGripInterface_NoRegister()
{
	return UVRGripInterface::StaticClass();
}
struct Z_Construct_UClass_UVRGripInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRGripInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings, "AdvancedGripSettings" }, // 293733900
		{ &Z_Construct_UFunction_UVRGripInterface_AllowsMultipleGrips, "AllowsMultipleGrips" }, // 3538678185
		{ &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 1924059279
		{ &Z_Construct_UFunction_UVRGripInterface_DenyGripping, "DenyGripping" }, // 3852969692
		{ &Z_Construct_UFunction_UVRGripInterface_GetGripScripts, "GetGripScripts" }, // 3129032446
		{ &Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 3850668618
		{ &Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType, "GetPrimaryGripType" }, // 2814533656
		{ &Z_Construct_UFunction_UVRGripInterface_GripBreakDistance, "GripBreakDistance" }, // 593444751
		{ &Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 3684314065
		{ &Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType, "GripMovementReplicationType" }, // 3921254145
		{ &Z_Construct_UFunction_UVRGripInterface_IsHeld, "IsHeld" }, // 1364152694
		{ &Z_Construct_UFunction_UVRGripInterface_OnChildGrip, "OnChildGrip" }, // 4094923286
		{ &Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease, "OnChildGripRelease" }, // 743949887
		{ &Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 3431665581
		{ &Z_Construct_UFunction_UVRGripInterface_OnEndUsed, "OnEndUsed" }, // 1875970045
		{ &Z_Construct_UFunction_UVRGripInterface_OnGrip, "OnGrip" }, // 3540383341
		{ &Z_Construct_UFunction_UVRGripInterface_OnGripRelease, "OnGripRelease" }, // 3424944010
		{ &Z_Construct_UFunction_UVRGripInterface_OnInput, "OnInput" }, // 2260192022
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip, "OnSecondaryGrip" }, // 2911213934
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 2658662338
		{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed, "OnSecondaryUsed" }, // 2163727821
		{ &Z_Construct_UFunction_UVRGripInterface_OnUsed, "OnUsed" }, // 1508462548
		{ &Z_Construct_UFunction_UVRGripInterface_RequestsSocketing, "RequestsSocketing" }, // 4166963402
		{ &Z_Construct_UFunction_UVRGripInterface_SecondaryGripType, "SecondaryGripType" }, // 1828368885
		{ &Z_Construct_UFunction_UVRGripInterface_SetHeld, "SetHeld" }, // 521406499
		{ &Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop, "SimulateOnDrop" }, // 4099960398
		{ &Z_Construct_UFunction_UVRGripInterface_TeleportBehavior, "TeleportBehavior" }, // 1287215314
		{ &Z_Construct_UFunction_UVRGripInterface_TickGrip, "TickGrip" }, // 4219030439
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVRGripInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVRGripInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRGripInterface_Statics::ClassParams = {
	&UVRGripInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRGripInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRGripInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRGripInterface()
{
	if (!Z_Registration_Info_UClass_UVRGripInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRGripInterface.OuterSingleton, Z_Construct_UClass_UVRGripInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRGripInterface.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGripInterface>()
{
	return UVRGripInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripInterface);
UVRGripInterface::~UVRGripInterface() {}
// End Interface UVRGripInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRGripInterface, UVRGripInterface::StaticClass, TEXT("UVRGripInterface"), &Z_Registration_Info_UClass_UVRGripInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRGripInterface), 199302906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_1873281680(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
