// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterLocalPlayer_generated_h
#error "ShooterLocalPlayer.generated.h already included, missing '#pragma once' in ShooterLocalPlayer.h"
#endif
#define SHOOTERGAME_ShooterLocalPlayer_generated_h

#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_RPC_WRAPPERS
#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterLocalPlayer(); \
	friend struct Z_Construct_UClass_UShooterLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UShooterLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UShooterLocalPlayer)


#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUShooterLocalPlayer(); \
	friend struct Z_Construct_UClass_UShooterLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UShooterLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UShooterLocalPlayer)


#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterLocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterLocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShooterLocalPlayer(UShooterLocalPlayer&&); \
	NO_API UShooterLocalPlayer(const UShooterLocalPlayer&); \
public:


#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShooterLocalPlayer(UShooterLocalPlayer&&); \
	NO_API UShooterLocalPlayer(const UShooterLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterLocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterLocalPlayer)


#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PersistentUser() { return STRUCT_OFFSET(UShooterLocalPlayer, PersistentUser); }


#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_8_PROLOG
#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_INCLASS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterLocalPlayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class UShooterLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Player_ShooterLocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
