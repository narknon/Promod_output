#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyCreateDraftItemResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyCreateDraftItemResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Item;
    
    FEconomyCreateDraftItemResult();
};

