#include <iostream>
using namespace std;
int main()
{
	int m, n, max1, max2, max;
	int a[100], b[100];
	cin >> m >> n;
	for (int i = 0; i < m; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	max1 = a[0]; max2 = b[0];
	for (int i = 0; i < m; i++)
		if (a[i] > max1) max1 = a[i];
	for (int i = 0; i < n; i++)
		if (b[i] > max2) max2 = b[i];
	max = max1 + max2;
	cout << max;
	return 0;
}
