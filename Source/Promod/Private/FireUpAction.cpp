#include "FireUpAction.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "AkComponent.h"

class APromodPlayerState;
class APromodCharacter;
class APromodPlayerController;
class UCameraModifier;

void AFireUpAction::SetOwningPlayerState(APromodPlayerState* NewOwningPlayerState) {
}

void AFireUpAction::RemoveCameraModifer(UCameraModifier* Modifier) {
}

void AFireUpAction::ReEquipWeapon() {
}


void AFireUpAction::NetMulti_PlayDeployEffects_Implementation() {
}

void AFireUpAction::NetMulti_PlayActivationEffects_Implementation() {
}

void AFireUpAction::NetMulti_ClearCosmeticEffects_Implementation() {
}

bool AFireUpAction::IsFirstPerson() {
    return false;
}

APromodPlayerController* AFireUpAction::GetLocalSpectatingController() {
    return NULL;
}

APromodPlayerController* AFireUpAction::GetLocalPlayerController() {
    return NULL;
}

void AFireUpAction::Client_DeployAction_Implementation(const FFireUpData& InFireUpData, APromodCharacter* Character) {
}

void AFireUpAction::Client_CancelAction_Implementation() {
}













UCameraModifier* AFireUpAction::AddCameraModifer(TSubclassOf<UCameraModifier> ModifierClass) {
    return NULL;
}

void AFireUpAction::ActionFinished() {
}

void AFireUpAction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFireUpAction, FireUpData);
    DOREPLIFETIME(AFireUpAction, OwningCharacter);
    DOREPLIFETIME(AFireUpAction, OwningPlayerState);
}

AFireUpAction::AFireUpAction() {
    this->DefaultAkComp = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->DeployScreenSway = NULL;
    this->ActivationScreenSway = NULL;
    this->bFinishManually = false;
    this->OwningCharacter = NULL;
    this->OwningPlayerState = NULL;
    this->CurrentState = EFireUpState::None;
}

