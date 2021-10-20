// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Tests/ShooterTestControllerListenServerClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTestControllerListenServerClient() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerListenServerClient_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerListenServerClient();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBase();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterTestControllerListenServerClient::StaticRegisterNativesUShooterTestControllerListenServerClient()
	{
	}
	UClass* Z_Construct_UClass_UShooterTestControllerListenServerClient_NoRegister()
	{
		return UShooterTestControllerListenServerClient::StaticClass();
	}
	struct Z_Construct_UClass_UShooterTestControllerListenServerClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterTestControllerListenServerClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShooterTestControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterTestControllerListenServerClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/ShooterTestControllerListenServerClient.h" },
		{ "ModuleRelativePath", "Public/Tests/ShooterTestControllerListenServerClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterTestControllerListenServerClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterTestControllerListenServerClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterTestControllerListenServerClient_Statics::ClassParams = {
		&UShooterTestControllerListenServerClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterTestControllerListenServerClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTestControllerListenServerClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterTestControllerListenServerClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterTestControllerListenServerClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterTestControllerListenServerClient, 972524352);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterTestControllerListenServerClient>()
	{
		return UShooterTestControllerListenServerClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterTestControllerListenServerClient(Z_Construct_UClass_UShooterTestControllerListenServerClient, &UShooterTestControllerListenServerClient::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterTestControllerListenServerClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterTestControllerListenServerClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
