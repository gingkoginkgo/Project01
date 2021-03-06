#ifndef UI_H
#define UI_H
#include <iostream>
using namespace std;

#define menu0 "Main menu\n[1] Warehouse manage system\n[2] Local time\n[3] About\n[4] Exit\nPlease enter your choice:"
#define menu0_1 "Welcome to WMS\n[1] New / Load xml file\n[2] Add item to the system\n[3] Print\n[4] Write a review\n[5] Back\nPlease enter your choice:"
#define menu0_1_1 "[1] Creat New xml file\n[2] Load xml file\n[3] Back\nPlease enter your choice:"
#define menu0_1_2 "[1] 3C electronics\n[2] Books and Music\n[3] Others\nPlease select the category of the item:"

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
