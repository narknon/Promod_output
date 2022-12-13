#pragma once
#include "CoreMinimal.h"
#include "NUIGameOverview.h"
#include "NUIHQGameOverview.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIHQGameOverview : public UNUIGameOverview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectiveStateProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentStateName;
    
    UNUIHQGameOverview();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEndgameState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlagStatesChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEndgameState();
    
};

