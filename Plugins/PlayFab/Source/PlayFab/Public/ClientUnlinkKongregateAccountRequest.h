#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientUnlinkKongregateAccountRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkKongregateAccountRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientUnlinkKongregateAccountRequest();
};

