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
struct FHitResult;
#ifdef PRUEBATECNICA_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define PRUEBATECNICA_Enemy_generated_h

#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_SPARSE_DATA
#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execCombatSphereEndOverlap); \
	DECLARE_FUNCTION(execCombatSphereOverlap); \
	DECLARE_FUNCTION(execAgroSphereEndOverlap); \
	DECLARE_FUNCTION(execAgroSphereOverlap);


#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execCombatSphereEndOverlap); \
	DECLARE_FUNCTION(execCombatSphereOverlap); \
	DECLARE_FUNCTION(execAgroSphereEndOverlap); \
	DECLARE_FUNCTION(execAgroSphereOverlap);


#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PruebaTecnica"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PruebaTecnica"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BehaviorTree() { return STRUCT_OFFSET(AEnemy, BehaviorTree); } \
	FORCEINLINE static uint32 __PPO__PatrolPoint() { return STRUCT_OFFSET(AEnemy, PatrolPoint); } \
	FORCEINLINE static uint32 __PPO__PatrolPoint2() { return STRUCT_OFFSET(AEnemy, PatrolPoint2); } \
	FORCEINLINE static uint32 __PPO__AgroSphere() { return STRUCT_OFFSET(AEnemy, AgroSphere); } \
	FORCEINLINE static uint32 __PPO__CombatSphere() { return STRUCT_OFFSET(AEnemy, CombatSphere); }


#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_10_PROLOG
#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_SPARSE_DATA \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_RPC_WRAPPERS \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_INCLASS \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_SPARSE_DATA \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_INCLASS_NO_PURE_DECLS \
	PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRUEBATECNICA_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PruebaTecnica_Source_PruebaTecnica_Public_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
