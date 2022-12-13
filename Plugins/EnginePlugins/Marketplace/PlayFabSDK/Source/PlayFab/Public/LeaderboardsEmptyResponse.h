#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "LeaderboardsEmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsEmptyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FLeaderboardsEmptyResponse();
};

