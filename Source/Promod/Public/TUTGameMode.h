#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionGameMode.h"
#include "TUTGameMode.generated.h"

class APlayerController;
class AMapEditorController;

UCLASS(Blueprintable, HideDropdown, NonTransient)
class ATUTGameMode : public ABattalionGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMapEditorController> MapEditorControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapEditorController* MapEditorControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* ActivePlayerController;
    
public:
    ATUTGameMode();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetActivePlayerController() const;
    
};

