#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "Perception/AISightTargetInterface.h"
#include "Damageable.h"
#include "Engine/EngineTypes.h"
#include "DeathAnim.h"
#include "Engine/EngineTypes.h"
#include "KnifeAnimationInfo.h"
#include "UObject/NoExportTypes.h"
#include "EGrenadeType.h"
#include "ESpecialGrenadeType.h"
#include "Engine/Scene.h"
#include "KillMetaData.h"
#include "ENationType.h"
#include "WeaponStopper.h"
#include "TeamOutfit.h"
#include "SpecialAnim.h"
#include "ESlotType.h"
#include "UObject/NoExportTypes.h"
#include "TakeHitInfo.h"
#include "UObject/NoExportTypes.h"
#include "HealthRegenEvent.h"
#include "CharacterAnim.h"
#include "EStanceType.h"
#include "ECharacterTeam.h"
#include "EClassName.h"
#include "GrenadeThrowInfo.h"
#include "LoadoutData.h"
#include "EWeaponArchetype.h"
#include "Engine/NetSerialization.h"
#include "Engine/EngineTypes.h"
#include "EFireUpType.h"
#include "Engine/NetSerialization.h"
#include "BattalionCharacter.generated.h"

class ABattalionGrenade;
class UAkComponent;
class UPlayerSceneCaptureComponent2D;
class ABattalionIncendiaryGrenade;
class UMaterialInstance;
class UTexture2D;
class UFOVSkeletalMeshComponent;
class UBattalionGameInstance;
class UCurveVector;
class ABattalionSmokeGrenade;
class ABattalionFlashGrenade;
class ABattalionCharacter;
class ABattalionStunGrenade;
class ABattalionGrenadePickup;
class UMaterialInstanceDynamic;
class UPhysicsAsset;
class UDamageType;
class UParticleSystem;
class UAkAudioEvent;
class USceneComponent;
class UAudioPassByComponent;
class UCapsuleComponent;
class UWidgetComponent;
class UHUDPlayerName;
class USkeletalMeshComponent;
class ABattalionWeapon;
class USkeletalMesh;
class AActor;
class AController;
class UCurveFloat;
class UCameraShakeBase;
class UAnimMontage;
class UMaterialParameterCollection;
class ABattalionPlayerState;
class UTimelineComponent;
class ABattalionPlayerControllerGMBase;
class ALadder;
class UBattalionSettings;
class APawn;
class UBattalionDamageType;
class ABattalionWeaponPickup;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ABattalionCharacter : public ACharacter, public IAISightTargetInterface, public IDamageable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> LOSTraceBlockingObjects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFireHeld;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JoystickInputMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_MeleeEquipHoldTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ControllerSwapWeaponTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_GrenadeThrowFullyEndedTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMeleeHoldEquipComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWeaponSwapEquipComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastSetSurface, meta=(AllowPrivateAccess=true))
    FString LastSetSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeCycleWeaponStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToADSNewWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionGrenade> GrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionSmokeGrenade> SmokeGrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionIncendiaryGrenade> IncendiaryGrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionFlashGrenade> FlashGrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionStunGrenade> StunGrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionGrenadePickup> USGrenadePickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionGrenadePickup> DEGrenadePickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionGrenadePickup> RUSGrenadePickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionGrenadePickup> BRITGrenadePickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionGrenadePickup> SpecialGrenadePickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> KnifeTestProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayStartOffsetForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultCullVolumeWeaponScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultCullVolumeHeadScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultCullVolumeBodyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MeshDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> HeadMeshDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> WeaponDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> KnifeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> QuickMeleeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FallDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FireDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageMinDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageMaxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WantedWeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousWeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> NadeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> BombDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceOverDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceOverFriendlyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceLinePlayedIncrementSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceLineDeathScreamDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<EGrenadeType> Grenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESpecialGrenadeType> SpecialGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SniperCrosshairTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnScopeVelocityThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPerformingLeftHandAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetingBlocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Mesh1PSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioPassByComponent* AudioPassByComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* ProneCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDPlayerName* PlayerNameInstance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOVSkeletalMeshComponent* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOVSkeletalMeshComponent* Mesh1PSocketMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOVSkeletalMeshComponent* Mesh1PSocketMeshAlternate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh3PSocketMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh3PSocketMeshAlternate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSceneCaptureComponent2D* PlayerSceneCapture2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponStopper EmergencyStopper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamOutfit> TeamOutfits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<ABattalionWeapon*> Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SmokeGrenadeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SmokeGrenadeMeshTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SmokeGrenadeMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* AmericanGrenadeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* AmericanGrenadeMeshTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AmericanGrenadeMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* GermanGrenadeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* GermanGrenadeMeshTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GermanGrenadeMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* RussianGrenadeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* RussianGrenadeMeshTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BritishGrenadeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BritishGrenadeMeshTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* RussianGrenadeMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BritishGrenadeMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWeapon, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NearPickupWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAutoPickupAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastTakeHitInfo, meta=(AllowPrivateAccess=true))
    FTakeHitInfo LastTakeHitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPendingTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPendingTargetingToggled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHorizontalSpeedEnabled: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSState, meta=(AllowPrivateAccess=true))
    bool bADSState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsTargeting, meta=(AllowPrivateAccess=true))
    uint8 bIsTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UpdateTargetingTransition, meta=(AllowPrivateAccess=true))
    float TargetingTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetingTransitionProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingSlowTransitionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetingAnimProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector VelocityForAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastInAirVelocityForAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LastVelocityRotationForAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool JumpedForAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentLean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeanLeftTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeanRightTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanDistanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponPickupDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaningSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeaningSpeedADSModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LeanADSWeapRollCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattCrouchedEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattPronedEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeToProne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeToSwitchWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 WantsToLeanRight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 WantsToLeanLeft: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewRecoilSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewRecoilCharacterClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewRecoilPermanentPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ViewSwayPitchClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ViewSwayYawClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFinishedDeathAnimation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FlinchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RedFlinchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlinchHeadScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ProneToCrouchInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CrouchToProneInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneRotationMaxPitchClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneRotationMinPitchClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingRotationMaxPitchClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingRotationMinPitchClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadePrepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeThrowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeThrowAnimLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeWeaponRequipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bMeleeAttacking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FKnifeAnimationInfo KnifeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeleeAttackingAsPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnifeAnimLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnifeAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnifeCancelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bGrenadePrepared;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ThrowGrenade)
    uint32 bGrenadeThrowing;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    uint8 bGrenadeHeld;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    uint8 bHasBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MeshMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mesh1PMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialAnim LadderAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim GrenadeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim GermanGrenadeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim RussianGrenadeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim BritishGrenadeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim SmokeGrenadeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ActiveGrenadePrepareCameraSway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ActiveGrenadeThrowCameraSway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim BombPlantedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim BombDefusedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    USkeletalMesh* KnifeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* KnifeMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim KnifeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAnim EquippedKnifeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* KnifeAnimSway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* KnifeAnimSwayTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlashedMontagePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathAnim> DeathAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathAnim> DeathGrenadeAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathAnim> DeathHeadshotAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathAnim> DeathPelvisAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathAnim> DeathStomachAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathAnim> DeathNeckAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathAnim> DeathBehindAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ThrowingAxeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DamageFromBurningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BulletPassByEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BulletPassByEvent_Sniper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GrenadePickedUpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpecialGrenadePickedUpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WeaponPickedUpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HurtmarkerSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HurtMarkerHeadshotSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DamageFromFallSoftSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DamageFromFallHardSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HurtmarkerKnifeSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* VaultHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* VaultMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* VaultLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CrouchToStandingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StandingToCrouchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StandingToProneSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ProneToStandingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CrouchToProneSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ProneToCrouchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VaultSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathBloodFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HitWarpFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DeathBloodFXRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeathBloodFXScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* RespawnFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RespawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LowHealthLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LowHealthSoundStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LowHealthVolumeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LowHealthGasp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HealthRegeneratedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HealthStartedRegeneratingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RunLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RunStopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TargetingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TargetingOutSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopCriticalHealthSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ActionFootstep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ActionLadderFootstep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ActionLadderFootstepMetal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ActionLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ActionJump1p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ActionJump3p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitmarkerKnifeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitmarkerHeadshotSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitmarkerHeadshotKillSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickMeleeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeProneDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ZombieAttackVocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ZombieAttackFlesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SurvivorKillConfirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WeaponPickUpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartSlideLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopSlideLoop;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedCollateralSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HeadshotKillConfirmedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartBombPlantSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartDefusePlantSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathScream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopFallingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlashStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlashStopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstPersonWalkTriggerSpeedDivisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstPersonLadderWalkTriggerSpeedDivisor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* WalkGunBobRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkGunBobRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkGunBobRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScreenSpaceWalkGunBobLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HipStanceOffsetCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HipStanceOffsetProne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftFootPlacementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightFootPlacementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftFootSecondaryPlacementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightFootSecondaryPlacementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* SprintScreenBob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintScreenBobRotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintScreenBobRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAnimLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* JumpLandScreenBob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* JumpLandGunBob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpLandBobMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpLandBobMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpLandBobMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpLandBobMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* ProxyPlayerState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* EnemyTeamFPPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* EnemyTeamTPPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* EnemyTeamTPPHeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FriendlyTeamFPPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FriendlyTeamTPPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FriendlyTeamTPPHeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* NormalPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* RagdollPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> MassiveDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* KillAbberationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings DefaultPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings CurrentPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* QuickReloadSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickFireGlitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* QuickFireGlitchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MovementStoppedByFire;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* FlashTimelinePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* CurrentViewerPC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHealthRegenerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LastHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LastWeaponFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlashed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FlashCurvePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShakePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FlashMeterialParameterCollectionPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WhiteScreenWeightParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScreenCaptureWeightParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPressedVault: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientMaxCorpsesOverTenPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientMaxCorpsesUnderTenPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientCorpseTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerCorpseTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterTeam CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClassName CurrentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENationType Nation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterGearSetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PossesedAliveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldingWeaponTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALadder* LadderForAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionToDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* CachedController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AController*, float> Assisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EStanceType CurrentStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCriticalHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthRegenEvent HealthRegenBelowCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthRegenEvent HealthRegenAboveCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCriticalRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeathAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CriticalHealthLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CriticalHealthLoopReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CritcalHealthRegenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalOutline;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNoOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* LastDamagedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings InfectedPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* InfectedFace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* InfectedBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InfectedPlayIdleLoop_FP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InfectedPlayIdleLoop_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InfectedStopIdleLoop_FP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InfectedStopIdleLoop_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InfectedAttackVocal_FP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InfectedAttackVocal_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InfectedDeathScream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAimInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAimOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAimInnerRadiusCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAimOuterRadiusCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAimInnerRadiusProne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAimOuterRadiusProne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTargetInnerRadiusVsDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTargetOuterRadiusVsDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* JoyStickAccelerationCurveVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* JoyStickAccelerationCurveHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* JoyStickAccelerationCurveADSVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* JoyStickAccelerationCurveADSHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* JoyStickAccelerationCurveScopedVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* JoyStickAccelerationCurveScopedHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurvePrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveScoped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveScopedPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveScopedFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveADSPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveADSFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveScopedADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveScopedADSPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimFollowDistanceCurveScopedADSFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTargetStrengthCurveHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTargetStrengthCurveHorizontalPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTargetStrengthCurveHorizontalFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTargetStrengthCurveVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTargetStrengthCurveVerticalPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTargetStrengthCurveVerticalFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleHipCurveHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleHipCurveHorizontalPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleHipCurveHorizontalFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleADSCurveHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleADSCurveHorizontalPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleADSCurveHorizontalFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleScopeCurveHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleScopeCurveHorizontalPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleScopeCurveHorizontalFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleHipCurveVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleADSCurveVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimTreacleScopeCurveVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimDistanceStrengthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimDistanceStrengthCurvePrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimDistanceStrengthCurveFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AutoAimPlayerVelocityStrengthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerScopedSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerVerticalSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerHorizontalSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerBaseADSSensitivityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerTriggerAxisThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerResetAccelerationDotThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseButtonHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseButtonMeleeHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseButtonWeaponSwapHold;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDestroy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerSensitivityStepOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerSensitivityStepMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEquipCancelFromFiring;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ACharacter> LastAutoAimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEquipInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReloadInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLookInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldRetryUpdateTeamMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetryUpdateTeamCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRetryUpdateTeamAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadeThrowInfo PreparedGrenadeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCurrentlyThrowingGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDestroy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeleeComboIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeleeComboMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeComboMaxCutoffTime;
    
    ABattalionCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponMaterials();
    
    UFUNCTION(BlueprintCallable)
    void UpdateTeamMesh(bool IsClassChange, FLoadoutData NewLoadout);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTeamDependantVisuals(bool IsClassChange, FLoadoutData NewLoadout);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFlashEffect(float FlashAmount);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicWeaponMaterialProperties();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicMaterials();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicHeadMaterialProperties();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicBodyMaterialProperties();
    
    UFUNCTION(BlueprintCallable)
    void UnProne_DEPRECATED(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnInPlaceEvent(FRotator TurnInPlaceStart, FRotator TurnInPlaceTarget, FRotator TurnInPlaceAddTarget, UCurveFloat* Curve, UAnimMontage* TurnAnimation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void TrySwapWeapon(TSubclassOf<AActor> PickupClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool TryGetRemainingFlashDuration(float& OutDuration) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerHealthRegen(const FHealthRegenEvent& HealthRegenEvent);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void TriggerBulletPassByEvent(EWeaponArchetype WeaponType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeamMeshUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TakenPointDamageOnClient(const FVector& HitNormal, FName BoneName, FVector ShotFromDirection);
    
private:
    UFUNCTION(BlueprintCallable)
    void StorePreparedGrenade(const FGrenadeThrowInfo& GrenadeInfoStruct);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTurningInPlaceEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartDestroyTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnActiveGrenade(const FVector& Position, const FVector_NetQuantizeNormal& Forward);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldSwapWeapon(TSubclassOf<AActor> PickupClass, AActor* NearPickup);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldPlay1PVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetWwiseAudioSwitches(bool IsSpectator) const;
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingBlocked(bool bBlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetOutlineLocal(bool bNowOutlined);
    
    UFUNCTION(BlueprintCallable)
    void SetKnifeVisibility(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void SetIsThrowingGrenade(const bool bNewIsThrowingGrenade);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPerformingLeftHandAction(bool bPerformingLeftHandAction);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMeleeAttacking(bool IsMeleeAttacking);
    
    UFUNCTION(BlueprintCallable)
    void SetHasFireHeld(const bool bNewHasFireHeld);
    
    UFUNCTION(BlueprintCallable)
    void SetHasFinishedDeathAnimation(const bool bNewHasFinishedDeathAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetCarryingHeavyItem(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetBombMeshVsibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVaultNotify(float VaultHeight);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopBombPlant();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopBombDefuse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartGrenadeThrow();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartGrenadePrepare(const FGrenadeThrowInfo& GrenadeInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartBombPlant();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartBombDefuse();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTargeting(bool bNewTargeting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRunning(bool bNewRunning, bool bToggle);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetLeanRight(bool NewWantsToLeanRight);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetLeanLeft(bool NewWantsToLeanLeft);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyStopWeaponFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyStartWeaponFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifySingleWeaponFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyMeleeHit(const FHitResult& Impact, FVector_NetQuantizeNormal ShootDir, TSubclassOf<UDamageType> DamageType, float MeleeDamageAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerJumpNotify();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipWeapon(ESlotType NewWeapon);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisplayMeleeAttack(int32 ComboIndex, bool bAsPrimary);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelPreparedGrenade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayerAttacking();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_OnStopGrenade(const FGrenadeThrowInfo& GrenadeInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CancelGrenade();
    
    UFUNCTION(BlueprintCallable)
    void ResetMaterials(ECharacterTeam Team, FLoadoutData NewClass);
    
    UFUNCTION(BlueprintCallable)
    void ResetADS();
    
    UFUNCTION(BlueprintCallable)
    void QueuedResetRTPCHandle();
    
    UFUNCTION(BlueprintCallable)
    void Prone_DEPRECATED(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void PostVoiceAkEvent(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayKillAbberation();
    
    UFUNCTION(BlueprintCallable)
    void OnStopUse();
    
    UFUNCTION(BlueprintCallable)
    void OnStopTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnStopJump();
    
    UFUNCTION(BlueprintCallable)
    void OnStopFire();
    
    UFUNCTION(BlueprintCallable)
    void OnStopControllerUse();
    
    UFUNCTION(BlueprintCallable)
    void OnStartUse();
    
    UFUNCTION(BlueprintCallable)
    void OnStartTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnStartJump();
    
    UFUNCTION(BlueprintCallable)
    void OnStartFire();
    
    UFUNCTION(BlueprintCallable)
    void OnStartControllerUse();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateTargetingTransition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ThrowGrenade();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastTakeHitInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastSetSurface(const FString& PreviousLastSetSurface);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsTargeting();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Inventory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWeapon(ABattalionWeapon* LastWeapon);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSState();
    
    UFUNCTION(BlueprintCallable)
    void OnGrenadeThrowFullyEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnGrenadeThrow(const FGrenadeThrowInfo& GrenadeThrowInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedGrenadePrepare(const FGrenadeThrowInfo& GrenadeThrowInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathOfThisPawn(float KillingDamage, FHitResult DamageHitResult, APawn* InstigatingPawn, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator NormalToQuaternionRotator(const FVector& UpRotator) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMutli_StartGrenadePrepare(const FGrenadeThrowInfo& GrenadeInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_UpdateTacticalUtilOnHUD(ESpecialGrenadeType Type, const int32 Count);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_UpdateQucikUtilOnHUD(EFireUpType Type);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_UpdateOffsensiveUtilOnHUD(EGrenadeType Type, const int32 Count);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_StartMeleeAttack(int32 ComboIndex, bool bAsPrimary);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_SetBombMeshVsibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_OnStopGrenade(const FGrenadeThrowInfo& GrenadeInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_ClientLandedEffects(float StoredSpeed, bool FromJump, bool WasDamageTaken);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCancelPreparedGrenade();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_GrenadePrepare(const FGrenadeThrowInfo& GrenadeInfo);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_TriggerHealthRegen(const FHealthRegenEvent& HealthRegenEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWantingToRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWantingToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAlternateAnimationSystem() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsThrowingGrenade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargeting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSingleHandedThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRegeneratingHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRechambering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProneBlocked() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerBelowFiftyHealth();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerBelowCriticalHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingTargeting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOutlined(uint8 TestTeam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingForAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMakingFootstepNoise() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDisplayRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    void HideSocketMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFinishedDeathAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    void GrenadePrepare(const FGrenadeThrowInfo& GrenadeInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattalionWeapon* GetWeaponInSlot(ESlotType SlotToQuery) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattalionWeapon* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetWantsToRunHeld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSpecificSocketMesh(bool bWantFirstPerson, const bool bUseAlternateSocketMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSpecifcPawnMesh(bool WantFirstPerson) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialGrenadeCount();
    
    UFUNCTION(BlueprintCallable)
    UBattalionDamageType* GetSecondaryWeaponDmgType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRunningSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable)
    ABattalionPlayerState* GetProxyPlayerState();
    
    UFUNCTION(BlueprintCallable)
    UBattalionDamageType* GetPrimaryWeaponDmgType();
    
    UFUNCTION(BlueprintCallable)
    FGrenadeThrowInfo GetPreparedGrenade() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPendingTargetingToggled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetNearWeaponPickup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMinSidewardMoveTriggerSoundVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMinForwardMoveTriggerSoundVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMinClimbingMoveTriggerSoundVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMinBackwardMoveTriggerSoundVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattalionPlayerControllerGMBase* GetLocalViewer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeanOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeaningSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeaningSpeedADSModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStanceType GetLastStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastInAirVelocityForAnim() const;
    
    UFUNCTION(BlueprintCallable)
    UBattalionDamageType* GetKnifeDmgType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJumpedForAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSprinting() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsMeleeAttacking();
    
    UFUNCTION(BlueprintCallable)
    float GetIsCriticalHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasFireHeld() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetGrenadeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultSpeedModifier() const;
    
    UFUNCTION(BlueprintCallable)
    UBattalionDamageType* GetCurrentWeaponDmgType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStanceType GetCurrentStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLean() const;
    
    UFUNCTION(BlueprintCallable)
    float GetClimbingVelocity();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FlashTimelineUpdate(float FlashAmount);
    
    UFUNCTION(BlueprintCallable)
    void FlashTimelineEnd() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableReloadInput();
    
    UFUNCTION(BlueprintCallable)
    void EnableLookInput();
    
    UFUNCTION(BlueprintCallable)
    void EnableInfectionPostProcess();
    
    UFUNCTION(BlueprintCallable)
    void EnableEquipInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableReloadInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableLookInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInfectionPostProcess();
    
    UFUNCTION(BlueprintCallable)
    void DisableEquipInput();
    
    UFUNCTION(BlueprintCallable)
    void ContinueGrenadePrepareAfterHolster(ABattalionWeapon* HolsteredWeapon);
    
private:
    UFUNCTION(BlueprintCallable)
    void ConsumePreparedGrenade(FGrenadeThrowInfo& outGrenadeInfoStruct);
    
public:
    UFUNCTION(BlueprintCallable)
    void CollateralKillEvent(const int32 PlayersKilled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientVaultNotify(float VaultHeight);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientUpdateTeams(uint8 TeamId, uint8 NationID);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientNotifyWeaponPickedUp();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyGrenadePickedUp(bool bSpecial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientNotifyDeath();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientNotifyDamageTaken(FKillMetaData HurtData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientJumpNotify();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateSpecificPawnMeshBasedOnClassChange(ABattalionPlayerState* PS, FLoadoutData NewClass);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdatePlayerInfectionVars(int32 In_InfectedMaxHealth, float In_InfectedSpeedModifier, int32 In_InfectedKnifeDamage, float In_InfectionHealthRegenPercentage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateAllPawnMeshes();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TakenDamage(const FVector& HitLocation, FName BoneName, FVector ShotFromDirection);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopInfectionAudio();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetWeaponSlot(int32 NewWeaponSlot);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetKnifeMesh(const FString& KnifeID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetAkSwitchState(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_QuickReloadEvent(ABattalionWeapon* WeaponQuickReloaded);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_QuickFireEvent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_PlayerAttacking();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_OnFlagHandle(bool isHoldingFlag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CancelReload();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ClearInventory();
    
    UFUNCTION(BlueprintCallable)
    void ClearFlashEffect();
    
    UFUNCTION(BlueprintCallable)
    void CharacterFlashed(float Duration);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPickupWeapon(const ABattalionWeaponPickup* WeaponToPickup) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelReload();
    
    UFUNCTION(BlueprintCallable)
    void CancelMovementFromFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_QuickReloadEvent(ABattalionWeapon* WeaponQuickReloaded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_QuickFireEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMeleeStarted(bool bIsFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMeleeHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMeleeEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchStateChanged(FName PreviousMatchState, FName NewMatchState);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintPlayHit(float DamageTaken, APawn* PawnInstigator, AActor* DamageCauser, bool FromDeath);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void BattServerMoveSaved(float Timestamp, FVector_NetQuantize InAccel, uint8 PendingFlags, float ViewYaw, float ViewPitch);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void BattServerMoveQuick(float Timestamp, FVector_NetQuantize InAccel, uint8 PendingFlags);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void BattServerMoveOld(float OldTimeStamp, FVector_NetQuantize OldAccel, float OldYaw, uint8 OldMoveFlags);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void BattServerMove(float Timestamp, FVector_NetQuantize InAccel, FVector_NetQuantize ClientLoc, uint8 CompressedMoveFlags, float ViewYaw, float ViewPitch, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void ApplySettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddSpecialGrenade(ESpecialGrenadeType SpecialGrenadeType);
    
    UFUNCTION(BlueprintCallable)
    void AddGrenade(EGrenadeType GrenadeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AboutToDestroyThisPawn();
    
    
    // Fix for true pure virtual functions not being implemented
};

