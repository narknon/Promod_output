#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerRedeemMatchmakerTicketRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRedeemMatchmakerTicketRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ticket;
    
    FServerRedeemMatchmakerTicketRequest();
};

