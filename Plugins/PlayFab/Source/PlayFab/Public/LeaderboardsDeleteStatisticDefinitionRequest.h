#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "LeaderboardsDeleteStatisticDefinitionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsDeleteStatisticDefinitionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FLeaderboardsDeleteStatisticDefinitionRequest();
};

