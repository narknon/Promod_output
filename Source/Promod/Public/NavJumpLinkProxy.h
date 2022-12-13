#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "NavJumpLinkProxy.generated.h"

UCLASS(Blueprintable)
class ANavJumpLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    ANavJumpLinkProxy();
};

