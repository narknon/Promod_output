#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIBaseHUDElement.h"
#include "EChatChannels.h"
#include "NUIChatBox.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIChatBox : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIChatBox();
    UFUNCTION(BlueprintCallable)
    void AllMessagesExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMessageToBox(const FText& Message, EChatChannels Channel, bool IsDev, ESlateVisibility GlobalIconVisibility);
    
};

