// last update:2014/01/14,not finish

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
//To-DO & Problem:how handle/connect WMSFile
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
            _MenuState = _MenuState * 10 + sel;
            switch(_MenuState)
            {
                //_MenuState=0,[4]exit
                case 4:
                ByeWMS();
                break;
                //_MenuState=15,[5]back
                case 15:
                Back();
                break;
                //To next menu
                default:
                ShowMenu();
                break;
            }
        }
    }
}

void UI::ShowMenu()
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

// TODO: implement the ExceptionHandling
void UI::CheckInput()
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



