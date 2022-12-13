#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyTakedownReviewsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyTakedownReviewsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyTakedownReviewsResult();
};

