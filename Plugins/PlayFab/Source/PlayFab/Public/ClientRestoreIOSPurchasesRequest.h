#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientRestoreIOSPurchasesRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientRestoreIOSPurchasesRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CatalogVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReceiptData;
    
    FClientRestoreIOSPurchasesRequest();
};

