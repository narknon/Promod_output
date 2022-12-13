#pragma once
#include "CoreMinimal.h"
#include "Components/CheckBox.h"
#include "Styling/SlateTypes.h"
#include "PromodCheckBox.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodCheckBox : public UCheckBox {
    GENERATED_BODY()
public:
    UPromodCheckBox();
    UFUNCTION(BlueprintCallable)
    void SetStyle(const FCheckBoxStyle& InStyle);
    
};

