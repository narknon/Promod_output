#pragma once
#include "CoreMinimal.h"
#include "MarketNationCache.h"
#include "Market.generated.h"

USTRUCT(BlueprintType)
struct FMarket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarketNationCache> Nations;
    
    PROMOD_API FMarket();
};

