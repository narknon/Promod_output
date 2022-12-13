#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyDeleteItemResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyDeleteItemResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyDeleteItemResult();
};

