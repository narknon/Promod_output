#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerNameTickComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerNameTickComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPlayerNameTickComponent();
};

