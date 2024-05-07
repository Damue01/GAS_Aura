// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Actor/AuraEffectActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraEffectActor() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraEffectActor();
	AURA_API UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraEffectActor::StaticRegisterNativesAAuraEffectActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraEffectActor);
	UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister()
	{
		return AAuraEffectActor::StaticClass();
	}
	struct Z_Construct_UClass_AAuraEffectActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/AuraEffectActor.h" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraEffectActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEffectActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams = {
		&AAuraEffectActor::StaticClass,
		"Engine",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAuraEffectActor()
	{
		if (!Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton, Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraEffectActor>()
	{
		return AAuraEffectActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEffectActor);
	AAuraEffectActor::~AAuraEffectActor() {}
	struct Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEffectActor, AAuraEffectActor::StaticClass, TEXT("AAuraEffectActor"), &Z_Registration_Info_UClass_AAuraEffectActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEffectActor), 1083679643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_3593626695(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
