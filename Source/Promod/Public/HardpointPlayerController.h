#pragma once
#include "CoreMinimal.h"
#include "PromodTDMPlayerController.h"
#include "HardpointPlayerController.generated.h"

UCLASS(Blueprintable)
class AHardpointPlayerController : public APromodTDMPlayerController {
    GENERATED_BODY()
public:
    AHardpointPlayerController();
};

