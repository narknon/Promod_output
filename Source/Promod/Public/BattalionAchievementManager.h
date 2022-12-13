#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattalionAchievementManager.generated.h"

UCLASS(Blueprintable, Config=Game, Within=BattalionGameInstance)
class UBattalionAchievementManager : public UObject {
    GENERATED_BODY()
public:
    UBattalionAchievementManager();
    UFUNCTION(BlueprintCallable)
    void AwardAchievement(const FString& AchievementID, float CurrentProgress);
    
};

