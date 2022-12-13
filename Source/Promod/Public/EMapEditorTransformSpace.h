#pragma once
#include "CoreMinimal.h"
#include "EMapEditorTransformSpace.generated.h"

UENUM(BlueprintType)
enum class EMapEditorTransformSpace : uint8 {
    WorldSpace,
    LocalSpace,
};

