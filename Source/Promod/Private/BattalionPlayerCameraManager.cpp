#include "BattalionPlayerCameraManager.h"

class APlayerState;
class ABattalionCharacter;

bool ABattalionPlayerCameraManager::IsViewingPlayer() {
    return false;
}

bool ABattalionPlayerCameraManager::IsViewedPlayerAlive() {
    return false;
}

APlayerState* ABattalionPlayerCameraManager::GetViewedPlayerState() {
    return NULL;
}

ABattalionCharacter* ABattalionPlayerCameraManager::GetViewedCharacter() {
    return NULL;
}

ABattalionPlayerCameraManager::ABattalionPlayerCameraManager() {
    this->CurrentCamBonus = 10.00f;
    this->HigherScoreBonus = 1.50f;
    this->CurrentActionBonus = 11.00f;
    this->SingleEnemyProximityBonus = 5.00f;
    this->LastThirdPersonTarget = NULL;
    this->ThirdPersonCameraSmoothingSpeed = 6.00f;
    this->ViewingCharacter = NULL;
    this->BattInstance = NULL;
    this->BattSettings = NULL;
}

