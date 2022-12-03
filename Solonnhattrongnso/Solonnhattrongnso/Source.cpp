/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
?
switch
if
[
###End banned keyword*/


#include <iostream>

using namespace std;

double larger(double x, double y)
{
    if (x > y)
        return x;
    return y;
}


int main()
{
    int n;
    double num, maxNum;
    cin >> n;
    cout << "Enter " << n << " numbers: " << endl;
    double x, max;
    cin >> x;
    max = x;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        max = larger(max, x);
    }
    cout << "The largest number is "<<max;
}

                ;