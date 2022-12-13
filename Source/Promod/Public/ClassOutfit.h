#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ClassOutfit.generated.h"

class ABattalionWeapon;

USTRUCT(BlueprintType)
struct FClassOutfit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABattalionWeapon>> DefaultInventoryClasses;
    
    UPROPERTY(EditAnywhere)
    uint8 GrenadeCount;
    
    UPROPERTY(EditAnywhere)
    uint8 SmokeGrenadeCount;
    
    PROMOD_API FClassOutfit();
};

