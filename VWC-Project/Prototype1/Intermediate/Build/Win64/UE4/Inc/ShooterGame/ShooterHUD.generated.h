// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterHUD_generated_h
#error "ShooterHUD.generated.h already included, missing '#pragma once' in ShooterHUD.h"
#endif
#define SHOOTERGAME_ShooterHUD_generated_h

#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_RPC_WRAPPERS
#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterHUD(); \
	friend struct Z_Construct_UClass_AShooterHUD_Statics; \
public: \
	DECLARE_CLASS(AShooterHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterHUD)


#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_INCLASS \
private: \
	static void StaticRegisterNativesAShooterHUD(); \
	friend struct Z_Construct_UClass_AShooterHUD_Statics; \
public: \
	DECLARE_CLASS(AShooterHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterHUD)


#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterHUD(AShooterHUD&&); \
	NO_API AShooterHUD(const AShooterHUD&); \
public:


#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterHUD(AShooterHUD&&); \
	NO_API AShooterHUD(const AShooterHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterHUD)


#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitNotifyIcon() { return STRUCT_OFFSET(AShooterHUD, HitNotifyIcon); } \
	FORCEINLINE static uint32 __PPO__KillsBg() { return STRUCT_OFFSET(AShooterHUD, KillsBg); } \
	FORCEINLINE static uint32 __PPO__TimePlaceBg() { return STRUCT_OFFSET(AShooterHUD, TimePlaceBg); } \
	FORCEINLINE static uint32 __PPO__PrimaryWeapBg() { return STRUCT_OFFSET(AShooterHUD, PrimaryWeapBg); } \
	FORCEINLINE static uint32 __PPO__SecondaryWeapBg() { return STRUCT_OFFSET(AShooterHUD, SecondaryWeapBg); } \
	FORCEINLINE static uint32 __PPO__Crosshair() { return STRUCT_OFFSET(AShooterHUD, Crosshair); } \
	FORCEINLINE static uint32 __PPO__HitNotifyCrosshair() { return STRUCT_OFFSET(AShooterHUD, HitNotifyCrosshair); } \
	FORCEINLINE static uint32 __PPO__DeathMessagesBg() { return STRUCT_OFFSET(AShooterHUD, DeathMessagesBg); } \
	FORCEINLINE static uint32 __PPO__HealthBarBg() { return STRUCT_OFFSET(AShooterHUD, HealthBarBg); } \
	FORCEINLINE static uint32 __PPO__HealthBar() { return STRUCT_OFFSET(AShooterHUD, HealthBar); } \
	FORCEINLINE static uint32 __PPO__HealthIcon() { return STRUCT_OFFSET(AShooterHUD, HealthIcon); } \
	FORCEINLINE static uint32 __PPO__KillsIcon() { return STRUCT_OFFSET(AShooterHUD, KillsIcon); } \
	FORCEINLINE static uint32 __PPO__KilledIcon() { return STRUCT_OFFSET(AShooterHUD, KilledIcon); } \
	FORCEINLINE static uint32 __PPO__TimerIcon() { return STRUCT_OFFSET(AShooterHUD, TimerIcon); } \
	FORCEINLINE static uint32 __PPO__PlaceIcon() { return STRUCT_OFFSET(AShooterHUD, PlaceIcon); } \
	FORCEINLINE static uint32 __PPO__HitNotifyTexture() { return STRUCT_OFFSET(AShooterHUD, HitNotifyTexture); } \
	FORCEINLINE static uint32 __PPO__HUDMainTexture() { return STRUCT_OFFSET(AShooterHUD, HUDMainTexture); } \
	FORCEINLINE static uint32 __PPO__HUDAssets02Texture() { return STRUCT_OFFSET(AShooterHUD, HUDAssets02Texture); } \
	FORCEINLINE static uint32 __PPO__LowHealthOverlayTexture() { return STRUCT_OFFSET(AShooterHUD, LowHealthOverlayTexture); } \
	FORCEINLINE static uint32 __PPO__BigFont() { return STRUCT_OFFSET(AShooterHUD, BigFont); } \
	FORCEINLINE static uint32 __PPO__NormalFont() { return STRUCT_OFFSET(AShooterHUD, NormalFont); }


#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_61_PROLOG
#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_INCLASS \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h_64_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterHUD."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_UI_ShooterHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
