#include "BattalionSpectatorPawn.h"
#include "Components/SphereComponent.h"
#include "Components/PostProcessComponent.h"

class ABattalionCharacter;
class AActor;

void ABattalionSpectatorPawn::ViewPrevPlayer(bool bManual) {
}

void ABattalionSpectatorPawn::ViewNextPlayer(bool bManual) {
}

void ABattalionSpectatorPawn::ToggleVisionLines() {
}

void ABattalionSpectatorPawn::ToggleOutlines() {
}

void ABattalionSpectatorPawn::ToggleMap() {
}

void ABattalionSpectatorPawn::ToggleGrenadeLines() {
}

void ABattalionSpectatorPawn::ToggleActionCamera() {
}

void ABattalionSpectatorPawn::SetCurrentlySpectating(ABattalionCharacter* NewSpectating) {
}

void ABattalionSpectatorPawn::SetCameraMode(ESpectatorCameraMode Mode) {
}

bool ABattalionSpectatorPawn::IsFirstPerson() {
    return false;
}

FVector ABattalionSpectatorPawn::GetLookAtLocation() {
    return FVector{};
}

ABattalionCharacter* ABattalionSpectatorPawn::GetCurrentlySpectating() {
    return NULL;
}

void ABattalionSpectatorPawn::Client_ClearFlashEffect_Implementation() {
}

void ABattalionSpectatorPawn::CamPathStop() {
}

void ABattalionSpectatorPawn::CamPathSetFocusActor(AActor* FocusActor) {
}

void ABattalionSpectatorPawn::CamPathRemoveLastCamera() {
}

void ABattalionSpectatorPawn::CamPathRamoveAllCameras() {
}

void ABattalionSpectatorPawn::CamPathPlay(float Duration) {
}

int32 ABattalionSpectatorPawn::CamPathCamerasAmount() {
    return 0;
}

void ABattalionSpectatorPawn::CamPathAddCamera(AActor* CameraActor, bool bFromCached) {
}

ABattalionSpectatorPawn::ABattalionSpectatorPawn() {
    this->OwnerPC = NULL;
    this->CurrentlyspectatingPC = NULL;
    this->CurrentlySpectating = NULL;
    this->CurrentlySpectatingPS = NULL;
    this->ViewedGrenade = NULL;
    this->CameraMode = ESpectatorCameraMode::FirstPerson;
    this->bOutlinesEnabled = false;
    this->bGrenadeLinesEnabled = false;
    this->bActionCamera = false;
    this->OutlinePostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("DeathPostProcess"));
    this->SnapshotPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("SnapshotPostProcess"));
    this->FlashPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("FlashPostProcess"));
    this->GrenadeLineRed = NULL;
    this->GrenadeLineGreen = NULL;
    this->GrenadeLineYellow = NULL;
    this->CurrentDOMZone = NULL;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent0"));
    this->CamPathFocusActor = NULL;
    this->CamPathSpline = NULL;
    this->CamPathCurrentTime = 0.00f;
    this->CamPathTotalTime = 0.00f;
    this->bCamPathPlaying = false;
    this->BattInstance = NULL;
    this->BattSettings = NULL;
    this->DebugCameraController = NULL;
}

