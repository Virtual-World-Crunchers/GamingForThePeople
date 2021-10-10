// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterGameMode_generated_h
#error "ShooterGameMode.generated.h already included, missing '#pragma once' in ShooterGameMode.h"
#endif
#define SHOOTERGAME_ShooterGameMode_generated_h

#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishMatch); \
	DECLARE_FUNCTION(execSetAllowBots);


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishMatch); \
	DECLARE_FUNCTION(execSetAllowBots);


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameMode(); \
	friend struct Z_Construct_UClass_AShooterGameMode_Statics; \
public: \
	DECLARE_CLASS(AShooterGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameMode)


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAShooterGameMode(); \
	friend struct Z_Construct_UClass_AShooterGameMode_Statics; \
public: \
	DECLARE_CLASS(AShooterGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameMode)


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameMode(AShooterGameMode&&); \
	NO_API AShooterGameMode(const AShooterGameMode&); \
public:


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameMode(AShooterGameMode&&); \
	NO_API AShooterGameMode(const AShooterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameMode)


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WarmupTime() { return STRUCT_OFFSET(AShooterGameMode, WarmupTime); } \
	FORCEINLINE static uint32 __PPO__RoundTime() { return STRUCT_OFFSET(AShooterGameMode, RoundTime); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenMatches() { return STRUCT_OFFSET(AShooterGameMode, TimeBetweenMatches); } \
	FORCEINLINE static uint32 __PPO__KillScore() { return STRUCT_OFFSET(AShooterGameMode, KillScore); } \
	FORCEINLINE static uint32 __PPO__DeathScore() { return STRUCT_OFFSET(AShooterGameMode, DeathScore); } \
	FORCEINLINE static uint32 __PPO__DamageSelfScale() { return STRUCT_OFFSET(AShooterGameMode, DamageSelfScale); } \
	FORCEINLINE static uint32 __PPO__MaxBots() { return STRUCT_OFFSET(AShooterGameMode, MaxBots); } \
	FORCEINLINE static uint32 __PPO__BotControllers() { return STRUCT_OFFSET(AShooterGameMode, BotControllers); } \
	FORCEINLINE static uint32 __PPO__PlatformPlayerControllerClass() { return STRUCT_OFFSET(AShooterGameMode, PlatformPlayerControllerClass); }


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_14_PROLOG
#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_INCLASS \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterGameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Online_ShooterGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
