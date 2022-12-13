#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TDMHUD.h"
#include "HeadquartersHUD.generated.h"

class UNUIHQGameOverview;
class UNUIWeaponPrompt;

UCLASS(Blueprintable, NonTransient)
class AHeadquartersHUD : public ATDMHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIHQGameOverview* HQGameOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIWeaponPrompt* RespawnNotificationWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIWeaponPrompt> RespawnNotificationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIHQGameOverview> HQGameOverviewClass;
    
public:
    AHeadquartersHUD();
    UFUNCTION(BlueprintCallable)
    void StartEndgameState();
    
    UFUNCTION(BlueprintCallable)
    void FinishEndgameState();
    
};

