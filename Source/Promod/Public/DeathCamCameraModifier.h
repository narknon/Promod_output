#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "DeathCamCameraModifier.generated.h"

class UPromodDeathCamera;

UCLASS(Blueprintable)
class PROMOD_API UDeathCamCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPromodDeathCamera* DeathCameraComponent;
    
public:
    UDeathCamCameraModifier();
};

