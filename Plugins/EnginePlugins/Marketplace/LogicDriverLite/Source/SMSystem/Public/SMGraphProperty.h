#pragma once
#include "CoreMinimal.h"
#include "SMGraphProperty_Base.h"
#include "SMGraphProperty.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMGraphProperty : public FSMGraphProperty_Base {
    GENERATED_BODY()
public:
    FSMGraphProperty();
};

