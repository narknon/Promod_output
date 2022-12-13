#pragma once
#include "CoreMinimal.h"
#include "EInGameAchievementStat.h"
#include "InGameAchievementInfo.generated.h"

USTRUCT(BlueprintType)
struct FInGameAchievementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInGameAchievementStat Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    PROMOD_API FInGameAchievementInfo();
};

