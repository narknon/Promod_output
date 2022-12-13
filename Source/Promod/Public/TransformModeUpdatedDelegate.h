#pragma once
#include "CoreMinimal.h"
#include "EMapEditorTransformMode.h"
#include "TransformModeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransformModeUpdated, EMapEditorTransformMode, NewTransformMode);

