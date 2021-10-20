// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Tests/ShooterTestControllerListenServerHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTestControllerListenServerHost() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerListenServerHost_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerListenServerHost();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBase();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterTestControllerListenServerHost::StaticRegisterNativesUShooterTestControllerListenServerHost()
	{
	}
	UClass* Z_Construct_UClass_UShooterTestControllerListenServerHost_NoRegister()
	{
		return UShooterTestControllerListenServerHost::StaticClass();
	}
	struct Z_Construct_UClass_UShooterTestControllerListenServerHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterTestControllerListenServerHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShooterTestControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterTestControllerListenServerHost_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/ShooterTestControllerListenServerHost.h" },
		{ "ModuleRelativePath", "Public/Tests/ShooterTestControllerListenServerHost.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterTestControllerListenServerHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterTestControllerListenServerHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterTestControllerListenServerHost_Statics::ClassParams = {
		&UShooterTestControllerListenServerHost::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShooterTestControllerListenServerHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTestControllerListenServerHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterTestControllerListenServerHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterTestControllerListenServerHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterTestControllerListenServerHost, 4216624399);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterTestControllerListenServerHost>()
	{
		return UShooterTestControllerListenServerHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterTestControllerListenServerHost(Z_Construct_UClass_UShooterTestControllerListenServerHost, &UShooterTestControllerListenServerHost::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterTestControllerListenServerHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterTestControllerListenServerHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
