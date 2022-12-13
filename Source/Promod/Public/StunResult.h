#pragma once
#include "CoreMinimal.h"
#include "StunResult.generated.h"

class APromodCharacter;

USTRUCT(BlueprintType)
struct FStunResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodCharacter* StunedCharacterPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunPower;
    
    PROMOD_API FStunResult();
};

