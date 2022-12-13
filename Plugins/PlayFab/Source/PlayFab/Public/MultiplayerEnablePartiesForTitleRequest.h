#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerEnablePartiesForTitleRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerEnablePartiesForTitleRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FMultiplayerEnablePartiesForTitleRequest();
};

