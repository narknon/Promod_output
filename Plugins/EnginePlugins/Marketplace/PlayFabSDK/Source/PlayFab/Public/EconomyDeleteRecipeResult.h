#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyDeleteRecipeResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyDeleteRecipeResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IdempotencyId;
    
    FEconomyDeleteRecipeResult();
};

