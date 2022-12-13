#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "ENationType.h"
#include "NUIRoundEndScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUIRoundEndScreen : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UNUIRoundEndScreen();
    UFUNCTION(BlueprintCallable)
    int32 VictoryState();
    
    UFUNCTION(BlueprintCallable)
    bool IsSwappingSides();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTeamZeroScore();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTeamOneScore();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerTeam();
    
    UFUNCTION(BlueprintCallable)
    ENationType GetPlayerNation();
    
};

