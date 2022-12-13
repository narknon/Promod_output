#pragma once
#include "CoreMinimal.h"
#include "ECognitiveServicesType.generated.h"

UENUM(BlueprintType)
enum class ECognitiveServicesType : uint8 {
    pfenum_SpeechToText,
    pfenum_SpeechToTextTranslation,
    pfenum_TextToSpeech,
    pfenum_TextToText,
    pfenum_MAX UMETA(Hidden),
};

