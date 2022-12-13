#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIReadyPrompt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIReadyPrompt : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ReadyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText BindName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText RequiredPlayersRemainingText;
    
public:
    UNUIReadyPrompt();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowReadyWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerCountWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequiredPlayersRemainingChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReadyStateChanged();
    
};

