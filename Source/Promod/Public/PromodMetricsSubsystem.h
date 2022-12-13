#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PromodMetricsSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class UPromodMetricsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlushNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlushPaused;
    
public:
    UPromodMetricsSubsystem();
    UFUNCTION(BlueprintCallable)
    void WishlistButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void StrafeTrainingStarted();
    
    UFUNCTION(BlueprintCallable)
    void SandboxStarted();
    
    UFUNCTION(BlueprintCallable)
    void KillrunStarted();
    
    UFUNCTION(BlueprintCallable)
    void JumperStarted();
    
    UFUNCTION(BlueprintCallable)
    void HostServerButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void AppliedFilterWithMap(const FString& MapName);
    
};

