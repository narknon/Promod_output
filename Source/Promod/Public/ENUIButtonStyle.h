#pragma once
#include "CoreMinimal.h"
#include "ENUIButtonStyle.generated.h"

UENUM(BlueprintType)
enum class ENUIButtonStyle : uint8 {
    None,
    Normal,
    Hovered,
    Pressed,
};

