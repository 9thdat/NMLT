/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>
#include <math.h>

using namespace std;

bool isPower(int n)
{
    if (n == 1) return true;
    else {
        int s;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 2; j <= n; j++)
            {
                s = pow(i, j);
                if (s == n) return true;
            }
        }
    }
    return false;
}
int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n; cin >> n;
    cout << isPower(n) << endl;
    return 0;
}

