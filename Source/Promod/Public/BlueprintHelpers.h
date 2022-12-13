#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Curves/CurveFloat.h"
#include "Input/Events.h"
#include "BlueprintHelpers.generated.h"

class APlayerState;
class UBattalionGameViewport;
class AController;
class UPrimitiveComponent;
class AActor;
class UBattalionSettings;
class UBattalionOnline;
class UBattalionGameInstance;

UCLASS(Blueprintable)
class UBlueprintHelpers : public UObject {
    GENERATED_BODY()
public:
    UBlueprintHelpers();
    UFUNCTION(BlueprintCallable)
    static FLinearColor HexToColor(const FString& HexColorString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetUseAdvancedBots(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUniqueNetIdFromState(APlayerState* PS, FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUniqueNetIdFromController(AController* Controller, FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPromodCL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPromodBranch();
    
    UFUNCTION(BlueprintCallable)
    static void GetOverlappingActorsDifference(UPrimitiveComponent* ComponentA, UPrimitiveComponent* ComponentB, TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetIsWithEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetIsReleaseBuild(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBattalionGameViewport* GetBattViewport(const UObject* WCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBattVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBattalionSettings* GetBattSettings(const UObject* WCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBattalionOnline* GetBattOnline(const UObject* WCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBattalionGameInstance* GetBattInstance(const UObject* WCO);
    
    UFUNCTION(BlueprintCallable)
    static float EvaluateRuntimeFloatCurve(const FRuntimeFloatCurve& Curve, float Time);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckForFocusSetDirectly(FFocusEvent FocusEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FBox CalculateLevelBounds(const UObject* WorldContextObject);
    
};

