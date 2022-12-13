#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "TextureConverterCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTextureConverterCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UTextureConverterCommandlet();
};

