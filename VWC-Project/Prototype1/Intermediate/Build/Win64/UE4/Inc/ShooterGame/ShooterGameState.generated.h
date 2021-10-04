// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterGameState_generated_h
#error "ShooterGameState.generated.h already included, missing '#pragma once' in ShooterGameState.h"
#endif
#define SHOOTERGAME_ShooterGameState_generated_h

#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_RPC_WRAPPERS
#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameState(); \
	friend struct Z_Construct_UClass_AShooterGameState_Statics; \
public: \
	DECLARE_CLASS(AShooterGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumTeams=NETFIELD_REP_START, \
		TeamScores, \
		RemainingTime, \
		bTimerPaused, \
		NETFIELD_REP_END=bTimerPaused	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShooterGameState(); \
	friend struct Z_Construct_UClass_AShooterGameState_Statics; \
public: \
	DECLARE_CLASS(AShooterGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumTeams=NETFIELD_REP_START, \
		TeamScores, \
		RemainingTime, \
		bTimerPaused, \
		NETFIELD_REP_END=bTimerPaused	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameState(AShooterGameState&&); \
	NO_API AShooterGameState(const AShooterGameState&); \
public:


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameState(AShooterGameState&&); \
	NO_API AShooterGameState(const AShooterGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameState)


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActivityId() { return STRUCT_OFFSET(AShooterGameState, ActivityId); } \
	FORCEINLINE static uint32 __PPO__bEnableGameFeedback() { return STRUCT_OFFSET(AShooterGameState, bEnableGameFeedback); }


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_11_PROLOG
#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_INCLASS \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterGameState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Online_ShooterGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
