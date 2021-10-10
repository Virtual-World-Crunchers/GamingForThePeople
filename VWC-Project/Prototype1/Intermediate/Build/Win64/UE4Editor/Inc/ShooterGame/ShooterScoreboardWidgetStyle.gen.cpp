// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Private/UI/Style/ShooterScoreboardWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterScoreboardWidgetStyle() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FShooterScoreboardStyle();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterScoreboardWidgetStyle_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterScoreboardWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FShooterScoreboardStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FShooterScoreboardStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FShooterScoreboardStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FShooterScoreboardStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShooterScoreboardStyle, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ShooterScoreboardStyle"), sizeof(FShooterScoreboardStyle), Get_Z_Construct_UScriptStruct_FShooterScoreboardStyle_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FShooterScoreboardStyle>()
{
	return FShooterScoreboardStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShooterScoreboardStyle(FShooterScoreboardStyle::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("ShooterScoreboardStyle"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFShooterScoreboardStyle
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFShooterScoreboardStyle()
	{
		UScriptStruct::DeferCppStructOps<FShooterScoreboardStyle>(FName(TEXT("ShooterScoreboardStyle")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFShooterScoreboardStyle;
	struct Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBorderBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemBorderBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillStatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillStatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathStatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeathStatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreStatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreStatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerChangeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerChangeSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SShooterScoreboardWidget\n */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterScoreboardWidgetStyle.h" },
		{ "ToolTip", "Represents the appearance of an SShooterScoreboardWidget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShooterScoreboardStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ItemBorderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The brush used for the item border\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterScoreboardWidgetStyle.h" },
		{ "ToolTip", "The brush used for the item border" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ItemBorderBrush = { "ItemBorderBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterScoreboardStyle, ItemBorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ItemBorderBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ItemBorderBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_KillStatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The color used for the kill stat\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterScoreboardWidgetStyle.h" },
		{ "ToolTip", "The color used for the kill stat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_KillStatColor = { "KillStatColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterScoreboardStyle, KillStatColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_KillStatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_KillStatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_DeathStatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The color used for the death stat\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterScoreboardWidgetStyle.h" },
		{ "ToolTip", "The color used for the death stat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_DeathStatColor = { "DeathStatColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterScoreboardStyle, DeathStatColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_DeathStatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_DeathStatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ScoreStatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The color used for the score stat\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterScoreboardWidgetStyle.h" },
		{ "ToolTip", "The color used for the score stat" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ScoreStatColor = { "ScoreStatColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterScoreboardStyle, ScoreStatColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ScoreStatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ScoreStatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_PlayerChangeSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when the highlighted player changes in the scoreboard\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterScoreboardWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when the highlighted player changes in the scoreboard" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_PlayerChangeSound = { "PlayerChangeSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterScoreboardStyle, PlayerChangeSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_PlayerChangeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_PlayerChangeSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ItemBorderBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_KillStatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_DeathStatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_ScoreStatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::NewProp_PlayerChangeSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ShooterScoreboardStyle",
		sizeof(FShooterScoreboardStyle),
		alignof(FShooterScoreboardStyle),
		Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShooterScoreboardStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShooterScoreboardStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShooterScoreboardStyle"), sizeof(FShooterScoreboardStyle), Get_Z_Construct_UScriptStruct_FShooterScoreboardStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShooterScoreboardStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShooterScoreboardStyle_Hash() { return 764843407U; }
	void UShooterScoreboardWidgetStyle::StaticRegisterNativesUShooterScoreboardWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UShooterScoreboardWidgetStyle_NoRegister()
	{
		return UShooterScoreboardWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreboardStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreboardStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "UI/Style/ShooterScoreboardWidgetStyle.h" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterScoreboardWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::NewProp_ScoreboardStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the scoreboard's appearance. */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterScoreboardWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the scoreboard's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::NewProp_ScoreboardStyle = { "ScoreboardStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterScoreboardWidgetStyle, ScoreboardStyle), Z_Construct_UScriptStruct_FShooterScoreboardStyle, METADATA_PARAMS(Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::NewProp_ScoreboardStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::NewProp_ScoreboardStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::NewProp_ScoreboardStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterScoreboardWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::ClassParams = {
		&UShooterScoreboardWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterScoreboardWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterScoreboardWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterScoreboardWidgetStyle, 398462989);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterScoreboardWidgetStyle>()
	{
		return UShooterScoreboardWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterScoreboardWidgetStyle(Z_Construct_UClass_UShooterScoreboardWidgetStyle, &UShooterScoreboardWidgetStyle::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterScoreboardWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterScoreboardWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
