#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/SpectatorPawn.h"
#include "UObject/NoExportTypes.h"
#include "BattalionProfilingSpectatorPawn.generated.h"

class ABattalionGrenade;
class USplineComponent;
class ABattalionSmokeGrenade;
class AActor;

UCLASS(Blueprintable)
class ABattalionProfilingSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RunningProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SplineMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* CurrentMovementSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineMovementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionGrenade> GrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionSmokeGrenade> SmokeGrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GrenadeSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeSpawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmokeGrenadeSpawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> GrenadeSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> SmokeGrenadeSpawnPoints;
    
    ABattalionProfilingSpectatorPawn();
    UFUNCTION(BlueprintCallable)
    void StopProfile();
    
    UFUNCTION(BlueprintCallable)
    void StartProfile();
    
    UFUNCTION(BlueprintCallable)
    void SpawnProfilingActor(TSubclassOf<AActor> SpawnClass, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void SendProfileMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void DestroyBots();
    
    UFUNCTION(BlueprintCallable)
    void CreateSmokeGrenade(FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void CreateGrenade(FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void CreateBot(int32 TeamNum, bool IsStationary);
    
    UFUNCTION(BlueprintCallable)
    void CleanupActorsOfClass(TSubclassOf<AActor> CleanupClass);
    
};

