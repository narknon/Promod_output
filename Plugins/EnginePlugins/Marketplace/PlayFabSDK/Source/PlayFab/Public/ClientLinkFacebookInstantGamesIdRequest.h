#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientLinkFacebookInstantGamesIdRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkFacebookInstantGamesIdRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FacebookInstantGamesSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLink;
    
    FClientLinkFacebookInstantGamesIdRequest();
};

