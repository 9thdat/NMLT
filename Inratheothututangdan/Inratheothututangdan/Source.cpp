
#include <iostream>
using namespace std;
int main()
{
    double a, b, c, min1, min2, min3;
    cin >> a >> b>>c;
    min1=a;
    if (b > min1)
    {   
        min2 = b;
        if (c<min2)
        {
            min3 = min2;
            min2 = c;
        }
        else
            min3 = c;
        if (min1 > min2)
        {
            min2 = min1;
            min1 = c;
        }
    }
    else
    {
        min2 = min1;
        min1 = b;
        if (c > min2)
        {
            min3 = c;
        }
        else 
        {
            min3 = min2;
            min2 = c;
            if (min1 > min2)
            {
                min2 = min1;
                min1 = c;
            }
        }
    }
    cout << min1 << " " << min2 << " " << min3;
    return 0;
}


