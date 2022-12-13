#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

class ABattalionCharacter;
class UBlackboardComponent;
class UBehaviorTreeComponent;

UCLASS(Blueprintable, Config=Game)
class AShooterAIController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorComp;
    
public:
    AShooterAIController();
    UFUNCTION(BlueprintCallable)
    void ShootEnemy();
    
    UFUNCTION(BlueprintCallable)
    bool FindClosestEnemyWithLOS(ABattalionCharacter* ExcludeEnemy);
    
    UFUNCTION(BlueprintCallable)
    void FindClosestEnemy();
    
};

