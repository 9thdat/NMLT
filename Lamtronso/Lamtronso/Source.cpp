/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
case
:
###End banned keyword*/

//LAM TRON SO THUC
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x;
    int d;
    cin >> x >> d;
    double kq;
    cout.precision(d+1);
    kq= roundf(x * pow(100, d) / (pow(100, d)));
    cout << kq;
    return 0;
}