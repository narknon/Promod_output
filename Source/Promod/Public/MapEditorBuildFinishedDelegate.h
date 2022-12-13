#pragma once
#include "CoreMinimal.h"
#include "MapEditorBuildFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapEditorBuildFinished, bool, bSuccess, const TArray<FString>&, Errors);

