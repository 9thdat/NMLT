#include <iostream>
using namespace std;
int main()
{
	int a[101];
	int n,dem=0,uoc;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		uoc = 0;
		if (a[i] <= 1);
		else
		{
			for (int j = 1; j <= a[i]; j++)
				if (a[i] % j == 0) 
				{
					uoc++;
				}
			if (uoc == 2) dem++;
		}
	}
	cout << dem << endl;
	for (int i = 0; i < n; i++)
	{
		uoc = 0;
		if (a[i] == 1);
		else
		{
			for (int j = 1; j <= 100; j++)
				if (a[i] % j == 0) uoc++;
			if (uoc == 2) cout << a[i] << " ";
		}
	}
	return 0;
}