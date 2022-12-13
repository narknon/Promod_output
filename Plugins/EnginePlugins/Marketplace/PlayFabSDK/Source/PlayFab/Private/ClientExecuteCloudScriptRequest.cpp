#include "ClientExecuteCloudScriptRequest.h"

FClientExecuteCloudScriptRequest::FClientExecuteCloudScriptRequest() {
    this->FunctionParameter = NULL;
    this->GeneratePlayStreamEvent = false;
    this->RevisionSelection = ECloudScriptRevisionOption::pfenum_Live;
    this->SpecificRevision = 0;
}

