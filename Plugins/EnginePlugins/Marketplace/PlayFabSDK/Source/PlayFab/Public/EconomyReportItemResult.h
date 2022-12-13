#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyReportItemResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyReportItemResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyReportItemResult();
};

