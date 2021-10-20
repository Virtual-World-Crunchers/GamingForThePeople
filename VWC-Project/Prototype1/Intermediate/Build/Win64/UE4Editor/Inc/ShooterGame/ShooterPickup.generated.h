// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterPickup_generated_h
#error "ShooterPickup.generated.h already included, missing '#pragma once' in ShooterPickup.h"
#endif
#define SHOOTERGAME_ShooterPickup_generated_h

#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive);


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive);


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_EVENT_PARMS
#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_CALLBACK_WRAPPERS
#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPickup(); \
	friend struct Z_Construct_UClass_AShooterPickup_Statics; \
public: \
	DECLARE_CLASS(AShooterPickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterPickup) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		PickedUpBy, \
		NETFIELD_REP_END=PickedUpBy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAShooterPickup(); \
	friend struct Z_Construct_UClass_AShooterPickup_Statics; \
public: \
	DECLARE_CLASS(AShooterPickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterPickup) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		PickedUpBy, \
		NETFIELD_REP_END=PickedUpBy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPickup(AShooterPickup&&); \
	NO_API AShooterPickup(const AShooterPickup&); \
public:


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPickup(AShooterPickup&&); \
	NO_API AShooterPickup(const AShooterPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPickup); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPickup)


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupPSC() { return STRUCT_OFFSET(AShooterPickup, PickupPSC); } \
	FORCEINLINE static uint32 __PPO__ActiveFX() { return STRUCT_OFFSET(AShooterPickup, ActiveFX); } \
	FORCEINLINE static uint32 __PPO__RespawningFX() { return STRUCT_OFFSET(AShooterPickup, RespawningFX); } \
	FORCEINLINE static uint32 __PPO__PickupSound() { return STRUCT_OFFSET(AShooterPickup, PickupSound); } \
	FORCEINLINE static uint32 __PPO__RespawnSound() { return STRUCT_OFFSET(AShooterPickup, RespawnSound); } \
	FORCEINLINE static uint32 __PPO__RespawnTime() { return STRUCT_OFFSET(AShooterPickup, RespawnTime); } \
	FORCEINLINE static uint32 __PPO__PickedUpBy() { return STRUCT_OFFSET(AShooterPickup, PickedUpBy); }


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_8_PROLOG \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_EVENT_PARMS


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_INCLASS \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterPickup."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Pickups_ShooterPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
