#pragma once
#include "CoreMinimal.h"
#include "EDefaultPromptButtonSelection.generated.h"

UENUM(BlueprintType)
enum class EDefaultPromptButtonSelection : uint8 {
    NONE,
    ACCEPT,
    CANCEL,
    MAX,
};

