#include <windows.h>    // Windows header file for WinAPI functions
#include <cstdio>       // Standard input/output functions
#include <TlHelp32.h>   // Windows header file for process and thread functions

using namespace std;

// Function to get information about all running processes
void GetProcess()
{
    // Take a snapshot of all processes and modules in the system
    HANDLE hndl = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS | TH32CS_SNAPMODULE, 0);

    if (hndl) // Check if snapshot creation was successful
    {
        // Initialize structure for holding process information
        PROCESSENTRY32  process = { sizeof(PROCESSENTRY32) };

        // Get the first process in the snapshot
        Process32First(hndl, &process);

        do
        {
            // Print the Process ID (PID) and Process Name for each process
            wprintf(L"PID => %8u , Process Name => %s \n", process.th32ProcessID, process.szExeFile);
        } while (Process32Next(hndl, &process)); // Move to the next process in the snapshot

        // Close the snapshot handle
        CloseHandle(hndl);
    }
}
