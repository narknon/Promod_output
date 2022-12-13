#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "BattalionGameViewport.generated.h"

class UNUIPrompt;
class UBattalionGameInstance;

UCLASS(Blueprintable, NonTransient, Config=Game)
class UBattalionGameViewport : public UGameViewportClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIPrompt* CurrentPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUIPrompt*> PromptQueue;
    
public:
    UBattalionGameViewport();
    UFUNCTION(BlueprintCallable)
    bool IsShowingLoadingScreen();
    
};

