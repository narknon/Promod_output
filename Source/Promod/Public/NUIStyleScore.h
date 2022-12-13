#pragma once
#include "CoreMinimal.h"
#include "OnFireAwardData.h"
#include "Blueprint/UserWidget.h"
#include "NUIStyleScore.generated.h"

class UStyleScoreEntryWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNUIStyleScore : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnFireAwardData> AllComboEntries;
    
public:
    UNUIStyleScore();
    UFUNCTION(BlueprintCallable)
    void UpdateFireEntryScore(const FOnFireAwardData& AwardData, float NewScore);
    
    UFUNCTION(BlueprintCallable)
    void ResetComboEntries();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboEntriesUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboEntriesSorted(const TArray<FOnFireAwardData>& SortedEntries);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFireSystemEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EndScalingFireEntry(const FOnFireAwardData& AwardData, float NewScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStyleScoreEntryWidget* CreateEntryWidget(const FOnFireAwardData& AwardData);
    
    UFUNCTION(BlueprintCallable)
    void AddOnFireEntry(const FOnFireAwardData& AwardData);
    
};

