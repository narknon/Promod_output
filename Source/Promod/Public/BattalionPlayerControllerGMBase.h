#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BotEnemyInfo.h"
#include "BattalionPlayerController.h"
#include "UObject/NoExportTypes.h"
#include "ESpectatorCameraMode.h"
#include "OnVoteFinishedDelegate.h"
#include "OnKickTimerWarningDelegate.h"
#include "Engine/EngineTypes.h"
#include "OnUpdateInteractionProgressDelegate.h"
#include "OnNewVoteReceivedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "OnVoteCastedDelegate.h"
#include "GameFramework/PlayerInput.h"
#include "OnSelfVoteCastedDelegate.h"
#include "StatInfo.h"
#include "BotFriendlyInfo.h"
#include "UObject/NoExportTypes.h"
#include "EVoiceKey.h"
#include "ENationType.h"
#include "OnKickTimerResetDelegate.h"
#include "ScoreboardData.h"
#include "GameFramework/OnlineReplStructs.h"
#include "BattalionLoadoutClaim.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SpectatorRules.h"
#include "EChatChannels.h"
#include "Camera/PlayerCameraManager.h"
#include "CompletedChallenges.h"
#include "PlayerInfoMinimal.h"
#include "EActionPrompt.h"
#include "Components/SlateWrapperTypes.h"
#include "BattalionPlayerControllerGMBase.generated.h"

class ULevelSequencePlayer;
class ULevelSequence;
class ASpectatorPawn;
class ABattalionPlayerState;
class AActor;
class ABotPOI;
class ABattalionGrenade;
class UBattalionPathFollowingComponent;
class ABotFollowActor;
class ABattalionCharacter;
class ABattalionGameMode;
class UBattalionDamageType;
class UNavigationQueryFilter;
class UVOManager;
class APlayerStart;
class UAkComponent;
class UAkAudioEvent;
class ABattalionWeapon;
class UBattalionMedalsDataAsset;
class UCameraShakeBase;
class ABattalionWeaponPickup;
class APlayerState;
class USoundBase;
class ABattalionPlayerControllerGMBase;
class ABattalionSmokeGrenade;
class APawn;
class APromodPlayerState;
class ABattalionWeapon_Instant;

UCLASS(Blueprintable)
class ABattalionPlayerControllerGMBase : public ABattalionPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* SequenceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ControllerReadyUpTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WorldLoadPlayed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateInteractionProgress OnUpdateInteractionProgressDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewVoteReceived OnNewVoteReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteCasted OnVoteCasted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoteFinished OnVoteFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelfVoteCasted OnSelfVoteCasted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchSidesUIDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGrenade* ViewedGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bSpectateBehindView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* LastSpectatedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSpectatedPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpectator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMovementAndInputOnSpawn;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnViewerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorPawn> ProfilingPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattalionPathFollowingComponent* PathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBotEnemyInfo> BotEnemyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBotFriendlyInfo> BotFriendlyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABotPOI*> BotPOIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABotPOI* CurrentPOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABotPOI* DesiredPOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BotOnLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABotFollowActor* BotFollowActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* BotTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* BotPendingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattalionCharacter*> BotVisibleEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGameMode* CurrentGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AdditiveControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBeingABot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> DefaultNavigationFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* PossessedBotPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSurrenderState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOfferSurrender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsApplicableForMatchBonus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKickTimerReset OnKickTimerReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKickTimerWarning OnKickTimerWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KickWarningStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bKickTimerVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MutedChatIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, float> DamageReceivedReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, float> DamageGivenReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FScoreboardData> ScoreboardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceHideAllUIFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRecordingReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldPlayVoiceLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerStart* LastSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopReloadSounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionCheckDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_OcclusionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle VoiceInstructionTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVOManager* VOManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> MutedIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> ServerMutedIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LevelUpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChallengeCompletedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResumeMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CriticalTickEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Battlerank_RankUpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VoteStartedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VoteCastEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<ABattalionWeapon>> WeaponClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MatchState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionMedalsDataAsset* MedalDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MedalEarnedSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> PersonalMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* LookingAtFriendly;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeaponVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShakeBase* FlashCameraShakeInstancePtr;
    
public:
    ABattalionPlayerControllerGMBase();
    UFUNCTION(BlueprintCallable)
    void WeaponSwitchedUpdatePickup(ABattalionWeapon* CurrentWeapon, ABattalionWeaponPickup* PickupWeapon);
    
    UFUNCTION(BlueprintCallable)
    void ViewPlayerNum(uint8 Index, uint8 TeamNum);
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDWeapons(uint8 SpectatingID, const UBattalionDamageType* PrimaryWeapon, const UBattalionDamageType* SecondaryWeapon, const UBattalionDamageType* Knife, bool bPrimaryEquipped, bool bKnifeEquipped);
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDWeapon(uint8 SpectatingID, const UBattalionDamageType* Weapon);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateSpectatorHUDPlayerState(APlayerState* PS);
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDHealth(uint8 SpectatingID, float Health);
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDGrenadeCount(uint8 SpectatingID, bool IsSmoke, int32 Count);
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDCalloutVolumeExited(uint8 SpectatingID, const FString& Text, int32 UniqueID);
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDCalloutVolumeEntered(uint8 SpectatingID, const FString& Text, int32 UniqueID);
    
    UFUNCTION(Client, Reliable)
    void UpdateSpectatorHUDAmmoCount(uint8 SpectatingID, int32 WeaponAmmo, int32 ReserveAmmo, bool Fired, bool Reloaded, bool bInfiniteAmmo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateCurrentlySpectating(ABattalionPlayerState* PS);
    
    UFUNCTION(BlueprintCallable)
    void ToggleNationSelect();
    
    UFUNCTION(Client, Reliable)
    void SpectatorStartHealthRegen(uint8 SpectatingID);
    
    UFUNCTION(Client, Reliable)
    void Spectator_ClearPlayerStatBar(uint8 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInitialWeaponSelect(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHasBeenInitialWeaponSelect(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableMovementAndInputOnSpawn(const bool bInDisableMovementAndInputOnSpawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerViewPlayerState(APlayerState* PS);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerViewGrenade(ABattalionPlayerControllerGMBase* PC);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCameraStyle(ABattalionPlayerControllerGMBase* PC, FName NewStyle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerManualViewPrevPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerManualViewNextPlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerControlledUnmutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerControlledMutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnmutePlayerChat(ABattalionPlayerState* UnmutedPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ToggleReplay();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TogglePlayerReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnProfilingSmokeGrenade(TSubclassOf<ABattalionSmokeGrenade> SmokeGrenadeClass, FTransform SpawnTransform, APawn* SpawnInstigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnProfilingGrenade(TSubclassOf<ABattalionGrenade> GrenadeClass, FTransform SpawnTransform, APawn* SpawnInstigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnProfilingActor(TSubclassOf<AActor> SpawnClass, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetTeam(int32 Team);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSpectatorCameraMode(ESpectatorCameraMode NewMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetSpectating();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetNation(ENationType Nation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLoadoutCursorPosition(FVector2D NewCursorPosition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsInitialWeaponSelect(bool NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetInfectionTeam(int32 Team);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHasBeenInitialWeaponSelect(bool NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetClass(int32 Class);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetAutoTeam();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendMessage(const FText& Message, EChatChannels Channel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestOutline();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ProcessGameModeCommand(const FString& Command, ABattalionPlayerControllerGMBase* PC);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayerRequestSetTeam();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayerRequestSetNation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayerRequestSetClass();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayerRequestChangeLoadout();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OrderBotsToLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStopUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStopQuickUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStartUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStartQuickUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_NotifyLocalPlayerTalkingStateChanged(bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MutePlayerChat(ABattalionPlayerState* MutedPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MuteMultiplePlayers(const TArray<FUniqueNetIdRepl>& Players);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ModifyLoadoutClaim(FBattalionLoadoutClaim ExistingClaim, FBattalionLoadoutClaim NewClaim, int32 Slot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LoadoutConfirmed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_IdleTimeReached();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HandleMatchSessionJoined(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HandleMatchSessionHosted(bool bWasSuccessful, const FUniqueNetIdRepl& SessionId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GetIdleTimeLimit();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DestroyProfilingBots();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DEBUG_BotLookAtLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DEBUG_Bot180();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CreateProfilingBot(int32 TeamNum, bool IsStationary);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClientSideStatesReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CleanupActorsOfClass(TSubclassOf<AActor> CleanupClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CastVote(bool VotedYes);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CallVote_Timeout(ABattalionPlayerState* PS, bool bIsTactical);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CallVote_Surrender(ABattalionPlayerState* PS);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CallVote_OfferSurrender(ABattalionPlayerState* PS);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CallVote_KickPlayer(ABattalionPlayerState* PS);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AskToPossessBot(APawn* PawnToPossess);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddLoadoutClaim(FBattalionLoadoutClaim Claim, int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void SendMessage(const FText& Message, EChatChannels Channel);
    
    UFUNCTION(BlueprintCallable)
    void PrintToClientConsole(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void PlayTimerTick();
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateInteractionProgress(ABattalionPlayerControllerGMBase* Controller, ABattalionPlayerControllerGMBase* receiver, float Progress);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void NotifySpectatorsOfWeaponSwap();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void NotifySpectatorsOfWeaponHit(FVector HitVector, float Damage, bool WasSelf);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void NotifySpectatorsOfHitmarker(bool KillingBlow, bool FriendlyFire, bool IsHeadshot, bool IsKnifeKill);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NotifySpectatorOfDeath(FVector KilledLoc, FVector KillerLoc);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool IsInPersonalMutelist(const APlayerState* OtherPlayerState) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetWorldLoadPlayed();
    
    UFUNCTION(BlueprintCallable)
    int32 GetVictoryState();
    
    UFUNCTION(BlueprintCallable)
    bool GetSwappingSides();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSurrenderState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    int32 GetNumberOfMutedPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKickRemainingTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeysForAction(FName ActionName, TArray<FInputActionKeyMapping>& Bindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisableMovementAndInputOnSpawn() const;
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_BotLookAtLocation();
    
    UFUNCTION(BlueprintCallable)
    void DEBUG_Bot180();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CrashGame();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientViewSpectatorPawn(FViewTargetTransitionParams TransitionParams);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientViewedGrenade();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCameraStyle(FName Style);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientServerControlledUnmutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientServerControlledMutePlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyWeaponSwap();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyWeaponHit(FVector HitVector, float Damage, bool WasSelf);
    
    UFUNCTION(Client, Reliable)
    void ClientNotifySpectatorOfDeadPlayer(uint8 ID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyHitmarker(bool KillingBlow, bool FriendlyFire, bool IsHeadshot, bool IsKnifeKill);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDumpMuteListState();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WorldLoadPlayed(bool Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WeaponSwitched(int32 NewWeaponIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WeaponsChanged(ABattalionWeapon_Instant* WeaponOne, ABattalionWeapon_Instant* WeaponTwo, ABattalionWeapon_Instant* WeaponThree);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WeaponAmmoChanged(int32 WeaponAmmo, int32 ReserveAmmo, bool Fired, bool Reloaded);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_VoteFinished(bool bWasSuccessful);
    
    UFUNCTION(Client, Reliable)
    void Client_VoteCasted(bool bVotedYes, uint8 Votes);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ViewTargetUpdated();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateWeaponPickup(const UBattalionDamageType* Pickup, const UBattalionDamageType* Current);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateSubModeType(const FString& String);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateScoreAward(const int32 Value, const FString& Text);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateRespawnTimer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateRequiredPlayersRemaining(int32 RequiredPlayersRemaining);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateMuteSettingsOnTimerEnd();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateMuteSettings();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateInteractionProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateGameScores(const TArray<FPlayerInfoMinimal>& PlayerInfoList);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateCompletedChallenges(const FCompletedChallenges& ChallengesCompleted);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateClientStats(const TArray<FStatInfo>& StatData, bool bEndOfGame);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateCanVault(bool CanVault);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UnmuteChatPlayer(const FString& NetID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ToggleWeaponVisbility();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ToggleThirdPerson();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ToggleShowHealthbars(bool bNewHealthbarVisible);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TellServerWhenStatesAreValid();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SwappingSides();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopVoiceInstructions();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopSpectator();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopRecordingReplay();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopMusic();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopMIDISafe();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopAllHard();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopAllAudioLoops();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartSpectator(FSpectatorRules Rules, FVector CameraLocation, FRotator CameraRotation, AActor* KilledByActor, bool NeedDeathSpec, float TransferTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartRespawnTimer(float RespawnTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartRecordingReplay(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_StartMusicWithRTPC(const FName& MusicState, const FName& rtpcName, float RTPCValue);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartMusic(const FName& MusicState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SpectatorViewStartupCamera();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SpectatorEndLoadoutPhase();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SpectatedPlayerChanged();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SkipNextPossessRestart();
    
    UFUNCTION(Client, Reliable)
    void Client_ShowUIIfNotPaused(int64 ElementFlag, bool ForceVisible);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowTutorialPrompt();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowServerChatMessage(const FText& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowOvertimeTitleScreen(float ShowTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowOvertimeShootoutVictoryScreen(int32 WinningTeamNum, int32 Team0Score, int32 Team1Score, bool bIsOvertime, bool bIsShootout);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowOvertimeShootoutTransitionScreen(float ShowTime, APromodPlayerState* Team0Player, APromodPlayerState* Team1Player, int32 Team0Alive, int32 Team1Alive);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowOvertimeShootoutTitleScreen(float ShowTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowLoadoutPromptIfJoinedLate();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowBuyMenuIfJoinedLate();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowAnnouncement(const FText& Text, float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowActionPrompt(EActionPrompt ActionPrompt);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetVictoryState(int32 InVictoryState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetUIFlags(int32 NewFlagsA, int32 NewFlagsB);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetTeamNum(int32 Team, int32 OldTeam);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetTakeItemFromBotDistance(float Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSurrenderState(bool State);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetStatusInfoText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSpectatingID(uint8 ID, uint8 OldID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetShouldPlayVoiceLines(bool NewShouldPlayVoiceLines);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetRespawnNationType(ENationType NewNation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetPossessedBotPS(ABattalionPlayerState* PS);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetNationType(ENationType NewNation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetIsSwappingSides(bool InSpwappingSides, int32 Team0Score, int32 Team1Score);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetIsReady(bool NewReady);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetHUDFlags(int32 NewFlagsA, int32 NewFlagsB);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetForceVisibleUIFlags(int32 NewFlagsA, int32 NewFlagsB);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetEditableUIFlags(int32 NewFlagsA, int32 NewFlagsB);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetEditableHUDFlags(int32 NewFlagsA, int32 NewFlagsB);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendStringToConsole(const FString& String);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendMessage(const FText& Name, const FText& Message, EChatChannels Channel, const FString& NetID, bool IsDev, bool ForceMessage, ESlateVisibility GlobalIconVisibility);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_RTPC(const FName& rtpcName, float RTPCValue);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResumeMusic();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RespawnTimerEnded();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetTutorialPrompt();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetStatusBars();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetRTPC();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetKillFeed();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetIdleKickTimer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RequestChallenges();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReplayStateChanged(bool Recording, const FString& FileId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveSmokeBombs();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RegisterGameModeAdminCommands(const TArray<FString>& Commands, const TArray<FColor>& CmdColors);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RecieveLoadoutCursorPosition(ABattalionPlayerState* SubjectPlayerState, FVector2D NewCursorPosition);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveServerVote(const FString& Title, const FString& PassOption, const FString& FailOption, float VoteTime, uint8 VotesReq);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceiveRoundEndReason(FName Reason);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveNewVote(const FString& Caller, const FString& Title, const FString& Item, float VoteTime, uint8 VotesReq, bool SelfCalledVote, APlayerState* PlayerToKick);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceiveNetworkInfo(const FString& NetworkId, const FString& NetworkDescriptorStr);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceiveIdleTimeLimit(float Time);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_QueueStopAllAudioLoops();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PrePlayerPossessedBot(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PrepareSpectatorForLoadoutPhase();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PostVoiceOnClosestTalker(EVoiceKey VoiceKey);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PostPlayerPossessedBot(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayVoiceInstructions();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayTimerTick();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlaySoundOnAkComp(UAkComponent* akComp, UAkAudioEvent* ToPlay);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayReplay(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerTeamNumChanged(ABattalionPlayerState* PS, int32 Team, int32 OldTeam);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerSpectatingIDChanged(ABattalionPlayerState* PS, uint8 ID, uint8 OldID);
    
    UFUNCTION(BlueprintCallable)
    void Client_PlayerRequestChangeLoadout();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerLeft(const FUniqueNetIdRepl& PlatformId, const FString& PlayerName, bool bKicked);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerJoined(const FUniqueNetIdRepl& PlatformId, const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayCinematic(FName CinematicId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PauseMusic();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OverridePlayerName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnRespawn();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnMatchStateChanged(FName NewMatchState, FName PrevousMatchState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnDeathHideWidgets();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyRemotePlayerTalkingStateChanged(ABattalionPlayerState* TalkingPlayerState, bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_MuteChatPlayer(const FString& NetID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_MinimapStopWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_MinimapStartWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_MinimapSingleWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_LevelledUpSoundEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_LevelledUp(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Kicked(const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_JoinMatchSession(const FUniqueNetIdRepl& SessionId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HostMatchSession();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideWeaponPrompt();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideScoreboard();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideLoadoutPromptIfJoinedLate();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideGameMenu();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideBuyMenu();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideActionPrompt(EActionPrompt ActionPrompt);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_GrenadeCountChanged(bool IsSmoke, int32 Count);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_GatherScoreboardData();
    
    UFUNCTION(Client, Reliable)
    void Client_ForceHideHUDElement(int64 ElementFlag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FirstPossessionCompleted();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FinishedJoiningServer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ExitedCallOutVolume(const FString& Name, int32 UniqueID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EnteredCallOutVolume(const FString& Name, int32 UniqueID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EnsurePlayerHasCorrectViewTarget();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EnableSpawnViewer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EnableOutlines();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EnableInput();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DisableSpawnViewer();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DisableInput(bool DisableSwapping, bool EnableCameraControls);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CurrentlySpectatingCharacterUpdated();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CleanHUD();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CacheStatsForAchievements();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_BattlerankRankupSoundEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_BattlerankRankup();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AwardMedal(const FString& MedalUUID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AttachSmokeLine();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddToLog(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AttachGrenadeLine();
    
};

