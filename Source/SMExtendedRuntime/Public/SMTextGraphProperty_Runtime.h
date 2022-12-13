#pragma once
#include "CoreMinimal.h"
#include "SMGraphProperty_Base_Runtime.h"
#include "SMTextSerializer.h"
#include "SMTextGraphProperty_Runtime.generated.h"

USTRUCT(BlueprintType)
struct SMEXTENDEDRUNTIME_API FSMTextGraphProperty_Runtime : public FSMGraphProperty_Base_Runtime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMTextSerializer TextSerializer;
    
    FSMTextGraphProperty_Runtime();
};

