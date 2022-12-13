#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIOneInTheChamberLivesLeft.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIOneInTheChamberLivesLeft : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LivesLeft;
    
    UNUIOneInTheChamberLivesLeft();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LivesLeftUpdated();
    
};

