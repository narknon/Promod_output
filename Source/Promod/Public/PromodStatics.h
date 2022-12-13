#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "PromodStatics.generated.h"

class UCurveFloat;
class UObject;
class AController;
class AActor;
class UDamageType;

UCLASS(Blueprintable)
class UPromodStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPromodStatics();
    UFUNCTION(BlueprintCallable)
    static UObject* GetClassDefaultObject(UClass* Class);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindTeleportSpot(const UObject* WorldContextObject, const AActor* TestActor, const FVector& PlaceLocation, const FRotator& TestRotation, FVector& BestLocation);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ETraceTypeQuery> ConvertCollisionChannelToTraceType(TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Conv_StringToBool(const FString& inString);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyRadialDamageWithFalloffCurve(const UObject* WorldContextObject, UCurveFloat* DamageFalloffCurve, const FVector& Origin, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, TEnumAsByte<EOverlapFilterOption> Filter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ApplyRadialDamageWithFalloff(const UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, TEnumAsByte<EOverlapFilterOption> Filter);
    
};

