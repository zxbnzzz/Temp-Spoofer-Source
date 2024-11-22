//Includes (important)
#include <iostream>
#include "Windows.h"
#include <tlhelp32.h>
#include <filesystem>
#include <fstream>
#include <algorithm>
#include <random>
#include "thread"
#include <iostream>
#include <string>
#include "../protection/swabra.h"
#include "../protection/lazy.h" 
#include <fstream>
#include "thread"
#include "../protection/encrypt.h"

//Auth Stuff
#include "../auth/auth.hpp"
#include "../auth/skStr.h"

//Spoofing
#include "../Spoofing/Temp Spoofing/Temp Spoof.h"

void wait(int time)
{
    std::time_t startTime = std::time(nullptr);
    while (std::time(nullptr) < startTime + time)
    {
    }
}

void Anti_Debug_Loop()
{
    currentThreadId = GetCurrentThreadId();
    while (true)
    {
        if (IsDebuggerPresent()) *((unsigned int*)0) = 0xDEAD;

        // Assuming E decrypts to a const char*
        const char* driver1 = E("https://authvault.kesug.com");

        std::ifstream file_stream(driver1);

        if (file_stream.good())
        {

            MessageBoxA(NULL, E("HyperHide Drivers Found In Memory, Please Unload And Try Again"), E("Hydro Security"), MB_ICONINFORMATION | MB_OK);
            LI_FN(exit)(0);
            LI_FN(ExitProcess)(0);
            LI_FN(abort)();
            *((unsigned int*)0) = 0xDEAD;
        }

        if (IsDebuggerPresent()) *((unsigned int*)0) = 0xDEAD;
        EnumWindows(EnumWindowsProc, 0);

        wait(1);
    }
}

namespace fs = std::filesystem;

void s();

int getProcID(const std::string& p_name)
{
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    PROCESSENTRY32 structprocsnapshot = { 0 };

    structprocsnapshot.dwSize = sizeof(PROCESSENTRY32);

    if (snapshot == INVALID_HANDLE_VALUE)return 0;
    if (Process32First(snapshot, &structprocsnapshot) == FALSE)return 0;

    while (Process32Next(snapshot, &structprocsnapshot))
    {
        if (!strcmp(structprocsnapshot.szExeFile, p_name.c_str()))
        {
            CloseHandle(snapshot);
            return structprocsnapshot.th32ProcessID;
        }
    }
    CloseHandle(snapshot);
    return 0;

}

bool isProcRunning(std::string process) {
    if (getProcID(process) == 0) {
        return false;
    }
    else
    {
        return true;
    }
}

void Tick() {
    if (isProcRunning("ida64.exe") || isProcRunning("dotPeek64.exe") || isProcRunning("ida32.exe") || isProcRunning("ida.exe") || isProcRunning("reclass.net.exe") || isProcRunning("reclass.exe") || isProcRunning("heyrays.exe") || isProcRunning("lighthouse.exe") || isProcRunning("cheatengine-x86_64.exe") || isProcRunning("classinformer.exe") || isProcRunning("ida-x86emu.exe") || isProcRunning("cffexplorer.exe") || isProcRunning("winhex.exe") || isProcRunning("hiew.exe") || isProcRunning("fiddler.exe") || isProcRunning("httpdebugger.exe") || isProcRunning("httpdebuggerpro.exe") || isProcRunning("scylla.exe") || isProcRunning("x64dbg.exe") || isProcRunning("x64dbg-unsigned.exe") || isProcRunning("x96dbg.exe") || isProcRunning("x32dbg.exe") || isProcRunning("x32dbg-unsigned.exe") || isProcRunning("Cheat Engine.exe") || isProcRunning("wompwomp.exe") || isProcRunning("UD.exe") || isProcRunning("UD 32.exe") || isProcRunning("DUP.exe") || isProcRunning("EpicGamesLauncher.exe"))
    {
       // MessageBox(NULL, "Game Launcher Detected close them", "Fusion Services", MB_OK);
       // ExitProcess(0);
    }
}



int main() {


                                                                                                                                                                                            s();
    thread(Anti_Debug_Loop).detach();

    system("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1");
    system("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1");
    system("sc stop HTTPDebuggerPro >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq fiddler*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq wireshark*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq rawshark*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq charles*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq ida*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1");
    system("sc stop HTTPDebuggerPro >nul 2>&1");
    system("sc stop KProcessHacker3 >nul 2>&1");
    system("sc stop KProcessHacker2 >nul 2>&1");
    system("sc stop KProcessHacker1 >nul 2>&1");
    system("sc stop wireshark >nul 2>&1");
    system("sc stop npf >nul 2>&1");	system("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1");
    system("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1");
    system("sc stop HTTPDebuggerPro >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq fiddler*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq wireshark*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq rawshark*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq charles*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq ida*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1");
    system("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1");
    system("sc stop HTTPDebuggerPro >nul 2>&1");
    system("sc stop KProcessHacker3 >nul 2>&1");
    system("sc stop KProcessHacker2 >nul 2>&1");
    system("sc stop KProcessHacker1 >nul 2>&1");
    system("sc stop wireshark >nul 2>&1");
    system("sc stop npf >nul 2>&1");

    Tick();
    std::thread([&]() {
        while (true) {
            Tick(); // Call Tick 
            std::this_thread::sleep_for(std::chrono::seconds(1)); // Sleep for 1 second
        }
        }).detach(); // Detach the thread so it runs independently 


    std::string consoleTitle = skCrypt("Fusion Services | Temporary Spoofer").decrypt();
    SetConsoleTitleA(consoleTitle.c_str());


   
    const char* ascii_art = R"(


  ______ _    _  _____ _____ ____  _   _ 
 |  ____| |  | |/ ____|_   _/ __ \| \ | |
 | |__  | |  | | (___   | || |  | |  \| |
 |  __| | |  | |\___ \  | || |  | | . ` |
 | |    | |__| |____) |_| || |__| | |\  |
 |_|     \____/|_____/|_____\____/|_| \_|
)";


    std::cout << "\033[1;34m" << ascii_art << "\033[0m" << std::endl;

    std::cout << "\033[1;34mHello & Welcome to Fusion Services Permanent Spoofer\n\033[0m"; 

    std::cout << "                                                                                              \n";
    std::cout << "                                                                                              \n";


        
    system("cls");

    std::cout << "\033[1;34m" << ascii_art << "\033[0m" << std::endl;

    std::cout << skCrypt("\n\n [1] Normal Spoof\n [2] Check Serials\n\n Choose option: ");

    int option;
    std::string username;
    std::string password;


    std::cin >> option;
    switch (option)
    {
    case 1:
        system("cls");
        TempSpoof();
    case 2:
        system("cls");
        std::cout << "\033[1;34mDISK SERIALS \033[0m\n";
        system("wmic diskdrive get model, serialnumber\n");

        std::cout << "\033[1;34mCPU SERIALS \033[0m\n";
        system("wmic cpu get serialnumber\n");

        std::cout << "\033[1;34mBIOS SERIALS \033[0m\n";
        system("wmic bios get serialnumber\n");

        std::cout << "\033[1;34mMOTHERBOARD SERIALS \033[0m\n";
        system("wmic baseboard get serialnumber\n");

        std::cout << "\033[1;34mUUID SERIALS \033[0m\n";
        system("wmic path win32_computersystemproduct get uuid\n");

        std::cout << "\033[1;34mMAC SERIALS \033[0m\n";
        system("getmac\n");
        std::cout << "Press any key to go back\n";
        system("pause>nul");
        system("cls");
        main();
        system("cls");
       
    default:
        std::cout << skCrypt("\n\n Status: Failure: Invalid Selection");
        Sleep(3000);
        exit(1);
    }


}
