// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Bots/ShooterBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterBot() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterBot_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterBot();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AShooterBot::StaticRegisterNativesAShooterBot()
	{
	}
	UClass* Z_Construct_UClass_AShooterBot_NoRegister()
	{
		return AShooterBot::StaticClass();
	}
	struct Z_Construct_UClass_AShooterBot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotBehavior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterBot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bots/ShooterBot.h" },
		{ "ModuleRelativePath", "Public/Bots/ShooterBot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBot_Statics::NewProp_BotBehavior_MetaData[] = {
		{ "Category", "Behavior" },
		{ "ModuleRelativePath", "Public/Bots/ShooterBot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterBot_Statics::NewProp_BotBehavior = { "BotBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterBot, BotBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterBot_Statics::NewProp_BotBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBot_Statics::NewProp_BotBehavior_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterBot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBot_Statics::NewProp_BotBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterBot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterBot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterBot_Statics::ClassParams = {
		&AShooterBot::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterBot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBot_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterBot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterBot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterBot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterBot, 2089457339);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterBot>()
	{
		return AShooterBot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterBot(Z_Construct_UClass_AShooterBot, &AShooterBot::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
