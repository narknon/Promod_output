#pragma once
#include "CoreMinimal.h"
#include "OneTapKillerExpiry.generated.h"

class ABattalionPlayerState;

USTRUCT(BlueprintType)
struct FOneTapKillerExpiry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* Killer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    PROMOD_API FOneTapKillerExpiry();
};

