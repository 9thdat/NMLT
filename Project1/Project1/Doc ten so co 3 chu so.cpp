#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, a, b, c;
    string a1, b1, c1;
    cin >> n;
    if (100 <= n && n <= 999)
    {
        a = n / 100;
        b = (n % 100) / 10;
        c = (n % 100) % 10;
        if (b != 0)
        {
            switch (a)
            {
            case 1: a1 = "mot"; break;
            case 2: a1 = "hai"; break;
            case 3: a1 = "ba"; break;
            case 4: a1 = "bon"; break;
            case 5: a1 = "nam"; break;
            case 6: a1 = "sau"; break;
            case 7: a1 = "bay"; break;
            case 8: a1 = "tam"; break;
            case 9: a1 = "chin"; break;
            }
            switch (b)
            {
            case 1: b1 = "muoi"; break;
            case 2: b1 = "hai muoi"; break;
            case 3: b1 = "ba muoi"; break;
            case 4: b1 = "bon muoi"; break;
            case 5: b1 = "nam muoi"; break;
            case 6: b1 = "sau muoi"; break;
            case 7: b1 = "bay muoi"; break;
            case 8: b1 = "tam muoi"; break;
            case 9: b1 = "chin muoi"; break;
            }
            switch (c)
            {
            case 0: c1 = ""; break;
            case 1: c1 = "mot"; break;
            case 2: c1 = "hai"; break;
            case 3: c1 = "ba"; break;
            case 4: c1 = "bon"; break;
            case 5: c1 = "lam"; break;
            case 6: c1 = "sau"; break;
            case 7: c1 = "bay"; break;
            case 8: c1 = "tam"; break;
            case 9: c1 = "chin"; break;
            }
            cout << a1 << " tram " << b1 << " " << c1;
        }
        else
        {
            switch (a)
            {
            case 1: a1 = "mot"; break;
            case 2: a1 = "hai"; break;
            case 3: a1 = "ba"; break;
            case 4: a1 = "bon"; break;
            case 5: a1 = "nam"; break;
            case 6: a1 = "sau"; break;
            case 7: a1 = "bay"; break;
            case 8: a1 = "tam"; break;
            case 9: a1 = "chin"; break;
            }
            switch (c)
            {
            case 0: c1 = ""; break;
            case 1: c1 = "le mot"; break;
            case 2: c1 = "le hai"; break;
            case 3: c1 = "le ba"; break;
            case 4: c1 = "le bon"; break;
            case 5: c1 = "le nam"; break;
            case 6: c1 = "le sau"; break;
            case 7: c1 = "le bay"; break;
            case 8: c1 = "le tam"; break;
            case 9: c1 = "le chin"; break;
            }
            cout << a1 << " tram " << c1;
        }
    }
    else cout << "NULL";
    return 0;
}


