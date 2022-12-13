#pragma once
#include "CoreMinimal.h"
#include "EMapEditorTransformSpace.h"
#include "TransformSpaceUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransformSpaceUpdated, EMapEditorTransformSpace, NewTransformSpace);

