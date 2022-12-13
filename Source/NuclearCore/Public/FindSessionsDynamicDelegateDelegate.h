#pragma once
#include "CoreMinimal.h"
#include "NuclearSessionResult.h"
#include "FindSessionsDynamicDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFindSessionsDynamicDelegate, bool, bSuccess, const TArray<FNuclearSessionResult>&, Results);

