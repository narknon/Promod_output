#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "BlitzWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROMOD_API UBlitzWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UBlitzWidgetComponent();
};

