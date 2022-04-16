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
#ifdef PRUEBATECNICA_PruebaTecnicaProjectile_generated_h
#error "PruebaTecnicaProjectile.generated.h already included, missing '#pragma once' in PruebaTecnicaProjectile.h"
#endif
#define PRUEBATECNICA_PruebaTecnicaProjectile_generated_h

#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_SPARSE_DATA
#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPruebaTecnicaProjectile(); \
	friend struct Z_Construct_UClass_APruebaTecnicaProjectile_Statics; \
public: \
	DECLARE_CLASS(APruebaTecnicaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PruebaTecnica"), NO_API) \
	DECLARE_SERIALIZER(APruebaTecnicaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPruebaTecnicaProjectile(); \
	friend struct Z_Construct_UClass_APruebaTecnicaProjectile_Statics; \
public: \
	DECLARE_CLASS(APruebaTecnicaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PruebaTecnica"), NO_API) \
	DECLARE_SERIALIZER(APruebaTecnicaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APruebaTecnicaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APruebaTecnicaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APruebaTecnicaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APruebaTecnicaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APruebaTecnicaProjectile(APruebaTecnicaProjectile&&); \
	NO_API APruebaTecnicaProjectile(const APruebaTecnicaProjectile&); \
public:


#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APruebaTecnicaProjectile(APruebaTecnicaProjectile&&); \
	NO_API APruebaTecnicaProjectile(const APruebaTecnicaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APruebaTecnicaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APruebaTecnicaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APruebaTecnicaProjectile)


#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APruebaTecnicaProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APruebaTecnicaProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(APruebaTecnicaProjectile, Damage); }


#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_12_PROLOG
#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_SPARSE_DATA \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_RPC_WRAPPERS \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_INCLASS \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_SPARSE_DATA \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRUEBATECNICA_API UClass* StaticClass<class APruebaTecnicaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PruebaTecnica_Source_PruebaTecnica_PruebaTecnicaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
