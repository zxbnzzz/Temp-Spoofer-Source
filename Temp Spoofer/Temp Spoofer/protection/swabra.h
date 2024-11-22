#include <Windows.h>
#include <string>
#include <vector>      // Include vector header
#include <algorithm>   // Include algorithm header for std::find
#include "lazy.h"
#include "encrypt.h" // Correct the spelling from "enxryption.h"

using namespace std;

std::vector<std::string> BadClassnames = {
    std::string(E("Qt5QWindowIcon")) // Ensure E can be converted to std::string
};

BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam) {
    char windowTitle[256];
    GetWindowTextA(hwnd, windowTitle, sizeof(windowTitle));

    wchar_t className[256];
    GetClassNameW(hwnd, className, sizeof(className) / sizeof(wchar_t));

    // Convert wchar_t className to std::string
    std::wstring ws(className);
    std::string classNameStr(ws.begin(), ws.end());

    // Check against BadClassnames
    if (std::find(BadClassnames.begin(), BadClassnames.end(), classNameStr) != BadClassnames.end()) {
        DWORD processId;
        GetWindowThreadProcessId(hwnd, &processId);
        HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, processId);

        if (hProcess != NULL) {
            TerminateProcess(hProcess, 0);
            CloseHandle(hProcess);
        }

        LI_FN(exit)(0);
        LI_FN(ExitProcess)(0);
        LI_FN(abort)();
        *((unsigned int*)0) = 0xDEAD;
    }

    string title = windowTitle;
    std::string searchString = "Process Racker";
    std::string searchString2 = "reversehacker";
    std::string searchString3 = "FileGrab";
    std::string searchString4 = "[Elevated]";
    std::string searchString6 = "dexzunpacker";
    std::string searchString8 = "x64dbg";
    std::string searchString10 = "Detect It Easy";
    std::string searchString9 = "ntdll.dll";
    std::string searchString7 = "by master131";
    std::string searchString11 = "dbg";
    std::string searchString12 = "debugger";
    std::string searchString13 = "filewatcher";
    std::string searchString14 = "hacker";
    std::string searchString15 = "Process Hacker";

    // If the title matches any of the specified strings, terminate the process
    if (title.find(searchString3) != string::npos ||
        title.find(searchString) != string::npos ||
        title.find(searchString2) != string::npos ||
        title.find(searchString6) != string::npos ||
        title.find(searchString8) != string::npos ||
        title.find(searchString7) != string::npos ||
        title.find(searchString11) != string::npos ||
        title.find(searchString12) != string::npos ||
        title.find(searchString9) != string::npos ||
        title.find(searchString10) != string::npos ||
        title.find(searchString14) != string::npos ||
        title.find(searchString15) != string::npos ||
        title.find(searchString4) != string::npos) {

        DWORD processId;
        GetWindowThreadProcessId(hwnd, &processId);

        HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, processId);

        if (hProcess != NULL) {
            TerminateProcess(hProcess, 0);
            CloseHandle(hProcess);
        }

        LI_FN(exit)(0);
        LI_FN(ExitProcess)(0);
        LI_FN(abort)();
        *((unsigned int*)0) = 0xDEAD;
    }

    return TRUE;
}

void Raise_Check() {
    __try {
        RaiseException(DBG_CONTROL_C, 0, 0, NULL);
    }
    __except (DBG_CONTROL_C == GetExceptionCode()
        ? EXCEPTION_EXECUTE_HANDLER
        : EXCEPTION_CONTINUE_SEARCH) {
    }
}

DWORD currentThreadId;
DWORD currentThreadId2;
DWORD currentThreadId3;
DWORD currentThreadId4;

bool IsThreadSuspended(DWORD threadId) {
    HANDLE hThread = OpenThread(THREAD_GET_CONTEXT, FALSE, threadId);
    if (hThread != nullptr) {
        CONTEXT context;
        context.ContextFlags = CONTEXT_CONTROL;

        if (GetThreadContext(hThread, &context)) {
            CloseHandle(hThread);
            return false;
        }

        CloseHandle(hThread);
        return true;
    }

    return false;
}
