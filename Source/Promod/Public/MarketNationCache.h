#pragma once
#include "CoreMinimal.h"
#include "MarketAvailableWeapon.h"
#include "MarketNationCache.generated.h"

USTRUCT(BlueprintType)
struct FMarketNationCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarketAvailableWeapon> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarketAvailableWeapon> Grenades;
    
    PROMOD_API FMarketNationCache();
};

