#pragma once
#include "CoreMinimal.h"
#include "PromodReplicatedObject.h"
#include "ESlotType.h"
#include "EWeaponArchetype.h"
#include "WeaponSlot.generated.h"

class UPromodInventoryComponent;
class ABattalionWeapon;

UCLASS(Blueprintable)
class UWeaponSlot : public UPromodReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPromodInventoryComponent* OwningInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WeaponPtr, meta=(AllowPrivateAccess=true))
    ABattalionWeapon* WeaponPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESlotType SlotType;
    
    UWeaponSlot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponPtr(ABattalionWeapon* LastWeapon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AddOrReplaceWeapon(ABattalionWeapon* NewWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotCompatibleWithCategory(EWeaponArchetype Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeSlot(UPromodInventoryComponent* ParentInventory, ESlotType NewSlotType, ABattalionWeapon* InitialWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattalionWeapon* GetWeaponInSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponArchetype GetSlotWeaponCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlotType GetSlotType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPromodInventoryComponent* GetInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable)
    ABattalionWeapon* AddOrReplaceWeapon(ABattalionWeapon* NewWeapon, bool bMulticast);
    
};

