#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "MapAreaPrimitiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MINIMAPPLUGIN_API UMapAreaPrimitiveComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UMapAreaPrimitiveComponent();
};

