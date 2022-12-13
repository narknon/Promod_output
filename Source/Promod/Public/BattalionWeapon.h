#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EWeaponType.h"
#include "WeaponBurstCounter.h"
#include "GameFramework/Actor.h"
#include "Engine/Canvas.h"
#include "UObject/NoExportTypes.h"
#include "OnFireStateChangedDelegate.h"
#include "WeaponAnim.h"
#include "UObject/NoExportTypes.h"
#include "OnWeaponFinishedHolsterDelegate.h"
#include "Engine/EngineTypes.h"
#include "EParentModKit.h"
#include "WeaponDematerializationData.h"
#include "EWeaponState.h"
#include "WeaponCosmeticDataArray.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponArchetype.h"
#include "BattalionWeapon.generated.h"

class UAkComponent;
class UTimelineComponent;
class USkeletalMeshComponent;
class UMaterialInterface;
class USceneComponent;
class UAkAudioEvent;
class ABattalionCharacter;
class ABattalionPlayerState;
class UFOVSkeletalMeshComponent;
class UTexture2D;
class UPromodWeaponStatsDataAsset;
class UFOVParticleSystemComponent;
class UMaterialInstanceDynamic;
class UParticleSystem;
class UParticleSystemComponent;
class UCameraShakeBase;
class UForceFeedbackEffect;
class ABattalionWeapon;
class UAnimSequence;

UCLASS(Abstract, Blueprintable)
class ABattalionWeapon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* DematerializeTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFireStateChanged OnFireStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WeaponMaterialIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanvasIcon PrimaryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanvasIcon SecondaryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanvasIcon PrimaryClipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanvasIcon SecondaryClipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoIconsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryClipIconOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondaryClipIconOffset;
    
    UPROPERTY(EditAnywhere)
    FCanvasIcon Crosshair[5];
    
    UPROPERTY(EditAnywhere)
    FCanvasIcon AimingCrosshair[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLaserDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCustomCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCustomAimingCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideCrosshairWhileNotAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideCrosshairWhileAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideWeaponDuringTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionHideWeaponPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWeaponAnim ActiveReloadAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> SkinAssetToLoad_FP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> SkinAssetToLoad_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableRTPCSinceBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RTPCSinceBurstMAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WeaponBashImpactSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Skin, meta=(AllowPrivateAccess=true))
    FString SkinId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MyPawn, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* MyPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* MyPawn_PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat DefaultRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentWeaponLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponFinishedHolster OnWeaponFinishedHolster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WeaponIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WeaponModKitIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParentModKit ParentModKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponCosmeticDataArray CosmeticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodWeaponStatsDataAsset* StatsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOVSkeletalMeshComponent* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Mesh1POffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Mesh1POffsetTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOVParticleSystemComponent* BulletCasingEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOVParticleSystemComponent* MagazineCasingEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponTraceStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSniperGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SniperGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBurstShotRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SingleFireBurstRecoverySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddedPerBurstValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTransitionTelescope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* PawnAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Mesh1PMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> PawnMesh1PMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TelescopeMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TelescopeMaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TelescopeMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MuzzleScale1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MuzzleScale3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Muzzle1PAttachToGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFX1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFX3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFOVParticleSystemComponent* MuzzlePSC1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MuzzlePSC3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpperRecieverAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MagazineAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BulletCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletCasingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MagazineCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagazineCasingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> FireCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* FireForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bStopSegmentedReload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsHolstered, meta=(AllowPrivateAccess=true))
    bool bIsHolstered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Reload, meta=(AllowPrivateAccess=true))
    uint8 bPendingReload: 1;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Inspect)
    uint32 InspectCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Rechamber, meta=(AllowPrivateAccess=true))
    uint8 bPendingRechamber: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingHolster, meta=(AllowPrivateAccess=true))
    uint8 bPendingHolster: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EWeaponState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAmmoInClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 Chambered: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BurstCounter, meta=(AllowPrivateAccess=true))
    FWeaponBurstCounter BurstCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CancelCounter, meta=(AllowPrivateAccess=true))
    int32 CancelCounter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool b3pFireAudioLoopActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool b1pFireAudioLoopActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_OnEquipFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_OnQuickEquipFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_OnHolsterFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_StopReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_SegmentedReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ReloadNextSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ReloadWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_RechamberWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_EarlyRechamberWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_HandleFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_FireRateChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_LoopingSoundSafetyCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_LoopingAnimationSafetyCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_RechamberAfterFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ReloadAfterFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_CreateBulletCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_CreateMagazineCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ResetRecoilPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_StartCancelHolster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_RestartFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioMercyShotTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ForceVisHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_LadderEquipHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanFireAfterLadder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CustomDepthMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bSwapAfterHolster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> WeaponMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DematerializeTimelineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponDematerializationData, meta=(AllowPrivateAccess=true))
    FWeaponDematerializationData WeaponDematerializationData;
    
public:
    ABattalionWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillTryADSOnEquipFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void StartVisibilityTimer(bool useActualTime);
    
    UFUNCTION(BlueprintCallable)
    void StartCancelHolster();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponVisibility(bool Show, bool ThirdPerson);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopReload();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopRechamber();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopFire();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartReload();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartRechamber();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInspect();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartHolster(bool SwapAfterHolster);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandleFiring();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartCancelHolster();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CancelReload();
    
    UFUNCTION(BlueprintCallable)
    void ResetVisibilityTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetFireRateChecker();
    
    UFUNCTION(BlueprintCallable)
    void ResetCanFireAfterLadder();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponDematerializationData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Skin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Reload();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Rechamber();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingHolster(bool bLastPendingHolsterValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MyPawn(ABattalionCharacter* LastPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsHolstered(bool bLastIsHolstered);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Inspect();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CancelCounter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BurstCounter(FWeaponBurstCounter LastBurstCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickFireGlitch();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_StartCancelHolster();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_OnEquip(const ABattalionWeapon* LastWeapon, bool bQuickEquip, bool bFromLadder, bool bFromGizmo, bool bNewTryADSOnEquip);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnHolsterFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AddAmmoDirectToClip(int32 AmmoCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuickEquippingADS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuickEquipping() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFiring(bool& bOutShotWasFired, bool PlayAudio, bool bFromServer);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GiveAmmo(int32 AddAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponType GetWeaponType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponArchetype GetWeaponArchetype() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetSprintOutAnim1P();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSprintingTransitionOutTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSprintingTransitionInTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattalionCharacter* GetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable)
    ABattalionPlayerState* GetMyPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentWeaponLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmoInReserve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmoInClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnimInstanceHipScaleCrushOffset();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnimInstanceHipScaleCrush();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnimInstanceADSScaleCrushOffset();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAnimInstanceADSScaleCrush();
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetAnim3PIdleSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetADSFOVAspectFix() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceWeaponVisible();
    
    UFUNCTION(BlueprintCallable)
    void DematerializeUpdate(float BlendIn);
    
    UFUNCTION(BlueprintCallable)
    void DematerializeEnd();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartReload();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReliableUpdateAmmo(int32 NewCurrentAmmo, int32 NewCurrentAmmoInClip);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientRechamberForce();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartCancelHolsterAfterDelay();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnHolsterFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClearStateMulticast(bool bClearPawnReference);
    
    UFUNCTION(BlueprintCallable)
    void AddAmmoDirectToClip(int32 AmmoCount);
    
};

