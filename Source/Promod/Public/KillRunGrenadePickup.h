#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionTutorialPickup.h"
#include "KillRunGrenadePickup.generated.h"

class ABattalionGrenade;

UCLASS(Blueprintable)
class PROMOD_API AKillRunGrenadePickup : public ABattalionTutorialPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlimitedSupply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSupply;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionGrenade* Grenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionGrenade> GrenadeClass;
    
public:
    AKillRunGrenadePickup();
    UFUNCTION(BlueprintCallable)
    void SetGrenade(ABattalionGrenade* NewGrenade);
    
};

