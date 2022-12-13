#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "NUIScoreboardScreen.generated.h"

class UNUIScoreboard;
class ABattalionPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UNUIScoreboardScreen : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNUIScoreboard* CurrentScoreboard;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MatchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> DisplayMapNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> DisplayModeNames;
    
public:
    UNUIScoreboardScreen();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerChangedTeam(ABattalionPlayerState* Player, int32 NewTeamIndex, int32 OldTeamIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetMapModeNames();
    
};

