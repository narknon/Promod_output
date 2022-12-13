#pragma once
#include "CoreMinimal.h"
#include "PlayerKillTime.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FPlayerKillTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeKilled;
    
    PROMOD_API FPlayerKillTime();
};

