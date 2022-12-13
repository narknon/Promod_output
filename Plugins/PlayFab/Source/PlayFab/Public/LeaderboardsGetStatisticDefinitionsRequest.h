#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "LeaderboardsGetStatisticDefinitionsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsGetStatisticDefinitionsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FLeaderboardsGetStatisticDefinitionsRequest();
};

