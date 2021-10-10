// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector_NetQuantizeNormal;
#ifdef SHOOTERGAME_ShooterWeapon_Projectile_generated_h
#error "ShooterWeapon_Projectile.generated.h already included, missing '#pragma once' in ShooterWeapon_Projectile.h"
#endif
#define SHOOTERGAME_ShooterWeapon_Projectile_generated_h

#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileWeaponData_Statics; \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SHOOTERGAME_API UScriptStruct* StaticStruct<struct FProjectileWeaponData>();

#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_RPC_WRAPPERS \
	virtual bool ServerFireProjectile_Validate(FVector , FVector_NetQuantizeNormal ); \
	virtual void ServerFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir); \
 \
	DECLARE_FUNCTION(execServerFireProjectile);


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFireProjectile_Validate(FVector , FVector_NetQuantizeNormal ); \
	virtual void ServerFireProjectile_Implementation(FVector Origin, FVector_NetQuantizeNormal ShootDir); \
 \
	DECLARE_FUNCTION(execServerFireProjectile);


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_EVENT_PARMS \
	struct ShooterWeapon_Projectile_eventServerFireProjectile_Parms \
	{ \
		FVector Origin; \
		FVector_NetQuantizeNormal ShootDir; \
	};


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_CALLBACK_WRAPPERS
#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterWeapon_Projectile(); \
	friend struct Z_Construct_UClass_AShooterWeapon_Projectile_Statics; \
public: \
	DECLARE_CLASS(AShooterWeapon_Projectile, AShooterWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterWeapon_Projectile)


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAShooterWeapon_Projectile(); \
	friend struct Z_Construct_UClass_AShooterWeapon_Projectile_Statics; \
public: \
	DECLARE_CLASS(AShooterWeapon_Projectile, AShooterWeapon, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterWeapon_Projectile)


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterWeapon_Projectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterWeapon_Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterWeapon_Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterWeapon_Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterWeapon_Projectile(AShooterWeapon_Projectile&&); \
	NO_API AShooterWeapon_Projectile(const AShooterWeapon_Projectile&); \
public:


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterWeapon_Projectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterWeapon_Projectile(AShooterWeapon_Projectile&&); \
	NO_API AShooterWeapon_Projectile(const AShooterWeapon_Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterWeapon_Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterWeapon_Projectile); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterWeapon_Projectile)


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileConfig() { return STRUCT_OFFSET(AShooterWeapon_Projectile, ProjectileConfig); }


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_46_PROLOG \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_EVENT_PARMS


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_INCLASS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterWeapon_Projectile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterWeapon_Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
