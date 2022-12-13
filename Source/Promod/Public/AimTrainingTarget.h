#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Damageable.h"
#include "AimTrainingTarget.generated.h"

class AAimTrainingManager;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AAimTrainingTarget : public AActor, public IDamageable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TargetMeshPtr;
    
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AAimTrainingManager> WeakManagerPtr;
    
    AAimTrainingTarget();
    
    // Fix for true pure virtual functions not being implemented
};

