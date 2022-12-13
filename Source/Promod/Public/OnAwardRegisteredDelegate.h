#pragma once
#include "CoreMinimal.h"
#include "OnFireAwardData.h"
#include "OnAwardRegisteredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAwardRegistered, const FOnFireAwardData&, AwardData);

