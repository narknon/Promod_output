#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "PromodMainMenuScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPromodMainMenuScreen : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UNLOCKEDLEVELS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> KillrunLevelStarsMap;
    
    UPromodMainMenuScreen();
};

