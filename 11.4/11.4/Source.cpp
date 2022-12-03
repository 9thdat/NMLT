
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

//###INSERT CODE HERE -

int ham_x(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = -a[i];
            dem++;
            while (a[i] > 0)
            {
                a[i] /= 10;
                dem++;
            }
        }
        else if (a[i] > 0)
        {
            while (a[i] > 0)
            {
                a[i] /= 10;
                dem++;
            }

        }
        else if (a[i]==0) dem++;
    }
    return dem;
}

int main()
{
    int n, a[100000], dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    cout << ham_x(a, n);

    return 0;
}