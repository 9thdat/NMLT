/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;
int reverse(int n)
{
    int r = 0, s = 0;
    while (n / 10 != 0)
    {
        s = n % 10;
        r = r * 10 + s;
        n /= 10;
    }
    r = r * 10 + n;
    return r;
}
int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}