// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterCheatManager_generated_h
#error "ShooterCheatManager.generated.h already included, missing '#pragma once' in ShooterCheatManager.h"
#endif
#define SHOOTERGAME_ShooterCheatManager_generated_h

#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnBot); \
	DECLARE_FUNCTION(execCheat); \
	DECLARE_FUNCTION(execChangeTeam); \
	DECLARE_FUNCTION(execForceMatchStart); \
	DECLARE_FUNCTION(execToggleMatchTimer); \
	DECLARE_FUNCTION(execToggleInfiniteClip); \
	DECLARE_FUNCTION(execToggleInfiniteAmmo);


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnBot); \
	DECLARE_FUNCTION(execCheat); \
	DECLARE_FUNCTION(execChangeTeam); \
	DECLARE_FUNCTION(execForceMatchStart); \
	DECLARE_FUNCTION(execToggleMatchTimer); \
	DECLARE_FUNCTION(execToggleInfiniteClip); \
	DECLARE_FUNCTION(execToggleInfiniteAmmo);


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterCheatManager(); \
	friend struct Z_Construct_UClass_UShooterCheatManager_Statics; \
public: \
	DECLARE_CLASS(UShooterCheatManager, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UShooterCheatManager) \
	DECLARE_WITHIN(AShooterPlayerController)


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUShooterCheatManager(); \
	friend struct Z_Construct_UClass_UShooterCheatManager_Statics; \
public: \
	DECLARE_CLASS(UShooterCheatManager, UCheatManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UShooterCheatManager) \
	DECLARE_WITHIN(AShooterPlayerController)


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterCheatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterCheatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShooterCheatManager(UShooterCheatManager&&); \
	NO_API UShooterCheatManager(const UShooterCheatManager&); \
public:


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShooterCheatManager(UShooterCheatManager&&); \
	NO_API UShooterCheatManager(const UShooterCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterCheatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterCheatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterCheatManager)


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_PRIVATE_PROPERTY_OFFSET
#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_7_PROLOG
#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_INCLASS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterCheatManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class UShooterCheatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Player_ShooterCheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
