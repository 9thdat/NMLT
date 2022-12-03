
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;


//###INSERT CODE HERE -
void inputArray(int a[100], int& na)
{
    cin >> na;
    for (int i = 0; i < na; i++)
        cin >> a[i];
}
void outputArray(int a[100], int& na)
{
    for (int i = 0; i < na; i++)
        cout << a[i] << " ";
}
void getPositiveNumber(int a[100], int& na, int b[100], int& nb)
{
    nb = 0;
    int c[100], dem = 0;
    for (int i = 0; i < na; i++)
    {
        if (a[i] < 0)
        {
            b[nb] = a[i];
            nb++;
        }
        else if (a[i] > 0)
        {
            c[dem] = a[i];
            dem++;
        }
    }
    nb = dem;
    if (nb !=0) for (int i = 0; i < nb; i++)
        b[i] = c[i];
   
}
int main()
{
    int na, a[100], nb, b[100];
    inputArray(a, na);
    cout << "Array a:" << endl;
    outputArray(a, na);
    cout << endl;

    getPositiveNumber(a, na, b, nb);

    cout << "Array b:" << endl;
    outputArray(b, nb);

    return 0;
}