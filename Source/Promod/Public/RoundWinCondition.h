#pragma once
#include "CoreMinimal.h"
#include "ERoundWinCondition.h"
#include "RoundWinCondition.generated.h"

USTRUCT(BlueprintType)
struct FRoundWinCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoundWinCondition WinCondition;
    
    PROMOD_API FRoundWinCondition();
};

