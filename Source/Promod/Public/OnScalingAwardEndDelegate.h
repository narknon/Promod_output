#pragma once
#include "CoreMinimal.h"
#include "OnFireAwardData.h"
#include "OnScalingAwardEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScalingAwardEnd, const FOnFireAwardData&, AwardData);

