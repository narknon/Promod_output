#pragma once
#include "CoreMinimal.h"
#include "PromodGameMode.h"
#include "PromodTDMGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class APromodTDMGameMode : public APromodGameMode {
    GENERATED_BODY()
public:
    APromodTDMGameMode();
};

