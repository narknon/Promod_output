#pragma once
#include "CoreMinimal.h"
#include "NUIGenericPopup.h"
#include "NUITimedPopup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUITimedPopup : public UNUIGenericPopup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowing;
    
    UNUITimedPopup();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonsActive(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void CheckButtonVisibility(float DeltaTime);
    
};

