#pragma once
#include "CoreMinimal.h"
#include "CompletedChallengeInfo.h"
#include "CompletedChallenges.generated.h"

USTRUCT(BlueprintType)
struct FCompletedChallenges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompletedChallengeInfo> DailyChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedChallengeInfo WeeklyChallenge;
    
    PROMOD_API FCompletedChallenges();
};

