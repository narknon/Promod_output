#pragma once
#include "CoreMinimal.h"
#include "EMapViewSearchOption.generated.h"

UENUM(BlueprintType)
enum class EMapViewSearchOption : uint8 {
    Any,
    OnPlayer,
    OnMapBackground,
    OnMapFog,
    Disabled,
};

