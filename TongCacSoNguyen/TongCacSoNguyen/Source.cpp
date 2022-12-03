/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
?
else
[
###End banned keyword*/

#include <iostream>

using namespace std;


int sumMany(int m);
int main()
{
    int n;
    cin >> n; //So luong cac so nguyen can nhap
    int t, tt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> t;
            tt = tt + t;
        }
        cout << sumMany(tt);
}
int sumMany(int m)
{   
   return m;
}
