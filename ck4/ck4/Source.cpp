#include <iostream>
using namespace std;
int main()
{
	int a[101];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int max = a[0];
	for (int i = 0; i < n; i++) if (a[i] > max) max = a[i];
	cout << max << endl;
	for (int i = 0; i < n; i++) if (a[i] == max)
	{
		for (int j = i; j < n-1; j++)
			a[j] = a[j + 1];
			n--;
			i--;
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}