#ifndef UI_H
#define UI_H

using namespace std ;

class UI
{
   public:
    string _UserInput;
    int _MenuState;
    /*  0 means user is in [0]MainMenu
       01 means user is in [0]MainMenu->[1]WMSMenu
      011 means user is in [0]MainMenu->[1]WMSMenu->[1]New/AddFile
      ....... */
    UI();
    void getUserInput();
    int ShowMenu(int);
    void ByeWMS(int);
    void Back(int);
    int CheckInput(string);
};

#endif // UI_H
