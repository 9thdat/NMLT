#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n; int a[10000];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int dem = 0, min;
	min = a[1];
	for (int i = 1; i <= n; i++)
		if (a[i] < min) min = a[i];
	for (int i = 1; i <= n; i++)
		if (min == a[i]) dem = dem + 1;
	cout << min << " " << dem;
	return 0;
}