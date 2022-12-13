#include "AdminUpdateTaskRequest.h"

FAdminUpdateTaskRequest::FAdminUpdateTaskRequest() {
    this->Identifier = NULL;
    this->IsActive = false;
    this->Parameter = NULL;
    this->Type = EScheduledTaskType::pfenum_CloudScript;
}

