#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "GuardianCameraModifier.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UGuardianCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UGuardianCameraModifier();
};

