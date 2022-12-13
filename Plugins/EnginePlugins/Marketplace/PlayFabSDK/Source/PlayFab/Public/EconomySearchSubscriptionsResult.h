#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomySearchSubscriptionsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomySearchSubscriptionsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IdempotencyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Subscriptions;
    
    FEconomySearchSubscriptionsResult();
};

