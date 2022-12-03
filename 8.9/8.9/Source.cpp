#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    unsigned long int n, r,t, sum = 0;
    cin >> n;

    for (t = n; n != 0; n = n / 10) {
        r = n % 10;
        sum = sum * 10 + r;
    }
    if (t == sum) cout<< 0;
    else cout<< 1;
}