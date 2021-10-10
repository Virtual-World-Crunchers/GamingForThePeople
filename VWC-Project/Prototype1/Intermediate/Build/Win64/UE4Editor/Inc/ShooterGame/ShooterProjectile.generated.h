// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef SHOOTERGAME_ShooterProjectile_generated_h
#error "ShooterProjectile.generated.h already included, missing '#pragma once' in ShooterProjectile.h"
#endif
#define SHOOTERGAME_ShooterProjectile_generated_h

#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Exploded); \
	DECLARE_FUNCTION(execOnImpact);


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Exploded); \
	DECLARE_FUNCTION(execOnImpact);


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterProjectile(); \
	friend struct Z_Construct_UClass_AShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AShooterProjectile, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterProjectile) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAShooterProjectile(); \
	friend struct Z_Construct_UClass_AShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AShooterProjectile, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterProjectile) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterProjectile(AShooterProjectile&&); \
	NO_API AShooterProjectile(const AShooterProjectile&); \
public:


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterProjectile(AShooterProjectile&&); \
	NO_API AShooterProjectile(const AShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterProjectile); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterProjectile)


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementComp() { return STRUCT_OFFSET(AShooterProjectile, MovementComp); } \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AShooterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ParticleComp() { return STRUCT_OFFSET(AShooterProjectile, ParticleComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionTemplate() { return STRUCT_OFFSET(AShooterProjectile, ExplosionTemplate); } \
	FORCEINLINE static uint32 __PPO__bExploded() { return STRUCT_OFFSET(AShooterProjectile, bExploded); }


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_13_PROLOG
#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_INCLASS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterProjectile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Weapons_ShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
