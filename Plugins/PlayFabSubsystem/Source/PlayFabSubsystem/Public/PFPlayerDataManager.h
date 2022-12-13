#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReceivedTitleDataDelegateDelegate.h"
#include "ReceivedPlayerDataDelegateDelegate.h"
#include "ReceivedPlayerStatsDelegateDelegate.h"
#include "PFPlayerId.h"
#include "PFPlayerDataManager.generated.h"

class UPlayFabSubsystem;

UCLASS(Blueprintable, Within=PlayFabSubsystem)
class PLAYFABSUBSYSTEM_API UPFPlayerDataManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivedTitleDataDelegate OnReceivedTitleData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivedPlayerDataDelegate OnReceivedPlayerData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivedPlayerStatsDelegate OnReceivedPlayerStats;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PlayFabSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsServer;
    
public:
    UPFPlayerDataManager();
    UFUNCTION(BlueprintCallable)
    void ServerSetPlayerStatistics(const FPFPlayerId& PlayerId, const TMap<FString, int32>& Stats, bool ForceSet);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetPlayerReadOnlyData(const FPFPlayerId& PlayerId, const TMap<FString, FString>& Data, bool bReadableByOthers);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetPlayerData(const FPFPlayerId& PlayerId, const TMap<FString, FString>& Data, bool bReadableByOthers);
    
    UFUNCTION(BlueprintCallable)
    void ServerGetPlayerStatistics(const FPFPlayerId& PlayerId, const TArray<FString>& StatNames);
    
    UFUNCTION(BlueprintCallable)
    void ServerGetPlayerReadOnlyData(const FPFPlayerId& PlayerId, const TArray<FString>& Keys);
    
    UFUNCTION(BlueprintCallable)
    void ServerGetPlayerData(const FPFPlayerId& PlayerId, const TArray<FString>& Keys);
    
    UFUNCTION(BlueprintCallable)
    void ServerGetLeaderboard(int32 MaxResultsCount, const FString& StatName, int32 StartPosition, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void ServerGetFriendLeaderboard(const FPFPlayerId& PlayerId, int32 MaxResultsCount, const FString& StatName, int32 StartPosition, int32 Version, const FString& XboxToken);
    
    UFUNCTION(BlueprintCallable)
    void ClientSetPlayerStatistics(const TMap<FString, int32>& Stats);
    
    UFUNCTION(BlueprintCallable)
    void ClientSetPlayerData(const TMap<FString, FString>& Data, bool bReadableByOthers);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetTitleData(const TArray<FString>& Keys);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetPlayerStatisticVersions(const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetPlayerStatistics(const TArray<FString>& StatNames);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetPlayerReadOnlyData(const TArray<FString>& Keys, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetPlayerData(const TArray<FString>& Keys, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetLeaderboardAroundPlayer(const FPFPlayerId& PlayerIdToCenterAround, int32 MaxResultsCount, const FString& StatName, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetLeaderboard(int32 MaxResultsCount, const FString& StatName, int32 StartPosition, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetFriendLeaderboardAroundPlayer(const FPFPlayerId& PlayerIdToCenterAround, int32 MaxResultsCount, const FString& StatName, int32 Version, const FString& XboxToken);
    
    UFUNCTION(BlueprintCallable)
    void ClientGetFriendLeaderboard(int32 MaxResultsCount, const FString& StatName, int32 StartPosition, int32 Version, const FString& XboxToken);
    
};

