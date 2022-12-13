#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.h"
#include "WeaponsSpecialistTracker.generated.h"

class ABattalionPlayerState;

USTRUCT(BlueprintType)
struct FWeaponsSpecialistTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* KillerPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponType> UniqueWeapons;
    
    PROMOD_API FWeaponsSpecialistTracker();
};

