#pragma once
#include "CoreMinimal.h"
#include "PlayerInfoMinimal.generated.h"

USTRUCT(BlueprintType)
struct FPlayerInfoMinimal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetID;
    
    PROMOD_API FPlayerInfoMinimal();
};

