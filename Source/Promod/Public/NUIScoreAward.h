#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "DeathMessage.h"
#include "NUIScoreAward.generated.h"

class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIScoreAward : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIScoreAward();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScoreForPlayer(ABattalionPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAwardWithValueAndText(int32 Value, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAwardWithValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCurrentScore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathMessage(FDeathMessage DeathMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCardCollect();
    
};

