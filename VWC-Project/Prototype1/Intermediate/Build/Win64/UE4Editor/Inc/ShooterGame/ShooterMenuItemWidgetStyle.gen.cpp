// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Private/UI/Style/ShooterMenuItemWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterMenuItemWidgetStyle() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FShooterMenuItemStyle();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterMenuItemWidgetStyle_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterMenuItemWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FShooterMenuItemStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FShooterMenuItemStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FShooterMenuItemStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FShooterMenuItemStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShooterMenuItemStyle, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ShooterMenuItemStyle"), sizeof(FShooterMenuItemStyle), Get_Z_Construct_UScriptStruct_FShooterMenuItemStyle_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FShooterMenuItemStyle>()
{
	return FShooterMenuItemStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShooterMenuItemStyle(FShooterMenuItemStyle::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("ShooterMenuItemStyle"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuItemStyle
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuItemStyle()
	{
		UScriptStruct::DeferCppStructOps<FShooterMenuItemStyle>(FName(TEXT("ShooterMenuItemStyle")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuItemStyle;
	struct Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArrowImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftArrowImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArrowImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightArrowImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an FShooterMenuItem\n */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuItemWidgetStyle.h" },
		{ "ToolTip", "Represents the appearance of an FShooterMenuItem" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShooterMenuItemStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The brush used for the item background\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuItemWidgetStyle.h" },
		{ "ToolTip", "The brush used for the item background" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuItemStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_BackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_LeftArrowImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The image used for the left arrow\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuItemWidgetStyle.h" },
		{ "ToolTip", "The image used for the left arrow" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_LeftArrowImage = { "LeftArrowImage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuItemStyle, LeftArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_LeftArrowImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_LeftArrowImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_RightArrowImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The image used for the right arrow\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuItemWidgetStyle.h" },
		{ "ToolTip", "The image used for the right arrow" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_RightArrowImage = { "RightArrowImage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuItemStyle, RightArrowImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_RightArrowImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_RightArrowImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_BackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_LeftArrowImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::NewProp_RightArrowImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ShooterMenuItemStyle",
		sizeof(FShooterMenuItemStyle),
		alignof(FShooterMenuItemStyle),
		Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShooterMenuItemStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShooterMenuItemStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShooterMenuItemStyle"), sizeof(FShooterMenuItemStyle), Get_Z_Construct_UScriptStruct_FShooterMenuItemStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShooterMenuItemStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShooterMenuItemStyle_Hash() { return 1711450076U; }
	void UShooterMenuItemWidgetStyle::StaticRegisterNativesUShooterMenuItemWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UShooterMenuItemWidgetStyle_NoRegister()
	{
		return UShooterMenuItemWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuItemStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MenuItemStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "UI/Style/ShooterMenuItemWidgetStyle.h" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuItemWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::NewProp_MenuItemStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the menu's appearance. */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuItemWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the menu's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::NewProp_MenuItemStyle = { "MenuItemStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterMenuItemWidgetStyle, MenuItemStyle), Z_Construct_UScriptStruct_FShooterMenuItemStyle, METADATA_PARAMS(Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::NewProp_MenuItemStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::NewProp_MenuItemStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::NewProp_MenuItemStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterMenuItemWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::ClassParams = {
		&UShooterMenuItemWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterMenuItemWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterMenuItemWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterMenuItemWidgetStyle, 3266691507);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterMenuItemWidgetStyle>()
	{
		return UShooterMenuItemWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterMenuItemWidgetStyle(Z_Construct_UClass_UShooterMenuItemWidgetStyle, &UShooterMenuItemWidgetStyle::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterMenuItemWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterMenuItemWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
