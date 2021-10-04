// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Tests/ShooterTestControllerBootTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTestControllerBootTest() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBootTest_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBootTest();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestControllerBootTest();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterTestControllerBootTest::StaticRegisterNativesUShooterTestControllerBootTest()
	{
	}
	UClass* Z_Construct_UClass_UShooterTestControllerBootTest_NoRegister()
	{
		return UShooterTestControllerBootTest::StaticClass();
	}
	struct Z_Construct_UClass_UShooterTestControllerBootTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterTestControllerBootTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGauntletTestControllerBootTest,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterTestControllerBootTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/ShooterTestControllerBootTest.h" },
		{ "ModuleRelativePath", "Public/Tests/ShooterTestControllerBootTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterTestControllerBootTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterTestControllerBootTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterTestControllerBootTest_Statics::ClassParams = {
		&UShooterTestControllerBootTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShooterTestControllerBootTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTestControllerBootTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterTestControllerBootTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterTestControllerBootTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterTestControllerBootTest, 3639376969);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterTestControllerBootTest>()
	{
		return UShooterTestControllerBootTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterTestControllerBootTest(Z_Construct_UClass_UShooterTestControllerBootTest, &UShooterTestControllerBootTest::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterTestControllerBootTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterTestControllerBootTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
