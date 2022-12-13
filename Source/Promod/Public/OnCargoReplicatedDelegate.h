#pragma once
#include "CoreMinimal.h"
#include "OnCargoReplicatedDelegate.generated.h"

class AMonorail;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCargoReplicated, AMonorail*, CargoActor);

