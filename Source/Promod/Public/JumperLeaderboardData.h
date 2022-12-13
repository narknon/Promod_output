#pragma once
#include "CoreMinimal.h"
#include "JumperLeaderboardElement.h"
#include "JumperLeaderboardData.generated.h"

USTRUCT(BlueprintType)
struct FJumperLeaderboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeaderboardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJumperLeaderboardElement> Players;
    
    PROMOD_API FJumperLeaderboardData();
};

