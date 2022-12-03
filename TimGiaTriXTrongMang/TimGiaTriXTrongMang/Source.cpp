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
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int x, i = 0;
	cin >> x;
	for (; i < n; i++)
	{
		if (x == a[i])
		{
			cout << x << " xuat hien dau tien tai vi tri thu " << i + 1 << " trong mang";
			return 0;
		}
	}
	cout << "Khong tim thay " << x;
	return 0;
}
