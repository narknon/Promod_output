#include "ShooterAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

class ABattalionCharacter;

void AShooterAIController::ShootEnemy() {
}

bool AShooterAIController::FindClosestEnemyWithLOS(ABattalionCharacter* ExcludeEnemy) {
    return false;
}

void AShooterAIController::FindClosestEnemy() {
}

AShooterAIController::AShooterAIController() {
    this->BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
    this->BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
}

