#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUISpectatorStatBars.generated.h"

class UNUISpectatorIconGroup;

UCLASS(Blueprintable, EditInlineNew)
class UNUISpectatorStatBars : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUISpectatorIconGroup* IconGroupLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUISpectatorIconGroup* IconGroupRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimoutVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TimeoutTimerString;
    
    UNUISpectatorStatBars();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeoutVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeoutTimerString(const FString& Timer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareForLoadoutPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndLoadoutPhase();
    
};

