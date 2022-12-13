#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomySetUgcItemModerationStateResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomySetUgcItemModerationStateResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomySetUgcItemModerationStateResult();
};

