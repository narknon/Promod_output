#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "BattalionTutorialPickup.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;
class ABattalionWeapon;
class USceneComponent;
class ABattalionCharacter;
class UBattalionDamageType;

UCLASS(Blueprintable)
class ABattalionTutorialPickup : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionWeapon> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
public:
    ABattalionTutorialPickup();
    UFUNCTION(BlueprintCallable)
    void SetWeapon(ABattalionWeapon* NewWeapon);
    
    UFUNCTION(BlueprintCallable)
    void RequestPickup(ABattalionCharacter* Other);
    
    UFUNCTION(BlueprintCallable)
    UBattalionDamageType* GetWeaponDamageType();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABattalionWeapon> GetWeaponClass();
    
};

