#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "ButtonRightClickedEventDelegate.h"
#include "NUI_RightClickableButton.generated.h"

UCLASS(Blueprintable)
class UNUI_RightClickableButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonRightClickedEvent OnRightClick;
    
    UNUI_RightClickableButton();
};

