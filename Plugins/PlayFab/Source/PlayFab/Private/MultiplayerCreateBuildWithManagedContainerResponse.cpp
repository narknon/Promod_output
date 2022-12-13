#include "MultiplayerCreateBuildWithManagedContainerResponse.h"

FMultiplayerCreateBuildWithManagedContainerResponse::FMultiplayerCreateBuildWithManagedContainerResponse() {
    this->ContainerFlavor = EContainerFlavor::pfenum_ManagedWindowsServerCore;
    this->InstrumentationConfiguration = NULL;
    this->MetaData = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->VmSize = EAzureVmSize::pfenum_Standard_D1_v2;
}

