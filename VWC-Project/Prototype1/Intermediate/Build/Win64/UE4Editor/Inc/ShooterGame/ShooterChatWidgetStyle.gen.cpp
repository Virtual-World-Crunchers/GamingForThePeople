// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Private/UI/Style/ShooterChatWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterChatWidgetStyle() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FShooterChatStyle();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterChatWidgetStyle_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterChatWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FShooterChatStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FShooterChatStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FShooterChatStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FShooterChatStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShooterChatStyle, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ShooterChatStyle"), sizeof(FShooterChatStyle), Get_Z_Construct_UScriptStruct_FShooterChatStyle_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FShooterChatStyle>()
{
	return FShooterChatStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShooterChatStyle(FShooterChatStyle::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("ShooterChatStyle"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFShooterChatStyle
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFShooterChatStyle()
	{
		UScriptStruct::DeferCppStructOps<FShooterChatStyle>(FName(TEXT("ShooterChatStyle")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFShooterChatStyle;
	struct Z_Construct_UScriptStruct_FShooterChatStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextEntryStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextEntryStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackingBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackingBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxBorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxBorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RxMessgeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RxMessgeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TxMessgeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TxMessgeSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterChatStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SChatWidget\n */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
		{ "ToolTip", "Represents the appearance of an SChatWidget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShooterChatStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextEntryStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style used for entering chat text\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
		{ "ToolTip", "The style used for entering chat text" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextEntryStyle = { "TextEntryStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterChatStyle, TextEntryStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextEntryStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextEntryStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BackingBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The brush used for the chat backing\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
		{ "ToolTip", "The brush used for the chat backing" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BackingBrush = { "BackingBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterChatStyle, BackingBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BackingBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BackingBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BoxBorderColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The color used for the chat box border\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
		{ "ToolTip", "The color used for the chat box border" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BoxBorderColor = { "BoxBorderColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterChatStyle, BoxBorderColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BoxBorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BoxBorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The color used for the chat box text\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
		{ "ToolTip", "The color used for the chat box text" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterChatStyle, TextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_RxMessgeSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when receiving a chat message\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when receiving a chat message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_RxMessgeSound = { "RxMessgeSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterChatStyle, RxMessgeSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_RxMessgeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_RxMessgeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TxMessgeSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when sending a chat message\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when sending a chat message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TxMessgeSound = { "TxMessgeSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterChatStyle, TxMessgeSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TxMessgeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TxMessgeSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShooterChatStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextEntryStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BackingBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_BoxBorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_RxMessgeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterChatStyle_Statics::NewProp_TxMessgeSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShooterChatStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ShooterChatStyle",
		sizeof(FShooterChatStyle),
		alignof(FShooterChatStyle),
		Z_Construct_UScriptStruct_FShooterChatStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterChatStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShooterChatStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShooterChatStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShooterChatStyle"), sizeof(FShooterChatStyle), Get_Z_Construct_UScriptStruct_FShooterChatStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShooterChatStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShooterChatStyle_Hash() { return 1068401191U; }
	void UShooterChatWidgetStyle::StaticRegisterNativesUShooterChatWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UShooterChatWidgetStyle_NoRegister()
	{
		return UShooterChatWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UShooterChatWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterChatWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterChatWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "UI/Style/ShooterChatWidgetStyle.h" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterChatWidgetStyle_Statics::NewProp_ChatStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the chat appearance. */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterChatWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the chat appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterChatWidgetStyle_Statics::NewProp_ChatStyle = { "ChatStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterChatWidgetStyle, ChatStyle), Z_Construct_UScriptStruct_FShooterChatStyle, METADATA_PARAMS(Z_Construct_UClass_UShooterChatWidgetStyle_Statics::NewProp_ChatStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterChatWidgetStyle_Statics::NewProp_ChatStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterChatWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterChatWidgetStyle_Statics::NewProp_ChatStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterChatWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterChatWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterChatWidgetStyle_Statics::ClassParams = {
		&UShooterChatWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterChatWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterChatWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterChatWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterChatWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterChatWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterChatWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterChatWidgetStyle, 1694991990);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterChatWidgetStyle>()
	{
		return UShooterChatWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterChatWidgetStyle(Z_Construct_UClass_UShooterChatWidgetStyle, &UShooterChatWidgetStyle::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterChatWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterChatWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
