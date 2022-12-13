#pragma once
#include "CoreMinimal.h"
#include "SaveSlots.h"
#include "UObject/Object.h"
#include "SaveDataInfo.h"
#include "SaveDataManager.generated.h"

class USaveGame;

UCLASS(Blueprintable, Within=BattalionGameInstance)
class USaveDataManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveDataInfo> DataInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USaveGame*> SavedGameData;
    
    USaveDataManager();
    UFUNCTION(BlueprintCallable)
    void SaveSync(USaveGame* SaveData, TEnumAsByte<SaveSlots> Slot);
    
    UFUNCTION(BlueprintCallable)
    USaveGame* LoadSync(TEnumAsByte<SaveSlots> Slot);
    
    UFUNCTION(BlueprintCallable)
    USaveGame* GetSaveGameData(TEnumAsByte<SaveSlots> Slot);
    
    UFUNCTION(BlueprintCallable)
    FSaveDataInfo GetSaveDataInfo(TEnumAsByte<SaveSlots> Slot);
    
    UFUNCTION(BlueprintCallable)
    USaveGame* CreateSaveDataFile(TEnumAsByte<SaveSlots> Slot);
    
};

