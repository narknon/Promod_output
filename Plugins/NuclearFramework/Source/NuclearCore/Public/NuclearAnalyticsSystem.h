#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "NuclearAnalyticsSystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class NUCLEARCORE_API UNuclearAnalyticsSystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReportEndpoint;
    
public:
    UNuclearAnalyticsSystem();
    UFUNCTION(BlueprintCallable)
    void StartSession(const FString& SessionName, bool bTrackPerformance);
    
private:
    UFUNCTION(BlueprintCallable)
    static void SetPropertyBP(const FName& Name, const int32& Data);
    
    UFUNCTION(BlueprintCallable)
    static void RecordEventBP(const FName& Name, const int32& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndSession();
    
};

