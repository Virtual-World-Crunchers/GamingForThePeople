// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShooterWeapon;
struct FRotator;
#ifdef SHOOTERGAME_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define SHOOTERGAME_ShooterCharacter_generated_h

#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_RPC_WRAPPERS \
	virtual bool ServerSetRunning_Validate(bool , bool ); \
	virtual void ServerSetRunning_Implementation(bool bNewRunning, bool bToggle); \
	virtual bool ServerSetTargeting_Validate(bool ); \
	virtual void ServerSetTargeting_Implementation(bool bNewTargeting); \
	virtual bool ServerEquipWeapon_Validate(AShooterWeapon* ); \
	virtual void ServerEquipWeapon_Implementation(AShooterWeapon* NewWeapon); \
 \
	DECLARE_FUNCTION(execServerSetRunning); \
	DECLARE_FUNCTION(execServerSetTargeting); \
	DECLARE_FUNCTION(execServerEquipWeapon); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_LastTakeHitInfo); \
	DECLARE_FUNCTION(execIsFirstPerson); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetRunningSpeedModifier); \
	DECLARE_FUNCTION(execIsFiring); \
	DECLARE_FUNCTION(execIsTargeting); \
	DECLARE_FUNCTION(execGetTargetingSpeedModifier); \
	DECLARE_FUNCTION(execGetWeapon); \
	DECLARE_FUNCTION(execGetAimOffsets);


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetRunning_Validate(bool , bool ); \
	virtual void ServerSetRunning_Implementation(bool bNewRunning, bool bToggle); \
	virtual bool ServerSetTargeting_Validate(bool ); \
	virtual void ServerSetTargeting_Implementation(bool bNewTargeting); \
	virtual bool ServerEquipWeapon_Validate(AShooterWeapon* ); \
	virtual void ServerEquipWeapon_Implementation(AShooterWeapon* NewWeapon); \
 \
	DECLARE_FUNCTION(execServerSetRunning); \
	DECLARE_FUNCTION(execServerSetTargeting); \
	DECLARE_FUNCTION(execServerEquipWeapon); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_LastTakeHitInfo); \
	DECLARE_FUNCTION(execIsFirstPerson); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetRunningSpeedModifier); \
	DECLARE_FUNCTION(execIsFiring); \
	DECLARE_FUNCTION(execIsTargeting); \
	DECLARE_FUNCTION(execGetTargetingSpeedModifier); \
	DECLARE_FUNCTION(execGetWeapon); \
	DECLARE_FUNCTION(execGetAimOffsets);


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_EVENT_PARMS \
	struct ShooterCharacter_eventServerEquipWeapon_Parms \
	{ \
		AShooterWeapon* NewWeapon; \
	}; \
	struct ShooterCharacter_eventServerSetRunning_Parms \
	{ \
		bool bNewRunning; \
		bool bToggle; \
	}; \
	struct ShooterCharacter_eventServerSetTargeting_Parms \
	{ \
		bool bNewTargeting; \
	};


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_CALLBACK_WRAPPERS
#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		CurrentWeapon, \
		LastTakeHitInfo, \
		bIsTargeting, \
		bWantsToRun, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		CurrentWeapon, \
		LastTakeHitInfo, \
		bIsTargeting, \
		bWantsToRun, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public:


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter)


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AShooterCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachPoint() { return STRUCT_OFFSET(AShooterCharacter, WeaponAttachPoint); } \
	FORCEINLINE static uint32 __PPO__DefaultInventoryClasses() { return STRUCT_OFFSET(AShooterCharacter, DefaultInventoryClasses); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AShooterCharacter, Inventory); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(AShooterCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__LastTakeHitInfo() { return STRUCT_OFFSET(AShooterCharacter, LastTakeHitInfo); } \
	FORCEINLINE static uint32 __PPO__TargetingSpeedModifier() { return STRUCT_OFFSET(AShooterCharacter, TargetingSpeedModifier); } \
	FORCEINLINE static uint32 __PPO__RunningSpeedModifier() { return STRUCT_OFFSET(AShooterCharacter, RunningSpeedModifier); } \
	FORCEINLINE static uint32 __PPO__MeshMIDs() { return STRUCT_OFFSET(AShooterCharacter, MeshMIDs); } \
	FORCEINLINE static uint32 __PPO__DeathAnim() { return STRUCT_OFFSET(AShooterCharacter, DeathAnim); } \
	FORCEINLINE static uint32 __PPO__DeathSound() { return STRUCT_OFFSET(AShooterCharacter, DeathSound); } \
	FORCEINLINE static uint32 __PPO__RespawnFX() { return STRUCT_OFFSET(AShooterCharacter, RespawnFX); } \
	FORCEINLINE static uint32 __PPO__RespawnSound() { return STRUCT_OFFSET(AShooterCharacter, RespawnSound); } \
	FORCEINLINE static uint32 __PPO__LowHealthSound() { return STRUCT_OFFSET(AShooterCharacter, LowHealthSound); } \
	FORCEINLINE static uint32 __PPO__RunLoopSound() { return STRUCT_OFFSET(AShooterCharacter, RunLoopSound); } \
	FORCEINLINE static uint32 __PPO__RunStopSound() { return STRUCT_OFFSET(AShooterCharacter, RunStopSound); } \
	FORCEINLINE static uint32 __PPO__TargetingSound() { return STRUCT_OFFSET(AShooterCharacter, TargetingSound); } \
	FORCEINLINE static uint32 __PPO__RunLoopAC() { return STRUCT_OFFSET(AShooterCharacter, RunLoopAC); } \
	FORCEINLINE static uint32 __PPO__LowHealthWarningPlayer() { return STRUCT_OFFSET(AShooterCharacter, LowHealthWarningPlayer); }


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_11_PROLOG \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_EVENT_PARMS


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_INCLASS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterCharacter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Player_ShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
