#ifndef WMSFILE_H
#define WMSFILE_H
#include <stdio.h>
using namespace std;
/*To-Do:
 * 01.Can get user input file path
 * 02.Can create new xml file
 * 03.Can load new xml file
 * 04.Can Detect error about :
 *    a.file path syntax error
 *    b.file already exists when create new file
 *    c.when add item, price and stock can not be negative or NaN(not a number)
 *    d.can not load file before create file.
 *    e.can not add item and print in screen before load file.
 * 05.Can write somthings to file
 * 06.Can read somthings from file and print in screen
 */

class WMSFile
{
    public:
    string _UserInputPath;
    WMSFile();
    void GetUserInputPath();
    void CreateFile();
    void LoadFile();
    void WriteFile();
    void PrintFile();

};

#endif // WMSFILE_H
