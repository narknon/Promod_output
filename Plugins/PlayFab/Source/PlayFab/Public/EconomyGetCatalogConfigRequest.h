#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "EconomyGetCatalogConfigRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyGetCatalogConfigRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FEconomyGetCatalogConfigRequest();
};

