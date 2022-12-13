#pragma once
#include "CoreMinimal.h"
#include "MapRevealerUnregisteredSignatureDelegate.generated.h"

class UMapRevealerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapRevealerUnregisteredSignature, UMapRevealerComponent*, MapRevealer);

