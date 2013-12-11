#include <iostream>
#include "WMSExcepition.h"
#include "UI.h"
using namespace std;

void WMSExcepition::CheckInput(UI*ptr)
{
    (_uiptr->_MenuState);
    if((_uiptr->_UserInput)!=NULL)
    cout<<"User:"<<_UserInput<<endl;
}
