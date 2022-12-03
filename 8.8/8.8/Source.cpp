#include <iostream>
#include <math.h>
using namespace std;
bool isPrimeNumber(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    if (count == 2)
        return true;
    return false;
}
int main()
{   
    int n; unsigned long int gt = 1;
    cin >> n;
        for (int i = 2; i <= n; i++) 
            if (isPrimeNumber(i) == true) gt *= i;
    cout << gt;
    return 0;
}