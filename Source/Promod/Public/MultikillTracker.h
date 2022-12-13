#pragma once
#include "CoreMinimal.h"
#include "MultikillTracker.generated.h"

class ABattalionPlayerState;

USTRUCT(BlueprintType)
struct FMultikillTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* BattPS;
    
    PROMOD_API FMultikillTracker();
};

