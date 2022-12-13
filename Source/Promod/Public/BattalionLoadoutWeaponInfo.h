#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EWeaponType.h"
#include "Styling/SlateBrush.h"
#include "BattalionLoadoutWeaponInfo.generated.h"

class ABattalionWeapon;

USTRUCT(BlueprintType)
struct FBattalionLoadoutWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionWeapon> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush WeaponImage;
    
    PROMOD_API FBattalionLoadoutWeaponInfo();
};

