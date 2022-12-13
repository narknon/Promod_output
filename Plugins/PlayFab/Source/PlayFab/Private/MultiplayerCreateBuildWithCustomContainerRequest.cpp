#include "MultiplayerCreateBuildWithCustomContainerRequest.h"

FMultiplayerCreateBuildWithCustomContainerRequest::FMultiplayerCreateBuildWithCustomContainerRequest() {
    this->ContainerFlavor = EContainerFlavor::pfenum_ManagedWindowsServerCore;
    this->ContainerImageReference = NULL;
    this->MetaData = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->VmSize = EAzureVmSize::pfenum_Standard_D1_v2;
}

