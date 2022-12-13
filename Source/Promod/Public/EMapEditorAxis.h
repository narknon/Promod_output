#pragma once
#include "CoreMinimal.h"
#include "EMapEditorAxis.generated.h"

UENUM(BlueprintType)
enum class EMapEditorAxis : uint8 {
    X,
    Y,
    Z,
    XY,
    XZ,
    YZ,
    XYZ,
};

