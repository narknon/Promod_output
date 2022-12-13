#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "JumperGameOverviewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UJumperGameOverviewWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JumperTimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JumperTimerTextMilliseconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JumperTimerTextSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JumperTimerTextMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JumperCheckpointText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText JumperRespawnText;
    
public:
    UJumperGameOverviewWidget();
};

