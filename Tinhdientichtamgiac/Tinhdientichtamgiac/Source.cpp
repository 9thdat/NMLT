/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
switch
:
###End banned keyword*/


//DIEN TICH TAM GIAC
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    double p, s,result;
    cin >> a >> b >> c;
    p = (double)(a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    result=roundf(s*100/100);
    cout << result;
    return 0;
}

