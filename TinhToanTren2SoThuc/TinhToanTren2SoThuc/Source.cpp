/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
switch
:
###End banned keyword*/


//TINH TOAN 2 SO THUC
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout <<"("<< a <<")" << " + " <<"("<< b <<")" " = " << round((a + b)*100)/100 << endl;
    cout <<"(" << a << ")" << " - " << "(" << b << ")" " = " << round((a - b) * 100) / 100 << endl;
    cout <<"(" << a << ")" << " * " << "(" << b << ")" " = " << round((a * b) * 100) / 100 << endl;
    cout << "(" << a << ")" << " / " << "(" << b << ")" " = " << round((a / b) * 100) / 100;
    return 0;
}