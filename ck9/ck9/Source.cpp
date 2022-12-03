/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>

using namespace std;

//###INSERT CODE HERE -
bool check(char a)
{
    if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z')) return 1;
    else if ('0' <= a && a <= '9') return 1;
    return 0;
}
int DemSoKyTuDacBiet(char s[])
{   
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
        if (check(s[i])==0) count++;
    return count;
}
int main()
{
    char s[256];
    cin.getline(s, 256);
    cout << DemSoKyTuDacBiet(s);
    return 0;
}