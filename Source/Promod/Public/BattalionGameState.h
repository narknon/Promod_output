#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameStateBase.h"
#include "MapModeVoteInfo.h"
#include "BattalionLoadoutDeckInstance.h"
#include "RoundWinCondition.h"
#include "MatchStateMulticastDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "LoadoutCard.h"
#include "UObject/NoExportTypes.h"
#include "ENationType.h"
#include "BattalionGameState.generated.h"

class ABattalionGrenade;
class ABattalionStunGrenade;
class ABattalionFlashGrenade;
class ABattalionMarket;
class ABattalionSmokeGrenade;
class AActor;
class ASmokeGrenadeVolume;
class UBattalionTeam;
class ABattalionLoadoutSystem;
class ABattalionPlayerState;

UCLASS(Blueprintable)
class ABattalionGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapModeVoteInfo> MapModeVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool TeamDeckDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionMarket* ClientMarket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionMarket> ClientMarketClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABattalionMarket* Market;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString ShortModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString LongModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString SubModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MatchState, meta=(AllowPrivateAccess=true))
    FName MatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName ServerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ElapsedTimeInState;
    
    UPROPERTY(EditAnywhere, Replicated)
    int64 WaitingToStartTimer;
    
    UPROPERTY(EditAnywhere, Replicated)
    int64 MatchStartTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    int64 MatchEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName StartType;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    uint8 Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 StratTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CinematicSetupRoundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SetupRoundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PostRoundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PostMatchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool FriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CountdownToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SetupCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StratCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumNations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastThrownGrenade, meta=(AllowPrivateAccess=true))
    ABattalionGrenade* LastThrownGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastThrownSmoke, meta=(AllowPrivateAccess=true))
    ABattalionSmokeGrenade* LastThrownSmoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastThrownFlash, meta=(AllowPrivateAccess=true))
    ABattalionFlashGrenade* LastThrownFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastThrownStun, meta=(AllowPrivateAccess=true))
    ABattalionStunGrenade* LastThrownStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABattalionGrenade*> InPlayGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABattalionSmokeGrenade*> InPlaySmokes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASmokeGrenadeVolume*> InPlaySmokeVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABattalionFlashGrenade*> InPlayFlashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABattalionStunGrenade*> InPlayStuns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InPlayTrophySystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InPlayDeployableCovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InPlayAmmoBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBattalionTeam*> Teams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatAdminCmdsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName RoundEndReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamDeckChanged, meta=(AllowPrivateAccess=true))
    TArray<FBattalionLoadoutDeckInstance> TeamDecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABattalionLoadoutSystem* LoadoutSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumPlayersToFillServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool SpectatorTeamEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ServerAverageFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool CheatsDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoundWinCondition> PrevRoundWinConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool StratMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ScoreToWinRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AdminRevealAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AdminFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool AdminPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool EnableEnemyPlayerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bBackfillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABattalionPlayerState*> MatchMVPList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ProScoreDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ProScoreWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ProScoreLoss;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchStateMulticastDelegate OnMatchStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MatchIdChanged, meta=(AllowPrivateAccess=true))
    FGuid MatchID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RoundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 AdditionalRoundTime;
    
public:
    ABattalionGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamDeckChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchState(FName OldMatchState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchIdChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastThrownStun();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastThrownSmoke();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastThrownGrenade();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastThrownFlash();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPlayersOfForcedMapVote(const FString& CurrentMapName, const FString& CurrentMapMode, const FString& SubMode);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMapModeVoteOptions(const TArray<FMapModeVoteInfo>& Options);
    
    UFUNCTION(BlueprintCallable)
    bool IsLocalMatch();
    
    UFUNCTION(BlueprintCallable)
    bool IsInPreGame();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetWinningTeamNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTeamScore(UBattalionTeam* Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBattalionTeam* GetTeam(int32 TeamIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetScoreToWinRound();
    
    UFUNCTION(BlueprintCallable)
    FLoadoutCard GetPlayerClassCard(ABattalionPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetElapsedMatchTime();
    
    UFUNCTION(BlueprintCallable)
    TArray<FLoadoutCard> GetAvailableCards(int32 Team);
    
    UFUNCTION(BlueprintCallable)
    FLoadoutCard FindLoadoutCard(const FString& CardName, ENationType Nation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetTopPlayers(const TArray<ABattalionPlayerState*>& PlayerStates);
    
    UFUNCTION(BlueprintCallable)
    bool CanReportPlayer();
    
};

