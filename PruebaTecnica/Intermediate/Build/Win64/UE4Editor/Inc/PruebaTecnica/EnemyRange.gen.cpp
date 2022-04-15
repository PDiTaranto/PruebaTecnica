// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PruebaTecnica/Public/EnemyRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyRange() {}
// Cross Module References
	PRUEBATECNICA_API UClass* Z_Construct_UClass_AEnemyRange_NoRegister();
	PRUEBATECNICA_API UClass* Z_Construct_UClass_AEnemyRange();
	PRUEBATECNICA_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_PruebaTecnica();
// End Cross Module References
	void AEnemyRange::StaticRegisterNativesAEnemyRange()
	{
	}
	UClass* Z_Construct_UClass_AEnemyRange_NoRegister()
	{
		return AEnemyRange::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_PruebaTecnica,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyRange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyRange.h" },
		{ "ModuleRelativePath", "Public/EnemyRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyRange_Statics::ClassParams = {
		&AEnemyRange::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyRange, 2083310027);
	template<> PRUEBATECNICA_API UClass* StaticClass<AEnemyRange>()
	{
		return AEnemyRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyRange(Z_Construct_UClass_AEnemyRange, &AEnemyRange::StaticClass, TEXT("/Script/PruebaTecnica"), TEXT("AEnemyRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
