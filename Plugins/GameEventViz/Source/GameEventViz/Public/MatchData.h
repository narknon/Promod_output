#pragma once
#include "CoreMinimal.h"
#include "FrameEvents.h"
#include "SpawnData.h"
#include "UObject/NoExportTypes.h"
#include "MatchData.generated.h"

USTRUCT(BlueprintType)
struct FMatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameEvents> FrameEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnData> Spawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    GAMEEVENTVIZ_API FMatchData();
};

