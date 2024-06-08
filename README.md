# Windows Process Viewer

This C++ program allows you to retrieve information about all running processes on a Windows system. It utilizes the Windows API functions to capture a snapshot of the running processes and their associated modules.

## Features

- Retrieves Process ID (PID) and Process Name for each running process.
- Utilizes the CreateToolhelp32Snapshot function from the Windows API to capture the process snapshot.
- Supports both 32-bit and 64-bit Windows operating systems.

## Usage

Simply include the provided header files (`windows.h`, `cstdio`, `TlHelp32.h`) in your project and call the `GetProcess` function to retrieve the process information.

```cpp
#include <windows.h>
#include <cstdio>
#include <TlHelp32.h>

using namespace std;

void GetProcess()
{
    // Function body here...
}
