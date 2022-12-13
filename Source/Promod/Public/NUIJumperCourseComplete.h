#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMapPackGamemode.h"
#include "NUIJumperCourseComplete.generated.h"

class AKillRunGameMode;
class AJumperGameMode;

UCLASS(Blueprintable, EditInlineNew)
class PROMOD_API UNUIJumperCourseComplete : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapPackGamemode GameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJumperGameMode* JumperGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKillRunGameMode* KillRunGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UNLOCKEDLEVELS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousDifficultyRating;
    
    UNUIJumperCourseComplete();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDifficultyRating();
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadMainMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetMapDifficulty();
    
};

