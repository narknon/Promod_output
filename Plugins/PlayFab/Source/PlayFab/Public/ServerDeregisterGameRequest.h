#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerDeregisterGameRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerDeregisterGameRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    FServerDeregisterGameRequest();
};

