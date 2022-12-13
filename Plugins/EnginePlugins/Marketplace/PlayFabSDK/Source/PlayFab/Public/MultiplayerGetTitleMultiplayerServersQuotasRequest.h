#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerGetTitleMultiplayerServersQuotasRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetTitleMultiplayerServersQuotasRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FMultiplayerGetTitleMultiplayerServersQuotasRequest();
};

