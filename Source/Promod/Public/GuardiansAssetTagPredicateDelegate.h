#pragma once
#include "CoreMinimal.h"
#include "GuardiansAssetTagPredicateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FGuardiansAssetTagPredicate, const FString&, TagValue);

