#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Perception/AISightTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "BombMode_Bomb.generated.h"

class AController;
class USceneComponent;
class UAkComponent;
class USkeletalMeshComponent;
class UMapIconComponent;
class UParticleSystem;
class ABombMode_Zone;
class ABombPlayerState;
class UCurveFloat;
class UWorldMarkerComponent;
class UAkAudioEvent;
class APromodPlayerController;

UCLASS(Blueprintable, NotPlaceable)
class ABombMode_Bomb : public AActor, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DummyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BombMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapIconComponent* MapIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FBox DefuseBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DetonateEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamAllegiance, meta=(AllowPrivateAccess=true))
    int32 TeamAllegiance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABombMode_Zone* Zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool Armed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float Fuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsBeingDefused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABombPlayerState* Defuser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* Planter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TickingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTickingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAttackersSeeBombIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDefendersSeeBombIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanBeSeenByDefender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxFuse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugDefuseArea;
    
public:
    ABombMode_Bomb();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateShouldSeeMapIcon();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllegiance();
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSeeBombIcon(bool AttackersShouldSee, bool DefendersShouldSee);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamAllegiance();
    
    UFUNCTION(BlueprintCallable)
    APromodPlayerController* GetLocalPlayerController();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StopTickingSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StoppedPlanting();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StoppedDefusing();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StartedPlanting();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StartedDefusing();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_PlantSuccesful();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_DefuseSuccesful();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_BombExplodeEffect();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_BeginTickingSound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeSeenFrom(const FVector& ObserverLocation, FVector& OutSeenLocation, int32& NumberOfLoSChecksPerformed, float& OutSightStrength, const AActor* IgnoreActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DefuseSuccesful();
    
    
    // Fix for true pure virtual functions not being implemented
};

