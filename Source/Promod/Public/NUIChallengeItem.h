#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChallengeInfo.h"
#include "NUIChallengeItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIChallengeItem : public UUserWidget {
    GENERATED_BODY()
public:
    UNUIChallengeItem();
    UFUNCTION(BlueprintCallable)
    void SetChallengeInfo(const FChallengeInfo& InChallengeInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetAndUpdateCompletedWeeklyChallengeInfo(const FChallengeInfo& InChallengeInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetAndUpdateCompletedDailyChallengeInfo(const FChallengeInfo& InChallengeInfo, int32 challengeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeInfoSet(const FChallengeInfo& InChallengeInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimUpdate(float PercentageComplete, int32 CurrentDisplayValue, int32 DisplayTargetValue);
    
    UFUNCTION(BlueprintCallable)
    FString GetDescriptionForCurrentLocale();
    
};

