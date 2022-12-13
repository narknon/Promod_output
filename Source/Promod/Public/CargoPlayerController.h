#pragma once
#include "CoreMinimal.h"
#include "PromodTDMPlayerController.h"
#include "ECargoNotificationState.h"
#include "CargoResultData.h"
#include "CargoPlayerController.generated.h"

UCLASS(Blueprintable)
class ACargoPlayerController : public APromodTDMPlayerController {
    GENERATED_BODY()
public:
    ACargoPlayerController();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_UpdateSafeZoneMovement();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateUI();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateSafeZones(const FName CurrentMatchState, const int32 CurrentCheckpoint);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateCheckpointNotification(ECargoNotificationState State);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowTugOfWarVictory(const float FinalProgress, const bool bWeWon, const float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowTugOfWarOverview();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetCargoVictoryState(const FCargoResultData& OurResult, const FCargoResultData& TheirResult, const int32 WinningTeam, const int32 MyTeam, const bool bIsTimeRelevant, const float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetCargoResultState(const FCargoResultData& Result, bool bWasPusher, bool bIsTimeRelevant);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayCargoAdvantageAnimation(const bool bNoAdvantage, const float TimeDifference, const float Advantage, const int32 AdvantageTeam, const float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnSuddenDeathStarted();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CheckpointReached(int32 CheckpointIdx);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CheckpointPipReached(int32 CheckpointIdx, const int32 PipIdx);
    
};

