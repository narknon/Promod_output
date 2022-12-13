#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIFlagIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIFlagIcon : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility IconVisibility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AmmoWidgetWidth;
    
public:
    UNUIFlagIcon();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoWidgetWidthChanged(float Width);
    
};

