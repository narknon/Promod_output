#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUITopThreeScores.generated.h"

class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUITopThreeScores : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUITopThreeScores();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerList(const TArray<ABattalionPlayerState*>& LocalOrdererdPlayerStates);
    
};

