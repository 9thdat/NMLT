
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;
#define MIN -1000
#define MAX 1000

int isTotalOven(int* a, int n) // or (int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            return 0;
    return 1;
}
int isValidValue(int* a, int n) // or (int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] < 2 * MIN || a[i]>2 * MAX)
            return 0;
    return 1;
}
int main()
{
    //###INSERT CODE HERE -
    int* a;
    int n, temp;
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        temp=rand() % 4000 + (-2000);
        if (temp % 2 == 0)
            a[i] = temp;
        else i--;
    }
    if (isTotalOven(a, n) == 1) cout << "Mang toan so chan" << endl;
    if (isValidValue(a, n) == 1) cout << "Mang chua cac gia tri nam trong khoang [" << 2 * MIN << "," << 2 * MAX << "]";

    return 0;
}

