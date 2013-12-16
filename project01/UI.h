#ifndef UI_H
#define UI_H
#include <iostream>
using namespace std;

#define menu0 "Main menu\n[1] Warehouse manage system\n[2] Local time\n[3] About\n[4] Exit\nPlease enter your choice:"
#define menu0_1 "Welcome to WMS\n[1] New / Load xml file\n[2] Add item to the system\n[3] Print\n[4] Write a review\n[5] Edit host name\n[6] Display system details\n[7] Back\nPlease enter your choice:"
class UI
{
   public:
    string _UserInput;
    int _MenuState;
    /*  0 means user is in [0]MainMenu
     *  1 means user is in [0]MainMenu->[1]WMSMenu
     *  11 means user is in [0]MainMenu->[1]WMSMenu->[1]New/AddFile
     *....... */
    UI();
    void GetUserInput();
    void GetUserSelection(int selNum);
    void ShowMenu();
    void ByeWMS();
    void Back();
    void CheckInput();
};

#endif // UI_H
