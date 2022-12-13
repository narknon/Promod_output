#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SoundNodeLocalPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USoundNodeLocalPlayer : public USoundNode {
    GENERATED_BODY()
public:
    USoundNodeLocalPlayer();
};

