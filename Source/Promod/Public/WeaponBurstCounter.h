#pragma once
#include "CoreMinimal.h"
#include "WeaponBurstCounter.generated.h"

USTRUCT(BlueprintType)
struct FWeaponBurstCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousRoundsInMag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BurstCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalBurstCounter;
    
public:
    PROMOD_API FWeaponBurstCounter();
};

