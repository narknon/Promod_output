#pragma once
#include "CoreMinimal.h"
#include "MapToModeSchema.generated.h"

USTRUCT(BlueprintType)
struct FMapToModeSchema {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInMapRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SupprtedModes;
    
    PROMOD_API FMapToModeSchema();
};

