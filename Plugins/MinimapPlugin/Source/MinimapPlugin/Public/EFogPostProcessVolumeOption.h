#pragma once
#include "CoreMinimal.h"
#include "EFogPostProcessVolumeOption.generated.h"

UENUM(BlueprintType)
enum class EFogPostProcessVolumeOption : uint8 {
    AutoLocate,
    AutoLocateOrCreate,
    Manual,
};

