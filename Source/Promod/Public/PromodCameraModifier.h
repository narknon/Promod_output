#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "PromodCameraModifier.generated.h"

UCLASS(Blueprintable)
class UPromodCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothMaxLeanFrac;
    
    UPromodCameraModifier();
};

