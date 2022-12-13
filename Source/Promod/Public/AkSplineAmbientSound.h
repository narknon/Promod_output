#pragma once
#include "CoreMinimal.h"
#include "AkAmbientSound.h"
#include "AkSplineAmbientSound.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class AAkSplineAmbientSound : public AAkAmbientSound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* AmbientSoundSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStayStill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
public:
    AAkSplineAmbientSound();
};

