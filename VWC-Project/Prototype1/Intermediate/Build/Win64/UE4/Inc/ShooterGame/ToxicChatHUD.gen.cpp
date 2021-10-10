// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/UI/ToxicChatHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToxicChatHUD() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UToxicChatHUD_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UToxicChatHUD();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UToxicChatHUD::StaticRegisterNativesUToxicChatHUD()
	{
	}
	UClass* Z_Construct_UClass_UToxicChatHUD_NoRegister()
	{
		return UToxicChatHUD::StaticClass();
	}
	struct Z_Construct_UClass_UToxicChatHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToxicChatHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToxicChatHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ToxicChatHUD.h" },
		{ "ModuleRelativePath", "Public/UI/ToxicChatHUD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToxicChatHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToxicChatHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToxicChatHUD_Statics::ClassParams = {
		&UToxicChatHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UToxicChatHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToxicChatHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToxicChatHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToxicChatHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToxicChatHUD, 3592312381);
	template<> SHOOTERGAME_API UClass* StaticClass<UToxicChatHUD>()
	{
		return UToxicChatHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToxicChatHUD(Z_Construct_UClass_UToxicChatHUD, &UToxicChatHUD::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UToxicChatHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToxicChatHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
