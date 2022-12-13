#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyHelpfulnessVoteResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyHelpfulnessVoteResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyHelpfulnessVoteResult();
};

