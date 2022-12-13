#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ENationType.h"
#include "WeaponNationEntity.h"
#include "EWeaponType.h"
#include "BattalionWeaponNationDataAsset.generated.h"

UCLASS(Blueprintable)
class UBattalionWeaponNationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponNationEntity> weaponNations;
    
    UBattalionWeaponNationDataAsset();
    UFUNCTION(BlueprintCallable)
    bool WeaponIsInNation(EWeaponType Weapon, ENationType Nation);
    
    UFUNCTION(BlueprintCallable)
    TArray<ENationType> GetWeaponNations(EWeaponType Weapon);
    
};

