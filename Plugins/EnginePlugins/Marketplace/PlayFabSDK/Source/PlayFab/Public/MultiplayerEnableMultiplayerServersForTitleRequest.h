#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerEnableMultiplayerServersForTitleRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerEnableMultiplayerServersForTitleRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FMultiplayerEnableMultiplayerServersForTitleRequest();
};

