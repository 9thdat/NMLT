
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -
void inputArray(int a[], int& na)
{
    cin >> na;
    for (int i = 0; i < na; i++)
        cin >> a[i];
}
void outputArray(int a[], int& na)
{
        for (int i = 0; i < na; i++)
            cout << a[i] << " ";
}
void insertElement(int a[], int &n, int &pos, int &x)
{
    if (pos < 0 || pos >= n)
    {
        cout << "\nLoi: Vi tri khong hop le va se chen vao cuoi mang";
        a[n] = x;
        n = n + 1;
    }
    else
    {
        for (int i = n; i >= pos; i--)
            a[i + 1] = a[i];
        a[pos] = x;
        n = n + 1;
    }
}
int main()
{
    int n, a[100], pos, x;
    inputArray(a, n);
    cin >> pos >> x;
    cout << "Before: ";
    outputArray(a, n);

    insertElement(a, n, pos, x);

    cout << "\nAfter: ";
    outputArray(a, n);

    return 0;
}