// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Character/AuraEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraEnemy() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
	AURA_API UClass* Z_Construct_UClass_AAuraEnemy();
	AURA_API UClass* Z_Construct_UClass_AAuraEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraEnemy::StaticRegisterNativesAAuraEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraEnemy);
	UClass* Z_Construct_UClass_AAuraEnemy_NoRegister()
	{
		return AAuraEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAuraEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAuraCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraEnemy.h" },
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEnemy_Statics::ClassParams = {
		&AAuraEnemy::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAuraEnemy()
	{
		if (!Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton, Z_Construct_UClass_AAuraEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraEnemy.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraEnemy>()
	{
		return AAuraEnemy::StaticClass();
	}
	AAuraEnemy::AAuraEnemy() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEnemy);
	AAuraEnemy::~AAuraEnemy() {}
	struct Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEnemy, AAuraEnemy::StaticClass, TEXT("AAuraEnemy"), &Z_Registration_Info_UClass_AAuraEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEnemy), 3039797447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_1210410506(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
