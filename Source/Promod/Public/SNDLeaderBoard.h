#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LeaderboardData.h"
#include "SNDLeaderBoard.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USNDLeaderBoard : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MapNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLeaderboardData> LeaderboardData;
    
    USNDLeaderBoard();
    UFUNCTION(BlueprintCallable)
    void UpdatePlayersData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPlayerToLeaderBoard(const FLeaderboardData& PlayerData);
    
};

