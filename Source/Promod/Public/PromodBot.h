#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "Perception/AISightTargetInterface.h"
#include "Damageable.h"
#include "OnBotDeathDelegate.h"
#include "Engine/EngineTypes.h"
#include "EStanceType.h"
#include "Engine/EngineTypes.h"
#include "PromodBot.generated.h"

class UAkAudioEvent;
class UMapIconComponent;
class APatrolPath;
class UWidgetComponent;
class UPromodBotSMInstance;
class UAnimMontage;
class UDamageType;
class UAkComponent;
class AActor;
class AController;

UCLASS(Blueprintable)
class PROMOD_API APromodBot : public ACharacter, public IAISightTargetInterface, public IDamageable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIconComponent* MapIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* SpatialMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPromodBotSMInstance> StateMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APatrolPath* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHealthRegenerating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthToRegenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitmarkerFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitmarkerKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HeadshotKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathSound;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBotDeath OnBotDeathDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathAnim;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> LOSTraceBlockingObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaySpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> KnifeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> QuickMeleeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FallDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> NadeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UnSpawnSound;
    
public:
    APromodBot();
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Materialize(bool bMaterializeIn);
    
    UFUNCTION(BlueprintCallable)
    void MaterializationFinished(bool bMaterializeIn);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetStance(EStanceType& OutStanceType);
    
    UFUNCTION(BlueprintCallable)
    APatrolPath* GetPatrolPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultStandingHeight() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableRagdoll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDeath(float KillingDamage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    
    // Fix for true pure virtual functions not being implemented
};

