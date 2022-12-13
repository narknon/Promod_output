#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIRoundStartCountdown.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIRoundStartCountdown : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountdownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CountdownTimerText;
    
public:
    UNUIRoundStartCountdown();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CountdownTimerTick();
    
};

