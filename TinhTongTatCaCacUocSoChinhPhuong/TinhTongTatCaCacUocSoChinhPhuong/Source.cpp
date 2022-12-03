/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;
#include <math.h>
int sum_all_square(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        double a = (double)sqrt(i);
        double b = (int)sqrt(i);
        if (a==b)
            if (n % i == 0) s = s + i;
    }
    if(s>0) return s;
    return 1;
}


int main() {
    int n;
    cin >> n;
    cout << sum_all_square(n);
}
