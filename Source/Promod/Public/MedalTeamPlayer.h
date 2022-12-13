#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalTeamPlayer.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalTeamPlayer : public UMedalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
public:
    UMedalTeamPlayer();
};

