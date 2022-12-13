#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "SlideYawLimitCameraModifier.generated.h"

UCLASS(Blueprintable)
class USlideYawLimitCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    USlideYawLimitCameraModifier();
};

