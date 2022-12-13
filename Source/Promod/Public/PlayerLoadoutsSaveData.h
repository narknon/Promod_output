#pragma once
#include "CoreMinimal.h"
#include "PromodSaveData.h"
#include "LoadoutData.h"
#include "UObject/NoExportTypes.h"
#include "PlayerLoadoutsSaveData.generated.h"

UCLASS(Blueprintable)
class UPlayerLoadoutsSaveData : public UPromodSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadoutData> PLAYERLOADOUTS;
    
    UPlayerLoadoutsSaveData();
    UFUNCTION(BlueprintCallable)
    void UpdateLoadout(FLoadoutData UpdatedLoadout);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLoadoutById(const FGuid& Guid);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLoadoutBasedOnName(FLoadoutData LoadoutToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLoadoutAtIndex(int32 LoadoutToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLoadout(FLoadoutData LoadoutToRemove);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLoadoutData> GetLoadouts();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLoadoutIndexFromName(const FString& LoadoutName);
    
    UFUNCTION(BlueprintCallable)
    FLoadoutData GetLoadoutBasedOnName(const FString& LoadoutName);
    
    UFUNCTION(BlueprintCallable)
    FLoadoutData GetFavouritedLoadout();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllLoadouts();
    
    UFUNCTION(BlueprintCallable)
    int32 AddLoadout(FLoadoutData LoadoutToAdd);
    
};

