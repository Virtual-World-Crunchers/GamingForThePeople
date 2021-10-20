// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Player/ShooterLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterLocalPlayer() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterLocalPlayer_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterLocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UShooterPersistentUser_NoRegister();
// End Cross Module References
	void UShooterLocalPlayer::StaticRegisterNativesUShooterLocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_UShooterLocalPlayer_NoRegister()
	{
		return UShooterLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UShooterLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistentUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/ShooterLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterLocalPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterLocalPlayer_Statics::NewProp_PersistentUser_MetaData[] = {
		{ "Comment", "/** Persistent user data stored between sessions (i.e. the user's savegame) */" },
		{ "ModuleRelativePath", "Public/Player/ShooterLocalPlayer.h" },
		{ "ToolTip", "Persistent user data stored between sessions (i.e. the user's savegame)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterLocalPlayer_Statics::NewProp_PersistentUser = { "PersistentUser", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterLocalPlayer, PersistentUser), Z_Construct_UClass_UShooterPersistentUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterLocalPlayer_Statics::NewProp_PersistentUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterLocalPlayer_Statics::NewProp_PersistentUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterLocalPlayer_Statics::NewProp_PersistentUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterLocalPlayer_Statics::ClassParams = {
		&UShooterLocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterLocalPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterLocalPlayer_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UShooterLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterLocalPlayer, 1433794302);
	template<> SHOOTERGAME_API UClass* StaticClass<UShooterLocalPlayer>()
	{
		return UShooterLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterLocalPlayer(Z_Construct_UClass_UShooterLocalPlayer, &UShooterLocalPlayer::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UShooterLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
