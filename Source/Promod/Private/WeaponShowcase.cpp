#include "WeaponShowcase.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SkeletalMeshComponent.h"

class USkeletalMesh;
class USkinDataAsset;
class UMaterialInstance;
class UTextureRenderTarget2D;

void AWeaponShowcase::ZoomCamera(float DeltaZoom) {
}

void AWeaponShowcase::ShowSelectedSkin(FSkinEntity skin, USkinDataAsset* SkinDataAsset) {
}

void AWeaponShowcase::SetTargetTexture(UTextureRenderTarget2D* Target) {
}

void AWeaponShowcase::SetModelOrientation(FRotator TargetRotation, bool bInstant) {
}

void AWeaponShowcase::SetCameraZoom(float Zoom, bool bInstant) {
}

void AWeaponShowcase::SetCameraPosition(FVector2D Position, bool bInstant) {
}

void AWeaponShowcase::SelectMesh(EWeaponType WeaponType) {
}

void AWeaponShowcase::RotateModel(FRotator Rotation) {
}

void AWeaponShowcase::ResetView(bool bInstant) {
}

void AWeaponShowcase::ResetDesiredZoom() {
}

void AWeaponShowcase::PanCamera(FVector2D DeltaPos) {
}

void AWeaponShowcase::OverrideMesh(USkeletalMesh* WeaponMesh) {
}

FRotator AWeaponShowcase::GetTargetModelOrientation() {
    return FRotator{};
}

float AWeaponShowcase::GetTargetCameraZoom() {
    return 0.0f;
}

FVector2D AWeaponShowcase::GetTargetCameraPosition() {
    return FVector2D{};
}

FRotator AWeaponShowcase::GetCurrentModelOrientation() {
    return FRotator{};
}

float AWeaponShowcase::GetCurrentCameraZoom() {
    return 0.0f;
}

FVector2D AWeaponShowcase::GetCurrentCameraPosition() {
    return FVector2D{};
}

void AWeaponShowcase::ApplyMaterialToCurrentMesh(UMaterialInstance* Material, int32 Index) {
}

AWeaponShowcase::AWeaponShowcase() {
    this->CurrentWeaponMesh = NULL;
    this->DesiredFOV = 50.00f;
    this->MinFov = 50.00f;
    this->MaxFov = 50.00f;
    this->CameraDistance = 180.00f;
    this->MaxWeaponRotateSpeed = 360.00f;
    this->WeaponRotateDampingAngle = 40.00f;
    this->MaxCameraPanSpeed = 1.00f;
    this->CameraPanDampingThreshold = 1.00f;
    this->MaxZoom = 1.00f;
    this->MaxCameraZoomSpeed = 1.00f;
    this->CameraZoomDampingThreshold = 1.00f;
    this->MaxCameraRotateSpeed = 360.00f;
    this->CameraRotateDampingAngle = 40.00f;
    this->AuthoredCamera = false;
    this->SelfLevelWeapon = false;
    this->SelfLevelSpeed = 2.00f;
    this->WeaponScale = 1.00f;
    this->CameraComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CameraComponent"));
    this->BARMeshComponent = NULL;
    this->Colt1911MeshComponent = NULL;
    this->Gewer43MeshComponent = NULL;
    this->Kar98KMeshComponent = NULL;
    this->Kar98KScopedMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Kar98KScopedMeshComponent"));
    this->LugerMeshComponent = NULL;
    this->M1CarbineMeshComponent = NULL;
    this->M1GarandMeshComponent = NULL;
    this->MP40MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MP40MeshComponent"));
    this->SpringfieldScopedMeshComponent = NULL;
    this->STG44MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("STG44MeshComponent"));
    this->KnifeMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("KnifeMeshComponent"));
    this->ThompsonMeshComponent = NULL;
    this->Winchester1897MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Winchester1897MeshComponent"));
    this->GreaseGunMeshComponent = NULL;
    this->MP28MeshComponent = NULL;
    this->PPSH41MeshComponent = NULL;
    this->MosinNagantMeshComponent = NULL;
    this->ScopedMosinNagantMeshComponent = NULL;
    this->Baikal21MeshComponent = NULL;
    this->FedorovAvtomatMeshComponent = NULL;
    this->SVT40MeshComponent = NULL;
    this->TT33MeshComponent = NULL;
    this->PPS43MeshComponent = NULL;
    this->RevolverMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RevolverSkeletalMeshComponent"));
    this->BritishThompsonMeshComponent = NULL;
    this->JungleCarbineMeshComponent = NULL;
    this->LewisGunMeshComponent = NULL;
    this->EnfieldMeshComponent = NULL;
    this->Enfield_ScopedMeshComponent = NULL;
    this->StenMeshComponent = NULL;
    this->CurrentAnimSequence = NULL;
}

