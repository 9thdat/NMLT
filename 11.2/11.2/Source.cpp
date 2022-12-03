#include <iostream>
using namespace std;
int main()
{
	int a[1000]; int n,dem=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int max = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] >= max) max = a[i];
	for (int i = 0; i < n; i++)
		if (a[i] == max) dem++;
	cout << max << endl << dem;
		return 0;
}