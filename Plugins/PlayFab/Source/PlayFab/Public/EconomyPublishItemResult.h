#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyPublishItemResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyPublishItemResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyPublishItemResult();
};

