#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KillrunHitMarker.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UKillrunHitMarker : public UUserWidget {
    GENERATED_BODY()
public:
    UKillrunHitMarker();
};

