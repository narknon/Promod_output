#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PatrolPath.generated.h"

class APatrolPoint;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class PROMOD_API APatrolPath : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* PathSplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APatrolPoint*> PatrolPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoopPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor PathColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAIPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor NavigationPathColor;
    
    APatrolPath();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetPointRotation(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPointLocation(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APatrolPoint* GetPatrolPoint(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void GetNextPointIndex(int32 currentIndex, int32 CurrentDirection, int32& NextIndex, int32& NewDirection);
    
};

