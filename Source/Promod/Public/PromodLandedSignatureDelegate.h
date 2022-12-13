#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PromodLandedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPromodLandedSignature, const FHitResult&, Hit, bool, FromJump, float, Speed, bool, bSilentDrop);

