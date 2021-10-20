// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Private/UI/Style/ShooterOptionsWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterOptionsWidgetStyle() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FShooterOptionsStyle();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterOptionsWidgetStyle_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterOptionsWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FShooterOptionsStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FShooterOptionsStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FShooterOptionsStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FShooterOptionsStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShooterOptionsStyle, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ShooterOptionsStyle"), sizeof(FShooterOptionsStyle), Get_Z_Construct_UScriptStruct_FShooterOptionsStyle_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FShooterOptionsStyle>()
{
	return FShooterOptionsStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShooterOptionsStyle(FShooterOptionsStyle::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("ShooterOptionsStyle"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFShooterOptionsStyle
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFShooterOptionsStyle()
	{
		UScriptStruct::DeferCppStructOps<FShooterOptionsStyle>(FName(TEXT("ShooterOptionsStyle")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFShooterOptionsStyle;
	struct Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptChangesSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcceptChangesSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscardChangesSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiscardChangesSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an FShooterOptions\n */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterOptionsWidgetStyle.h" },
		{ "ToolTip", "Represents the appearance of an FShooterOptions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShooterOptionsStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_AcceptChangesSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the options should play when changes are accepted\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterOptionsWidgetStyle.h" },
		{ "ToolTip", "The sound the options should play when changes are accepted" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_AcceptChangesSound = { "AcceptChangesSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterOptionsStyle, AcceptChangesSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_AcceptChangesSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_AcceptChangesSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_DiscardChangesSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the options should play when changes are discarded\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterOptionsWidgetStyle.h" },
		{ "ToolTip", "The sound the options should play when changes are discarded" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_DiscardChangesSound = { "DiscardChangesSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterOptionsStyle, DiscardChangesSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_DiscardChangesSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_DiscardChangesSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_AcceptChangesSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::NewProp_DiscardChangesSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ShooterOptionsStyle",
		sizeof(FShooterOptionsStyle),
		alignof(FShooterOptionsStyle),
		Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShooterOptionsStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShooterOptionsStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShooterOptionsStyle"), sizeof(FShooterOptionsStyle), Get_Z_Construct_UScriptStruct_FShooterOptionsStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShooterOptionsStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShooterOptionsStyle_Hash() { return 3471048789U; }
	void UShooterOptionsWidgetStyle::StaticRegisterNativesUShooterOptionsWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UShooterOptionsWidgetStyle_NoRegister()
	{
		return UShooterOptionsWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionsStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionsStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "UI/Style/ShooterOptionsWidgetStyle.h" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterOptionsWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::NewProp_OptionsStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the menu's appearance. */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterOptionsWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the menu's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::NewProp_OptionsStyle = { "OptionsStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterOptionsWidgetStyle, OptionsStyle), Z_Construct_UScriptStruct_FShooterOptionsStyle, METADATA_PARAMS(Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::NewProp_OptionsStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::NewProp_OptionsStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::NewProp_OptionsStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterOptionsWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::ClassParams = {
		&UShooterOptionsWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterOptionsWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterOptionsWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterOptionsWidgetStyle, 352994526);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterOptionsWidgetStyle>()
	{
		return UShooterOptionsWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterOptionsWidgetStyle(Z_Construct_UClass_UShooterOptionsWidgetStyle, &UShooterOptionsWidgetStyle::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterOptionsWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterOptionsWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
