#pragma once
#include "CoreMinimal.h"
#include "MapEditorObjectData.h"
#include "GameFramework/Actor.h"
#include "StartedDragActionDelegate.h"
#include "EndedDragActionDelegate.h"
#include "ObjectDetailsUpdatedDelegate.h"
#include "MapEditorObject.generated.h"

class UChildActorComponent;
class UStaticMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class PROMOD_API AMapEditorObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartedDragAction OnStartedDragAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndedDragAction OnEndedDragAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectDetailsUpdated OnObjectDetailsUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScalable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapEditorObjectData ObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
public:
    AMapEditorObject();
    UFUNCTION(BlueprintCallable)
    void SetStringValue(const FName& ValueName, const FString& CurrentValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIntValue(const FName& ValueName, int32 CurrentValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatValue(const FName& ValueName, float CurrentValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolValue(const FName& ValueName, bool CurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ObjectPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BuildObject(FString& OutError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BuildFinished(bool bSuccess);
    
};

