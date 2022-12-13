#pragma once
#include "CoreMinimal.h"
#include "MapRevealerRegisteredSignatureDelegate.generated.h"

class UMapRevealerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapRevealerRegisteredSignature, UMapRevealerComponent*, MapRevealer);

