// This header file provides access to Win32, plus NTSTATUS values and some access mask values.

#include <windows.h>
#include <windowsx.h>
#include <winioctl.h>

#undef STATUS_WAIT_0
#undef STATUS_ABANDONED_WAIT_0
#undef STATUS_USER_APC
#undef STATUS_TIMEOUT
#undef STATUS_PENDING
#undef DBG_EXCEPTION_HANDLED
#undef DBG_CONTINUE
#undef STATUS_SEGMENT_NOTIFICATION
#undef STATUS_FATAL_APP_EXIT
#undef DBG_TERMINATE_THREAD
#undef DBG_TERMINATE_PROCESS
#undef DBG_CONTROL_C
#undef DBG_PRINTEXCEPTION_C
#undef DBG_RIPEXCEPTION
#undef DBG_CONTROL_BREAK
#undef DBG_COMMAND_EXCEPTION
#undef STATUS_GUARD_PAGE_VIOLATION
#undef STATUS_DATATYPE_MISALIGNMENT
#undef STATUS_BREAKPOINT
#undef STATUS_SINGLE_STEP
#undef STATUS_LONGJUMP
#undef STATUS_UNWIND_CONSOLIDATE
#undef DBG_EXCEPTION_NOT_HANDLED
#undef STATUS_ACCESS_VIOLATION
#undef STATUS_IN_PAGE_ERROR
#undef STATUS_INVALID_HANDLE
#undef STATUS_INVALID_PARAMETER
#undef STATUS_NO_MEMORY
#undef STATUS_ILLEGAL_INSTRUCTION
#undef STATUS_NONCONTINUABLE_EXCEPTION
#undef STATUS_INVALID_DISPOSITION
#undef STATUS_ARRAY_BOUNDS_EXCEEDED
#undef STATUS_FLOAT_DENORMAL_OPERAND
#undef STATUS_FLOAT_DIVIDE_BY_ZERO
#undef STATUS_FLOAT_INEXACT_RESULT
#undef STATUS_FLOAT_INVALID_OPERATION
#undef STATUS_FLOAT_OVERFLOW
#undef STATUS_FLOAT_STACK_CHECK
#undef STATUS_FLOAT_UNDERFLOW
#undef STATUS_INTEGER_DIVIDE_BY_ZERO
#undef STATUS_INTEGER_OVERFLOW
#undef STATUS_PRIVILEGED_INSTRUCTION
#undef STATUS_STACK_OVERFLOW
#undef STATUS_DLL_NOT_FOUND
#undef STATUS_ORDINAL_NOT_FOUND
#undef STATUS_ENTRYPOINT_NOT_FOUND
#undef STATUS_CONTROL_C_EXIT
#undef STATUS_DLL_INIT_FAILED
#undef STATUS_FLOAT_MULTIPLE_FAULTS
#undef STATUS_FLOAT_MULTIPLE_TRAPS
#undef STATUS_REG_NAT_CONSUMPTION
#undef STATUS_HEAP_CORRUPTION
#undef STATUS_STACK_BUFFER_OVERRUN
#undef STATUS_INVALID_CRUNTIME_PARAMETER
#undef STATUS_ASSERTION_FAILURE
#undef STATUS_ENCLAVE_VIOLATION 

#undef STATUS_SXS_EARLY_DEACTIVATION
#undef STATUS_SXS_INVALID_DEACTIVATION

#undef DBG_REPLY_LATER
#undef DBG_PRINTEXCEPTION_WIDE_C

#include <ntstatus.h>

typedef double DOUBLE;
typedef GUID *PGUID;

// Desktop access rights
#define DESKTOP_ALL_ACCESS \
    (DESKTOP_CREATEMENU | DESKTOP_CREATEWINDOW | DESKTOP_ENUMERATE | \
    DESKTOP_HOOKCONTROL | DESKTOP_JOURNALPLAYBACK | DESKTOP_JOURNALRECORD | \
    DESKTOP_READOBJECTS | DESKTOP_SWITCHDESKTOP | DESKTOP_WRITEOBJECTS | \
    STANDARD_RIGHTS_REQUIRED)
#define DESKTOP_GENERIC_READ \
    (DESKTOP_ENUMERATE | DESKTOP_READOBJECTS | STANDARD_RIGHTS_READ)
#define DESKTOP_GENERIC_WRITE \
    (DESKTOP_CREATEMENU | DESKTOP_CREATEWINDOW | DESKTOP_HOOKCONTROL | \
    DESKTOP_JOURNALPLAYBACK | DESKTOP_JOURNALRECORD | DESKTOP_WRITEOBJECTS | \
    STANDARD_RIGHTS_WRITE)
#define DESKTOP_GENERIC_EXECUTE \
    (DESKTOP_SWITCHDESKTOP | STANDARD_RIGHTS_EXECUTE)

// Window station access rights
#define WINSTA_GENERIC_READ \
    (WINSTA_ENUMDESKTOPS | WINSTA_ENUMERATE | WINSTA_READATTRIBUTES | \
    WINSTA_READSCREEN | STANDARD_RIGHTS_READ)
#define WINSTA_GENERIC_WRITE \
    (WINSTA_ACCESSCLIPBOARD | WINSTA_CREATEDESKTOP | WINSTA_WRITEATTRIBUTES | \
    STANDARD_RIGHTS_WRITE)
#define WINSTA_GENERIC_EXECUTE \
    (WINSTA_ACCESSGLOBALATOMS | WINSTA_EXITWINDOWS | STANDARD_RIGHTS_EXECUTE)

// WMI access rights
#define WMIGUID_GENERIC_READ \
    (WMIGUID_QUERY | WMIGUID_NOTIFICATION | WMIGUID_READ_DESCRIPTION | \
    STANDARD_RIGHTS_READ)
#define WMIGUID_GENERIC_WRITE \
    (WMIGUID_SET | TRACELOG_CREATE_REALTIME | TRACELOG_CREATE_ONDISK | \
    STANDARD_RIGHTS_WRITE)
#define WMIGUID_GENERIC_EXECUTE \
    (WMIGUID_EXECUTE | TRACELOG_GUID_ENABLE | TRACELOG_LOG_EVENT | \
    TRACELOG_ACCESS_REALTIME | TRACELOG_REGISTER_GUIDS | \
    STANDARD_RIGHTS_EXECUTE)
