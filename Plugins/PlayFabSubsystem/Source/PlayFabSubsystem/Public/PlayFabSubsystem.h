#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoginCompletedDelegateDelegate.h"
#include "ReceivedServerBuildIdDelegateDelegate.h"
#include "PFPlayerId.h"
#include "PlayFabSubsystem.generated.h"

class UPFPlayerDataManager;
class UPlayFabSubsystemSettings;
class UPFPlayerIdCache;
class UBIPF_PlatformHelper;
class UPFGroupManager;
class UPFMatchmakingManager;
class UPFMatchmakingInterop;
class UPFServerSlotManager;
class UPFRegionManager;
class UPlayFabAuthenticationContext;

UCLASS(Blueprintable)
class PLAYFABSUBSYSTEM_API UPlayFabSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoginCompletedDelegate OnLoginCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReceivedServerBuildIdDelegate OnReceivedServerBuildId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystemSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBIPF_PlatformHelper* PlatformHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoggedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoginControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildCL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerBuildId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GetServerBuildIdRetries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFPlayerIdCache* PlayerIdCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFPlayerDataManager* PlayerDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFGroupManager* GroupManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFMatchmakingManager* MatchmakingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFMatchmakingInterop* MatchmakingInterop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFServerSlotManager* ServerSlotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFRegionManager* RegionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFPlayerId LocalClientPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabAuthenticationContext* LocalClientAuthenticationContextObj;
    
public:
    UPlayFabSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetBuildCL(const FString& InBuildCL);
    
    UFUNCTION(BlueprintCallable)
    void Login(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPFServerSlotManager* GetServerSlotManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPFRegionManager* GetRegionManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPFPlayerIdCache* GetPlayerIdCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPFPlayerDataManager* GetPlayerDataManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPFMatchmakingManager* GetMatchmakingManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPFMatchmakingInterop* GetMatchmakingInterop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPFPlayerId GetLocalClientPlayerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsServer() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLoggedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPFGroupManager* GetGroupManager() const;
    
};

