// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AShooterCharacter;
#ifdef SHOOTERGAME_ShooterWeapon_generated_h
#error "ShooterWeapon.generated.h already included, missing '#pragma once' in ShooterWeapon.h"
#endif
#define SHOOTERGAME_ShooterWeapon_generated_h

#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponAnim_Statics; \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SHOOTERGAME_API UScriptStruct* StaticStruct<struct FWeaponAnim>();

#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics; \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


template<> SHOOTERGAME_API UScriptStruct* StaticStruct<struct FWeaponData>();

#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_SPARSE_DATA
#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_RPC_WRAPPERS \
	virtual bool ServerHandleFiring_Validate(); \
	virtual void ServerHandleFiring_Implementation(); \
	virtual bool ServerStopReload_Validate(); \
	virtual void ServerStopReload_Implementation(); \
	virtual bool ServerStartReload_Validate(); \
	virtual void ServerStartReload_Implementation(); \
	virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
	virtual bool ServerStartFire_Validate(); \
	virtual void ServerStartFire_Implementation(); \
	virtual void ClientStartReload_Implementation(); \
 \
	DECLARE_FUNCTION(execServerHandleFiring); \
	DECLARE_FUNCTION(execOnRep_Reload); \
	DECLARE_FUNCTION(execOnRep_BurstCounter); \
	DECLARE_FUNCTION(execOnRep_MyPawn); \
	DECLARE_FUNCTION(execServerStopReload); \
	DECLARE_FUNCTION(execServerStartReload); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execServerStartFire); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execClientStartReload);


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerHandleFiring_Validate(); \
	virtual void ServerHandleFiring_Implementation(); \
	virtual bool ServerStopReload_Validate(); \
	virtual void ServerStopReload_Implementation(); \
	virtual bool ServerStartReload_Validate(); \
	virtual void ServerStartReload_Implementation(); \
	virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
	virtual bool ServerStartFire_Validate(); \
	virtual void ServerStartFire_Implementation(); \
	virtual void ClientStartReload_Implementation(); \
 \
	DECLARE_FUNCTION(execServerHandleFiring); \
	DECLARE_FUNCTION(execOnRep_Reload); \
	DECLARE_FUNCTION(execOnRep_BurstCounter); \
	DECLARE_FUNCTION(execOnRep_MyPawn); \
	DECLARE_FUNCTION(execServerStopReload); \
	DECLARE_FUNCTION(execServerStartReload); \
	DECLARE_FUNCTION(execServerStopFire); \
	DECLARE_FUNCTION(execServerStartFire); \
	DECLARE_FUNCTION(execGetPawnOwner); \
	DECLARE_FUNCTION(execClientStartReload);


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_EVENT_PARMS
#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_CALLBACK_WRAPPERS
#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterWeapon(); \
	friend struct Z_Construct_UClass_AShooterWeapon_Statics; \
public: \
	DECLARE_CLASS(AShooterWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MyPawn=NETFIELD_REP_START, \
		bPendingReload, \
		CurrentAmmo, \
		CurrentAmmoInClip, \
		BurstCounter, \
		NETFIELD_REP_END=BurstCounter	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_INCLASS \
private: \
	static void StaticRegisterNativesAShooterWeapon(); \
	friend struct Z_Construct_UClass_AShooterWeapon_Statics; \
public: \
	DECLARE_CLASS(AShooterWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MyPawn=NETFIELD_REP_START, \
		bPendingReload, \
		CurrentAmmo, \
		CurrentAmmoInClip, \
		BurstCounter, \
		NETFIELD_REP_END=BurstCounter	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterWeapon(AShooterWeapon&&); \
	NO_API AShooterWeapon(const AShooterWeapon&); \
public:


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterWeapon(AShooterWeapon&&); \
	NO_API AShooterWeapon(const AShooterWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterWeapon)


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyPawn() { return STRUCT_OFFSET(AShooterWeapon, MyPawn); } \
	FORCEINLINE static uint32 __PPO__WeaponConfig() { return STRUCT_OFFSET(AShooterWeapon, WeaponConfig); } \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AShooterWeapon, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__Mesh3P() { return STRUCT_OFFSET(AShooterWeapon, Mesh3P); } \
	FORCEINLINE static uint32 __PPO__FireAC() { return STRUCT_OFFSET(AShooterWeapon, FireAC); } \
	FORCEINLINE static uint32 __PPO__MuzzleAttachPoint() { return STRUCT_OFFSET(AShooterWeapon, MuzzleAttachPoint); } \
	FORCEINLINE static uint32 __PPO__MuzzleFX() { return STRUCT_OFFSET(AShooterWeapon, MuzzleFX); } \
	FORCEINLINE static uint32 __PPO__MuzzlePSC() { return STRUCT_OFFSET(AShooterWeapon, MuzzlePSC); } \
	FORCEINLINE static uint32 __PPO__MuzzlePSCSecondary() { return STRUCT_OFFSET(AShooterWeapon, MuzzlePSCSecondary); } \
	FORCEINLINE static uint32 __PPO__FireCameraShake() { return STRUCT_OFFSET(AShooterWeapon, FireCameraShake); } \
	FORCEINLINE static uint32 __PPO__FireForceFeedback() { return STRUCT_OFFSET(AShooterWeapon, FireForceFeedback); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(AShooterWeapon, FireSound); } \
	FORCEINLINE static uint32 __PPO__FireLoopSound() { return STRUCT_OFFSET(AShooterWeapon, FireLoopSound); } \
	FORCEINLINE static uint32 __PPO__FireFinishSound() { return STRUCT_OFFSET(AShooterWeapon, FireFinishSound); } \
	FORCEINLINE static uint32 __PPO__OutOfAmmoSound() { return STRUCT_OFFSET(AShooterWeapon, OutOfAmmoSound); } \
	FORCEINLINE static uint32 __PPO__ReloadSound() { return STRUCT_OFFSET(AShooterWeapon, ReloadSound); } \
	FORCEINLINE static uint32 __PPO__ReloadAnim() { return STRUCT_OFFSET(AShooterWeapon, ReloadAnim); } \
	FORCEINLINE static uint32 __PPO__EquipSound() { return STRUCT_OFFSET(AShooterWeapon, EquipSound); } \
	FORCEINLINE static uint32 __PPO__EquipAnim() { return STRUCT_OFFSET(AShooterWeapon, EquipAnim); } \
	FORCEINLINE static uint32 __PPO__FireAnim() { return STRUCT_OFFSET(AShooterWeapon, FireAnim); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(AShooterWeapon, CurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmoInClip() { return STRUCT_OFFSET(AShooterWeapon, CurrentAmmoInClip); } \
	FORCEINLINE static uint32 __PPO__BurstCounter() { return STRUCT_OFFSET(AShooterWeapon, BurstCounter); }


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_94_PROLOG \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_EVENT_PARMS


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_RPC_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_INCLASS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_PRIVATE_PROPERTY_OFFSET \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_SPARSE_DATA \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_CALLBACK_WRAPPERS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_INCLASS_NO_PURE_DECLS \
	Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h_97_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterWeapon."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype1_Source_ShooterGame_Public_Weapons_ShooterWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
