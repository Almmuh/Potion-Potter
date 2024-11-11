// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRLogComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRLogComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLogComponent();
VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLogComponent_NoRegister();
VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType();
// End Cross Module References

// Begin Enum EBPVRConsoleDrawType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPVRConsoleDrawType;
static UEnum* EBPVRConsoleDrawType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBPVRConsoleDrawType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBPVRConsoleDrawType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPVRConsoleDrawType"));
	}
	return Z_Registration_Info_UEnum_EBPVRConsoleDrawType.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPVRConsoleDrawType>()
{
	return EBPVRConsoleDrawType_StaticEnum();
}
struct Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
		{ "VRConsole_Draw_ConsoleOnly.Comment", "/**\n*\n*/" },
		{ "VRConsole_Draw_ConsoleOnly.Name", "EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly" },
		{ "VRConsole_Draw_OutputLogOnly.Comment", "/**\n*\n*/" },
		{ "VRConsole_Draw_OutputLogOnly.Name", "EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly", (int64)EBPVRConsoleDrawType::VRConsole_Draw_ConsoleOnly },
		{ "EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly", (int64)EBPVRConsoleDrawType::VRConsole_Draw_OutputLogOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	nullptr,
	"EBPVRConsoleDrawType",
	"EBPVRConsoleDrawType",
	Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType()
{
	if (!Z_Registration_Info_UEnum_EBPVRConsoleDrawType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPVRConsoleDrawType.InnerSingleton, Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBPVRConsoleDrawType.InnerSingleton;
}
// End Enum EBPVRConsoleDrawType

// Begin Class UVRLogComponent Function AppendTextToConsole
struct Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics
{
	struct VRLogComponent_eventAppendTextToConsole_Parms
	{
		FString Text;
		bool bReturnAtEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRLogComponent|Console" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sends text to the console - Optionally returns at the end to \"enter\" the text, end flashes the cursor\n" },
#endif
		{ "CPP_Default_bReturnAtEnd", "false" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends text to the console - Optionally returns at the end to \"enter\" the text, end flashes the cursor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static void NewProp_bReturnAtEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnAtEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLogComponent_eventAppendTextToConsole_Parms, Text), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_bReturnAtEnd_SetBit(void* Obj)
{
	((VRLogComponent_eventAppendTextToConsole_Parms*)Obj)->bReturnAtEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_bReturnAtEnd = { "bReturnAtEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRLogComponent_eventAppendTextToConsole_Parms), &Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_bReturnAtEnd_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::NewProp_bReturnAtEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLogComponent, nullptr, "AppendTextToConsole", nullptr, nullptr, Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::VRLogComponent_eventAppendTextToConsole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::VRLogComponent_eventAppendTextToConsole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLogComponent::execAppendTextToConsole)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_UBOOL(Z_Param_bReturnAtEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AppendTextToConsole(Z_Param_Text,Z_Param_bReturnAtEnd);
	P_NATIVE_END;
}
// End Class UVRLogComponent Function AppendTextToConsole

// Begin Class UVRLogComponent Function DrawConsoleToRenderTarget2D
struct Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics
{
	struct VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms
	{
		EBPVRConsoleDrawType DrawType;
		UTextureRenderTarget2D* Texture;
		float ScrollOffset;
		bool bForceDraw;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRLogComponent|Console" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draw the console to a render target 2D\n" },
#endif
		{ "DisplayName", "DrawConsoleToCanvasRenderTarget2D" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw the console to a render target 2D" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScrollOffset;
	static void NewProp_bForceDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDraw;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_DrawType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_DrawType = { "DrawType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms, DrawType), Z_Construct_UEnum_VRExpansionPlugin_EBPVRConsoleDrawType, METADATA_PARAMS(0, nullptr) }; // 914104452
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ScrollOffset = { "ScrollOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms, ScrollOffset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_bForceDraw_SetBit(void* Obj)
{
	((VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms*)Obj)->bForceDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_bForceDraw = { "bForceDraw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), &Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_bForceDraw_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), &Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_DrawType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_DrawType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ScrollOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_bForceDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLogComponent, nullptr, "DrawConsoleToRenderTarget2D", nullptr, nullptr, Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::VRLogComponent_eventDrawConsoleToRenderTarget2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLogComponent::execDrawConsoleToRenderTarget2D)
{
	P_GET_ENUM(EBPVRConsoleDrawType,Z_Param_DrawType);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScrollOffset);
	P_GET_UBOOL(Z_Param_bForceDraw);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DrawConsoleToRenderTarget2D(EBPVRConsoleDrawType(Z_Param_DrawType),Z_Param_Texture,Z_Param_ScrollOffset,Z_Param_bForceDraw);
	P_NATIVE_END;
}
// End Class UVRLogComponent Function DrawConsoleToRenderTarget2D

// Begin Class UVRLogComponent Function SendKeyEventToConsole
struct Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics
{
	struct VRLogComponent_eventSendKeyEventToConsole_Parms
	{
		FKey Key;
		TEnumAsByte<EInputEvent> KeyEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRLogComponent|Console" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sends a key to the console - Console considers Released as final, flashes the cursor\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends a key to the console - Console considers Released as final, flashes the cursor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLogComponent_eventSendKeyEventToConsole_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLogComponent_eventSendKeyEventToConsole_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(0, nullptr) }; // 2776698617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::NewProp_KeyEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLogComponent, nullptr, "SendKeyEventToConsole", nullptr, nullptr, Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::VRLogComponent_eventSendKeyEventToConsole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::VRLogComponent_eventSendKeyEventToConsole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLogComponent::execSendKeyEventToConsole)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendKeyEventToConsole(Z_Param_Key,EInputEvent(Z_Param_KeyEvent));
	P_NATIVE_END;
}
// End Class UVRLogComponent Function SendKeyEventToConsole

// Begin Class UVRLogComponent Function SetConsoleText
struct Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics
{
	struct VRLogComponent_eventSetConsoleText_Parms
	{
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bIgnoreSelf", "true" },
		{ "Category", "VRLogComponent|Console" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the console input text, can be used to clear the console or enter full or partial commands\n" },
#endif
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the console input text, can be used to clear the console or enter full or partial commands" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRLogComponent_eventSetConsoleText_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRLogComponent, nullptr, "SetConsoleText", nullptr, nullptr, Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::VRLogComponent_eventSetConsoleText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::VRLogComponent_eventSetConsoleText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRLogComponent_SetConsoleText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRLogComponent_SetConsoleText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRLogComponent::execSetConsoleText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConsoleText(Z_Param_Text);
	P_NATIVE_END;
}
// End Class UVRLogComponent Function SetConsoleText

// Begin Class UVRLogComponent
void UVRLogComponent::StaticRegisterNativesUVRLogComponent()
{
	UClass* Class = UVRLogComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AppendTextToConsole", &UVRLogComponent::execAppendTextToConsole },
		{ "DrawConsoleToRenderTarget2D", &UVRLogComponent::execDrawConsoleToRenderTarget2D },
		{ "SendKeyEventToConsole", &UVRLogComponent::execSendKeyEventToConsole },
		{ "SetConsoleText", &UVRLogComponent::execSetConsoleText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRLogComponent);
UClass* Z_Construct_UClass_UVRLogComponent_NoRegister()
{
	return UVRLogComponent::StaticClass();
}
struct Z_Construct_UClass_UVRLogComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This class taps into the output log and console and renders them to textures so they can be viewed in levels.\n* Generally used for debugging and testing in VR, also allows sending input to the console.\n*/" },
#endif
		{ "IncludePath", "Misc/VRLogComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class taps into the output log and console and renders them to textures so they can be viewed in levels.\nGenerally used for debugging and testing in VR, also allows sending input to the console." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLineLength_MetaData[] = {
		{ "Category", "VRLogComponent|Console" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStoredMessages_MetaData[] = {
		{ "Category", "VRLogComponent|Console" },
		{ "ModuleRelativePath", "Public/Misc/VRLogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLineLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStoredMessages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRLogComponent_AppendTextToConsole, "AppendTextToConsole" }, // 1704245490
		{ &Z_Construct_UFunction_UVRLogComponent_DrawConsoleToRenderTarget2D, "DrawConsoleToRenderTarget2D" }, // 302748991
		{ &Z_Construct_UFunction_UVRLogComponent_SendKeyEventToConsole, "SendKeyEventToConsole" }, // 1728248102
		{ &Z_Construct_UFunction_UVRLogComponent_SetConsoleText, "SetConsoleText" }, // 3030045532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRLogComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxLineLength = { "MaxLineLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLogComponent, MaxLineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLineLength_MetaData), NewProp_MaxLineLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxStoredMessages = { "MaxStoredMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRLogComponent, MaxStoredMessages), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStoredMessages_MetaData), NewProp_MaxStoredMessages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRLogComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxLineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLogComponent_Statics::NewProp_MaxStoredMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLogComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRLogComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLogComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRLogComponent_Statics::ClassParams = {
	&UVRLogComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRLogComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRLogComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRLogComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRLogComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRLogComponent()
{
	if (!Z_Registration_Info_UClass_UVRLogComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRLogComponent.OuterSingleton, Z_Construct_UClass_UVRLogComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRLogComponent.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRLogComponent>()
{
	return UVRLogComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRLogComponent);
// End Class UVRLogComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBPVRConsoleDrawType_StaticEnum, TEXT("EBPVRConsoleDrawType"), &Z_Registration_Info_UEnum_EBPVRConsoleDrawType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 914104452U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRLogComponent, UVRLogComponent::StaticClass, TEXT("UVRLogComponent"), &Z_Registration_Info_UClass_UVRLogComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRLogComponent), 1122631119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_1765617656(TEXT("/Script/VRExpansionPlugin"),
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Tyler_Nunes_Documents_GitHub_TheBestTeam_VR_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRLogComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
