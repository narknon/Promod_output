#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VolatileDamageModifier.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FVolatileDamageModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageTypePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    PROMOD_API FVolatileDamageModifier();
};

