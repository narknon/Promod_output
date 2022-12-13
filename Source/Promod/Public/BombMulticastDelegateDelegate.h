#pragma once
#include "CoreMinimal.h"
#include "BombMulticastDelegateDelegate.generated.h"

class APromodPlayerState;
class ABombMode_Bomb;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBombMulticastDelegate, APromodPlayerState*, InstigatorPS, ABombMode_Bomb*, Bomb);

