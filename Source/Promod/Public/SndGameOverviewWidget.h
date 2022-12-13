#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "SndGameOverviewWidget.generated.h"

class APlayerState;
class APromodGameState;
class UBattalionTeam;
class APromodPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class USndGameOverviewWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentRoundText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeftTeamSCoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RightTeamScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BombTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReadyUpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayersNotReadyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> Players_Team0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> Players_Team1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttackTeamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefenceTeamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LeftTeamScoreVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RightTeamScoreVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility BombPlantedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ReadyUpVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility NotReadyPlayersVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodGameState* pGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodPlayerController* pOwningPlayercontroller;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionTeam* Team01Ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionTeam* Team02Ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasHitShootoutOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedTotalAlivePlayers;
    
public:
    USndGameOverviewWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamScores();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateScores();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBombTimer(float Current, float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeamPlayersStatusChanged();
    
    UFUNCTION(BlueprintCallable)
    void SortShootoutTeams();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowAndupdateBombTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Ready();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBombTimerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBombTimerEnd(bool bExploded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideBombTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateTimer(const FText& TimerTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateRoundNumber(int32 RoundNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateProgressBars(int32 Team0Score, int32 Team1Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLastManStanding(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchStateChanged(const FName& NewMatchState, const FName& PreviousMatchState);
    
};

