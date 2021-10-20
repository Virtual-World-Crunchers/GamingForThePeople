// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/ShooterEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterEngine() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterEngine_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterEngine();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterEngine::StaticRegisterNativesUShooterEngine()
	{
	}
	UClass* Z_Construct_UClass_UShooterEngine_NoRegister()
	{
		return UShooterEngine::StaticClass();
	}
	struct Z_Construct_UClass_UShooterEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShooterEngine.h" },
		{ "ModuleRelativePath", "Public/ShooterEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterEngine_Statics::ClassParams = {
		&UShooterEngine::StaticClass,
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
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UShooterEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterEngine, 257867550);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterEngine>()
	{
		return UShooterEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterEngine(Z_Construct_UClass_UShooterEngine, &UShooterEngine::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
