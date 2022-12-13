#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerListQosServersForTitleRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerListQosServersForTitleRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FMultiplayerListQosServersForTitleRequest();
};

