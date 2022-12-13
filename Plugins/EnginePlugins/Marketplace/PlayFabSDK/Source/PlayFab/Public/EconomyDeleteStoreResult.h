#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyDeleteStoreResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyDeleteStoreResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IdempotencyId;
    
    FEconomyDeleteStoreResult();
};

