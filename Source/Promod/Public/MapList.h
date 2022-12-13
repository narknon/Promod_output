#pragma once
#include "CoreMinimal.h"
#include "EGameModes.h"
#include "MapList.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMapList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGameModes> SuitableModes;
    
    PROMOD_API FMapList();
};

