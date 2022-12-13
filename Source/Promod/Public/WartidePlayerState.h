#pragma once
#include "CoreMinimal.h"
#include "BombPlayerState.h"
#include "EWeaponType.h"
#include "WartidePlayerState.generated.h"

UCLASS(Blueprintable)
class AWartidePlayerState : public ABombPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWeaponCarriedOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EWeaponType PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EWeaponType SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumPrimaryGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumSecondaryGrenades;
    
    AWartidePlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

