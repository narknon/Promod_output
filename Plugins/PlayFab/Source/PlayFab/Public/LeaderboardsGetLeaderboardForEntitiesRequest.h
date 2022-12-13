#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "LeaderboardsGetLeaderboardForEntitiesRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsGetLeaderboardForEntitiesRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Entities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatisticVersion;
    
    FLeaderboardsGetLeaderboardForEntitiesRequest();
};

