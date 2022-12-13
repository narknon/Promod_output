#pragma once
#include "CoreMinimal.h"
#include "WartidePlayerController.h"
#include "StaminaEvent.h"
#include "EPromodActionPrompt.h"
#include "Engine/EngineTypes.h"
#include "EPromodEvents.h"
#include "UObject/NoExportTypes.h"
#include "ESpecialGrenadeType.h"
#include "EGrenadeType.h"
#include "EFireUpType.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LoadoutData.h"
#include "EClassChangeCondition.h"
#include "ESlotType.h"
#include "PromodPlayerController.generated.h"

class UAkAudioEvent;
class UPlayerLoadoutsSaveData;
class UAkComponent;
class UCameraShakeBase;
class UHUDMaster;
class APromodPlayerState;
class APromodCharacter;
class ABattalionWeapon;

UCLASS(Blueprintable)
class APromodPlayerController : public AWartidePlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopPlayerSoundsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopReloadSoundsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopContinuousSoundsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyEliminatedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FriendlyEliminatedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InfinityRefreshSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCinematicPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateSpecHUDFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopWorldCollapseSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowingClassSelectionScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowingGameOverScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPromodActionPrompt CurrentActionPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* WorldCollapseAkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartWorldCollapseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerLoadoutsSaveData* SavedPlayerLoadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShakeBase* StunCameraShakeInstancePtr;
    
public:
    APromodPlayerController();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorStunEffectStarted(float Duration);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorsScopeADS(bool bIsScoped);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorSprintBar(const FStaminaEvent& StaminaEvent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorsPlantProgress();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorShowHideActionPrompt(EPromodActionPrompt ActionPrompt);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorsCarryingBomb(bool bHasBomb);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorsAmmoVisibility(bool bAmmoVisiblity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateSpectatorInspect();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorHitMarker(bool bFromDeath, const FHitResult& HitResult, bool bFriendlyFire);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorGrenadeCount(int32 GrenadeCount, int32 SpecialGrenadeCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorFlashBangEffectStarted(float Duration);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorDamageTaken(float CurrentHealth, FVector DamageDirection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorClearUI();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateSpectatorBombMesh();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateHUDUpdateUtilityNadeType(ESpecialGrenadeType NewUtilityNadeType, const int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateHUDUpdateOffensiveUtilType(EGrenadeType NewType, const int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateHUDQuickUtilType(EFireUpType NewType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateHUDPlayerKilled(const FString& KilledPlayerName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ToggleDrawOtherPlayerHitBoxes();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReportPlayer(const FUniqueNetIdRepl& PlayerNetId, const FString& Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayWorldCollapseFX(FVector WorldCollapseCenter, float WorldCollapseRadius, bool Play);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlaySoundOnGlobalPlayerAndSpectators(UAkAudioEvent* ToPlay);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LoadDefaultLoadout(const FLoadoutData& defaultLoadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChooseLoadoutConditional(const FLoadoutData& ChosenLoadout, const int32 NewTeamNum, const int32 OldTeamNum, EClassChangeCondition Condition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingMouseRequiringUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingClassSelectionScreen() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchStateShootout() const;
    
public:
    UFUNCTION(BlueprintCallable)
    UHUDMaster* GetMasterHudWidget();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateWorldCollapseFX(float WorldCollapseRadius);
    
    UFUNCTION(Client, Reliable)
    void Client_UpdateSpectatorStunEffectStarted(uint8 SpectatingID, float Duration);
    
    UFUNCTION(Client, Reliable)
    void Client_UpdateSpectatorShowHideActionPrompt(uint8 SpectatingID, EPromodActionPrompt Prompt);
    
    UFUNCTION(Client, Reliable)
    void Client_UpdateSpectatorInspect(uint8 SpectatingID);
    
    UFUNCTION(Client, Reliable)
    void Client_UpdateSpectatorFlashBangEffectStarted(uint8 SpectatingID, float Duration);
    
    UFUNCTION(Client, Reliable)
    void Client_UpdateSpectatorBombMesh(uint8 SpectatingID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateScoreAwarded(int32 ScoreToShow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateKillSuccessWidgets(const FString& KilledPlayerName, int32 ScoreToShow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateBlockedMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ToggleGameOverScreen(const FString& Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ToggleDrawOtherPlayerHitBoxes();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ToggleClassSelectionScreen();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SwappingSidesUI(int32 Team0Score, int32 Team1Score);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopAllGameAudioLoops();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartChangeTeamCooldown(const float CooldownTime);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdateSprintBar(uint8 SpectatingID, const FStaminaEvent& StaminaEvent);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdateSpectatingPlayer(uint8 SpectatingID, APromodPlayerState* SpecPlayerState, APromodCharacter* SpecPlayerCharacter);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdateScopeADS(uint8 SpectatingID, bool bIsScoped);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdatePlayerKilled(uint8 SpectatingID, const FString& KilledPlayerName);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdatePlantProgress(uint8 SpectatingID);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdateHitMarker(uint8 SpectatingID, bool bFromDeath, const FHitResult& HitResult, bool bFriendlyFire);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdateGrenadeCount(uint8 SpectatingID, int32 GrenadeCount, int32 SpecialGrenadeCount, int32 QuickUtil);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdateDamageTaken(uint8 SpectatingID, float CurrentHealth, FVector DamageDirection);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdateCarryingBomb(uint8 SpectatingID, bool bHasBomb);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDUpdateAmmoVisibility(uint8 SpectatingID, bool bAmmoVisibility);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDInventoryIcons(uint8 SpectatingID, ABattalionWeapon* PrimaryWeapon, ABattalionWeapon* SecondaryWeapon, ABattalionWeapon* MeleeWeapon);
    
    UFUNCTION(Client, Reliable)
    void Client_SpectatorHUDClearUI(uint8 SpectatingID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowDetectedUI();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowClassChangedMessage();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSwitchAK(UAkComponent* akComp, const FString& Group, const FString& Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetSpectatorButtonVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetMinimapVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetHUDVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetGuardiansLoggingEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetChangeTeamEnabled(const bool bEnabled, const FText& OptionalReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetAmmoOnlyVis(bool bVisible);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SafeStopAllAudio();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetScoreAwarded(const int32 CurrentScore);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetKillsThisRound();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayWorldCollapseFX(FVector WorldCollapseCenter, float WorldCollapseRadius, bool Play);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlaySoundOnPlayerComp(UAkAudioEvent* ToPlay);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlaySoundOnGlobal(UAkAudioEvent* ToPlay);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayKilledSound(bool bFriendly);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayInfinityRefreshSound();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnPlayerKilled(const int32 OurPrevAliveMembers, const int32 OurAfterAliveMembers, const int32 TheirPrevAliveMembers, const int32 TheirAfterAliveMembers);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyPlayerOfFireUp(APromodPlayerState* PS, UAkAudioEvent* eventToPlay);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyPlayerOfEvent(EPromodEvents PromodEvent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDUpdateUtilityNadeType(ESpecialGrenadeType NewUtilityNadeType, const int32 Count);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDUpdateTeamPlayerStatus();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDUpdateQuickUtilType(EFireUpType NewUtilityNadeType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDUpdateOffensiveUtilType(EGrenadeType NewUtilityNadeType, const int32 Count);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDUpdateNadeCount(int32 NewNadeCount, int32 NewSpecialNadeCount, int32 QuickUtil);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDUpdateBombPlantProgress(int32 PlantDirection, float Progress, float ExpectedDuration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDUpdateAmmoCount(int32 WeaponAmmo, int32 ReserveAmmo, bool Fired, bool Reloaded);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDInventoryIcons(ABattalionWeapon* PrimaryWeapon, ABattalionWeapon* SecondaryWeapon, ABattalionWeapon* MeleeWeapon);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HUDFireHitMarker(const bool bFromDeath, const FHitResult& HitResult, const bool bFriendly);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HighlightEquippedInventoryItem(ESlotType DesiredSlot);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideVictoryState();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideClassSelection();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ClearDamageOnHUD(float MaxHealth);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ClearCameraModifiers();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CancelChangeTeamCooldown();
    
    UFUNCTION(BlueprintCallable)
    void ChooseLoadoutConditional(const FLoadoutData& ChosenLoadout, const int32 NewTeamNum, const int32 OldTeamNum, EClassChangeCondition Condition);
    
    UFUNCTION(BlueprintCallable)
    void ChooseLoadout(const FLoadoutData& ChosenLoadout, const int32 NewTeamNum, const int32 OldTeamNum);
    
    UFUNCTION(BlueprintCallable)
    void BombIconCheck();
    
};

