#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerUnlinkPSNAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUnlinkPSNAccountRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FServerUnlinkPSNAccountRequest();
};

