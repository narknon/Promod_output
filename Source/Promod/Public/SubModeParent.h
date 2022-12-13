#pragma once
#include "CoreMinimal.h"
#include "SubModeData.h"
#include "SubModeParent.generated.h"

USTRUCT(BlueprintType)
struct FSubModeParent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubModeData> SubModes;
    
    PROMOD_API FSubModeParent();
};

