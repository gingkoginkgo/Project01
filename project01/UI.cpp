#include <iostream>
#include "UI.h"
using namespace std;

UI::UI(){
    int _MenuState = 0;

}
void UI::getUserInput()
    {
    cout<<"Plz Input _UserInput:"<<endl;
    cin>>_UserInput;
    cout<<"Here is:"<<_UserInput<<endl;
    cout<<"Plz Input _MenuState:"<<endl;
    cin>>_MenuState;
    ShowMenu(_MenuState);
    CheckInput(_UserInput);
    ShowMenu(_MenuState);
    //checkinput here
    }
int UI::ShowMenu(int _MenuState)
{cout<<"ShowMenu:"<<_MenuState<<endl;return 0;}
void UI::ByeWMS(int _MenuState)
{cout<<"ByeWMS"<<endl;}
void UI::Back(int _MenuState)
{cout<<"Back"<<endl;}
int UI::CheckInput(string _UserInput)
{
if(_UserInput=="a")
{cout<<"don't input:"<<_UserInput<<endl;
  _MenuState = 5566;
  return _MenuState;
}
else
{cout<<"nothing"<<endl;}
}
