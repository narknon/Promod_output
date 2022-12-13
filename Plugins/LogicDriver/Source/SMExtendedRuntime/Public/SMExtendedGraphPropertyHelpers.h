#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SMTextGraphProperty.h"
#include "SMExtendedGraphPropertyHelpers.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USMExtendedGraphPropertyHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USMExtendedGraphPropertyHelpers();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakTextGraphProperty(const FSMTextGraphProperty& GraphProperty, FText& Result);
    
};

