#pragma once
#include "CoreMinimal.h"
#include "AnotherNotchTracker.generated.h"

class ABattalionPlayerState;

USTRUCT(BlueprintType)
struct FAnotherNotchTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* KillerPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattalionPlayerState*> UniqueKilledPlayers;
    
    PROMOD_API FAnotherNotchTracker();
};

