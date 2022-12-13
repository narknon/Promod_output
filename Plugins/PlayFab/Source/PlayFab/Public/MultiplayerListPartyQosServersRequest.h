#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerListPartyQosServersRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerListPartyQosServersRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    FMultiplayerListPartyQosServersRequest();
};

