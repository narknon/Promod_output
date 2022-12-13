#pragma once
#include "CoreMinimal.h"
#include "EStatisticAggregationMethod.h"
#include "PlayFabRequestCommon.h"
#include "LeaderboardsCreateStatisticDefinitionRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FLeaderboardsCreateStatisticDefinitionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatisticAggregationMethod AggregationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* LeaderboardDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FLeaderboardsCreateStatisticDefinitionRequest();
};

