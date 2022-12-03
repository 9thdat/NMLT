
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>
#pragma warning(disable : 4996)



using namespace std;

int main()
{
    char s1[200], s2[200];
    cout << "Nhap chuoi = ";

    //###INSERT CODE HERE -
    cin.getline(s1,200);
    int n= strlen(s1);
    strcpy(s2, s1);
    for (int i = 0; i <n ; i++)
    {
        if (i % 2 == 0) {
            if ('a' <= s2[i] && s2[i] <= 'z')
                s2[i] = toupper(s2[i]);
        }
        else
        {
            if ('A' <= s2[i] && s2[i] <= 'Z')
                s2[i] = tolower(s2[i]);
        }
    }
    cout << "\ns1=" << s1 << endl;
    cout << "s2=" << s2;

    return 0;
}