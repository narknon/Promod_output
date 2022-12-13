#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PromodSaveData.generated.h"

UCLASS(Blueprintable)
class UPromodSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(EditAnywhere)
    uint32 SaveSlotIndex;
    
    UPROPERTY(EditAnywhere)
    uint32 Version;
    
    UPromodSaveData();
};

