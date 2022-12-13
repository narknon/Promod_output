#pragma once
#include "CoreMinimal.h"
#include "NUIGameOverview.h"
#include "NUICTFGameOverview.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUICTFGameOverview : public UNUIGameOverview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FlagStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeftFlagStateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RightFlagStateText;
    
    UNUICTFGameOverview();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEndgameState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlagStatesChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEndgameState();
    
};

