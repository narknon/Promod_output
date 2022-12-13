#pragma once
#include "CoreMinimal.h"
#include "MapData.generated.h"

USTRUCT(BlueprintType)
struct FMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TeamOneNation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TeamTwoNation;
    
    PROMOD_API FMapData();
};

