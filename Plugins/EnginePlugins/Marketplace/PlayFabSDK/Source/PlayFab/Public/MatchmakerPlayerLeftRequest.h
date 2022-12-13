#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MatchmakerPlayerLeftRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerLeftRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FMatchmakerPlayerLeftRequest();
};

