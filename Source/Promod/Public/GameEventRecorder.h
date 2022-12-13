#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatchData.h"
#include "FrameEvents.h"
#include "GameEventRecorder.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UGameEventRecorder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRecording;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchData MatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameEvents CurrentFrameData;
    
public:
    UGameEventRecorder();
};

