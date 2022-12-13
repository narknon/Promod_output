#include "PromodStatics.h"
#include "Templates/SubclassOf.h"

class UCurveFloat;
class UObject;
class AController;
class AActor;
class UDamageType;

UObject* UPromodStatics::GetClassDefaultObject(UClass* Class) {
    return NULL;
}

bool UPromodStatics::FindTeleportSpot(const UObject* WorldContextObject, const AActor* TestActor, const FVector& PlaceLocation, const FRotator& TestRotation, FVector& BestLocation) {
    return false;
}

TEnumAsByte<ETraceTypeQuery> UPromodStatics::ConvertCollisionChannelToTraceType(TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return TraceTypeQuery1;
}

bool UPromodStatics::Conv_StringToBool(const FString& inString) {
    return false;
}

bool UPromodStatics::ApplyRadialDamageWithFalloffCurve(const UObject* WorldContextObject, UCurveFloat* DamageFalloffCurve, const FVector& Origin, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, TEnumAsByte<EOverlapFilterOption> Filter) {
    return false;
}

bool UPromodStatics::ApplyRadialDamageWithFalloff(const UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, TEnumAsByte<EOverlapFilterOption> Filter) {
    return false;
}

UPromodStatics::UPromodStatics() {
}

