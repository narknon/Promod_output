#pragma once
#include "CoreMinimal.h"
#include "ENuclearMacroEvent.generated.h"

UENUM(BlueprintType)
enum class ENuclearMacroEvent : uint8 {
    None,
    KeyDown,
    KeyUp,
    Analog,
    MouseMove,
    MouseDown,
    MouseUp,
};

