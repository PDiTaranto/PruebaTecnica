// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PRUEBATECNICA_EnemyProjectile_generated_h
#error "EnemyProjectile.generated.h already included, missing '#pragma once' in EnemyProjectile.h"
#endif
#define PRUEBATECNICA_EnemyProjectile_generated_h

#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_SPARSE_DATA
#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyProjectile(); \
	friend struct Z_Construct_UClass_AEnemyProjectile_Statics; \
public: \
	DECLARE_CLASS(AEnemyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PruebaTecnica"), NO_API) \
	DECLARE_SERIALIZER(AEnemyProjectile)


#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyProjectile(); \
	friend struct Z_Construct_UClass_AEnemyProjectile_Statics; \
public: \
	DECLARE_CLASS(AEnemyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PruebaTecnica"), NO_API) \
	DECLARE_SERIALIZER(AEnemyProjectile)


#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyProjectile(AEnemyProjectile&&); \
	NO_API AEnemyProjectile(const AEnemyProjectile&); \
public:


#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyProjectile(AEnemyProjectile&&); \
	NO_API AEnemyProjectile(const AEnemyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyProjectile)


#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AEnemyProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AEnemyProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AEnemyProjectile, Damage); }


#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_9_PROLOG
#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_SPARSE_DATA \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_RPC_WRAPPERS \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_INCLASS \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_SPARSE_DATA \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_INCLASS_NO_PURE_DECLS \
	PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRUEBATECNICA_API UClass* StaticClass<class AEnemyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PruebaTecnica_Source_PruebaTecnica_Public_EnemyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
