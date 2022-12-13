#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameOverviewConfig.h"
#include "NUIGameOverview.h"
#include "EGameOverview.h"
#include "Components/SlateWrapperTypes.h"
#include "EDOMZoneStatus.h"
#include "NUIConsoleGeneralOverview.generated.h"

class AFFAPlayerState;
class ADOMMode_Zone;
class UNUIBombGameOverviewAvatar;
class ABombPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIConsoleGeneralOverview : public UNUIGameOverview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameOverview GameOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverviewConfig Wartide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverviewConfig FFA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverviewConfig TDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverviewConfig DOM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverviewConfig Grenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverviewConfig ShowAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverviewConfig CurrentOverviewConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNUIBombGameOverviewAvatar*> LeftTeamWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNUIBombGameOverviewAvatar*> RightTeamWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBombGameOverviewAvatar> AvatarWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABombPlayerState*> LeftPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABombPlayerState*> RightPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeftTeamAliveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RightTeamAliveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SpectatorScoreVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LeftTeamAvatarsVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RightTeamAvatarsVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LeftTeamAliveCountVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RightTeamAliveCountVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SpectatorBombInteractionTimerVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombInteractionProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFFAPlayerState* OpponentPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeftLeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RightLeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility LeftLeaderVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility RightLeaderVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMMode_Zone* LastZoneEntered;
    
    UNUIConsoleGeneralOverview();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WartidePlayersAliveChanged(int32 LeftSideAlive, int32 RightSideAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateZoneStatusProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBombInteractionStatusProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowZoneStatus(const FString& ZoneLabel, bool Instant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTutorialPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBombInteractionStatus(bool IsDefusing, bool Instant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetTutorialPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetAllPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStateChanged(FName NewMatchState, FName PreviousMatchState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NationInfoChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaderChanged(int32 newLeaderTeam, int32 lastLeaderTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentOverview(EGameOverview overview) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBombTimerActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideZoneStatus(bool Instant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBombInteractionStatus(bool Instant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeZoneStatusAllegiance(bool IsFriendly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeZoneStatus(EDOMZoneStatus ZoneStatus);
    
};

