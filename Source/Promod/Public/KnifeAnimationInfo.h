#pragma once
#include "CoreMinimal.h"
#include "KnifeAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FKnifeAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsMeleeAttacking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMeleeCanSwap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPrimary: 1;
    
    PROMOD_API FKnifeAnimationInfo();
};

