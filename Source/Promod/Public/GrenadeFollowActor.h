#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrenadeFollowActor.generated.h"

class ABattalionGrenade;
class UBoxComponent;

UCLASS(Blueprintable)
class AGrenadeFollowActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RootBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionGrenade* LinkedGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BeginDestroyTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyTimer;
    
    AGrenadeFollowActor();
};

