#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatCodeManager.generated.h"

UCLASS(Blueprintable)
class UCheatCodeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BufferSize;
    
    UPROPERTY(EditAnywhere)
    TArray<uint16> Buffer;
    
public:
    UCheatCodeManager();
};

