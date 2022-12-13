#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIBombIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIBombIcon : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility IconVisibility;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AmmoWidgetWidth;
    
public:
    UNUIBombIcon();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoWidgetWidthChanged(float Width);
    
};

