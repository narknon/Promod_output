#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionWeapon_Instant.h"
#include "BattalionWeapon_Melee.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class ABattalionWeapon_Melee : public ABattalionWeapon_Instant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> OffhandAnimClass;
    
    ABattalionWeapon_Melee();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisplayMeleeAttack();
    
};

