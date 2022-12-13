#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientConfirmPurchaseRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientConfirmPurchaseRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OrderId;
    
    FClientConfirmPurchaseRequest();
};

