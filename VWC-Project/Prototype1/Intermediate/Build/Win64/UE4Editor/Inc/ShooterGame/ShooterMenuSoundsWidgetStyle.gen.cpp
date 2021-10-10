// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Private/UI/Style/ShooterMenuSoundsWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterMenuSoundsWidgetStyle() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FShooterMenuSoundsStyle();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterMenuSoundsWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FShooterMenuSoundsStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FShooterMenuSoundsStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FShooterMenuSoundsStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShooterMenuSoundsStyle, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ShooterMenuSoundsStyle"), sizeof(FShooterMenuSoundsStyle), Get_Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Hash());
	}
	return Singleton;
}
template<> SHOOTERGAME_API UScriptStruct* StaticStruct<FShooterMenuSoundsStyle>()
{
	return FShooterMenuSoundsStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShooterMenuSoundsStyle(FShooterMenuSoundsStyle::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("ShooterMenuSoundsStyle"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuSoundsStyle
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuSoundsStyle()
	{
		UScriptStruct::DeferCppStructOps<FShooterMenuSoundsStyle>(FName(TEXT("ShooterMenuSoundsStyle")));
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFShooterMenuSoundsStyle;
	struct Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartGameSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartGameSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitGameSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitGameSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the common menu sounds used in the shooter game\n */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuSoundsWidgetStyle.h" },
		{ "ToolTip", "Represents the common menu sounds used in the shooter game" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShooterMenuSoundsStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_StartGameSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when starting the game\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuSoundsWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when starting the game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_StartGameSound = { "StartGameSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuSoundsStyle, StartGameSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_StartGameSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_StartGameSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_ExitGameSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound that should play when exiting the game\n\x09 */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuSoundsWidgetStyle.h" },
		{ "ToolTip", "The sound that should play when exiting the game" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_ExitGameSound = { "ExitGameSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShooterMenuSoundsStyle, ExitGameSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_ExitGameSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_ExitGameSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_StartGameSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::NewProp_ExitGameSound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ShooterMenuSoundsStyle",
		sizeof(FShooterMenuSoundsStyle),
		alignof(FShooterMenuSoundsStyle),
		Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShooterMenuSoundsStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShooterMenuSoundsStyle"), sizeof(FShooterMenuSoundsStyle), Get_Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShooterMenuSoundsStyle_Hash() { return 2777613109U; }
	void UShooterMenuSoundsWidgetStyle::StaticRegisterNativesUShooterMenuSoundsWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_NoRegister()
	{
		return UShooterMenuSoundsWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundsStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundsStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "UI/Style/ShooterMenuSoundsWidgetStyle.h" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuSoundsWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::NewProp_SoundsStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the sounds */" },
		{ "ModuleRelativePath", "Private/UI/Style/ShooterMenuSoundsWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the sounds" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::NewProp_SoundsStyle = { "SoundsStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterMenuSoundsWidgetStyle, SoundsStyle), Z_Construct_UScriptStruct_FShooterMenuSoundsStyle, METADATA_PARAMS(Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::NewProp_SoundsStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::NewProp_SoundsStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::NewProp_SoundsStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterMenuSoundsWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::ClassParams = {
		&UShooterMenuSoundsWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterMenuSoundsWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterMenuSoundsWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterMenuSoundsWidgetStyle, 3633787931);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterMenuSoundsWidgetStyle>()
	{
		return UShooterMenuSoundsWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterMenuSoundsWidgetStyle(Z_Construct_UClass_UShooterMenuSoundsWidgetStyle, &UShooterMenuSoundsWidgetStyle::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterMenuSoundsWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterMenuSoundsWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
