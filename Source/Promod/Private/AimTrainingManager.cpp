#include "AimTrainingManager.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"





bool AAimTrainingManager::IsTrainingActive() const {
    return false;
}

FString AAimTrainingManager::GetTrainingDetails() const {
    return TEXT("");
}

AAimTrainingManager::AAimTrainingManager() {
    this->StartTrainingTarget = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StartTrainingTarget"));
    this->EndTrainingTarget = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndTrainingTarget"));
    this->TargetArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TargetArea"));
    this->TrainingMode = EAimTrainingMode::AT_Regular;
    this->TargetActorClass = NULL;
    this->TargetScaleScalar = 4.00f;
    this->EndOnNoLives = true;
    this->MaxLives = 3;
    this->TrainingStartDelay = 3.00f;
    this->EndOnTimer = false;
    this->TrainingTime = 60.00f;
    this->RegularTargetLifetime = 2.50f;
    this->RegularUseConstantInterval = false;
    this->RegularConstantInterval = 1.00f;
    this->RegularUseConstantSize = false;
    this->RandomiseReflexLocation = false;
    this->MaxReflexTime = true;
    this->DoubleTargetLifetime = 1.00f;
    this->DoubleTimeBetweenTargets = 2.00f;
    this->MovingTargetLifetime = 2.50f;
    this->TargetMoveSpeed = 350.00f;
    this->MovingUseConstantInterval = false;
    this->MovingConstantInterval = 1.00f;
    this->MovingUseConstantSize = false;
    this->ActiveTrainingLivesLeft = 0;
}

