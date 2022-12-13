#pragma once
#include "CoreMinimal.h"
#include "FlashResult.generated.h"

class ABattalionCharacter;

USTRUCT(BlueprintType)
struct FFlashResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* FlashedCharacterPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashDuration;
    
    PROMOD_API FFlashResult();
};

