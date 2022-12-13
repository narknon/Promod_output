#pragma once
#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "MapEditorPawnMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROMOD_API UMapEditorPawnMovement : public UFloatingPawnMovement {
    GENERATED_BODY()
public:
    UMapEditorPawnMovement();
};

