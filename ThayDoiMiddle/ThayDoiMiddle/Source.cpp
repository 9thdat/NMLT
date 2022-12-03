#include <iostream>
using namespace std;
int main()
{
	int n, mid1, mid2, k;
	int a[10000]; int b[10000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (n % 2 == 0)
	{
		mid1 = (n / 2) - 1;
		mid2 = (n / 2);
		b[mid1] = a[mid1] + a[mid2];
			for (int i = 0; i < mid1; i++)
				b[i] = a[i];
			k = mid2 + 1;
			for (int i = mid2; i < n; i++)
			{
				b[i] = a[k];
				k++;
			}
			for (int i = 0; i < (n - 1); i++)
				cout << b[i] << " ";
	
	}
	else for (int i = 0; i < n; i++)
		cout<< a[i]<<" ";
}