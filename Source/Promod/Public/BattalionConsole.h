#pragma once
#include "CoreMinimal.h"
#include "Engine/Console.h"
#include "BattalionConsole.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBattalionConsole : public UConsole {
    GENERATED_BODY()
public:
    UBattalionConsole();
};

