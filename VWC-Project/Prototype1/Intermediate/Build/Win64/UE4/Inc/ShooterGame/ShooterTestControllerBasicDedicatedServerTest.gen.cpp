// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Tests/ShooterTestControllerBasicDedicatedServerTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTestControllerBasicDedicatedServerTest() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBase();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterTestControllerBasicDedicatedServerTest::StaticRegisterNativesUShooterTestControllerBasicDedicatedServerTest()
	{
	}
	UClass* Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_NoRegister()
	{
		return UShooterTestControllerBasicDedicatedServerTest::StaticClass();
	}
	struct Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShooterTestControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/ShooterTestControllerBasicDedicatedServerTest.h" },
		{ "ModuleRelativePath", "Public/Tests/ShooterTestControllerBasicDedicatedServerTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterTestControllerBasicDedicatedServerTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_Statics::ClassParams = {
		&UShooterTestControllerBasicDedicatedServerTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterTestControllerBasicDedicatedServerTest, 1923079609);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterTestControllerBasicDedicatedServerTest>()
	{
		return UShooterTestControllerBasicDedicatedServerTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterTestControllerBasicDedicatedServerTest(Z_Construct_UClass_UShooterTestControllerBasicDedicatedServerTest, &UShooterTestControllerBasicDedicatedServerTest::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterTestControllerBasicDedicatedServerTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterTestControllerBasicDedicatedServerTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
