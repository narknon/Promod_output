#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkGoogleAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkGoogleAccountRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientUnlinkGoogleAccountRequest();
};

