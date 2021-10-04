// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Player/ShooterDemoSpectator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterDemoSpectator() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterDemoSpectator_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterDemoSpectator();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterDemoSpectator::StaticRegisterNativesAShooterDemoSpectator()
	{
	}
	UClass* Z_Construct_UClass_AShooterDemoSpectator_NoRegister()
	{
		return AShooterDemoSpectator::StaticClass();
	}
	struct Z_Construct_UClass_AShooterDemoSpectator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterDemoSpectator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterDemoSpectator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/ShooterDemoSpectator.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterDemoSpectator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterDemoSpectator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterDemoSpectator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterDemoSpectator_Statics::ClassParams = {
		&AShooterDemoSpectator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShooterDemoSpectator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterDemoSpectator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterDemoSpectator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterDemoSpectator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterDemoSpectator, 2758935942);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterDemoSpectator>()
	{
		return AShooterDemoSpectator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterDemoSpectator(Z_Construct_UClass_AShooterDemoSpectator, &AShooterDemoSpectator::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterDemoSpectator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterDemoSpectator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
