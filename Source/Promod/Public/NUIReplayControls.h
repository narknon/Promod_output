#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIReplayControls.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIReplayControls : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeWhenPaused;
    
    UNUIReplayControls();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleUI();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayTimeToSeconds_Float(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayTimeToSeconds(float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentReplayPausedState(bool bDoPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDollyCamEnabled();
    
    UFUNCTION(BlueprintCallable)
    FString GetTimeString(float TimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    FString GetKeyNameForHide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentReplayTotalTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReplayCurrentTimeInSeconds() const;
    
};

