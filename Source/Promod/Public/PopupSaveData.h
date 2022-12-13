#pragma once
#include "CoreMinimal.h"
#include "PromodSaveData.h"
#include "PopupSaveData.generated.h"

UCLASS(Blueprintable)
class UPopupSaveData : public UPromodSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeenWelcomeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeenModKitPopup;
    
    UPopupSaveData();
};

