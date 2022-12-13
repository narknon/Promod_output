#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CamPathSplineActor.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ACamPathSplineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineCompLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineCompRot;
    
    ACamPathSplineActor();
};

