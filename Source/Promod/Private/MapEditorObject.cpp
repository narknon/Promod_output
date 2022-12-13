#include "MapEditorObject.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ChildActorComponent.h"

void AMapEditorObject::SetStringValue(const FName& ValueName, const FString& CurrentValue) {
}

void AMapEditorObject::SetIntValue(const FName& ValueName, int32 CurrentValue) {
}

void AMapEditorObject::SetFloatValue(const FName& ValueName, float CurrentValue) {
}

void AMapEditorObject::SetBoolValue(const FName& ValueName, bool CurrentValue) {
}




AMapEditorObject::AMapEditorObject() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActorComponent"));
    this->bIsScalable = true;
    this->bSelected = false;
}

