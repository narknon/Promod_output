#pragma once
#include "CoreMinimal.h"
#include "SMNodeDescription.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMNodeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FSMNodeDescription();
};

