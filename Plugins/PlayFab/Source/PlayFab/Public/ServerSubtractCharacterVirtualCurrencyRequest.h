#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerSubtractCharacterVirtualCurrencyRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSubtractCharacterVirtualCurrencyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VirtualCurrency;
    
    FServerSubtractCharacterVirtualCurrencyRequest();
};

