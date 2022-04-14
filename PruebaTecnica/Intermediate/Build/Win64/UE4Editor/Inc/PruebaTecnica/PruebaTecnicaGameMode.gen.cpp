// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PruebaTecnica/PruebaTecnicaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePruebaTecnicaGameMode() {}
// Cross Module References
	PRUEBATECNICA_API UClass* Z_Construct_UClass_APruebaTecnicaGameMode_NoRegister();
	PRUEBATECNICA_API UClass* Z_Construct_UClass_APruebaTecnicaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PruebaTecnica();
// End Cross Module References
	void APruebaTecnicaGameMode::StaticRegisterNativesAPruebaTecnicaGameMode()
	{
	}
	UClass* Z_Construct_UClass_APruebaTecnicaGameMode_NoRegister()
	{
		return APruebaTecnicaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APruebaTecnicaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APruebaTecnicaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PruebaTecnica,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APruebaTecnicaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PruebaTecnicaGameMode.h" },
		{ "ModuleRelativePath", "PruebaTecnicaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APruebaTecnicaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APruebaTecnicaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APruebaTecnicaGameMode_Statics::ClassParams = {
		&APruebaTecnicaGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APruebaTecnicaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APruebaTecnicaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APruebaTecnicaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APruebaTecnicaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APruebaTecnicaGameMode, 2963079761);
	template<> PRUEBATECNICA_API UClass* StaticClass<APruebaTecnicaGameMode>()
	{
		return APruebaTecnicaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APruebaTecnicaGameMode(Z_Construct_UClass_APruebaTecnicaGameMode, &APruebaTecnicaGameMode::StaticClass, TEXT("/Script/PruebaTecnica"), TEXT("APruebaTecnicaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APruebaTecnicaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
