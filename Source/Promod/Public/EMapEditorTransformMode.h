#pragma once
#include "CoreMinimal.h"
#include "EMapEditorTransformMode.generated.h"

UENUM(BlueprintType)
enum class EMapEditorTransformMode : uint8 {
    Translation,
    Rotation,
    Scale,
};

