#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUninkOpenIdConnectRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUninkOpenIdConnectRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectionId;
    
    FClientUninkOpenIdConnectRequest();
};

