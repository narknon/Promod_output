#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "JoinSessionDynamicDelegateDelegate.h"
#include "LobbyConnectionDynamicDelegateDelegate.h"
#include "NuclearSessionResult.h"
#include "NuclearSessionSettings.h"
#include "UpdateSessionDynamicDelegateDelegate.h"
#include "StartSessionDynamicDelegateDelegate.h"
#include "ENuclearSessionSettingType.h"
#include "LeaveSessionDynamicDelegateDelegate.h"
#include "HostSessionDynamicDelegateDelegate.h"
#include "PlayerAvatarDynamicDelegateDelegate.h"
#include "FindSessionsDynamicDelegateDelegate.h"
#include "NuclearOnlineSystem.generated.h"

class AOnlineBeaconHost;
class ANuclearLobbyHost;
class ANuclearLobbyClient;
class ULocalPlayer;
class APlayerState;

UCLASS(Blueprintable)
class NUCLEARCORE_API UNuclearOnlineSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinSessionDynamicDelegate OnJoinSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyConnectionDynamicDelegate OnPlayerJoinedLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyConnectionDynamicDelegate OnPlayerLeftLobby;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOnlineBeaconHost* LobbyListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANuclearLobbyHost* LobbyHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANuclearLobbyClient* LobbyClient;
    
public:
    UNuclearOnlineSystem();
    UFUNCTION(BlueprintCallable)
    bool UpdateSession(const FNuclearSessionSettings& Settings, const FUpdateSessionDynamicDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    bool StartSession(const FStartSessionDynamicDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowPlayerProfile(const FUniqueNetIdRepl& PlayerNetId) const;
    
private:
    UFUNCTION(BlueprintCallable)
    static void SetSessionCustomSetting(const FNuclearSessionSettings& Settings, const FName& Name, const ENuclearSessionSettingType& Type, const FString& Value);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LeaveSession(const FLeaveSessionDynamicDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    bool JoinSession(const FNuclearSessionResult& TargetSession, const FString& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIn(ULocalPlayer* TargetLP) const;
    
    UFUNCTION(BlueprintCallable)
    bool HostSession(const FNuclearSessionSettings& Settings, const FHostSessionDynamicDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSessionSettings(FNuclearSessionSettings& OutSettings) const;
    
    UFUNCTION(BlueprintCallable)
    static FName GetSessionName();
    
private:
    UFUNCTION(BlueprintCallable)
    static bool GetSessionCustomSetting(const FNuclearSessionSettings& Settings, const FName& Name, ENuclearSessionSettingType& Type, FString& Value);
    
public:
    UFUNCTION(BlueprintCallable)
    static FUniqueNetIdRepl GetRemotePlayerNetId(APlayerState* TargetPS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName(const FUniqueNetIdRepl& PlayerNetId, const int32 MaxLength) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerAvatar(const FUniqueNetIdRepl& PlayerNetId, const FPlayerAvatarDynamicDelegate& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetLocalPlayerNetId(ULocalPlayer* TargetLP) const;
    
    UFUNCTION(BlueprintCallable)
    bool FindSessions(const FNuclearSessionSettings& SearchParams, const FFindSessionsDynamicDelegate& Callback, const int32 MaxResults);
    
};

