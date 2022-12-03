
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

using namespace std;

int burnCandles(int a, int b)
{
    int div, mod;
    int sum = a;
    while (a >= b)
    {
        div = (a / b);
        sum = sum + div;
        mod = (a % b);
        a = (div + mod);
    }
    return sum;
}
int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);


    int candles, makeNew;
    cin >> candles >> makeNew;

    cout << burnCandles(candles, makeNew) << endl;
    return 0;
}