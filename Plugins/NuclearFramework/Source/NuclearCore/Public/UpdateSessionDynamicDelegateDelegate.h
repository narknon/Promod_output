#pragma once
#include "CoreMinimal.h"
#include "UpdateSessionDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateSessionDynamicDelegate, bool, bSuccess);

