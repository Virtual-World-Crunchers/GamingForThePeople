// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Player/ShooterPlayerController_Menu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerController_Menu() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerController_Menu_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerController_Menu();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterPlayerController_Menu::StaticRegisterNativesAShooterPlayerController_Menu()
	{
	}
	UClass* Z_Construct_UClass_AShooterPlayerController_Menu_NoRegister()
	{
		return AShooterPlayerController_Menu::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerController_Menu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPlayerController_Menu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Menu_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/ShooterPlayerController_Menu.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerController_Menu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerController_Menu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerController_Menu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerController_Menu_Statics::ClassParams = {
		&AShooterPlayerController_Menu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Menu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Menu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPlayerController_Menu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterPlayerController_Menu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterPlayerController_Menu, 1928054006);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterPlayerController_Menu>()
	{
		return AShooterPlayerController_Menu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterPlayerController_Menu(Z_Construct_UClass_AShooterPlayerController_Menu, &AShooterPlayerController_Menu::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterPlayerController_Menu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerController_Menu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
