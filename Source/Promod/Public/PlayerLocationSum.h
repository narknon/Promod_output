#pragma once
#include "CoreMinimal.h"
#include "PlayerLocationSum.generated.h"

class ABattalionCharacter;

USTRUCT(BlueprintType)
struct FPlayerLocationSum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationSum;
    
    PROMOD_API FPlayerLocationSum();
};

