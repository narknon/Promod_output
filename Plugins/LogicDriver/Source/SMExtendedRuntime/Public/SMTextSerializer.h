#pragma once
#include "CoreMinimal.h"
#include "SMTextSerializer.generated.h"

USTRUCT(BlueprintType)
struct SMEXTENDEDRUNTIME_API FSMTextSerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ToTextFunctionNames;
    
    FSMTextSerializer();
};

