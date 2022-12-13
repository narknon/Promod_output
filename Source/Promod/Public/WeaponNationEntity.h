#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.h"
#include "ENationType.h"
#include "WeaponNationEntity.generated.h"

USTRUCT(BlueprintType)
struct FWeaponNationEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENationType> Nations;
    
    PROMOD_API FWeaponNationEntity();
};

