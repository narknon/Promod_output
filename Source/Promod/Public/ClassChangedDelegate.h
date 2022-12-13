#pragma once
#include "CoreMinimal.h"
#include "LoadoutData.h"
#include "ClassChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClassChanged, const FLoadoutData&, NewClass);

