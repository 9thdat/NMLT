
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int n, a[100];
	int  demle = 0, demchan = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (n == 0)
	{
		cout << "Mang rong"; return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
			if (a[i] % 2 != 0) demle++;
			else demchan++;
	}
	if (demle == n) cout << "Mang chua toan so le";
	else if (demchan == n) cout << "Mang chua toan so chan";
	else cout << "Mang khong chua toan so chan hay so le";
    return 0;
}
