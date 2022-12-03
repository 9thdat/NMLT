#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, f0 = 0, f1 = 1, fn = 1;
    cin >> x;
    if (x < 1 || x > 30) cout << "So " << x << " khong nam trong khoang [1,30].";
    else
    {
        for (int i = 2; i < x; i++)
        {   
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
        cout << fn;
    }
    return 0;
}