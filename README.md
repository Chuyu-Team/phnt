This collection of Native API header files has been maintained since 2009 for the Process Hacker project, and is the most up-to-date set of Native API definitions that we know of. We have gathered these definitions from official Microsoft header files and symbol files, as well as a lot of reverse engineering and guessing. See `phnt.h` for more information.

## Usage

First make sure that your program is using the latest Windows SDK.

These header files are designed to be used by user-mode programs. Instead of `#include <windows.h>`, place

```
#include <phnt_windows.h>
#include <phnt.h>
```

at the top of your program. The first line provides access to the Win32 API as well as the `NTSTATUS` values. The second line provides access to the entire Native API. 
