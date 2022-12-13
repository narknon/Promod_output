#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkAppleRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkAppleRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientUnlinkAppleRequest();
};

