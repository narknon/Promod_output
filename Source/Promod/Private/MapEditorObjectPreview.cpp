#include "MapEditorObjectPreview.h"
#include "Components/ChildActorComponent.h"

AMapEditorObjectPreview::AMapEditorObjectPreview() {
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewClassComponent"));
}

