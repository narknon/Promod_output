#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "GameFramework/PlayerInput.h"
#include "NUINadeControlInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUINadeControlInfo : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GrenadeAvailableToView;
    
    UNUINadeControlInfo();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMapName(const FText& MapName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrenadeViewStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrenadeViewStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrenadeUnavailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrenadeAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeysForAction(FName ActionName, TArray<FInputActionKeyMapping>& Bindings);
    
};

