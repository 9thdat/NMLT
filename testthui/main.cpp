/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;

bool LaSNT(int n);
int SNTthuN(int n);

int main()
{
    int n;
    cin >> n;
    cout << SNTthuN(n) << endl;
    return 0;
}

//###INSERT CODE HERE -
bool LaSNT(int n)
{
    if (n < 2)
        return 0;
    else {
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0)
                return 0;
        return 1;
    }
}
int SNTthuN(int n)
{
    int dem = 0, so = 2;
        if (n < 1) return -1;
        else while (dem!=n)
        {
            if (LaSNT(so) == 1) dem++;
            so++;
        }
        return so-1;
}
