#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Styling/SlateBrush.h"
#include "EWeaponType.h"
#include "MarketWeaponInfo.generated.h"

class ABattalionWeapon;

USTRUCT(BlueprintType)
struct FMarketWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType WeaponEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionWeapon> WeaponClass;
    
    PROMOD_API FMarketWeaponInfo();
};

