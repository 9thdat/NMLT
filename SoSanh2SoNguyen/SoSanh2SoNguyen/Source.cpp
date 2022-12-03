/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
switch
:
###End banned keyword*/

// SO SANH BANG 2 SO NGUYEN
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while (a != b)
    {
        cout << "0";
        break;
    }
    while (a == b)
    {
        cout << "1";
        break;
    }
    return 0;
}
