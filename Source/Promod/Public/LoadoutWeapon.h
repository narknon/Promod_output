#pragma once
#include "CoreMinimal.h"
#include "ELoadoutWeaponType.h"
#include "EWeaponType.h"
#include "Styling/SlateBrush.h"
#include "LoadoutWeapon.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadoutWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType WeaponEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    PROMOD_API FLoadoutWeapon();
};

