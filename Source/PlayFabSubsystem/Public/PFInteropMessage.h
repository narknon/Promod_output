#pragma once
#include "CoreMinimal.h"
#include "EPFInteropCommand.h"
#include "PFInteropMessage.generated.h"

USTRUCT(BlueprintType)
struct FPFInteropMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPFInteropCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Params;
    
    PLAYFABSUBSYSTEM_API FPFInteropMessage();
};

