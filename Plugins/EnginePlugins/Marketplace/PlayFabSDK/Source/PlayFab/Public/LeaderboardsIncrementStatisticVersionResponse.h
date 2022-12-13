#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "LeaderboardsIncrementStatisticVersionResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsIncrementStatisticVersionResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionToBeDeleted;
    
    FLeaderboardsIncrementStatisticVersionResponse();
};

