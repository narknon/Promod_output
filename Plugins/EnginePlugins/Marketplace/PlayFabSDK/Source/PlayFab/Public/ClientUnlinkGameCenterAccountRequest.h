#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkGameCenterAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkGameCenterAccountRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientUnlinkGameCenterAccountRequest();
};

