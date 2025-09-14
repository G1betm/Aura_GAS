

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/AuraProjectileSpell.h"
#include "AuraFireBolt.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraFireBolt : public UAuraProjectileSpell
{
	GENERATED_BODY()

public:
	virtual FString GetDescription(int32 Level);
	virtual FString GetNextLevelDescription(int32 Level);
	
	UFUNCTION(BlueprintCallable)
	void SpawnProjectiles(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag, bool bOverridePitch, float PithOverride, AActor* HomingTarget);

protected:
	UPROPERTY(EditDefaultsOnly, Category="FilreBolt")
	float ProjectileSpread = 90.f;

	UPROPERTY(EditDefaultsOnly, Category="FilreBolt")
	int32 MaxNumProjectiles = 5;

	UPROPERTY(EditDefaultsOnly, Category="FilreBolt")
	float HomingAccelerationMin = 4000.f;

	UPROPERTY(EditDefaultsOnly, Category="FilreBolt")
	float HomingAccelerationMax = 3500.f;
	
	UPROPERTY(EditDefaultsOnly, Category="FilreBolt")
	bool bLaunchHomingProjectiles = true;
};
