#pragma once
#include "CoreMinimal.h"
#include "NUIGameOverview.h"
#include "UObject/NoExportTypes.h"
#include "NUIINFGameOverview.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIINFGameOverview : public UNUIGameOverview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentPlayerObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LeftProgressBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RightProgressBarColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LeftProgressbarText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RightProgressbarText;
    
    UNUIINFGameOverview();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEndgameState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEndgameState();
    
};

