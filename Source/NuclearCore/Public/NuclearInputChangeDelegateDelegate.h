#pragma once
#include "CoreMinimal.h"
#include "ENuclearInputType.h"
#include "NuclearInputChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNuclearInputChangeDelegate, ENuclearInputType, NewInputType, ENuclearInputType, OldInputType);

