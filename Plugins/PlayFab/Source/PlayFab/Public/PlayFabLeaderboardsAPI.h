#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "LeaderboardsUpdateStatisticsRequest.h"
#include "LeaderboardsGetEntityLeaderboardResponse.h"
#include "LeaderboardsUpdateStatisticsResponse.h"
#include "LeaderboardsIncrementStatisticVersionRequest.h"
#include "LeaderboardsDeleteStatisticsResponse.h"
#include "PlayFabBaseModel.h"
#include "LeaderboardsIncrementStatisticVersionResponse.h"
#include "LeaderboardsGetStatisticDefinitionsResponse.h"
#include "LeaderboardsGetStatisticDefinitionResponse.h"
#include "LeaderboardsEmptyResponse.h"
#include "PlayFabError.h"
#include "OnPlayFabLeaderboardsRequestCompletedDelegate.h"
#include "LeaderboardsGetStatisticDefinitionsRequest.h"
#include "LeaderboardsGetStatisticDefinitionRequest.h"
#include "LeaderboardsGetLeaderboardForEntitiesRequest.h"
#include "LeaderboardsGetLeaderboardAroundEntityRequest.h"
#include "LeaderboardsGetEntityLeaderboardRequest.h"
#include "LeaderboardsDeleteStatisticsRequest.h"
#include "LeaderboardsDeleteStatisticDefinitionRequest.h"
#include "LeaderboardsCreateStatisticDefinitionRequest.h"
#include "PlayFabLeaderboardsAPI.generated.h"

class UObject;
class UPlayFabAuthenticationContext;
class UPlayFabJsonObject;
class UPlayFabLeaderboardsAPI;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabLeaderboardsAPI : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessUpdateStatistics, FLeaderboardsUpdateStatisticsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessIncrementStatisticVersion, FLeaderboardsIncrementStatisticVersionResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStatisticDefinitions, FLeaderboardsGetStatisticDefinitionsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetStatisticDefinition, FLeaderboardsGetStatisticDefinitionResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardForEntities, FLeaderboardsGetEntityLeaderboardResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboardAroundEntity, FLeaderboardsGetEntityLeaderboardResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessGetLeaderboard, FLeaderboardsGetEntityLeaderboardResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteStatistics, FLeaderboardsDeleteStatisticsResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessDeleteStatisticDefinition, FLeaderboardsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnSuccessCreateStatisticDefinition, FLeaderboardsEmptyResponse, Result, UObject*, customData);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnFailurePlayFabError, FPlayFabError, Error, UObject*, customData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabLeaderboardsRequestCompleted OnPlayFabResponse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* CallAuthenticationContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* RequestJsonObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* ResponseJsonObj;
    
public:
    UPlayFabLeaderboardsAPI();
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* UpdateStatistics(FLeaderboardsUpdateStatisticsRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessUpdateStatistics onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* IncrementStatisticVersion(FLeaderboardsIncrementStatisticVersionRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessIncrementStatisticVersion onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    void HelperUpdateStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperIncrementStatisticVersion(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetStatisticDefinitions(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardForEntities(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboardAroundEntity(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperGetLeaderboard(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteStatistics(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperDeleteStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    void HelperCreateStatisticDefinition(FPlayFabBaseModel response, UObject* customData, bool successful);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* GetStatisticDefinitions(FLeaderboardsGetStatisticDefinitionsRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetStatisticDefinitions onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* GetStatisticDefinition(FLeaderboardsGetStatisticDefinitionRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetStatisticDefinition onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* GetLeaderboardForEntities(FLeaderboardsGetLeaderboardForEntitiesRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetLeaderboardForEntities onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* GetLeaderboardAroundEntity(FLeaderboardsGetLeaderboardAroundEntityRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetLeaderboardAroundEntity onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* GetLeaderboard(FLeaderboardsGetEntityLeaderboardRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessGetLeaderboard onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* DeleteStatistics(FLeaderboardsDeleteStatisticsRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessDeleteStatistics onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* DeleteStatisticDefinition(FLeaderboardsDeleteStatisticDefinitionRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessDeleteStatisticDefinition onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
    UFUNCTION(BlueprintCallable)
    static UPlayFabLeaderboardsAPI* CreateStatisticDefinition(FLeaderboardsCreateStatisticDefinitionRequest Request, UPlayFabLeaderboardsAPI::FDelegateOnSuccessCreateStatisticDefinition onSuccess, UPlayFabLeaderboardsAPI::FDelegateOnFailurePlayFabError onFailure, UObject* customData);
    
};

