#pragma once
#include "CoreMinimal.h"
#include "SaveDataInfo.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(EditAnywhere)
    uint8 SlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SafeVersion;
    
    PROMOD_API FSaveDataInfo();
};

