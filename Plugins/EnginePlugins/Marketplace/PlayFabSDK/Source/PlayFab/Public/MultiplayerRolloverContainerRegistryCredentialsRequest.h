#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerRolloverContainerRegistryCredentialsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerRolloverContainerRegistryCredentialsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FMultiplayerRolloverContainerRegistryCredentialsRequest();
};

