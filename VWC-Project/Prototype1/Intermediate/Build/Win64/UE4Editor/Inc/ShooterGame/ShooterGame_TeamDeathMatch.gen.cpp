// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Online/ShooterGame_TeamDeathMatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGame_TeamDeathMatch() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGame_TeamDeathMatch_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGame_TeamDeathMatch();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameMode();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterGame_TeamDeathMatch::StaticRegisterNativesAShooterGame_TeamDeathMatch()
	{
	}
	UClass* Z_Construct_UClass_AShooterGame_TeamDeathMatch_NoRegister()
	{
		return AShooterGame_TeamDeathMatch::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGame_TeamDeathMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGame_TeamDeathMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGame_TeamDeathMatch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Online/ShooterGame_TeamDeathMatch.h" },
		{ "ModuleRelativePath", "Public/Online/ShooterGame_TeamDeathMatch.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGame_TeamDeathMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGame_TeamDeathMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterGame_TeamDeathMatch_Statics::ClassParams = {
		&AShooterGame_TeamDeathMatch::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooterGame_TeamDeathMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGame_TeamDeathMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterGame_TeamDeathMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterGame_TeamDeathMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterGame_TeamDeathMatch, 2593574522);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterGame_TeamDeathMatch>()
	{
		return AShooterGame_TeamDeathMatch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterGame_TeamDeathMatch(Z_Construct_UClass_AShooterGame_TeamDeathMatch, &AShooterGame_TeamDeathMatch::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterGame_TeamDeathMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGame_TeamDeathMatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
