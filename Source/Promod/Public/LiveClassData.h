#pragma once
#include "CoreMinimal.h"
#include "EClassName.h"
#include "LiveClassData.generated.h"

USTRUCT(BlueprintType)
struct FLiveClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClassName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberInUse;
    
    PROMOD_API FLiveClassData();
};

