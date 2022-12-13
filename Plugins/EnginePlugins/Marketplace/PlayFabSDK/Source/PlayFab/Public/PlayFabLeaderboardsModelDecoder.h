#pragma once
#include "CoreMinimal.h"
#include "LeaderboardsEmptyResponse.h"
#include "LeaderboardsGetStatisticDefinitionResponse.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LeaderboardsGetEntityLeaderboardResponse.h"
#include "LeaderboardsUpdateStatisticsResponse.h"
#include "LeaderboardsIncrementStatisticVersionResponse.h"
#include "LeaderboardsGetStatisticDefinitionsResponse.h"
#include "LeaderboardsDeleteStatisticsResponse.h"
#include "PlayFabLeaderboardsModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabLeaderboardsModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabLeaderboardsModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FLeaderboardsUpdateStatisticsResponse decodeUpdateStatisticsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FLeaderboardsIncrementStatisticVersionResponse decodeIncrementStatisticVersionResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FLeaderboardsGetStatisticDefinitionsResponse decodeGetStatisticDefinitionsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FLeaderboardsGetStatisticDefinitionResponse decodeGetStatisticDefinitionResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FLeaderboardsGetEntityLeaderboardResponse decodeGetEntityLeaderboardResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FLeaderboardsEmptyResponse decodeEmptyResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FLeaderboardsDeleteStatisticsResponse decodeDeleteStatisticsResponseResponse(UPlayFabJsonObject* response);
    
};

