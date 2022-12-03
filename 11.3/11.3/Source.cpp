#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	int a[10000]; int n; double s = 0, tb = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		tb += a[i];
	tb = tb / n;
	for (int i = 0; i < n; i++)
		s = s + pow(a[i] - tb, 2);
	s = s / n;
	cout << setprecision(10) << sqrt(s);
	return 0;
}