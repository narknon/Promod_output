#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BattalionLoadoutClaim.h"
#include "UObject/NoExportTypes.h"
#include "EGameActionsAllowed.h"
#include "BattalionPlayerController.generated.h"

class UAkAudioEvent;
class ABattalionPlayerState;
class UBattalionSettings;
class AActor;
class ASpectatorPawn;
class UBattalionGameInstance;

UCLASS(Blueprintable)
class ABattalionPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookSensitivityZoomedZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* BattalionPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsListeningForInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool JustJoined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastUsedSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ForceNoRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastGoalYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPingCalcTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementAndInputSpeedModifier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FinalViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteClip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHealthRegen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bGodMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MatchWonSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MatchLostSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RoundWonSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RoundLostSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LastManSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BombCollectedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BombDroppedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BombPlantedAllySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BombPlantedEnemySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpectatorPawn* DeathSpectatorPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
public:
    ABattalionPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleTeamSelect();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Suicide();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetUnready();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SetReady(uint8 TeamId, uint8 NationID, uint8 WeaponID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLookSensitivityZoomedZero(float Sens);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGodMode(bool bEnable);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerWeaponSelected(uint8 WeaponID);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdatePing(float exactPing);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTeamSelected(uint8 TeamId);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSuicide();
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSay(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestWeaponChange();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestTeamChange();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerModifyLoadoutClaim(FBattalionLoadoutClaim ExistingClaim, FBattalionLoadoutClaim NewClaim, int32 Slot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoadoutConfirmed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheat(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelTeamChange();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerBouncePing(float Timestamp);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBattRestartPlayer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddLoadoutClaim(FBattalionLoadoutClaim Claim, int32 Slot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_VoteForMapMode(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnPlayerFromSpectator();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Say(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RecievedReadyResponse(bool accepted);
    
    UFUNCTION(BlueprintCallable)
    void ReadyUp(uint8 TeamId, uint8 NationID, uint8 WeaponID);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponSelected(uint8 WeaponID);
    
    UFUNCTION(BlueprintCallable)
    void OnTeamSelected(uint8 TeamId);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutConfirmed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastUsedInputXbox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastUsedInputGamepad() const;
    
    UFUNCTION(BlueprintCallable)
    void FindGoodView(const FVector& TargetLoc, bool bIsUpdate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateTeamLoadout(int32 TeamId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowWeaponSelection(int32 WeaponID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowTeamSelection();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowTeamLoadout(int32 TeamId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendRoundEndEvent(bool bIsWinner, int32 ExpendedTimeInSeconds);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientReturnPing(float Timestamp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestedTeamChangeResult(bool Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPostAudioEventReliable(UAkAudioEvent* Sound);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPostAudioEvent(UAkAudioEvent* Sound);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHideTeamSelection();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHideTeamLoadout();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleLastManEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGameStarted();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAllowGameActions(EGameActionsAllowed GameActionsAllowed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RecogniseLoadoutClaim(FBattalionLoadoutClaim Claim, int32 Slot, bool Force);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PostAudioEventAtLocation(UAkAudioEvent* Sound, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnPlayerSpawned();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ClearPlayerNames();
    
    UFUNCTION(BlueprintCallable)
    bool AreWeAServer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplySettings();
    
};

