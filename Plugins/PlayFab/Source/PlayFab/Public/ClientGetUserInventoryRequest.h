#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetUserInventoryRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetUserInventoryRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientGetUserInventoryRequest();
};

