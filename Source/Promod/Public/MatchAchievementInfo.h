#pragma once
#include "CoreMinimal.h"
#include "EMatchAchievementStat.h"
#include "MatchAchievementInfo.generated.h"

USTRUCT(BlueprintType)
struct FMatchAchievementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchAchievementStat Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    PROMOD_API FMatchAchievementInfo();
};

