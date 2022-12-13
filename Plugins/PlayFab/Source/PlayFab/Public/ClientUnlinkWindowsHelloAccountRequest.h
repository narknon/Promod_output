#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkWindowsHelloAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkWindowsHelloAccountRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PublicKeyHint;
    
    FClientUnlinkWindowsHelloAccountRequest();
};

