#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BotFollowActor.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ABotFollowActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RootBox;
    
    ABotFollowActor();
};

