#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "SlideFovCameraModifier.generated.h"

UCLASS(Blueprintable)
class USlideFovCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    USlideFovCameraModifier();
};

