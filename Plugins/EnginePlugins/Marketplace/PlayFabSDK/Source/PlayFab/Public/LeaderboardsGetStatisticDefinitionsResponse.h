#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "LeaderboardsGetStatisticDefinitionsResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsGetStatisticDefinitionsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> StatisticDefinitions;
    
    FLeaderboardsGetStatisticDefinitionsResponse();
};

