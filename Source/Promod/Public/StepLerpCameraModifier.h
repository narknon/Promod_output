#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "StepLerpCameraModifier.generated.h"

UCLASS(Blueprintable)
class UStepLerpCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UStepLerpCameraModifier();
};

