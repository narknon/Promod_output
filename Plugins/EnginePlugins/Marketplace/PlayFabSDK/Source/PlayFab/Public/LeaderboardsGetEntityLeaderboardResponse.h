#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "LeaderboardsGetEntityLeaderboardResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsGetEntityLeaderboardResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Rankings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatisticVersion;
    
    FLeaderboardsGetEntityLeaderboardResponse();
};

