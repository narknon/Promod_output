#pragma once
#include "CoreMinimal.h"
#include "ECargoCheckpointType.generated.h"

UENUM(BlueprintType)
enum class ECargoCheckpointType : uint8 {
    Default,
    Objective,
    TugOfWar_MidPoint,
    TugOfWar_EndPoint,
};

