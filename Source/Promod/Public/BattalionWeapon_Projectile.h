#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BattalionWeapon.h"
#include "ProjectileWeaponData.h"
#include "Engine/NetSerialization.h"
#include "BattalionWeapon_Projectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ABattalionWeapon_Projectile : public ABattalionWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileWeaponData ProjectileConfig;
    
public:
    ABattalionWeapon_Projectile();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireProjectile(FVector Origin, FVector_NetQuantizeNormal ShootDir);
    
};

