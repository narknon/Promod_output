#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MedalBase.generated.h"

class ABattalionGameMode;

UCLASS(Blueprintable)
class UMedalBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XPAward;
    
    UMedalBase();
};

