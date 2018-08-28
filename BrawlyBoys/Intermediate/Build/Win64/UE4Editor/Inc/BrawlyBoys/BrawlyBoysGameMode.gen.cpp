// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrawlyBoys/BrawlyBoysGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrawlyBoysGameMode() {}
// Cross Module References
	BRAWLYBOYS_API UClass* Z_Construct_UClass_ABrawlyBoysGameMode_NoRegister();
	BRAWLYBOYS_API UClass* Z_Construct_UClass_ABrawlyBoysGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BrawlyBoys();
// End Cross Module References
	void ABrawlyBoysGameMode::StaticRegisterNativesABrawlyBoysGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABrawlyBoysGameMode_NoRegister()
	{
		return ABrawlyBoysGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABrawlyBoysGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrawlyBoysGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BrawlyBoys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrawlyBoysGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BrawlyBoysGameMode.h" },
		{ "ModuleRelativePath", "BrawlyBoysGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrawlyBoysGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrawlyBoysGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrawlyBoysGameMode_Statics::ClassParams = {
		&ABrawlyBoysGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABrawlyBoysGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABrawlyBoysGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrawlyBoysGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrawlyBoysGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrawlyBoysGameMode, 2000154026);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrawlyBoysGameMode(Z_Construct_UClass_ABrawlyBoysGameMode, &ABrawlyBoysGameMode::StaticClass, TEXT("/Script/BrawlyBoys"), TEXT("ABrawlyBoysGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrawlyBoysGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
