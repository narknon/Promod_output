#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerGetContainerRegistryCredentialsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetContainerRegistryCredentialsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FMultiplayerGetContainerRegistryCredentialsRequest();
};

