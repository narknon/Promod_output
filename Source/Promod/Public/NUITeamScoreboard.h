#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "NUITeamScoreboard.generated.h"

class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUITeamScoreboard : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UNUITeamScoreboard();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTeamList(int32 TeamIndex, int32 TeamScore, const TArray<ABattalionPlayerState*>& OrderedPlayerStates, const FString& TeamName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FString& Text);
    
};

