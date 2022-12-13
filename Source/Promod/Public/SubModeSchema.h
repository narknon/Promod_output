#pragma once
#include "CoreMinimal.h"
#include "SubModeParent.h"
#include "SubModeSchema.generated.h"

USTRUCT(BlueprintType)
struct FSubModeSchema {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubModeParent> SubModeData;
    
    PROMOD_API FSubModeSchema();
};

