#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ESlotType.h"
#include "LoadoutInitializer.h"
#include "EWeaponArchetype.h"
#include "UObject/NoExportTypes.h"
#include "PromodInventoryComponent.generated.h"

class ABattalionWeapon;
class UWeaponSlot;
class APromodCharacter;
class UBattalionSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROMOD_API UPromodInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESlotType> SlotSelectionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESlotType ActiveSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESlotType PreviousSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESlotType DesiredSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UWeaponSlot* PrimarySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UWeaponSlot* SecondarySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UWeaponSlot* MeleeSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UWeaponSlot* SpecialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APromodCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattalionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeAllowedBetweenEquips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastEquipTime;
    
public:
    UPromodInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnEquipAllWeapons();
    
    UFUNCTION(BlueprintCallable)
    void SetOwningCharacter(APromodCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredSlotType(const ESlotType Val);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeWeapon(UWeaponSlot* PreviousSlot, UWeaponSlot* NextSlot);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllWeapons();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EquipSlot(ESlotType PassedSlotType, bool AllowReEquipOfSameSlot, bool QuickEquip);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSpecialSlot(ABattalionWeapon* InWeapon);
    
    UFUNCTION(BlueprintCallable)
    void InitializeLoadout(const FLoadoutInitializer& LoadoutInitializer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponSlot* GetSlotByType(ESlotType SlotType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APromodCharacter* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlotType GetLastSlotType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlotType GetDesiredSlotType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlotType GetCurrentlyEquippedSlotType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponSlot* GetCurrentlyEquippedSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattalionWeapon* FindWeaponClass(TSubclassOf<ABattalionWeapon> WeaponClass, ESlotType& SlotWeaponFoundIn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattalionWeapon* FindWeaponArchetype(EWeaponArchetype WeaponArchetype, ESlotType& SlotWeaponFoundIn) const;
    
    UFUNCTION(BlueprintCallable)
    bool EquipSlot(ESlotType PassedSlotType, bool AllowReEquipOfSameSlot, bool QuickEquip);
    
    UFUNCTION(BlueprintCallable)
    void EquipNextOrPrevSlot(bool SwitchNext);
    
    UFUNCTION(BlueprintCallable)
    void DropWeapon(ESlotType SlotType, int32 Type, bool bShouldDematerialize, const FName LastHitBoneName, const FVector& LastHitLocationOffset);
    
    UFUNCTION(BlueprintCallable)
    bool CanEquipSlot(ESlotType PassedSlotType);
    
};

