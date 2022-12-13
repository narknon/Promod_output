#pragma once
#include "CoreMinimal.h"
#include "PlayerStateData.h"
#include "ScoreboardData.generated.h"

class UBattalionTeam;

USTRUCT(BlueprintType)
struct FScoreboardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionTeam* Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerStateData> Players;
    
    PROMOD_API FScoreboardData();
};

