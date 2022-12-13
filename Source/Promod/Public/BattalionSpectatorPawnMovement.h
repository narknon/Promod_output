#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawnMovement.h"
#include "BattalionSpectatorPawnMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UBattalionSpectatorPawnMovement : public USpectatorPawnMovement {
    GENERATED_BODY()
public:
    UBattalionSpectatorPawnMovement();
};

