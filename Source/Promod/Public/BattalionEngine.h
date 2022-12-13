#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "BattalionEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBattalionEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UBattalionEngine();
};

