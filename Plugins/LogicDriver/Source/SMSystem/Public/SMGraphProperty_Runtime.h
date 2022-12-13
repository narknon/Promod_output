#pragma once
#include "CoreMinimal.h"
#include "SMGraphProperty_Base_Runtime.h"
#include "SMGraphProperty_Runtime.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMGraphProperty_Runtime : public FSMGraphProperty_Base_Runtime {
    GENERATED_BODY()
public:
    FSMGraphProperty_Runtime();
};

