/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
string
###End banned keyword*/

#include <iostream>
#include <cstring>
using namespace std;

//###INSERT CODE HERE -
void properNounCorrection(char a[])
{
    a[0] = toupper(a[0]);
    for (int i = 1; i < strlen(a); i++)
        a[i] = tolower(a[i]);
}

int main()
{
    char s[100];
    cin.getline(s, 35);
    properNounCorrection(s);
    cout << s;
    return 0;
}
