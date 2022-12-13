#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUIMapSelectDisplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIMapSelectDisplay : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UNUIMapSelectDisplay();
    UFUNCTION(BlueprintCallable)
    void OnPressed();
    
};

