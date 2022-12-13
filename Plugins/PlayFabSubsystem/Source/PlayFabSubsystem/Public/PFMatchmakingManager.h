#pragma once
#include "CoreMinimal.h"
#include "PartyMatchmakingReadyToJoinDelegateDelegate.h"
#include "UObject/Object.h"
#include "FoundMatchDelegateDelegate.h"
#include "MatchmakingCancelledDelegateDelegate.h"
#include "StopMatchmakingCompletedDelegateDelegate.h"
#include "PFPlayerInfo.h"
#include "PFPlayerId.h"
#include "RegionLatency.h"
#include "PFMatchmakingManager.generated.h"

class UPlayFabSubsystem;

UCLASS(Blueprintable, DefaultConfig, Config=Game, Within=PlayFabSubsystem)
class PLAYFABSUBSYSTEM_API UPFMatchmakingManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoundMatchDelegate OnFoundMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingCancelledDelegate OnMatchmakingCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStopMatchmakingCompletedDelegate OnStopMatchmakingCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMatchmakingReadyToJoinDelegate OnPartyMatchmakingReadyToJoin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PlayFabSubsystem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LonelyMatchmakerThreshold;
    
public:
    UPFMatchmakingManager();
    UFUNCTION(BlueprintCallable)
    void StopMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    bool StartSoloMatchmaking(const FString& InBaseQueueName, const FPFPlayerInfo& InPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    bool StartPartyMatchmaking(const FString& InBaseQueueName, const FPFPlayerInfo& InPartyLeaderInfo, const TArray<FPFPlayerId>& InPartyMemberIds, const bool bCrossPlay);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedServerBuildId(const FString& InServerBuildId);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginCompleted(int32 ControllerId, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnCalculatedRegionLatencies(const TArray<FRegionLatency>& RegionLatencies, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    bool JoinPartyMatchmaking(const FString& InBaseQueueName, const FPFPlayerInfo& InPlayerInfo, const FString& InMatchmakingTicketId);
    
};

