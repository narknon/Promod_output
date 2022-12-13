#pragma once
#include "CoreMinimal.h"
#include "SndGameOverviewWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "HardpointGameOverviewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UHardpointGameOverviewWidget : public USndGameOverviewWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingToStartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OvertimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility OvertimeTimeVisibility;
    
    UHardpointGameOverviewWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOvertimeStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOvertimeStarted();
    
};

