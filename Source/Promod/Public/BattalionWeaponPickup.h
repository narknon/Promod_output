#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "BattalionWeaponPickup.generated.h"

class ABattalionCharacter;
class UAkAudioEvent;
class USphereComponent;
class USkeletalMeshComponent;
class ABattalionWeapon;

UCLASS(Blueprintable)
class ABattalionWeaponPickup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* PickedUpBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyAfterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_OnMeshAnimatedOneFrame;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionWeapon> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Weapon, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* Weapon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
public:
    ABattalionWeaponPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestPickup(ABattalionCharacter* Other);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Weapon(ABattalionWeapon* LastWeapon);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABattalionWeapon> GetWeaponClass();
    
    UFUNCTION(BlueprintCallable)
    ABattalionWeapon* GetWeapon();
    
};

