#pragma once
#include "CoreMinimal.h"
#include "EFireUpState.generated.h"

UENUM(BlueprintType)
enum class EFireUpState : uint8 {
    None,
    Deploying,
    Activated,
    Completed,
};

