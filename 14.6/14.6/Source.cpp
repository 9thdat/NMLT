/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>
#include <string>
using namespace std;

//###INSERT CODE HERE -
bool isRepeat(string a)
{
    string b;
    int dodai;
    if (a.length() % 2 != 0) return 0;
    else
    {   
        dodai = a.length() / 2 ;
        b = a.substr(dodai, a.length());
        if (a.find(b) == 0) return 1;
        else return 0;
    }
}
int main()
{
    string inputString;
    getline(cin, inputString);
    cout << isRepeat(inputString);
    return 0;
}