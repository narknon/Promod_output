#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerMultiplayerEmptyRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerMultiplayerEmptyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FMultiplayerMultiplayerEmptyRequest();
};

