 // Copyrigth


#include "Actor/AuraEffectActor.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "Components/SphereComponent.h"

 AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

 	SetRootComponent(CreateDefaultSubobject<USceneComponent>("SceneRoot"));
 	
}


void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();

}

 void AAuraEffectActor::ApplyEffectToTarget(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass)
 {
 	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Target);
 	if (!TargetASC) return;

 	check(GameplayEffectClass)
 	FGameplayEffectContextHandle EffectContextHandle = TargetASC->MakeEffectContext();
 	EffectContextHandle.AddSourceObject(this);
	FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(GameplayEffectClass, 1.f, EffectContextHandle);
 	TargetASC->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());
 }
