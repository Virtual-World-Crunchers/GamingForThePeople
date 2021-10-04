// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/ShooterGameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameViewportClient() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterGameViewportClient_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterGameViewportClient::StaticRegisterNativesUShooterGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UShooterGameViewportClient_NoRegister()
	{
		return UShooterGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UShooterGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShooterGameViewportClient.h" },
		{ "ModuleRelativePath", "Public/ShooterGameViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterGameViewportClient_Statics::ClassParams = {
		&UShooterGameViewportClient::StaticClass,
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
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UShooterGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterGameViewportClient, 1926179867);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterGameViewportClient>()
	{
		return UShooterGameViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterGameViewportClient(Z_Construct_UClass_UShooterGameViewportClient, &UShooterGameViewportClient::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
