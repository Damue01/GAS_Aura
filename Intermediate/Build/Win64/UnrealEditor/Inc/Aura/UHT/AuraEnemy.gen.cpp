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
	AURA_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighlighted_MetaData[];
#endif
		static void NewProp_bHighlighted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlighted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHighlighted_MetaData[] = {
		{ "Category", "AuraEnemy" },
		{ "ModuleRelativePath", "Public/Character/AuraEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHighlighted_SetBit(void* Obj)
	{
		((AAuraEnemy*)Obj)->bHighlighted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHighlighted = { "bHighlighted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAuraEnemy), &Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHighlighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHighlighted_MetaData), Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHighlighted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEnemy_Statics::NewProp_bHighlighted,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraEnemy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemyInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraEnemy, IEnemyInterface), false },  // 1736835009
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEnemy_Statics::ClassParams = {
		&AAuraEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAuraEnemy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEnemy_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEnemy);
	AAuraEnemy::~AAuraEnemy() {}
	struct Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEnemy, AAuraEnemy::StaticClass, TEXT("AAuraEnemy"), &Z_Registration_Info_UClass_AAuraEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEnemy), 3385063012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_1383659963(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Character_AuraEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
