#include <iostream>
using namespace std;
int main()
{
	int a[1000], max, max2=0,n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	max = a[0];
	for (int i = 0; i < n; i++)
		if (max < a[i]) max = a[i];
	for (int i = 0; i < n; i++)
		if (max2 < a[i] && a[i]<max) max2 = a[i];
	cout << max2;
}