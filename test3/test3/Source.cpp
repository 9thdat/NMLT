#include <iostream>
using namespace std;
int main()
{
	int m;
	int a[100];
	cin >> m;
	for (int i = 0; i < m; i++) cin >> a[i];
	int max1 = a[0];
	for (int i = 0; i < m; i++) if (a[i] > max1) max1 = a[i];
	cout << max1 << endl;
	for (int i = m - 1; i >= 0; i -- ) if (a[i] == max1)
	{
		cout << i;
		return 0;
	}
}