#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerGetTitleEnabledForMultiplayerServersStatusRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest();
};

