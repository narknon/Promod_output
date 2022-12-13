#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "ChallengeInfo.h"
#include "NUIMainMenu.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UNUIMainMenu : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialEntry;
    
    UNUIMainMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateWeeklyTimer(const FText& TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateWeeklyChallenge(const FChallengeInfo& ChallengeInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateDailyTimer(const FText& TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateDailyChallenge(int32 challengeIndex, const FChallengeInfo& ChallengeInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnMenuItemSelected(int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetMenuOptionVisible(UObject* WorldContextObject, int32 Index);
    
};

