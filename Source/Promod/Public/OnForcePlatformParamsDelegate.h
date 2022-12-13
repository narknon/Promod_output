#pragma once
#include "CoreMinimal.h"
#include "EForcedPlatform.h"
#include "OnForcePlatformParamsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnForcePlatformParams, EForcedPlatform, forcedPlatfomr, bool, IsForcingPlatform);

