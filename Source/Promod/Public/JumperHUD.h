#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionHUD.h"
#include "JumperHUD.generated.h"

class UNUIJumperLeaderboard;

UCLASS(Blueprintable, NonTransient)
class PROMOD_API AJumperHUD : public ABattalionHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIJumperLeaderboard* JumperLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIJumperLeaderboard> JumperLeaderboardClass;
    
    AJumperHUD();
};

