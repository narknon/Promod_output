#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "RoundWinCondition.h"
#include "NUICasterGraphs.generated.h"

class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUICasterGraphs : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattalionPlayerState*> Players;
    
    UNUICasterGraphs();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCurrentRounds(const TArray<FRoundWinCondition>& Rounds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPlayerToGraph(ABattalionPlayerState* PlayerState, int32 TeamIndex);
    
};

