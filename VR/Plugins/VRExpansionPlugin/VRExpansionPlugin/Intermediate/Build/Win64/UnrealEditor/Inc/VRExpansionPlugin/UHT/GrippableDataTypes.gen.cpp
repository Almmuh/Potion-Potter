// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableDataTypes() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachment();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepAttachmentWithWeld();
// End Cross Module References

// Begin ScriptStruct FRepAttachmentWithWeld
static_assert(std::is_polymorphic<FRepAttachmentWithWeld>() == std::is_polymorphic<FRepAttachment>(), "USTRUCT FRepAttachmentWithWeld cannot be polymorphic unless super FRepAttachment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepAttachmentWithWeld;
class UScriptStruct* FRepAttachmentWithWeld::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepAttachmentWithWeld.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepAttachmentWithWeld.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepAttachmentWithWeld, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("RepAttachmentWithWeld"));
	}
	return Z_Registration_Info_UScriptStruct_RepAttachmentWithWeld.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FRepAttachmentWithWeld>()
{
	return FRepAttachmentWithWeld::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A version of the attachment structure that include welding data\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A version of the attachment structure that include welding data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWelded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add in the is welded property\n" },
#endif
		{ "ModuleRelativePath", "Public/Grippables/GrippableDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add in the is welded property" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsWelded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWelded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepAttachmentWithWeld>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded_SetBit(void* Obj)
{
	((FRepAttachmentWithWeld*)Obj)->bIsWelded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded = { "bIsWelded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRepAttachmentWithWeld), &Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWelded_MetaData), NewProp_bIsWelded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewProp_bIsWelded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	Z_Construct_UScriptStruct_FRepAttachment,
	&NewStructOps,
	"RepAttachmentWithWeld",
	Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::PropPointers),
	sizeof(FRepAttachmentWithWeld),
	alignof(FRepAttachmentWithWeld),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRepAttachmentWithWeld()
{
	if (!Z_Registration_Info_UScriptStruct_RepAttachmentWithWeld.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepAttachmentWithWeld.InnerSingleton, Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RepAttachmentWithWeld.InnerSingleton;
}
// End ScriptStruct FRepAttachmentWithWeld

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableDataTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRepAttachmentWithWeld::StaticStruct, Z_Construct_UScriptStruct_FRepAttachmentWithWeld_Statics::NewStructOps, TEXT("RepAttachmentWithWeld"), &Z_Registration_Info_UScriptStruct_RepAttachmentWithWeld, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepAttachmentWithWeld), 2620582532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableDataTypes_h_4267712107(TEXT("/Script/VRExpansionPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableDataTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
