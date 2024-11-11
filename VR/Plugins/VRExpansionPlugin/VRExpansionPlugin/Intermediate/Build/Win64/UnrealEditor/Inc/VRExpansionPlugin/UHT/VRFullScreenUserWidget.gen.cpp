// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRFullScreenUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRFullScreenUserWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
UMG_API UEnum* Z_Construct_UEnum_UMG_EWindowVisibility();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRFullScreenUserWidgetActor();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRFullScreenUserWidgetActor_NoRegister();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRFullScreenUserWidget();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRFullScreenUserWidget_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess();
VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport();
// End Cross Module References

// Begin Enum EVRWidgetDisplayType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRWidgetDisplayType;
static UEnum* EVRWidgetDisplayType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRWidgetDisplayType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRWidgetDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRWidgetDisplayType"));
	}
	return Z_Registration_Info_UEnum_EVRWidgetDisplayType.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRWidgetDisplayType>()
{
	return EVRWidgetDisplayType_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inactive.Comment", "/** Do not display. */" },
		{ "Inactive.Name", "EVRWidgetDisplayType::Inactive" },
		{ "Inactive.ToolTip", "Do not display." },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "PostProcess.Comment", "/** Display as a post process. */" },
		{ "PostProcess.Name", "EVRWidgetDisplayType::PostProcess" },
		{ "PostProcess.ToolTip", "Display as a post process." },
		{ "Viewport.Comment", "/** Display on a game viewport. */" },
		{ "Viewport.Name", "EVRWidgetDisplayType::Viewport" },
		{ "Viewport.ToolTip", "Display on a game viewport." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRWidgetDisplayType::Inactive", (int64)EVRWidgetDisplayType::Inactive },
		{ "EVRWidgetDisplayType::Viewport", (int64)EVRWidgetDisplayType::Viewport },
		{ "EVRWidgetDisplayType::PostProcess", (int64)EVRWidgetDisplayType::PostProcess },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EVRWidgetDisplayType",
	"EVRWidgetDisplayType",
	Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType()
{
	if (!Z_Registration_Info_UEnum_EVRWidgetDisplayType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRWidgetDisplayType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRWidgetDisplayType.InnerSingleton;
}
// End Enum EVRWidgetDisplayType

// Begin ScriptStruct FVRFullScreenUserWidget_Viewport
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport;
class UScriptStruct* FVRFullScreenUserWidget_Viewport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRFullScreenUserWidget_Viewport"));
	}
	return Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRFullScreenUserWidget_Viewport>()
{
	return FVRFullScreenUserWidget_Viewport::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRFullScreenUserWidget_Viewport>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRFullScreenUserWidget_Viewport",
	nullptr,
	0,
	sizeof(FVRFullScreenUserWidget_Viewport),
	alignof(FVRFullScreenUserWidget_Viewport),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport()
{
	if (!Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.InnerSingleton, Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport.InnerSingleton;
}
// End ScriptStruct FVRFullScreenUserWidget_Viewport

// Begin ScriptStruct FVRFullScreenUserWidget_PostProcess
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess;
class UScriptStruct* FVRFullScreenUserWidget_PostProcess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRFullScreenUserWidget_PostProcess"));
	}
	return Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRFullScreenUserWidget_PostProcess>()
{
	return FVRFullScreenUserWidget_PostProcess::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The size of the rendered widget. */" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the rendered widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The size of the rendered widget. */" },
#endif
		{ "EditCondition", "bWidgetDrawSize" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the rendered widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the virtual window created to host the widget focusable? */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowVisibility_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The visibility of the virtual window created to host the widget. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The visibility of the virtual window created to host the widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveHardwareInput_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBackgroundColor_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The background color of the render target */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The background color of the render target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBlendMode_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The blend mode for the widget. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The blend mode for the widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target to which the user widget is rendered. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target to which the user widget is rendered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderToTextureOnly_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Only render to the UTextureRenderTarget2D - do not output to the final viewport. Unless DrawtoVRPreview is active */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only render to the UTextureRenderTarget2D - do not output to the final viewport. Unless DrawtoVRPreview is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawToVRPreview_MetaData[] = {
		{ "Category", "PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If we should automatically try to draw and manage this to the VR Preview */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If we should automatically try to draw and manage this to the VR Preview" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VRDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VR Spectator mode to use when active\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VR Spectator mode to use when active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostVRDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VR Spectator mode to use when not active\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VR Spectator mode to use when not active" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWidgetDrawSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWidgetDrawSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetDrawSize;
	static void NewProp_bWindowFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindowVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowVisibility;
	static void NewProp_bReceiveHardwareInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveHardwareInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetBackgroundColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderTargetBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderTargetBlendMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetRenderTarget;
	static void NewProp_bRenderToTextureOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderToTextureOnly;
	static void NewProp_bDrawToVRPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawToVRPreview;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VRDisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VRDisplayType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostVRDisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PostVRDisplayType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRFullScreenUserWidget_PostProcess>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_SetBit(void* Obj)
{
	((FVRFullScreenUserWidget_PostProcess*)Obj)->bWidgetDrawSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize = { "bWidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWidgetDrawSize_MetaData), NewProp_bWidgetDrawSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize = { "WidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, WidgetDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetDrawSize_MetaData), NewProp_WidgetDrawSize_MetaData) };
void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_SetBit(void* Obj)
{
	((FVRFullScreenUserWidget_PostProcess*)Obj)->bWindowFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable = { "bWindowFocusable", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWindowFocusable_MetaData), NewProp_bWindowFocusable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility = { "WindowVisibility", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, WindowVisibility), Z_Construct_UEnum_UMG_EWindowVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowVisibility_MetaData), NewProp_WindowVisibility_MetaData) }; // 3769439671
void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_SetBit(void* Obj)
{
	((FVRFullScreenUserWidget_PostProcess*)Obj)->bReceiveHardwareInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput = { "bReceiveHardwareInput", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceiveHardwareInput_MetaData), NewProp_bReceiveHardwareInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor = { "RenderTargetBackgroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, RenderTargetBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetBackgroundColor_MetaData), NewProp_RenderTargetBackgroundColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode = { "RenderTargetBlendMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, RenderTargetBlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetBlendMode_MetaData), NewProp_RenderTargetBlendMode_MetaData) }; // 2343299921
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget = { "WidgetRenderTarget", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, WidgetRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetRenderTarget_MetaData), NewProp_WidgetRenderTarget_MetaData) };
void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly_SetBit(void* Obj)
{
	((FVRFullScreenUserWidget_PostProcess*)Obj)->bRenderToTextureOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly = { "bRenderToTextureOnly", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderToTextureOnly_MetaData), NewProp_bRenderToTextureOnly_MetaData) };
void Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview_SetBit(void* Obj)
{
	((FVRFullScreenUserWidget_PostProcess*)Obj)->bDrawToVRPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview = { "bDrawToVRPreview", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVRFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawToVRPreview_MetaData), NewProp_bDrawToVRPreview_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType = { "VRDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, VRDisplayType), Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VRDisplayType_MetaData), NewProp_VRDisplayType_MetaData) }; // 2064427484
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType = { "PostVRDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVRFullScreenUserWidget_PostProcess, PostVRDisplayType), Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostVRDisplayType_MetaData), NewProp_PostVRDisplayType_MetaData) }; // 2064427484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bRenderToTextureOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_bDrawToVRPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_VRDisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewProp_PostVRDisplayType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	&NewStructOps,
	"VRFullScreenUserWidget_PostProcess",
	Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::PropPointers),
	sizeof(FVRFullScreenUserWidget_PostProcess),
	alignof(FVRFullScreenUserWidget_PostProcess),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess()
{
	if (!Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.InnerSingleton, Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess.InnerSingleton;
}
// End ScriptStruct FVRFullScreenUserWidget_PostProcess

// Begin Class UVRFullScreenUserWidget Function Display
struct Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics
{
	struct VRFullScreenUserWidget_eventDisplay_Parms
	{
		UWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidget_eventDisplay_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRFullScreenUserWidget_eventDisplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRFullScreenUserWidget_eventDisplay_Parms), &Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "Display", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::VRFullScreenUserWidget_eventDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::VRFullScreenUserWidget_eventDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_Display()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_Display_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRFullScreenUserWidget::execDisplay)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Display(Z_Param_World);
	P_NATIVE_END;
}
// End Class UVRFullScreenUserWidget Function Display

// Begin Class UVRFullScreenUserWidget Function GetPostProcessRenderTarget
struct Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics
{
	struct VRFullScreenUserWidget_eventGetPostProcessRenderTarget_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidget_eventGetPostProcessRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "GetPostProcessRenderTarget", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::VRFullScreenUserWidget_eventGetPostProcessRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::VRFullScreenUserWidget_eventGetPostProcessRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRFullScreenUserWidget::execGetPostProcessRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetPostProcessRenderTarget();
	P_NATIVE_END;
}
// End Class UVRFullScreenUserWidget Function GetPostProcessRenderTarget

// Begin Class UVRFullScreenUserWidget Function GetWidget
struct Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics
{
	struct VRFullScreenUserWidget_eventGetWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a pointer to the inner widget.\n// Note: This should not be stored!\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a pointer to the inner widget.\nNote: This should not be stored!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidget_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "GetWidget", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::VRFullScreenUserWidget_eventGetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::VRFullScreenUserWidget_eventGetWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRFullScreenUserWidget::execGetWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetWidget();
	P_NATIVE_END;
}
// End Class UVRFullScreenUserWidget Function GetWidget

// Begin Class UVRFullScreenUserWidget Function Hide
struct Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "Hide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_Hide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_Hide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRFullScreenUserWidget::execHide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Hide();
	P_NATIVE_END;
}
// End Class UVRFullScreenUserWidget Function Hide

// Begin Class UVRFullScreenUserWidget Function IsDisplayRequested
struct Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics
{
	struct VRFullScreenUserWidget_eventIsDisplayRequested_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRFullScreenUserWidget_eventIsDisplayRequested_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRFullScreenUserWidget_eventIsDisplayRequested_Parms), &Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "IsDisplayRequested", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::VRFullScreenUserWidget_eventIsDisplayRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::VRFullScreenUserWidget_eventIsDisplayRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRFullScreenUserWidget::execIsDisplayRequested)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDisplayRequested();
	P_NATIVE_END;
}
// End Class UVRFullScreenUserWidget Function IsDisplayRequested

// Begin Class UVRFullScreenUserWidget Function SetIsHidden
struct Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics
{
	struct VRFullScreenUserWidget_eventSetIsHidden_Parms
	{
		bool bNewHidden;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetComp" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHidden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::NewProp_bNewHidden_SetBit(void* Obj)
{
	((VRFullScreenUserWidget_eventSetIsHidden_Parms*)Obj)->bNewHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::NewProp_bNewHidden = { "bNewHidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRFullScreenUserWidget_eventSetIsHidden_Parms), &Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::NewProp_bNewHidden_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::NewProp_bNewHidden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRFullScreenUserWidget, nullptr, "SetIsHidden", nullptr, nullptr, Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::VRFullScreenUserWidget_eventSetIsHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::VRFullScreenUserWidget_eventSetIsHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRFullScreenUserWidget::execSetIsHidden)
{
	P_GET_UBOOL(Z_Param_bNewHidden);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsHidden(Z_Param_bNewHidden);
	P_NATIVE_END;
}
// End Class UVRFullScreenUserWidget Function SetIsHidden

// Begin Class UVRFullScreenUserWidget
void UVRFullScreenUserWidget::StaticRegisterNativesUVRFullScreenUserWidget()
{
	UClass* Class = UVRFullScreenUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Display", &UVRFullScreenUserWidget::execDisplay },
		{ "GetPostProcessRenderTarget", &UVRFullScreenUserWidget::execGetPostProcessRenderTarget },
		{ "GetWidget", &UVRFullScreenUserWidget::execGetWidget },
		{ "Hide", &UVRFullScreenUserWidget::execHide },
		{ "IsDisplayRequested", &UVRFullScreenUserWidget::execIsDisplayRequested },
		{ "SetIsHidden", &UVRFullScreenUserWidget::execSetIsHidden },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRFullScreenUserWidget);
UClass* Z_Construct_UClass_UVRFullScreenUserWidget_NoRegister()
{
	return UVRFullScreenUserWidget::StaticClass();
}
struct Z_Construct_UClass_UVRFullScreenUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Will set the Widgets on a viewport either by Widgets are first rendered to a render target, then that render target is displayed in the world.\n */" },
#endif
		{ "IncludePath", "Misc/VRFullScreenUserWidget.h" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will set the Widgets on a viewport either by Widgets are first rendered to a render target, then that render target is displayed in the world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The display type when the world is an editor world. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The display type when the world is an editor world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The display type when the world is a game world. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The display type when the world is a game world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PIEDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The display type when the world is a PIE world. */" },
#endif
		{ "DisplayName", "PIE Display Type" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The display type when the world is a PIE world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportDisplayType_MetaData[] = {
		{ "Category", "Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Behavior when the widget should be display by the slate attached to the viewport. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior when the widget should be display by the slate attached to the viewport." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The class of User Widget to create and display an instance of */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessDisplayType_MetaData[] = {
		{ "Category", "Post Process" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Behavior when the widget should be display by a post process. */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Behavior when the widget should be display by a post process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The User Widget object displayed and managed by this component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EditorDisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorDisplayType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameDisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameDisplayType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PIEDisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PIEDisplayType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportDisplayType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessDisplayType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_Display, "Display" }, // 192352289
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_GetPostProcessRenderTarget, "GetPostProcessRenderTarget" }, // 3895220545
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_GetWidget, "GetWidget" }, // 2962253960
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_Hide, "Hide" }, // 3980683804
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_IsDisplayRequested, "IsDisplayRequested" }, // 3194507270
		{ &Z_Construct_UFunction_UVRFullScreenUserWidget_SetIsHidden, "SetIsHidden" }, // 2961378935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRFullScreenUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType = { "EditorDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, EditorDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorDisplayType_MetaData), NewProp_EditorDisplayType_MetaData) }; // 4193797159
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType = { "GameDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, GameDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDisplayType_MetaData), NewProp_GameDisplayType_MetaData) }; // 4193797159
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType = { "PIEDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, PIEDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PIEDisplayType_MetaData), NewProp_PIEDisplayType_MetaData) }; // 4193797159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_ViewportDisplayType = { "ViewportDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, ViewportDisplayType), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportDisplayType_MetaData), NewProp_ViewportDisplayType_MetaData) }; // 4275243801
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType = { "PostProcessDisplayType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, PostProcessDisplayType), Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessDisplayType_MetaData), NewProp_PostProcessDisplayType_MetaData) }; // 302921587
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0144000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRFullScreenUserWidget, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRFullScreenUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_EditorDisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_GameDisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PIEDisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_ViewportDisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRFullScreenUserWidget_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRFullScreenUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRFullScreenUserWidget_Statics::ClassParams = {
	&UVRFullScreenUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRFullScreenUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRFullScreenUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRFullScreenUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRFullScreenUserWidget()
{
	if (!Z_Registration_Info_UClass_UVRFullScreenUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRFullScreenUserWidget.OuterSingleton, Z_Construct_UClass_UVRFullScreenUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRFullScreenUserWidget.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRFullScreenUserWidget>()
{
	return UVRFullScreenUserWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRFullScreenUserWidget);
UVRFullScreenUserWidget::~UVRFullScreenUserWidget() {}
// End Class UVRFullScreenUserWidget

// Begin Class AVRFullScreenUserWidgetActor Function GetPostProcessRenderTarget
struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics
{
	struct VRFullScreenUserWidgetActor_eventGetPostProcessRenderTarget_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventGetPostProcessRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "GetPostProcessRenderTarget", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::VRFullScreenUserWidgetActor_eventGetPostProcessRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::VRFullScreenUserWidgetActor_eventGetPostProcessRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execGetPostProcessRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetPostProcessRenderTarget();
	P_NATIVE_END;
}
// End Class AVRFullScreenUserWidgetActor Function GetPostProcessRenderTarget

// Begin Class AVRFullScreenUserWidgetActor Function GetPreviewWidgetComp
struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics
{
	struct VRFullScreenUserWidgetActor_eventGetPreviewWidgetComp_Parms
	{
		UVRFullScreenUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventGetPreviewWidgetComp_Parms, ReturnValue), Z_Construct_UClass_UVRFullScreenUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "GetPreviewWidgetComp", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::VRFullScreenUserWidgetActor_eventGetPreviewWidgetComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::VRFullScreenUserWidgetActor_eventGetPreviewWidgetComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execGetPreviewWidgetComp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVRFullScreenUserWidget**)Z_Param__Result=P_THIS->GetPreviewWidgetComp();
	P_NATIVE_END;
}
// End Class AVRFullScreenUserWidgetActor Function GetPreviewWidgetComp

// Begin Class AVRFullScreenUserWidgetActor Function GetWidget
struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics
{
	struct VRFullScreenUserWidgetActor_eventGetWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "GetWidget", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::VRFullScreenUserWidgetActor_eventGetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::VRFullScreenUserWidgetActor_eventGetWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execGetWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetWidget();
	P_NATIVE_END;
}
// End Class AVRFullScreenUserWidgetActor Function GetWidget

// Begin Class AVRFullScreenUserWidgetActor Function SetGameDisplayType
struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics
{
	struct VRFullScreenUserWidgetActor_eventSetGameDisplayType_Parms
	{
		EVRWidgetDisplayType NewDisplayType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDisplayType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::NewProp_NewDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::NewProp_NewDisplayType = { "NewDisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventSetGameDisplayType_Parms, NewDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(0, nullptr) }; // 4193797159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::NewProp_NewDisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::NewProp_NewDisplayType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "SetGameDisplayType", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::VRFullScreenUserWidgetActor_eventSetGameDisplayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::VRFullScreenUserWidgetActor_eventSetGameDisplayType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execSetGameDisplayType)
{
	P_GET_ENUM(EVRWidgetDisplayType,Z_Param_NewDisplayType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameDisplayType(EVRWidgetDisplayType(Z_Param_NewDisplayType));
	P_NATIVE_END;
}
// End Class AVRFullScreenUserWidgetActor Function SetGameDisplayType

// Begin Class AVRFullScreenUserWidgetActor Function SetPIEDisplayType
struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics
{
	struct VRFullScreenUserWidgetActor_eventSetPIEDisplayType_Parms
	{
		EVRWidgetDisplayType NewDisplayType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDisplayType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::NewProp_NewDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::NewProp_NewDisplayType = { "NewDisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRFullScreenUserWidgetActor_eventSetPIEDisplayType_Parms, NewDisplayType), Z_Construct_UEnum_VRExpansionPlugin_EVRWidgetDisplayType, METADATA_PARAMS(0, nullptr) }; // 4193797159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::NewProp_NewDisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::NewProp_NewDisplayType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "SetPIEDisplayType", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::VRFullScreenUserWidgetActor_eventSetPIEDisplayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::VRFullScreenUserWidgetActor_eventSetPIEDisplayType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execSetPIEDisplayType)
{
	P_GET_ENUM(EVRWidgetDisplayType,Z_Param_NewDisplayType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPIEDisplayType(EVRWidgetDisplayType(Z_Param_NewDisplayType));
	P_NATIVE_END;
}
// End Class AVRFullScreenUserWidgetActor Function SetPIEDisplayType

// Begin Class AVRFullScreenUserWidgetActor Function SetWidgetVisible
struct Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics
{
	struct VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms
	{
		bool bIsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FullScreenWidgetActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the widget to visible or not, this will be overriden by any changed to the actors hidden state\n// IE: Setting actor to hidden will force this hidden as well, also setting the actor to visible will do the opposite\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the widget to visible or not, this will be overriden by any changed to the actors hidden state\nIE: Setting actor to hidden will force this hidden as well, also setting the actor to visible will do the opposite" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms), &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRFullScreenUserWidgetActor, nullptr, "SetWidgetVisible", nullptr, nullptr, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::VRFullScreenUserWidgetActor_eventSetWidgetVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVRFullScreenUserWidgetActor::execSetWidgetVisible)
{
	P_GET_UBOOL(Z_Param_bIsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetVisible(Z_Param_bIsVisible);
	P_NATIVE_END;
}
// End Class AVRFullScreenUserWidgetActor Function SetWidgetVisible

// Begin Class AVRFullScreenUserWidgetActor
void AVRFullScreenUserWidgetActor::StaticRegisterNativesAVRFullScreenUserWidgetActor()
{
	UClass* Class = AVRFullScreenUserWidgetActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPostProcessRenderTarget", &AVRFullScreenUserWidgetActor::execGetPostProcessRenderTarget },
		{ "GetPreviewWidgetComp", &AVRFullScreenUserWidgetActor::execGetPreviewWidgetComp },
		{ "GetWidget", &AVRFullScreenUserWidgetActor::execGetWidget },
		{ "SetGameDisplayType", &AVRFullScreenUserWidgetActor::execSetGameDisplayType },
		{ "SetPIEDisplayType", &AVRFullScreenUserWidgetActor::execSetPIEDisplayType },
		{ "SetWidgetVisible", &AVRFullScreenUserWidgetActor::execSetWidgetVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRFullScreenUserWidgetActor);
UClass* Z_Construct_UClass_AVRFullScreenUserWidgetActor_NoRegister()
{
	return AVRFullScreenUserWidgetActor::StaticClass();
}
struct Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Widgets are first rendered to a render target, then that render target is displayed in the world.\n */" },
#endif
		{ "HideCategories", "Actor Input Movement Collision Rendering Utilities|Transformation LOD Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Misc/VRFullScreenUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widgets are first rendered to a render target, then that render target is displayed in the world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnInit_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true the widget will be shown right away, if false you will need to set SetWidgetVisible(true) to show it */" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true the widget will be shown right away, if false you will need to set SetWidgetVisible(true) to show it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenUserWidget_MetaData[] = {
		{ "Category", "User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowOnInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnInit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenUserWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPostProcessRenderTarget, "GetPostProcessRenderTarget" }, // 310474767
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetPreviewWidgetComp, "GetPreviewWidgetComp" }, // 1685811128
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_GetWidget, "GetWidget" }, // 2988770004
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetGameDisplayType, "SetGameDisplayType" }, // 2115834387
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetPIEDisplayType, "SetPIEDisplayType" }, // 3015006495
		{ &Z_Construct_UFunction_AVRFullScreenUserWidgetActor_SetWidgetVisible, "SetWidgetVisible" }, // 83674845
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRFullScreenUserWidgetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit_SetBit(void* Obj)
{
	((AVRFullScreenUserWidgetActor*)Obj)->bShowOnInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit = { "bShowOnInit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVRFullScreenUserWidgetActor), &Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowOnInit_MetaData), NewProp_bShowOnInit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget = { "ScreenUserWidget", nullptr, (EPropertyFlags)0x00120000020a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVRFullScreenUserWidgetActor, ScreenUserWidget), Z_Construct_UClass_UVRFullScreenUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenUserWidget_MetaData), NewProp_ScreenUserWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_bShowOnInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::NewProp_ScreenUserWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::ClassParams = {
	&AVRFullScreenUserWidgetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVRFullScreenUserWidgetActor()
{
	if (!Z_Registration_Info_UClass_AVRFullScreenUserWidgetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRFullScreenUserWidgetActor.OuterSingleton, Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVRFullScreenUserWidgetActor.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRFullScreenUserWidgetActor>()
{
	return AVRFullScreenUserWidgetActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVRFullScreenUserWidgetActor);
AVRFullScreenUserWidgetActor::~AVRFullScreenUserWidgetActor() {}
// End Class AVRFullScreenUserWidgetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRWidgetDisplayType_StaticEnum, TEXT("EVRWidgetDisplayType"), &Z_Registration_Info_UEnum_EVRWidgetDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4193797159U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVRFullScreenUserWidget_Viewport::StaticStruct, Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics::NewStructOps, TEXT("VRFullScreenUserWidget_Viewport"), &Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_Viewport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRFullScreenUserWidget_Viewport), 4275243801U) },
		{ FVRFullScreenUserWidget_PostProcess::StaticStruct, Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics::NewStructOps, TEXT("VRFullScreenUserWidget_PostProcess"), &Z_Registration_Info_UScriptStruct_VRFullScreenUserWidget_PostProcess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRFullScreenUserWidget_PostProcess), 302921587U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRFullScreenUserWidget, UVRFullScreenUserWidget::StaticClass, TEXT("UVRFullScreenUserWidget"), &Z_Registration_Info_UClass_UVRFullScreenUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRFullScreenUserWidget), 3383707008U) },
		{ Z_Construct_UClass_AVRFullScreenUserWidgetActor, AVRFullScreenUserWidgetActor::StaticClass, TEXT("AVRFullScreenUserWidgetActor"), &Z_Registration_Info_UClass_AVRFullScreenUserWidgetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRFullScreenUserWidgetActor), 1806989267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_2848435907(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
