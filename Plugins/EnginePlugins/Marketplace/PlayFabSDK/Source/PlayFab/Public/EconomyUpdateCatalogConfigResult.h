#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyUpdateCatalogConfigResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyUpdateCatalogConfigResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyUpdateCatalogConfigResult();
};

