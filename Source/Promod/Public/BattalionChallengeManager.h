#pragma once
#include "CoreMinimal.h"
#include "ChallengeInfo.h"
#include "UObject/Object.h"
#include "BattalionChallengeManager.generated.h"

class UBattalionGameInstance;
class UPFPlayerIdCache;

UCLASS(Blueprintable, Config=Game, Within=BattalionGameInstance)
class UBattalionChallengeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPFPlayerIdCache* PFPlayerCache;
    
public:
    UBattalionChallengeManager();
    UFUNCTION(BlueprintCallable)
    FChallengeInfo GeWeeklyChallegeInfo();
    
    UFUNCTION(BlueprintCallable)
    FText GetFormattedWeeklyTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    FText GetFormattedDailyTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    FChallengeInfo GetDailyChallegeInfo(int32 challengeIndex);
    
    UFUNCTION(BlueprintCallable)
    void CheckValidChallenges();
    
};

