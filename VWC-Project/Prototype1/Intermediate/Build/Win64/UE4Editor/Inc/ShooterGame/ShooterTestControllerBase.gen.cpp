// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Tests/ShooterTestControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTestControllerBase() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBase_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterTestControllerBase();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestController();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UShooterTestControllerBase::StaticRegisterNativesUShooterTestControllerBase()
	{
	}
	UClass* Z_Construct_UClass_UShooterTestControllerBase_NoRegister()
	{
		return UShooterTestControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_UShooterTestControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterTestControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGauntletTestController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterTestControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Based on LOGIN_REQUIRED_FOR_ONLINE_PLAY in ShooterMainMenu.cpp\n" },
		{ "IncludePath", "Tests/ShooterTestControllerBase.h" },
		{ "ModuleRelativePath", "Public/Tests/ShooterTestControllerBase.h" },
		{ "ToolTip", "Based on LOGIN_REQUIRED_FOR_ONLINE_PLAY in ShooterMainMenu.cpp" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterTestControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterTestControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterTestControllerBase_Statics::ClassParams = {
		&UShooterTestControllerBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UShooterTestControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTestControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterTestControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterTestControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterTestControllerBase, 2968302133);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterTestControllerBase>()
	{
		return UShooterTestControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterTestControllerBase(Z_Construct_UClass_UShooterTestControllerBase, &UShooterTestControllerBase::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterTestControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterTestControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
