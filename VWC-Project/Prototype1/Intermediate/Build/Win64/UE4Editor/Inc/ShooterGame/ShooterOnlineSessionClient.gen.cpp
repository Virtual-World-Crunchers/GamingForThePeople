// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Online/ShooterOnlineSessionClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterOnlineSessionClient() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterOnlineSessionClient_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterOnlineSessionClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterOnlineSessionClient::StaticRegisterNativesUShooterOnlineSessionClient()
	{
	}
	UClass* Z_Construct_UClass_UShooterOnlineSessionClient_NoRegister()
	{
		return UShooterOnlineSessionClient::StaticClass();
	}
	struct Z_Construct_UClass_UShooterOnlineSessionClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterOnlineSessionClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineSessionClient,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterOnlineSessionClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Online/ShooterOnlineSessionClient.h" },
		{ "ModuleRelativePath", "Public/Online/ShooterOnlineSessionClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterOnlineSessionClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterOnlineSessionClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterOnlineSessionClient_Statics::ClassParams = {
		&UShooterOnlineSessionClient::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterOnlineSessionClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterOnlineSessionClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterOnlineSessionClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterOnlineSessionClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterOnlineSessionClient, 2687261817);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterOnlineSessionClient>()
	{
		return UShooterOnlineSessionClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterOnlineSessionClient(Z_Construct_UClass_UShooterOnlineSessionClient, &UShooterOnlineSessionClient::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterOnlineSessionClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterOnlineSessionClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
