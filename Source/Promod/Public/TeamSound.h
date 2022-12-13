#pragma once
#include "CoreMinimal.h"
#include "TeamSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FTeamSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FriendlySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemySound;
    
    PROMOD_API FTeamSound();
};

