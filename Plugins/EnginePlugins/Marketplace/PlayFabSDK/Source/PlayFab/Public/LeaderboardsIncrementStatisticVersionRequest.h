#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "LeaderboardsIncrementStatisticVersionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsIncrementStatisticVersionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FLeaderboardsIncrementStatisticVersionRequest();
};

