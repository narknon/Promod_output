#pragma once
#include "CoreMinimal.h"
#include "EOptionType.generated.h"

UENUM(BlueprintType)
enum class EOptionType : uint8 {
    Menu,
    Kick,
    Mute,
    Report,
    Timeout,
};

