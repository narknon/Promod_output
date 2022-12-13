#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/HUD.h"
#include "PromodHUD.generated.h"

class UHUDMaster;

UCLASS(Blueprintable, NonTransient)
class APromodHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDMaster* MasterHUDWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDMaster> MasterHUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDMaster> JumperHUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDMaster> SNDHUDClass;
    
public:
    APromodHUD();
    UFUNCTION(BlueprintCallable)
    UHUDMaster* GetMasterHudWidget();
    
};

