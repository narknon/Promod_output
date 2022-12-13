#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "NUIPlayerAvatar.generated.h"

class UTexture2D;
class ABattalionPlayerState;
class UBattalionOnline;

UCLASS(Blueprintable, EditInlineNew)
class UNUIPlayerAvatar : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAvatarAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABattalionPlayerState* Player;
    
public:
    UNUIPlayerAvatar();
    UFUNCTION(BlueprintCallable)
    void SetPlayer(ABattalionPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable)
    FString GetPlayerID();
    
    UFUNCTION(BlueprintCallable)
    UBattalionOnline* GetOnline();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AvatarTextureUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void AvatarLoaded();
    
};

