#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkTwitchAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkTwitchAccountRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientUnlinkTwitchAccountRequest();
};

