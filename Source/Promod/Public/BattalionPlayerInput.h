#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "BattalionPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBattalionPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    UBattalionPlayerInput();
};

