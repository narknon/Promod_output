#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyDeleteSubscriptionResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyDeleteSubscriptionResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IdempotencyId;
    
    FEconomyDeleteSubscriptionResult();
};

