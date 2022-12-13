#pragma once
#include "CoreMinimal.h"
#include "EAimTrainingMode.generated.h"

UENUM(BlueprintType)
enum class EAimTrainingMode : uint8 {
    AT_None,
    AT_Regular,
    AT_Reflex,
    AT_Moving,
    AT_Double,
    AT_MAX UMETA(Hidden),
};

