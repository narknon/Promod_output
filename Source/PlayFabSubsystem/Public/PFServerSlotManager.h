#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatchStartedDelegateDelegate.h"
#include "TimedOutPlayersDelegateDelegate.h"
#include "BackfilledPlayersDelegateDelegate.h"
#include "PFPlayerId.h"
#include "PFMatchInfo.h"
#include "PFPlayerInfo.h"
#include "PFServerSlotManager.generated.h"

class UPlayFabSubsystem;

UCLASS(Blueprintable, Within=PlayFabSubsystem)
class PLAYFABSUBSYSTEM_API UPFServerSlotManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchStartedDelegate OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackfilledPlayersDelegate OnBackfilledPlayers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedOutPlayersDelegate OnTimedOutPlayers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PlayFabSubsystem;
    
public:
    UPFServerSlotManager();
    UFUNCTION(BlueprintCallable)
    bool TryGetPlayerInfoFromTitleId(const FString& TitlePlayerId, FPFPlayerInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    bool TryGetPlayerInfo(const FPFPlayerId& PlayerId, FPFPlayerInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerInSlotFromTitleId(const FString& TitlePlayerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerInSlot(const FPFPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumFreeSlots();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumFilledSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMatchInfo(FPFMatchInfo& OutMatchInfo) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FPFPlayerInfo> GetFilledSlots();
    
};

