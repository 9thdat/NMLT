#include <iostream>
using namespace std;
int main()
{
	int a[50], b[50];
	int n, l, r;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> l >> r;
	if (l == r)
	{
		for (int i = l; i <= n - 1; i++)
			a[i] = a[i + 1];
		for (int i = 0; i < n - 1; i++)
			cout << a[i] << " ";
		
	}
	else
	{
		if (l == 0)
		{
			int j = 0;
			for (int i = r + 1; i < n; i++)
			{
				b[j] = a[i];
				j++;
			}
			for (int j = 0; j < n - (r + 1); j++) cout << b[j] << " ";
		}
		else
		{
			int k = l;
			for (int j = r + 1; j < n; j++)
			{
				a[k] = a[j];
				k++;
				}
			for (int i = 0; i < n-(r-l+1); i++) cout << a[i] << " ";
		}
	}
	return 0;
}