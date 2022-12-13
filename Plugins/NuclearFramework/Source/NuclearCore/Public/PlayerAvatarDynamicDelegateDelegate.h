#pragma once
#include "CoreMinimal.h"
#include "PlayerAvatarDynamicDelegateDelegate.generated.h"

class UTexture2DDynamic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPlayerAvatarDynamicDelegate, UTexture2DDynamic*, Texture);

