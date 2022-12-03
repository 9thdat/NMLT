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

//###INSERT CODE HERE
#pragma warning(disable : 4996)


void encloseInBrackets(char a[]) {
    char b[100] = { '(' }, c[2] = { ')' };
    strcat(b, a);
    strcat(b, c);
    strcpy(a, b);
}
int main()
{
    char a[100];
    cin.getline(a, 40);
    encloseInBrackets(a);
    cout << a;
    return 0;
}