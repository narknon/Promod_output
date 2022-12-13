#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameFramework/PlayerState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ENationType.h"
#include "KillMetaData.h"
#include "UObject/NoExportTypes.h"
#include "RoundStats.h"
#include "PlayerKillTime.h"
#include "UObject/NoExportTypes.h"
#include "BattalionPlayerState.generated.h"

class ABattalionPlayerSpawn;
class ABattalionWeapon;
class ABattalionPlayerState;
class UDamageType;

UCLASS(Blueprintable)
class ABattalionPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartingXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartingProScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LoadoutChanged, meta=(AllowPrivateAccess=true))
    FString CurrentLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CachedRelinquishedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D LoadoutCursorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LoadoutConfirmedChanged, meta=(AllowPrivateAccess=true))
    bool bLoadoutConfirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABattalionWeapon>> ShadowInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionWeapon> CurrentlySelectedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ENationType CurrentlySelectedWeaponNation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ShadowNumGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ShadowNumSpecialGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsInteractVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString CardHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsAdmin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor MiniMapColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExperienceGainedFromMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExperienceGainedFromChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ExperienceGainedFromMatchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionPlayerSpawn* SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionPlayerSpawn* FirstSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPartyLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LastKnownPartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ScoreFromMatchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentCallOutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentCallOutUniqueId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ENationType NationType;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 ClassNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumAssists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumHeadshotKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CardsCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumKillsThisRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Quitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumBulletsFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumBulletHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ENationType RespawnNationType;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 RespawnClassNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TeamNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PreviousTeamNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDateTime LastTeamChangeTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool CanBeVotedToKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ScoreboardXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsDev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FRoundStats> RoundStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsBeingABot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsPossessingABot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool PossessedBotInPrevRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsBotPossessedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerState* PossessedBotPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerKillTime> RecentlyKilledPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PreviousKiller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastGrenadeThrowPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DeathStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 KillStreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Clutching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ClutchingAgainst;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool OnlySpectating;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 SpectatingID;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint8 SpectatingIDTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsCaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsOutlineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float UseProgressTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FString> UnlockedSeasonalRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LastKillTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentMultikill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> MutedRemotePlayerIDs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HasInfiniteAmmo, meta=(AllowPrivateAccess=true))
    bool bHasInfiniteAmmo;
    
public:
    ABattalionPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetIsPossessingABot(bool IsPoss);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAlive(bool InAlive);
    
    UFUNCTION(BlueprintCallable)
    void SetHasInfiniteAmmo(const bool bNewHasInfiniteAmmo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetCallOutNameOnServer(const FName NewName, const int32 NewUniqueId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetCallOutNameOnClient(const FName NewName, const int32 NewUniqueId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdatePartyInfo(const TArray<FString>& PartyMembers);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnlockedSeasonalReward(const FString& RewardId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetScoreboardXP(int32 XP);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsAlive(bool InAlive);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIDToMutedRemotePlayersIDList(ABattalionPlayerState* BattPSToRemove);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LoadoutConfirmedChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LoadoutChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_SetIsAlive(bool InAlive);
    
    UFUNCTION(BlueprintCallable)
    bool MutedRemotePlayersIDListContains(ABattalionPlayerState* BattPSToCheck);
    
    UFUNCTION(BlueprintCallable)
    bool HasInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable)
    void GiveInfiniteAmmoForTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    FUniqueNetIdRepl GetUniqueNetIDRepl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRoundStats GetStatsForRound(int32 Round);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetShortPlayerName();
    
    UFUNCTION(BlueprintCallable)
    FString GetNetID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillsThisRound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRoundStats> GetAllRoundStats();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetMatchResultScore(int32 MatchBonus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetScore(const int32& NewScore);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetKills(const int32& NewNumKills);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DisplayMapVoteNotification(const FString& CurrentMapName, const FString& CurrentMapMode, const FString& SubMode);
    
    UFUNCTION(BlueprintCallable)
    void ClearInfiniteAmmoForTime();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastDeath(ABattalionPlayerState* KillerPlayerState, ABattalionPlayerState* AssisterPlayerState, const UDamageType* KillerDamageType, ABattalionPlayerState* KilledPlayerState, FKillMetaData KillMetaData);
    
    UFUNCTION(BlueprintCallable)
    void AddIDToMutedRemotePlayersIDList(ABattalionPlayerState* BattPSToAdd);
    
};

