#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyReportReviewResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyReportReviewResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyReportReviewResult();
};

