// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippablePhysicsReplication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippablePhysicsReplication() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData();
// End Cross Module References

// Begin ScriptStruct FRepMovementVR
static_assert(std::is_polymorphic<FRepMovementVR>() == std::is_polymorphic<FRepMovement>(), "USTRUCT FRepMovementVR cannot be polymorphic unless super FRepMovement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepMovementVR;
class UScriptStruct* FRepMovementVR::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovementVR.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepMovementVR.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepMovementVR, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RepMovementVR"));
	}
	return Z_Registration_Info_UScriptStruct_RepMovementVR.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRepMovementVR>()
{
	return FRepMovementVR::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRepMovementVR_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#endif\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#endif" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepMovementVR>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepMovementVR_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	Z_Construct_UScriptStruct_FRepMovement,
	&NewStructOps,
	"RepMovementVR",
	nullptr,
	0,
	sizeof(FRepMovementVR),
	alignof(FRepMovementVR),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepMovementVR_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRepMovementVR_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRepMovementVR()
{
	if (!Z_Registration_Info_UScriptStruct_RepMovementVR.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepMovementVR.InnerSingleton, Z_Construct_UScriptStruct_FRepMovementVR_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RepMovementVR.InnerSingleton;
}
// End ScriptStruct FRepMovementVR

// Begin ScriptStruct FVRClientAuthReplicationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData;
class UScriptStruct* FVRClientAuthReplicationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRClientAuthReplicationData, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRClientAuthReplicationData"));
	}
	return Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRClientAuthReplicationData>()
{
	return FVRClientAuthReplicationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseClientAuthThrowing_MetaData[] = {
		{ "Category", "VRReplication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If True and we are using a client auth grip type then we will replicate our throws on release\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If True and we are using a client auth grip type then we will replicate our throws on release" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateRate_MetaData[] = {
		{ "Category", "VRReplication" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rate that we will be sending throwing events to the server, not replicated, only serialized\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippablePhysicsReplication.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate that we will be sending throwing events to the server, not replicated, only serialized" },
#endif
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseClientAuthThrowing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClientAuthThrowing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRClientAuthReplicationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_SetBit(void* Obj)
{
	((FVRClientAuthReplicationData*)Obj)->bUseClientAuthThrowing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing = { "bUseClientAuthThrowing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRClientAuthReplicationData), &Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseClientAuthThrowing_MetaData), NewProp_bUseClientAuthThrowing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000080000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRClientAuthReplicationData, UpdateRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateRate_MetaData), NewProp_UpdateRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_bUseClientAuthThrowing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewProp_UpdateRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRClientAuthReplicationData",
	Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::PropPointers),
	sizeof(FVRClientAuthReplicationData),
	alignof(FVRClientAuthReplicationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRClientAuthReplicationData()
{
	if (!Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.InnerSingleton, Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData.InnerSingleton;
}
// End ScriptStruct FVRClientAuthReplicationData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRepMovementVR::StaticStruct, Z_Construct_UScriptStruct_FRepMovementVR_Statics::NewStructOps, TEXT("RepMovementVR"), &Z_Registration_Info_UScriptStruct_RepMovementVR, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepMovementVR), 506824488U) },
		{ FVRClientAuthReplicationData::StaticStruct, Z_Construct_UScriptStruct_FVRClientAuthReplicationData_Statics::NewStructOps, TEXT("VRClientAuthReplicationData"), &Z_Registration_Info_UScriptStruct_VRClientAuthReplicationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRClientAuthReplicationData), 661940181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_812162915(TEXT("/Script/VRExpansionPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippablePhysicsReplication_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
