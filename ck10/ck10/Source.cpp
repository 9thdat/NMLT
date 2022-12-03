/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>

using namespace std;

//###INSERT CODE HERE -
bool chuso(char a)
{
    if ('0' <= a && a <= '9') return 1;
    return 0;
}
bool chucai(char a)
{
    if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z')) return 1;
    return 0;
}
bool check(char a, char b)
{
    if (chuso(a) == 1 && chuso(b) == 1)
    {
        if (a == b) return 1;
        else return 0;
    }
    else if (chuso(a) == 1 && chuso(b) != 1) return 0;
    else if (chuso(a) != 1 && chuso(b) == 1) return 0;
    else if (chucai(a) == 1 && chucai(b) == 1) return 1;
    else if (chucai(a) == 1 && chucai(b) != 1) return 0;
    else if (chucai(a) != 1 && chucai(b) == 1) return 0;
    return 1;
}
bool SoSanhBangNhauTheoSo(char s[], char t[])
{    
    if (strlen(s) != strlen(t)) return 0;
    else 
    for (int i = 0; i < strlen(s); i++)
        if (check(s[i], t[i]) == 0) return 0;
    return 1;
}
int main()
{
    char s[256], t[256];
    cin.getline(s, 256);
    cin.getline(t, 256);
    cout << SoSanhBangNhauTheoSo(s, t);//so giong nhau, cung la chu cai

    return 0;
}