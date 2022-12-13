#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerGetMultiplayerSessionLogsBySessionIdRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest();
};

