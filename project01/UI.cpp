// last update:2013/12/20

#include "UI.h"
using namespace std;

UI::UI()
{
    this->_MenuState = 0;
}

void UI::GetUserInput()
{
}

//Get User Select & Check user input is correct or not
void UI::GetUserSelection(int selNum)
{
    int sel=0;
    for(;;)
    {
        cin >> sel;

        //selection error check
        if (sel < 1 || sel > selNum)
        {
            cout << "selection error\n plesese select again:";
            ShowMenu();
        }
        else //according to the different menu,deciding the action
        {
            switch(_MenuState)
            {
                case 0:




                default: //To next menu
                _MenuState = _MenuState * 10 + sel;
                ShowMenu();
                break;
            }
        }
    }
}

void UI::ShowMenu()      //Not finish
{
    switch(_MenuState)
    {
        case 0:
            cout << menu0;
            GetUserSelection(4);
            break;
        case 1:
            cout << menu0_1;
            GetUserSelection(5);
            break;
        case 11:
            cout << menu0_1_1;
            GetUserSelection(3);
            break;
        case 12:
            cout << menu0_1_2;
            GetUserSelection(3);
            break;
    }
}

void UI::ByeWMS()
{
    cout<<"ByeWMS"<<endl;
    exit(0);
}

void UI::Back()
{
    _MenuState/=10;
    ShowMenu();
}
void UI::CheckInput()
// TODO: implement the exceptionhandling
{
    if(_UserInput=="a")
    {
        cout<<"don't input:"<<_UserInput<<endl;
        _MenuState = 5566;
    }
    else
    {
        cout<<"nothing"<<endl;
    }
}



