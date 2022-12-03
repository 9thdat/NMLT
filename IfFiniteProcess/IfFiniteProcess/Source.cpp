#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    while (a != b)
    {
        a += 1;
        b -= 1;
        if (b < 0) break;
    }
    if (a == b) cout << "FALSE";
    if (a != b) cout << "TRUE";
    return 0;
}