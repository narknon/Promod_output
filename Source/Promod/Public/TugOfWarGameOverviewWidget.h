#pragma once
#include "CoreMinimal.h"
#include "SndGameOverviewWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "TugOfWarGameOverviewWidget.generated.h"

class ACargoGameState;

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UTugOfWarGameOverviewWidget : public USndGameOverviewWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SpawnQueueTextVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility OvertimeTimeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility CenterTimerVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SideTimerVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpawnQueueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACargoGameState* CargoGameState;
    
public:
    UTugOfWarGameOverviewWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSpawnQueueText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOvertimeStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOvertimeStarted();
    
};

