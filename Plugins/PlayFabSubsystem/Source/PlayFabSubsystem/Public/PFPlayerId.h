#pragma once
#include "CoreMinimal.h"
#include "PFPlayerId.generated.h"

USTRUCT(BlueprintType)
struct PLAYFABSUBSYSTEM_API FPFPlayerId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MasterId;
    
public:
    FPFPlayerId();
};

