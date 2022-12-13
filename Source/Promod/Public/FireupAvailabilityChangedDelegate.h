#pragma once
#include "CoreMinimal.h"
#include "FireupAvailabilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFireupAvailabilityChanged, bool, bAvailable);

