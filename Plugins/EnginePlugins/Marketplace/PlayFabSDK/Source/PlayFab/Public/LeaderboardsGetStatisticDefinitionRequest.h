#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "LeaderboardsGetStatisticDefinitionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsGetStatisticDefinitionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FLeaderboardsGetStatisticDefinitionRequest();
};

