#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UButtonBase : public UUserWidget {
    GENERATED_BODY()
public:
    UButtonBase();
};

