// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Private/UI/Style/ShooterMenuWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterMenuWidgetStyle() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FShooterMenuStyle();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterMenuWidgetStyle_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterMenuWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FShooterMenuStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FShooterMenuStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FShooterMenuStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FShooterMenuStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShooterMenuStyle, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ShooterMenuStyle"), sizeof(FShooterMenuStyle), Get_Z_Construct_UScriptStruct_FShooterMenuStyle_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FShooterMenuStyle>()
{
	return FShooterMenuStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShooterMenuStyle(FShooterMenuStyle::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("ShooterMenuStyle"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuStyle
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuStyle()
	{
		UScriptStruct::DeferCppStructOps<FShooterMenuStyle>(FName(TEXT("ShooterMenuStyle")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuStyle;
	struct Z_Construct_UScriptStruct_FShooterMenuStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderBackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftBackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightBackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuEnterSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuEnterSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuBackSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuBackSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionChangeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionChangeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItemChangeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuItemChangeSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an SShooterMenuWidget\n */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ToolTip", "Represents the appearance of an SShooterMenuWidget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShooterMenuStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_HeaderBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The brush used for the header background\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ToolTip", "The brush used for the header background" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_HeaderBackgroundBrush = { "HeaderBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuStyle, HeaderBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_HeaderBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_HeaderBackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_LeftBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The brush used for the left side of the menu\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ToolTip", "The brush used for the left side of the menu" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_LeftBackgroundBrush = { "LeftBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuStyle, LeftBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_LeftBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_LeftBackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_RightBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The brush used for the right side of the menu\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ToolTip", "The brush used for the right side of the menu" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_RightBackgroundBrush = { "RightBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuStyle, RightBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_RightBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_RightBackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuEnterSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when entering a sub-menu\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when entering a sub-menu" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuEnterSound = { "MenuEnterSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuStyle, MenuEnterSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuEnterSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuEnterSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuBackSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when leaving a sub-menu\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when leaving a sub-menu" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuBackSound = { "MenuBackSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuStyle, MenuBackSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuBackSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuBackSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_OptionChangeSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when changing an option\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when changing an option" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_OptionChangeSound = { "OptionChangeSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuStyle, OptionChangeSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_OptionChangeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_OptionChangeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuItemChangeSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when changing the selected menu item\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when changing the selected menu item" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuItemChangeSound = { "MenuItemChangeSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuStyle, MenuItemChangeSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuItemChangeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuItemChangeSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_HeaderBackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_LeftBackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_RightBackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuEnterSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuBackSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_OptionChangeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::NewProp_MenuItemChangeSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ShooterMenuStyle",
		sizeof(FShooterMenuStyle),
		alignof(FShooterMenuStyle),
		Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShooterMenuStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShooterMenuStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShooterMenuStyle"), sizeof(FShooterMenuStyle), Get_Z_Construct_UScriptStruct_FShooterMenuStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShooterMenuStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShooterMenuStyle_Hash() { return 1235363196U; }
	void UShooterMenuWidgetStyle::StaticRegisterNativesUShooterMenuWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UShooterMenuWidgetStyle_NoRegister()
	{
		return UShooterMenuWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UShooterMenuWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::NewProp_MenuStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the menu's appearance. */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the menu's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::NewProp_MenuStyle = { "MenuStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterMenuWidgetStyle, MenuStyle), Z_Construct_UScriptStruct_FShooterMenuStyle, METADATA_PARAMS(Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::NewProp_MenuStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::NewProp_MenuStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::NewProp_MenuStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterMenuWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::ClassParams = {
		&UShooterMenuWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterMenuWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterMenuWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterMenuWidgetStyle, 3737535760);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterMenuWidgetStyle>()
	{
		return UShooterMenuWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterMenuWidgetStyle(Z_Construct_UClass_UShooterMenuWidgetStyle, &UShooterMenuWidgetStyle::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterMenuWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterMenuWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
