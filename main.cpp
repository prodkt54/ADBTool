#include <iostream>
#include <windows.h>

using namespace std;

class pm{
public:
    void list(){
        system("adb shell pm list packages");
    }
};







int main(){
    int choose;
    bool running = 1;
    pm pkmgr;
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    while(running){
        system("logo.bat");
        cout << "Input from Keyboard 1 -> n: \n";
        cout << "1. List ADB Devices\n";
        cout << "2. Screen Mirroring\n";
        cout << "3. ADB shell\n";
        cout << "4. Packages Manager\n";
        cout << "5. Reboot Recovery\n";
        cout << "6. About\n";
        cout << "7. Exit\n";
        cin >> choose;
        switch(choose){
            case 1:
                system("cls");
                system("adb devices");
                system("pause");
                break;
            case 2:
                system("cls");
                system("scrcpy.lnk");
                break;
            case 3:
                system("cls");
                cout << "type 'exit' to exit shell!\n";
                system("adb shell");
                break;
            case 4:
                system("cls");
                int pkw;
                cout << "1. Packages List\n";
                cin >> pkw;
                switch(pkw){
                    case 1:
                        pkmgr.list();
                        system("pause");
                        break;
                }
                break;

                

            case 5:
                system("cls");
                system("adb reboot recovery");
                break;
            case 6:
                system("cls");
                system("logo.bat");
                cout << "ADB tool (CLI) beta 1\nCredits:\n +) Amoxx\n";
                system("pause");
                break;
            case 7:
                system("taskkill -im adb.exe /f");
                system("taskkill -im main.exe /f");
                running = 0;
                break;
            default:
                system("cls");
                cout << "Invalid Input, Please try again!\n";
                system("pause");
        }



    }


    
}