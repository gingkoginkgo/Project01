
#include "UI.h"
using namespace std;

UI::UI()
{
    int _MenuState = 0;
}

void UI::GetUserInput()
{
}

void UI::GetUserSelection(int selNum)
{
    int sel=0;
    for(;;)
    {
        cin >> sel;

        if (sel < 1 || sel > selNum)
        {
            cout << "selection error\n plesese select again:";
            ShowMenu();
        }
        else
        {
            _MenuState = _MenuState * 10 + sel;
            break;
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



