#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomySubtractVirtualCurrenciesResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomySubtractVirtualCurrenciesResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Currencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IdempotencyId;
    
    FEconomySubtractVirtualCurrenciesResult();
};

