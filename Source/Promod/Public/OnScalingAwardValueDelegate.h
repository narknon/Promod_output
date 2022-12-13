#pragma once
#include "CoreMinimal.h"
#include "OnFireAwardData.h"
#include "OnScalingAwardValueDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScalingAwardValue, const FOnFireAwardData&, AwardData, float, NewValue);

