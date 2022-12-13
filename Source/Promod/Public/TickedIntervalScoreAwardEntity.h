#pragma once
#include "CoreMinimal.h"
#include "EScoreAwardType.h"
#include "TickedIntervalScoreAwardEntity.generated.h"

class APromodPlayerState;

USTRUCT(BlueprintType)
struct FTickedIntervalScoreAwardEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodPlayerState* PlayerToAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScoreAwardType ScoreAwardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AwardedCount;
    
    PROMOD_API FTickedIntervalScoreAwardEntity();
};

