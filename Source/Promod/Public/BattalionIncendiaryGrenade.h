#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionGrenade.h"
#include "BattalionIncendiaryGrenade.generated.h"

class UAkComponent;
class UParticleSystemComponent;
class ABattalionIncendiaryEffect;

UCLASS(Blueprintable)
class ABattalionIncendiaryGrenade : public ABattalionGrenade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFuseTimerEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionIncendiaryEffect> IncendiaryEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* EmitterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionIncendiaryEffect* IncendiaryEffect;
    
    ABattalionIncendiaryGrenade();
};

