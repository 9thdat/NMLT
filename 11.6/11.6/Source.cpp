#include <iostream>
using namespace std;
int main()
{
	int a[101];
	int n, dem = 0, dem1=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] < a[i]) dem++;
		else if (a[i-1]>a[i]) dem1++;
	}
	if (dem == n - 1) cout << "Mang tang dan";
	else if (dem1 == n - 1)cout << "Mang giam dan";
	else cout << "Mang khong tang, khong giam";
	return 0;
}