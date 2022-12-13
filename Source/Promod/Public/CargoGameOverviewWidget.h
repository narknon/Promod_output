#pragma once
#include "CoreMinimal.h"
#include "SndGameOverviewWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "CargoGameOverviewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UCargoGameOverviewWidget : public USndGameOverviewWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CargoProgressText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OvertimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility OvertimeTimeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility CenterTimerVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SideTimerVisibility;
    
    UCargoGameOverviewWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayTimePulse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOvertimeStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOvertimeStarted();
    
};

