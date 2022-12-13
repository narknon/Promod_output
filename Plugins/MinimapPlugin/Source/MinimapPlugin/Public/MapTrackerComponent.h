#pragma once
#include "CoreMinimal.h"
#include "MapRevealerRegisteredSignatureDelegate.h"
#include "Components/ActorComponent.h"
#include "MapIconRegisteredSignatureDelegate.h"
#include "MapIconUnregisteredSignatureDelegate.h"
#include "MapBackgroundUnregisteredSignatureDelegate.h"
#include "MapBackgroundRegisteredSignatureDelegate.h"
#include "MapFogRegisteredSignatureDelegate.h"
#include "MapRevealerUnregisteredSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "MapTrackerComponent.generated.h"

class UMapIconComponent;
class AMapBackground;
class AMapFog;
class UMapRevealerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MINIMAPPLUGIN_API UMapTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconRegisteredSignature OnMapIconRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconUnregisteredSignature OnMapIconUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapBackgroundRegisteredSignature OnMapBackgroundRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapBackgroundUnregisteredSignature OnMapBackgroundUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapFogRegisteredSignature OnMapFogRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapFogRegisteredSignature OnMapFogUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapRevealerRegisteredSignature OnMapRevealerRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapRevealerUnregisteredSignature OnMapRevealerUnregistered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapIconComponent*> MapIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMapBackground*> MapBackgrounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMapFog*> MapFogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMapRevealerComponent*> MapRevealers;
    
public:
    UMapTrackerComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMapFog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMapRevealerComponent*> GetMapRevealers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMapIconComponent*> GetMapIcons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMapFog*> GetMapFogs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMapBackground*> GetMapBackgrounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFogRevealedFactor(const FVector& WorldLocation, const bool bRequireCurrentlyRevealing, bool& bIsInsideFogVolume) const;
    
};

