#include "BlueprintHelpers.h"
#include "Templates/SubclassOf.h"

class UObject;
class APlayerState;
class UBattalionGameViewport;
class AController;
class UPrimitiveComponent;
class AActor;
class UBattalionSettings;
class UBattalionOnline;
class UBattalionGameInstance;

FLinearColor UBlueprintHelpers::HexToColor(const FString& HexColorString) {
    return FLinearColor{};
}

bool UBlueprintHelpers::GetUseAdvancedBots(UObject* WorldContextObject) {
    return false;
}

bool UBlueprintHelpers::GetUniqueNetIdFromState(APlayerState* PS, FUniqueNetIdRepl& UniqueNetId) {
    return false;
}

bool UBlueprintHelpers::GetUniqueNetIdFromController(AController* Controller, FUniqueNetIdRepl& UniqueNetId) {
    return false;
}

FString UBlueprintHelpers::GetPromodCL() {
    return TEXT("");
}

FString UBlueprintHelpers::GetPromodBranch() {
    return TEXT("");
}

void UBlueprintHelpers::GetOverlappingActorsDifference(UPrimitiveComponent* ComponentA, UPrimitiveComponent* ComponentB, TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) {
}

bool UBlueprintHelpers::GetIsWithEditor(UObject* WorldContextObject) {
    return false;
}

bool UBlueprintHelpers::GetIsReleaseBuild(UObject* WorldContextObject) {
    return false;
}

UBattalionGameViewport* UBlueprintHelpers::GetBattViewport(const UObject* WCO) {
    return NULL;
}

FString UBlueprintHelpers::GetBattVersion() {
    return TEXT("");
}

UBattalionSettings* UBlueprintHelpers::GetBattSettings(const UObject* WCO) {
    return NULL;
}

UBattalionOnline* UBlueprintHelpers::GetBattOnline(const UObject* WCO) {
    return NULL;
}

UBattalionGameInstance* UBlueprintHelpers::GetBattInstance(const UObject* WCO) {
    return NULL;
}

float UBlueprintHelpers::EvaluateRuntimeFloatCurve(const FRuntimeFloatCurve& Curve, float Time) {
    return 0.0f;
}

bool UBlueprintHelpers::CheckForFocusSetDirectly(FFocusEvent FocusEvent) {
    return false;
}

FBox UBlueprintHelpers::CalculateLevelBounds(const UObject* WorldContextObject) {
    return FBox{};
}

UBlueprintHelpers::UBlueprintHelpers() {
}

