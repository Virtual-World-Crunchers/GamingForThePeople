// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Tests/ShooterTestControllerDedicatedServerTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTestControllerDedicatedServerTest() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerDedicatedServerTest();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBase();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterTestControllerDedicatedServerTest::StaticRegisterNativesUShooterTestControllerDedicatedServerTest()
	{
	}
	UClass* Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_NoRegister()
	{
		return UShooterTestControllerDedicatedServerTest::StaticClass();
	}
	struct Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShooterTestControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/ShooterTestControllerDedicatedServerTest.h" },
		{ "ModuleRelativePath", "Public/Tests/ShooterTestControllerDedicatedServerTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterTestControllerDedicatedServerTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_Statics::ClassParams = {
		&UShooterTestControllerDedicatedServerTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterTestControllerDedicatedServerTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterTestControllerDedicatedServerTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterTestControllerDedicatedServerTest, 2957385943);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterTestControllerDedicatedServerTest>()
	{
		return UShooterTestControllerDedicatedServerTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterTestControllerDedicatedServerTest(Z_Construct_UClass_UShooterTestControllerDedicatedServerTest, &UShooterTestControllerDedicatedServerTest::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterTestControllerDedicatedServerTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterTestControllerDedicatedServerTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
