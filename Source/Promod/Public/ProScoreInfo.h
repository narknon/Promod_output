#pragma once
#include "CoreMinimal.h"
#include "EProScoreType.h"
#include "UObject/NoExportTypes.h"
#include "ProScoreInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FProScoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProScoreType ProScoreType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Colour;
    
    PROMOD_API FProScoreInfo();
};

