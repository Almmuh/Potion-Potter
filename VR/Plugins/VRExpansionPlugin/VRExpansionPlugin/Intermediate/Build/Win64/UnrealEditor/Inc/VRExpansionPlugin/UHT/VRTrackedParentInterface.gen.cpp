// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRTrackedParentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTrackedParentInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode();
// End Cross Module References

// Begin Interface UVRTrackedParentInterface Function SetTrackedParent
struct Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics
{
	struct VRTrackedParentInterface_eventSetTrackedParent_Parms
	{
		UPrimitiveComponent* NewParentComponent;
		float WaistRadius;
		EBPVRWaistTrackingMode WaistTrackingMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRTrackedParentInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set a tracked parent\n" },
#endif
		{ "ModuleRelativePath", "Public/VRTrackedParentInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a tracked parent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParentComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaistRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WaistTrackingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WaistTrackingMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent = { "NewParentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, NewParentComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParentComponent_MetaData), NewProp_NewParentComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistRadius = { "WaistRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, WaistRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode = { "WaistTrackingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, WaistTrackingMode), Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, METADATA_PARAMS(0, nullptr) }; // 4146895695
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRTrackedParentInterface, nullptr, "SetTrackedParent", nullptr, nullptr, Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::VRTrackedParentInterface_eventSetTrackedParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::VRTrackedParentInterface_eventSetTrackedParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IVRTrackedParentInterface::execSetTrackedParent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WaistRadius);
	P_GET_ENUM(EBPVRWaistTrackingMode,Z_Param_WaistTrackingMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrackedParent(Z_Param_NewParentComponent,Z_Param_WaistRadius,EBPVRWaistTrackingMode(Z_Param_WaistTrackingMode));
	P_NATIVE_END;
}
// End Interface UVRTrackedParentInterface Function SetTrackedParent

// Begin Interface UVRTrackedParentInterface
void UVRTrackedParentInterface::StaticRegisterNativesUVRTrackedParentInterface()
{
	UClass* Class = UVRTrackedParentInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTrackedParent", &IVRTrackedParentInterface::execSetTrackedParent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRTrackedParentInterface);
UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister()
{
	return UVRTrackedParentInterface::StaticClass();
}
struct Z_Construct_UClass_UVRTrackedParentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/VRTrackedParentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent, "SetTrackedParent" }, // 3381686311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVRTrackedParentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVRTrackedParentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRTrackedParentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRTrackedParentInterface_Statics::ClassParams = {
	&UVRTrackedParentInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRTrackedParentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRTrackedParentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRTrackedParentInterface()
{
	if (!Z_Registration_Info_UClass_UVRTrackedParentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRTrackedParentInterface.OuterSingleton, Z_Construct_UClass_UVRTrackedParentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRTrackedParentInterface.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRTrackedParentInterface>()
{
	return UVRTrackedParentInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRTrackedParentInterface);
UVRTrackedParentInterface::~UVRTrackedParentInterface() {}
// End Interface UVRTrackedParentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRTrackedParentInterface, UVRTrackedParentInterface::StaticClass, TEXT("UVRTrackedParentInterface"), &Z_Registration_Info_UClass_UVRTrackedParentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRTrackedParentInterface), 94263538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_3240440518(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
