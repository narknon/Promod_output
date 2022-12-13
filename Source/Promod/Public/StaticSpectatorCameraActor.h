#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "StaticSpectatorCameraActor.generated.h"

UCLASS(Blueprintable)
class AStaticSpectatorCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    AStaticSpectatorCameraActor();
};

