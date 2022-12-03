/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/


#include <iostream>
using namespace std;


int main()
{
    int a[10000], n, i;
    cin >> n;
    //###INSERT CODE HERE -
    for (int i = 0; i < n; i++) cin >> a[i];
    int max = a[0];
    int count = 0;
    for (int i = 0; i < n; i++) if (a[i] > max) max = a[i];
    for (int i = 0; i < n; i++) if (a[i] == max) count++;
    cout << max << endl << count;
    return 0;
}