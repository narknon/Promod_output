#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkPSNAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkPSNAccountRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientUnlinkPSNAccountRequest();
};

