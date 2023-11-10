#include <Windows.h>

#include "antidebug.h"
#include "..\Shared\nzt.h"
#include "..\Shared\utils.h"

BOOL IsBeingDebuggedAlt()
{
	return GetPeb()->BeingDebugged;
}

WINERROR IsBeingDebugged()
{
	WINERROR Status = NO_ERROR;

	if (IsBeingDebuggedAlt())
		return ERROR_UNSUCCESSFULL;

	return Status;
}