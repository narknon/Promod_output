#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "BattalionLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBattalionLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UBattalionLocalPlayer();
};

