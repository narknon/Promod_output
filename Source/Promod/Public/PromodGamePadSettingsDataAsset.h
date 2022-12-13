#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PromodGamePadSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodGamePadSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamePadDeadzoneHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamePadDeadzoneVertical;
    
    UPromodGamePadSettingsDataAsset();
};

