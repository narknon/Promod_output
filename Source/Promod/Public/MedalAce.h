#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "AceTracker.h"
#include "MedalAce.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedalAce : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAceTracker> AceTrackers;
    
    UMedalAce();
};

