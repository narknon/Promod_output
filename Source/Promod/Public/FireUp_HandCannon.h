#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESlotType.h"
#include "FireUpAction.h"
#include "FireUp_HandCannon.generated.h"

class ABattalionWeapon;
class ABattalionWeapon_Instant;
class UAkAudioEvent;

UCLASS(Blueprintable)
class PROMOD_API AFireUp_HandCannon : public AFireUpAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionWeapon> HandCannonWeaponClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionWeapon_Instant* SpawnedHandCannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlotType PreviousSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HandCannonShot;
    
public:
    AFireUp_HandCannon();
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FinishAction();
    
};

