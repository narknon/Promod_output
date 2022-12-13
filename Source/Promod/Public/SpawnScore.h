#pragma once
#include "CoreMinimal.h"
#include "SpawnScore.generated.h"

class ABattalionPlayerSpawn;

USTRUCT(BlueprintType)
struct FSpawnScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerSpawn* PlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerScore;
    
    PROMOD_API FSpawnScore();
};

