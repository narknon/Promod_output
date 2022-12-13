#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PlayFabSubsystemSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class PLAYFABSUBSYSTEM_API UPlayFabSubsystemSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath PlayFabSubsystemClass;
    
    UPlayFabSubsystemSettings();
};

