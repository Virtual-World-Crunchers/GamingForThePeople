// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/Online/ShooterGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameState() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameState_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterGameState::StaticRegisterNativesAShooterGameState()
	{
	}
	UClass* Z_Construct_UClass_AShooterGameState_NoRegister()
	{
		return AShooterGameState::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTeams_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTeams;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamScores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamScores;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTimerPaused_MetaData[];
#endif
		static void NewProp_bTimerPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTimerPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGameFeedback_MetaData[];
#endif
		static void NewProp_bEnableGameFeedback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGameFeedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Online/ShooterGameState.h" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameState_Statics::NewProp_NumTeams_MetaData[] = {
		{ "Comment", "/** number of teams in current game (doesn't deprecate when no players are left in a team) */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameState.h" },
		{ "ToolTip", "number of teams in current game (doesn't deprecate when no players are left in a team)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameState_Statics::NewProp_NumTeams = { "NumTeams", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameState, NumTeams), METADATA_PARAMS(Z_Construct_UClass_AShooterGameState_Statics::NewProp_NumTeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameState_Statics::NewProp_NumTeams_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameState_Statics::NewProp_TeamScores_Inner = { "TeamScores", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameState_Statics::NewProp_TeamScores_MetaData[] = {
		{ "Comment", "/** accumulated score per team */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameState.h" },
		{ "ToolTip", "accumulated score per team" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShooterGameState_Statics::NewProp_TeamScores = { "TeamScores", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameState, TeamScores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AShooterGameState_Statics::NewProp_TeamScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameState_Statics::NewProp_TeamScores_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameState_Statics::NewProp_RemainingTime_MetaData[] = {
		{ "Comment", "/** time left for warmup / match */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameState.h" },
		{ "ToolTip", "time left for warmup / match" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShooterGameState_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameState, RemainingTime), METADATA_PARAMS(Z_Construct_UClass_AShooterGameState_Statics::NewProp_RemainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameState_Statics::NewProp_RemainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameState_Statics::NewProp_bTimerPaused_MetaData[] = {
		{ "Comment", "/** is timer paused? */" },
		{ "ModuleRelativePath", "Public/Online/ShooterGameState.h" },
		{ "ToolTip", "is timer paused?" },
	};
#endif
	void Z_Construct_UClass_AShooterGameState_Statics::NewProp_bTimerPaused_SetBit(void* Obj)
	{
		((AShooterGameState*)Obj)->bTimerPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterGameState_Statics::NewProp_bTimerPaused = { "bTimerPaused", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterGameState), &Z_Construct_UClass_AShooterGameState_Statics::NewProp_bTimerPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterGameState_Statics::NewProp_bTimerPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameState_Statics::NewProp_bTimerPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameState_Statics::NewProp_ActivityId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Online/ShooterGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShooterGameState_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterGameState, ActivityId), METADATA_PARAMS(Z_Construct_UClass_AShooterGameState_Statics::NewProp_ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameState_Statics::NewProp_ActivityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameState_Statics::NewProp_bEnableGameFeedback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Online/ShooterGameState.h" },
	};
#endif
	void Z_Construct_UClass_AShooterGameState_Statics::NewProp_bEnableGameFeedback_SetBit(void* Obj)
	{
		((AShooterGameState*)Obj)->bEnableGameFeedback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterGameState_Statics::NewProp_bEnableGameFeedback = { "bEnableGameFeedback", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AShooterGameState), &Z_Construct_UClass_AShooterGameState_Statics::NewProp_bEnableGameFeedback_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterGameState_Statics::NewProp_bEnableGameFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameState_Statics::NewProp_bEnableGameFeedback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameState_Statics::NewProp_NumTeams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameState_Statics::NewProp_TeamScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameState_Statics::NewProp_TeamScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameState_Statics::NewProp_RemainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameState_Statics::NewProp_bTimerPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameState_Statics::NewProp_ActivityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGameState_Statics::NewProp_bEnableGameFeedback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameState_Statics::ClassParams = {
		&AShooterGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameState_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterGameState, 3209481181);
	template<> SHOOTERGAME_API UClass* StaticClass<AShooterGameState>()
	{
		return AShooterGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterGameState(Z_Construct_UClass_AShooterGameState, &AShooterGameState::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterGameState"), false, nullptr, nullptr, nullptr);

	void AShooterGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NumTeams(TEXT("NumTeams"));
		static const FName Name_TeamScores(TEXT("TeamScores"));
		static const FName Name_RemainingTime(TEXT("RemainingTime"));
		static const FName Name_bTimerPaused(TEXT("bTimerPaused"));

		const bool bIsValid = true
			&& Name_NumTeams == ClassReps[(int32)ENetFields_Private::NumTeams].Property->GetFName()
			&& Name_TeamScores == ClassReps[(int32)ENetFields_Private::TeamScores].Property->GetFName()
			&& Name_RemainingTime == ClassReps[(int32)ENetFields_Private::RemainingTime].Property->GetFName()
			&& Name_bTimerPaused == ClassReps[(int32)ENetFields_Private::bTimerPaused].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AShooterGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
