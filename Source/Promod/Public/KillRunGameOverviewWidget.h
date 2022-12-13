#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KillRunGameOverviewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UKillRunGameOverviewWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KillRunTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KillRunTimerTextMilliseconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KillRunTimerTextSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KillRunTimerTextMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KillRunCheckpointText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KillRunTargetsRemainingText;
    
public:
    UKillRunGameOverviewWidget();
};

