#pragma once
#include "CoreMinimal.h"
#include "PFPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FPFPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    PLAYFABSUBSYSTEM_API FPFPlayerData();
};

