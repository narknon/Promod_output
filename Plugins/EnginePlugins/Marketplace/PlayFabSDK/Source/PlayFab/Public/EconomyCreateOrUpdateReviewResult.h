#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyCreateOrUpdateReviewResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyCreateOrUpdateReviewResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyCreateOrUpdateReviewResult();
};

