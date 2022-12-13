#pragma once
#include "CoreMinimal.h"
#include "MapEditorTransformSnapSettings.generated.h"

USTRUCT(BlueprintType)
struct FMapEditorTransformSnapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Grid;
    
    PROMOD_API FMapEditorTransformSnapSettings();
};

