#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionCharacter.h"
#include "Pingable.h"
#include "Kick.h"
#include "VaultData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PromodLandedSignatureDelegate.h"
#include "SpecialAnim.h"
#include "ESlotType.h"
#include "CharacterAnim.h"
#include "EWeaponArchetype.h"
#include "EFireUpSlotType.h"
#include "EPingType.h"
#include "LoadoutInitializer.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PromodCharacter.generated.h"

class UTimelineComponent;
class UTexture2D;
class UPromodInventoryComponent;
class UPostProcessComponent;
class UCurveVector;
class UMapViewComponent;
class APromodGizmo;
class UMapIconComponent;
class UWidgetComponent;
class UCurveFloat;
class UMaterialParameterCollection;
class UWorldMarkerComponent;
class APingActor;
class AMapIconActor;
class UPhysicalMaterial;
class USkeletalMesh;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class APromodPlayerController;
class ABattalionWeapon_Instant;
class ABattalionWeapon;
class UPromodCharacterMovementComponent;
class UPromodDeathCamera;
class APromodBouncePad;
class AActor;
class UAkAudioEvent;
class AFireUpAction;
class AWorldVFXManager;
class UAnimMontage;
class APromodGameState;
class ACargoGameState;
class UAkComponent;
class APromodCharacter;
class UAnimInstance;

UCLASS(Blueprintable)
class APromodCharacter : public ABattalionCharacter, public IPingable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIconComponent* MapIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ArrowMiniMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BombMiniMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BombMiniMapObjectiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* SpatialMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapViewComponent* MapViewComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* VaultTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VaultTimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* VaultLowWallCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* VaultHighWallCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VaultLowWallMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsVaulting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVaultData LastVault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* BombCarrierWorldMarker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneLandBobScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpatialMarkerParentBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpatialMarkerPositionalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMapIconActor> EnemyMapIconActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapIconActor* EnemyMapIconActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapIconSelfColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapIconFriendlyColour;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKick> ViewKicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKick> ViewKickRecoveries;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromodLandedSignature OnLandedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrevIsSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsProned, meta=(AllowPrivateAccess=true))
    bool bIsProned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanSeeBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnFireScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunChromaticAberrationAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunVelocityThresholdForEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunFovIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunEffectIncreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunEffectDecreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunTimeToHitMaxEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLaunchedFromPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Bomb1PSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Bomb3PSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Bomb1PSkeletalMeshAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Bomb3PSkeletalMeshAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialAnim PlantingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialAnim QuickPlantingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialAnim DefusingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SnapShotMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SnapShotMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APingActor> PingActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float healthRTPCToPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABattalionWeapon_Instant* HandCannonWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionWeapon> HandCannonWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPromodDeathCamera* DeathCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDoubleTapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APingActor*> ActivePingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APingActor* LastPredictedPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastLookedAtInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentlyLookedAtInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* NoDamagePhsyMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* SilentNoDamagePhsyMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugShowCurrentControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGizmoHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APromodGizmo> GizmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodGizmo* GizmoPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPromodInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HotdropLandSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootstepSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OldMoveVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SprintEndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SprintDrainEventStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SprintDrainEventStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireUpRifleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireUpSMGEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireUpSniperEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireUpHandcannonStopEvent1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NearMissSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollateralSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FireUpReadySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DamageFromBulletSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ThirdPDamageFromBulletSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DamageFromWorldCollapseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WorldLoadingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResupplyAmmoFromCargoSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RespawnPlayerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintDrainTriggerZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoingWeaponBlockingAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentLeanValue, meta=(AllowPrivateAccess=true))
    float CurrentLeanValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothMaxLeanFrac;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponCycleDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanADSInProne;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeanCameraOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SMGStartLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SMGStopLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ARStartLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ARStopLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFireUpAction* PredictedFireUpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedFireUpAction, meta=(AllowPrivateAccess=true))
    AFireUpAction* ReplicatedFireUpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFireUpAction* PredictedQuickUtilFireUpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFireUpAction* ReplicatedQuickUtilFireUpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPromodCharacterMovementComponent* PromodCharacterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldMakeFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialFootstepDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardFootstepIntervalTimeWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardFootstepIntervalTimeSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableASDFootstepIntervals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftFootstepIntervalTimeWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackFootstepIntervalTimeWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoAnimationTimeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoPrepareTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoEndPrepareTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoWeaponEquipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim UseGizmoAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoChromaticAberrationAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoEffectIncreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoEffectDecreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoTimeToHitMaxEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoStopEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GizmoStartEffectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Target360SpinRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeKillSpeedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHUDSprintValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastHitBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastHitLocation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldVFXManager* WorldVFXManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* StunTimelinePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StunnedMontagePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StunStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StunStopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStunned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StunCurvePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* StunMeterialParameterCollectionPtr;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodGameState* PromodGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACargoGameState* CargoGameState;
    
public:
    APromodCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void VaultUpdate(float BlendIn);
    
    UFUNCTION(BlueprintCallable)
    void VaultEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStunEffect(float StunAmount);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSprintValue(float NewSprintValue, bool bCanSprint);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNadeAndQuickUtilCount();
    
    UFUNCTION(BlueprintCallable)
    void UpdateLeanValue(float LeanValue);
    
    UFUNCTION(BlueprintCallable)
    void UnProne();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool TryGetRemainingStunDuration(float& OutDuration) const;
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugDrawHitBox();
    
    UFUNCTION(BlueprintCallable)
    void StunTimelineUpdate(float StunAmount);
    
    UFUNCTION(BlueprintCallable)
    void StunTimelineEnd() const;
    
    UFUNCTION(BlueprintCallable)
    void StunEndSound();
    
    UFUNCTION(BlueprintCallable)
    void StunEnded();
    
    UFUNCTION(BlueprintCallable)
    void StopTryVault();
    
    UFUNCTION(BlueprintCallable)
    void StopSprintToggle();
    
    UFUNCTION(BlueprintCallable)
    void StopSprint();
    
    UFUNCTION(BlueprintCallable)
    void StopGizmoEffectsAfterTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopFeedbackRumble();
    
    UFUNCTION(BlueprintCallable)
    void StartTryVault();
    
    UFUNCTION(BlueprintCallable)
    void StartSprintToggle();
    
    UFUNCTION(BlueprintCallable)
    void StartSprint();
    
    UFUNCTION(BlueprintCallable)
    void StartGizmoEffectsAfterTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowJumperCompleteScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetTargeting(bool bNewTargeting);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingTargeting(bool bPendingNewTargeting, bool bToggle);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInZone(bool InZone);
    
    UFUNCTION(BlueprintCallable)
    void SetAlreadyActivatedFireup(EFireUpSlotType SlotType, const bool bNewAlreadyActivatedFireup);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMovementAndInputSpeedModifier(float Modifier);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TryActivateFireUp(EFireUpSlotType SlotType);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SwitchNextPrevWeapon(bool SwitchNext);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartTryVault();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCanSeeBomb(bool CanSee);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReloadWeapon();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReleaseFireUpKey(EFireUpSlotType SlotType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_QuickSwitchWeapons(int32 KeyPressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_QuickSwitchMelee();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_QueryServerVaultData();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlaySoundOnAllClients(UAkAudioEvent* ToPlay, UAkComponent* akComp, APromodPlayerController* SkipSelf, bool SpectatorsOnly, APromodCharacter* SpectatorSkipChar);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Ping(const FVector& Loc, const FVector& Dir, EPingType PingType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnStopUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NotifyLaunchedFromBouncePad(APromodCharacter* Jumper, APromodBouncePad* BouncePad);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Lean(float LeanAxisValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FindAndStartUseInteractable();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipWeapon(ESlotType SlotToEquip, bool bQuickEquip, bool bAllowReequipSameSlot);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentSlotType();
    
    UFUNCTION(BlueprintCallable)
    void ResetGizmoSpawnLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuickFeedbackRumble();
    
    UFUNCTION(BlueprintCallable)
    int32 Push(const FVector& Direction, const float ForceMultiplier, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    void Prone();
    
    UFUNCTION(BlueprintCallable)
    bool PrepareGizmoForSavePosition();
    
    UFUNCTION(BlueprintCallable)
    bool PrepareGizmoForLoadPosition();
    
    UFUNCTION(BlueprintCallable)
    void PlaySocketMeshAnim(UAnimMontage* Animation, USkeletalMesh* SocketMesh, TSubclassOf<UAnimInstance> MeshAnimClass, FName SocketAttachPoint, float InPlayRate, bool bUseAlternateSocketMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFeedbackRumble(bool bIsFiringNow, float Intensity, EWeaponArchetype WeaponArchetype);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharacterAnim(const FCharacterAnim& Animation, UCurveVector* ScreenSway, float InPlayRate, FName StartSectionName);
    
    UFUNCTION(BlueprintCallable)
    void Ping(const FVector& Loc, const FVector& Dir, EPingType PingType, bool bClientOnly);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireStateChanged(bool bIsFiringNow, float Intensitiy, EWeaponArchetype WeaponArchetype);
    
    UFUNCTION(BlueprintCallable)
    void OnStartGizmoSavePosition();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGizmoLoadPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSprintExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnSlidePressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedFireUpAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsProned();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLeanValue();
    
    UFUNCTION(BlueprintCallable)
    void OnPlantingStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnFootstepAnimNotify();
    
    UFUNCTION(BlueprintCallable)
    void OnDefusingStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_UpdateHealthbar(float NewHealth);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_StartHealthbarRegen(float RegenRate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlaySocketMeshAnim(UAnimMontage* Animation, USkeletalMesh* SocketMesh, TSubclassOf<UAnimInstance> MeshAnimClass, FName SocketAttachPoint, float InPlayRate, bool bUseAlternateSocketMesh);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayCharacterAnim(const FCharacterAnim& Animation, UCurveVector* ScreenSway, float InPlayRate, FName StartSectionName, bool bIgnoreOwner);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_AttachSocketMeshForTime(USkeletalMesh* SocketMesh, TSubclassOf<UAnimInstance> MeshAnimClass, FName SocketAttachPoint, float Time, const bool bUseAlternateSocketMesh);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnMeleeEndedEtc();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnLaunchedFromBouncePad(APromodCharacter* Jumper, APromodBouncePad* BouncePad);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_InitializeLoadout(const FLoadoutInitializer& LoadoutInitializer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_PlaySoundOnAllClients(UAkAudioEvent* ToPlay, UAkComponent* akComp, APromodPlayerController* SkipSelf, bool SpectatorsOnly, APromodCharacter* SpectatorSkipChar);
    
    UFUNCTION(BlueprintCallable)
    void Move(FVector Direction, float Value);
    
    UFUNCTION(BlueprintCallable)
    void Lean(float LeanAxisValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerDefusingOrPlantingBomb() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAlreadyActivatedFireup(EFireUpSlotType SlotType) const;
    
    UFUNCTION(BlueprintCallable)
    void GizmoRespawnPlayerFromSavedLocation(int32 SavedLocationIndex);
    
    UFUNCTION(BlueprintCallable)
    void GizmoRespawnPlayerAfterAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    void GizmoReEquipWeapons(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void GizmoEquipWeaponsAfterAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    UAkAudioEvent* GetWeaponStopEvent(bool firstPerson);
    
    UFUNCTION(BlueprintCallable)
    float GetVaultLowWallMax() const;
    
    UFUNCTION(BlueprintCallable)
    float GetStunCurveMaxTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetStrafeFireActionScore(float DistanceTravelled2D);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInZone();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentVaultProgress();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentLeanValue();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentLeanFraction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFireUpAction* GetCurrentFireUpAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPromodCharacterMovementComponent* GetCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator Get1PCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector Get1PCameraLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceInteractionUIUpdate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugDrawPhysicsAsset() const;
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateCargoSafeZones();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopCriticalHealthSound();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetBusRTPC(float Value, FName RTPC);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_QueriedServerVaultData(const FVaultData& Vault);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlaySoundOnAK(UAkAudioEvent* ToPlay, UAkComponent* akComp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayResupplyAmmoSound();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnSwitchNextPrevWeapon(bool SwitchNext);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FlashHitMarker(bool bFromDeath, const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DisablePostProcess() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CancelFireUp();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AmmoAdded(int32 AmmoAdded, int32 NewReserveAmmo, const bool bAddedAmmoToEquippedWeapon);
    
    UFUNCTION(BlueprintCallable)
    void ClearStunEffect();
    
    UFUNCTION(BlueprintCallable)
    void ClearGizmoAfterDeath();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentSlotType();
    
    UFUNCTION(BlueprintCallable)
    void CheckFlyByBullet(FVector TraceStart, FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    void CharacterStunned(float Duration, float Power);
    
    UFUNCTION(BlueprintCallable)
    void CancelPreparedGizmo(bool bAlwaysCancel);
    
    UFUNCTION(BlueprintCallable)
    void Break();
    
    UFUNCTION(BlueprintCallable)
    void Audio_RespawnPlayer();
    
    UFUNCTION(BlueprintCallable)
    void AttachSocketMeshForTime(USkeletalMesh* SocketMesh, TSubclassOf<UAnimInstance> MeshAnimClass, FName SocketAttachPoint, float Time, const bool bUseAlternateSocketMesh);
    
    
    // Fix for true pure virtual functions not being implemented
};

