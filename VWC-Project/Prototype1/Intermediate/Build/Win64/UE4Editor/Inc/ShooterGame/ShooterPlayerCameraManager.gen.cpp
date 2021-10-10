// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Player/ShooterPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerCameraManager() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerCameraManager_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterPlayerCameraManager::StaticRegisterNativesAShooterPlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_AShooterPlayerCameraManager_NoRegister()
	{
		return AShooterPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/ShooterPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerCameraManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerCameraManager_Statics::ClassParams = {
		&AShooterPlayerCameraManager::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterPlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterPlayerCameraManager, 1702440899);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterPlayerCameraManager>()
	{
		return AShooterPlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterPlayerCameraManager(Z_Construct_UClass_AShooterPlayerCameraManager, &AShooterPlayerCameraManager::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
