#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "NUITeamSelection.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUITeamSelection : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UNUITeamSelection();
    UFUNCTION(BlueprintCallable)
    void SelectTeamZero();
    
    UFUNCTION(BlueprintCallable)
    void SelectTeamOne();
    
    UFUNCTION(BlueprintCallable)
    void SelectAutoNation();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPlayersNationZero();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPlayersNationOne();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfTeams();
    
    UFUNCTION(BlueprintCallable)
    FText GetNameOfTeam(int32 TeamIndex);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    bool CanClose();
    
};

