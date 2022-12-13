#pragma once
#include "CoreMinimal.h"
#include "PFTitleData.generated.h"

USTRUCT(BlueprintType)
struct FPFTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    PLAYFABSUBSYSTEM_API FPFTitleData();
};

