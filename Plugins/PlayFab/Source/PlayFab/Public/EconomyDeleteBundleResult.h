#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyDeleteBundleResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyDeleteBundleResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IdempotencyId;
    
    FEconomyDeleteBundleResult();
};

