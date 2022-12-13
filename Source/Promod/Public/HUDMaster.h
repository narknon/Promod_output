#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StaminaEvent.h"
#include "ESpecialGrenadeType.h"
#include "EFireUpType.h"
#include "EGrenadeType.h"
#include "UObject/NoExportTypes.h"
#include "KillMetaData.h"
#include "UObject/NoExportTypes.h"
#include "FireUpData.h"
#include "CargoResultData.h"
#include "ECargoNotificationState.h"
#include "ESlotType.h"
#include "EPromodActionPrompt.h"
#include "EChatChannels.h"
#include "Engine/EngineTypes.h"
#include "EHardpointWorldMarkers.h"
#include "HUDMaster.generated.h"

class APromodPlayerState;
class UAwardManager;
class UWidget;
class UBattalionDamageType;
class APromodPlayerController;
class APromodCharacter;
class UDamageType;
class UMapViewComponent;
class ABattalionWeapon;
class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UHUDMaster : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAwardManager* AwardManager;
    
public:
    UHUDMaster();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeaponPickup(bool IsInRange, const UBattalionDamageType* PickupWeapon, const UBattalionDamageType* CurrentWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVictoryScreen(int32 VictoryState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateUtilityNade(ESpecialGrenadeType NewUtilityNadeType, const int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStaminaPercentage(float InStaminaPercentage, bool bCanSprint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStamina(const FStaminaEvent& StaminaEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSpectatingPlayer(APromodPlayerState* PlayerState, APromodCharacter* PlayerCharacter, APromodPlayerController* SpecController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRespawnTimer(float TimerLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuickUtilType(EFireUpType NewUtilityNadeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerIcons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlantProgress(int32 PlantDirection, float CurrentProgress, float ExpectedDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOverviewUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOffensiveUtilType(EGrenadeType NewUtilityNadeType, const int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNadeCount(int32 NewNadeCount, int32 NewSpecialNadeCount, int32 QuickUtilCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMinimapSource(UMapViewComponent* MapViewComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKillSuccess(const FString& KilledPlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKillRunHUDTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKillfeedKillEntry(const FString& KillerPlayerName, const FString& AssisterPlayerName, const FString& WeaponName, const FString& KilledPlayerName, const FKillMetaData& KillMetaData, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKillfeedGizmoEntry(bool IsSavePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKillfeedCheckpointEntry(int32 CheckpointNumber, float CurrentCheckpointTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKillConfirmPoints(int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInventoryWeaponIcons(ABattalionWeapon* PrimaryWeapon, ABattalionWeapon* SecondaryWeapon, ABattalionWeapon* MeleeWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInteractionEvent(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthValueSpectator(float Health, FVector DamageDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthValue(float Health);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGizmoHelperKeyBinds(bool SavePositionPressed, bool ReloadPositionPressed, bool ResetRunPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFireUpProgress(float FireUpProgress, bool bFireUpAvailable, APromodPlayerState* CheckedPS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFireup(FFireUpData NewFireupData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnemyKilled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCrosshairSpread(float NewSpread);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCargoVictoryScreen(const FCargoResultData& OurResult, const FCargoResultData& TheirResult, const int32 WinningTeam, const int32 MyTeam, const bool bIsTimeRelevant, const float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCargoResultScreen(const FCargoResultData& Result, bool bWasPushing, const bool bIsTimeRelevant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCargoCheckpointNotification(const ECargoNotificationState& State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanVault(bool bCanVault);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCalloutName(const FText& NewName, int32 UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBombInfo(bool bHasBomb);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBlockedMessage(const FString& BlockedMessage, bool bIsBlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAmmoCount(int32 NewAmmo, int32 NewReserveAmmo, bool bFired, bool bReloaded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleShowLeaderboard(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleGameOverScreen(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleDebugUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleClassSelectionScreen(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopWeaponPickup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopVault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopSpectatingUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopProneUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopDashUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAllMedia();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopADS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInteraction(float InteractionTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTugOfWarVictory(const float FinalProgress, const bool bWeWon, const float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTugOfWarOverview();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSwitchingSidesUI(int32 Team0Score, int32 Team1Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPingOptionsMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowOvertimeTitleScreen(float ShowTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowOvertimeShootoutVictoryScreen(int32 WinningTeamNum, int32 Team0Score, int32 Team1Score, bool bIsOvertime, bool bIsShootout);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowOvertimeShootoutTransitionScreen(float ShowTime, APromodPlayerState* Team0Player, APromodPlayerState* Team1Player, int32 Team0Alive, int32 Team1Alive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowOvertimeShootoutTitleScreen(float ShowTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowInteractionPrompt(AActor* Interactable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHideActionPrompt(EPromodActionPrompt ActionPrompt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowClassChangedMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAnnouncement(const FText& Text, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSystemTimeVisibility(bool bShowSystemTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlantProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMinimapVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHUDVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGizmoHelpVisibility(bool ShowGizmoHelper);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAmmoOnlyVis(bool bVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SendMessageToPlayers(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetKillConfirmPoints(const int32 CurrentScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveBlockedMessage(UWidget* BlockedMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMessage(const FText& Name, const FText& Message, const EChatChannels& Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PointDamageTaken(float DamageAmount, float CurrentHealth, FVector DamageDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCargoAdvantageAnimation(const bool bNoAdvantage, const float TimeDifference, const float Advantage, const int32 AdvantageTeam, const float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenChatBox(const bool bGlobal, bool bIsDead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuddenDeathStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerKilled(const int32 OurPrevAliveMembers, const int32 OurAfterAliveMembers, const int32 TheirPrevAliveMembers, const int32 TheirAfterAliveMembers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStateChanged(FName NewMatchState, FName PrevousMatchState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlashBangEffectStarted(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlashBangEffectCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCargoObjectivePipReached(const int32 CheckpointIdx, const int32 PipIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCargoCheckpointReached(int32 CheckpointIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NewTargetingState(bool bNowTargeting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NewControlledPawn(APromodCharacter* NewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFireSystemEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HighlightEquippedInventoryItem(ESlotType DesiredSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideVictoryScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HidePingOptionsMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideInteractionPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCrossHair(bool HideAll);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HardpointOnZoneStopContested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HardpointOnZoneLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HardpointOnZoneEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HardpointOnZoneContested();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetIsLeaderboardVisible();
    
    UFUNCTION(BlueprintCallable)
    UAwardManager* GetAwardManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlashHitMarker(bool bKilled, const FHitResult& HitResult, bool bFriendlyFire);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FireupScoreAwarded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FireupEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FireupDurationRefreshed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FireupActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FireupAborted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedAdsTransition(bool bNowAds);
    
    UFUNCTION(BlueprintCallable)
    void ClearUIOnRespawn();
    
    UFUNCTION(BlueprintCallable)
    void ClearUIOnDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearDamageIndicators();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearCameraModifiers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanUpWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeZoneState(EHardpointWorldMarkers NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActiveZoneUIColour(FLinearColor NewColour);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActiveZoneUI(int32 NewZoneIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool AnyVideoPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoAdded(int32 NewAmmoAdded);
    
};

