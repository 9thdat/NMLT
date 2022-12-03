#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c) cout << "DEU";
        else if (a == b || b == c || c == a)
        {
            if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) cout << "VUONG CAN";
            else cout << "CAN";

        }
        else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) cout << "VUONG";

        else if (a * a + b * b < c * c || b * b + c * c < a * a || c * c + a * a < b * b) cout << "TU";
        else cout << "NHON";
    }
	else cout << "KHONG";
	return 0;
}