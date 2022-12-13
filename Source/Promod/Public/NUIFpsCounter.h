#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIFpsCounter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIFpsCounter : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText FpsText;
    
public:
    UNUIFpsCounter();
};

