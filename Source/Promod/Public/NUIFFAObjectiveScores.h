#pragma once
#include "CoreMinimal.h"
#include "NUIObjectiveScores.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIFFAObjectiveScores.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIFFAObjectiveScores : public UNUIObjectiveScores {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility RivalVisibility;
    
public:
    UNUIFFAObjectiveScores();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplay();
    
};

