#pragma once
#include "CoreMinimal.h"
#include "NuclearPropertyRef.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct NUCLEARCORE_API FNuclearPropertyRef {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* PropertyOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PropertyName;
    
public:
    FNuclearPropertyRef();
};

