#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TDMHUD.h"
#include "InfectionHUD.generated.h"

class UNUIINFGameOverview;

UCLASS(Blueprintable, NonTransient)
class AInfectionHUD : public ATDMHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIINFGameOverview* INFGameOverview;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIINFGameOverview> INFGameOverviewClass;
    
public:
    AInfectionHUD();
    UFUNCTION(BlueprintCallable)
    void StartEndgameState();
    
    UFUNCTION(BlueprintCallable)
    void FinishEndgameState();
    
};

