#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnMatchmakingStartedDelegate.h"
#include "EMatchmakingQueue.h"
#include "StatData.h"
#include "OnMatchmakingEndedDelegate.h"
#include "MapPackStatsEntity.h"
#include "EWeaponType.h"
#include "GameFramework/OnlineReplStructs.h"
#include "MapStatList.h"
#include "EMapPackGamemode.h"
#include "PFPlayerId.h"
#include "PFPlayerStat.h"
#include "EOnlinePlatform.h"
#include "PFPlayerData.h"
#include "PFPlayerInfo.h"
#include "ProScoreInfo.h"
#include "BattalionOnline.generated.h"

class UPFPlayerDataManager;
class UBattalionSettings;
class UBattalionGameInstance;
class UPFPlayerIdCache;
class UPFMatchmakingManager;
class ABattalionPlayerState;

UCLASS(Blueprintable, Config=Game, Within=BattalionGameInstance)
class UBattalionOnline : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MapPackRequestQueue;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 XPMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnMatchmakingStarted OnMatchmakingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnMatchmakingEnded OnMatchmakingEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFriendlyNamesForBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeaderboardRetrieved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStatData> MapPersonalBestStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StatsRetrieved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMapPackStatsEntity> MapPackStatsCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPFPlayerDataManager* PFPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPFPlayerIdCache* PFPlayerCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPFMatchmakingManager* PFMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PremiumDLCProductID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KickstarterDLCProductID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AltTitleID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AltPremiumDLCProductID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AltKickstarterDLCProductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerNameOverridden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverriddenPlayerName;
    
public:
    UBattalionOnline();
    UFUNCTION(BlueprintCallable)
    void ToggleDebugMatchmakingRequest();
    
    UFUNCTION(BlueprintCallable)
    void SubmitPlayerStat(const FString& StatName, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void StopMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(EMatchmakingQueue Queue);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayerProfile(const FUniqueNetIdRepl& UniqueID);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSkinEquipped(EWeaponType Type, const FString& SkinId);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReportPlayer(ABattalionPlayerState* Requestor, ABattalionPlayerState* Reportee, const FString& ReportReason);
    
    UFUNCTION(BlueprintCallable)
    void Server_OnTimedOutPlayers();
    
    UFUNCTION(BlueprintCallable)
    void Server_OnMatchStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestStatsForPlayer(TArray<FString> StatNames);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayerStatsForMapPacks(TArray<FString> PackNames);
    
    UFUNCTION(BlueprintCallable)
    void RequestPersonalBestStatsForPlayer(TArray<FString>& StatNames);
    
    UFUNCTION(BlueprintCallable)
    void RequestMapStatsForPlayer(const FString& MapName, bool IsJumper);
    
    UFUNCTION(BlueprintCallable)
    void RequestLeaderboardForStatAroundPlayer(int32 MaxResultsCount, const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    void RequestLeaderboardForStat(int32 StartPosition, int32 MaxResultsCount, const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendLeaderboardAroundPlayer(int32 MaxResultsCount, const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    FMapStatList RequestCachedMapLeaderboard(EMapPackGamemode GameMode, const FString& MapUUID);
    
    UFUNCTION(BlueprintCallable)
    void OutputToLog(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void OpenUrlThroughSteam(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void OpenSteamStorePage();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedPlayerStats(const FPFPlayerId& PlayerId, const TArray<FPFPlayerStat>& Stats);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedPlayerData(const FPFPlayerId& PlayerId, const TArray<FPFPlayerData>& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyMatchmakingReadyToJoin(const FString& MatchmakingTicketId, const FString& BaseQueueName, bool bCrossPlay);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingFailed(int32 ErrorCode, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingCompleted(const TArray<FPFPlayerInfo>& MatchMembers, const FString& ServerURL);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoginSucceeded(int32 ControllerId, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmaking() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLocalPlayer(const FUniqueNetIdRepl& OtherPlayerID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCrossPlatformNetId(const FUniqueNetIdRepl& PlatformId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCrossPlatform(EOnlinePlatform PlatformType);
    
    UFUNCTION(BlueprintCallable)
    bool GetPurchasedPremiumTier();
    
    UFUNCTION(BlueprintCallable)
    FProScoreInfo GetProScoreInfo(int32 ProScore);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerSkinEquipped(EWeaponType Type, const FString& SkinId);
    
    UFUNCTION(BlueprintCallable)
    FString GetPlayerName();
    
    UFUNCTION(BlueprintCallable)
    static EOnlinePlatform GetPlatformFromNetId(const FUniqueNetIdRepl& PlatformId);
    
    UFUNCTION(BlueprintCallable)
    bool GetHasKickstarterDLC();
    
    UFUNCTION(BlueprintCallable)
    bool GetDisplayPurchasePremiumTier();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentXP();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentProScore();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentPlayerLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCachedStat(const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    FString GetCachedSkin(EWeaponType Type);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCachedMedalProgress(const FString& MedalName);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueMapPackRequest(TArray<FString> StatNames);
    
    UFUNCTION(BlueprintCallable)
    static bool AreCrossPlatformNetIds(const FUniqueNetIdRepl& PlatformIdA, const FUniqueNetIdRepl& PlatformIdB);
    
    UFUNCTION(BlueprintCallable)
    static bool AreCrossPlatform(EOnlinePlatform PlatformTypeA, EOnlinePlatform PlatformTypeB);
    
};

