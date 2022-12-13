#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUIAmmoCount.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIAmmoCount : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool SavePositionPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ReloadPositionPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ResetRunPressed;
    
    UNUIAmmoCount();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGizmoHelpVisibility(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAmmoOnlyVis(bool bVisibility);
    
};

