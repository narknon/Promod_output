#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIVoiceChatFeed.generated.h"

class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIVoiceChatFeed : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIVoiceChatFeed();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTalkerRemoved(const ABattalionPlayerState* Talker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTalkerAdded(const ABattalionPlayerState* NewTalker);
    
};

