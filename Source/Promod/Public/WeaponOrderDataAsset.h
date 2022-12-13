#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EWeaponType.h"
#include "WeaponOrderDataAsset.generated.h"

class UBattalionWeaponNationDataAsset;

UCLASS(Blueprintable)
class UWeaponOrderDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponType> WeaponGlobalOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponType> MissingWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponType> WeaponOrderAmerican;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponType> WeaponOrderBritish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponType> WeaponOrderGerman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWeaponType> WeaponOrderSoviet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionWeaponNationDataAsset* WeaponNationDataAsset;
    
    UWeaponOrderDataAsset();
};

