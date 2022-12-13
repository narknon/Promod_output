#pragma once
#include "CoreMinimal.h"
#include "EWeaponType.h"
#include "WeaponCosmeticData.h"
#include "WeaponCosmeticDataArray.generated.h"

USTRUCT(BlueprintType)
struct FWeaponCosmeticDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponCosmeticData> CosmeticData;
    
    PROMOD_API FWeaponCosmeticDataArray();
};

