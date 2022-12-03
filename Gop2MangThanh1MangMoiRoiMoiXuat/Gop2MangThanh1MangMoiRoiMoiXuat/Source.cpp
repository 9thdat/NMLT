#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m, n,p,k=0;
	int a[50]; int b[50]; int c[50];
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	p = m + n;
	for (int i = 0; i < m; i++) c[i] = a[i];
	for (int i = m; i < p; i++)
		{
			c[i] = b[k];
			k++;
		}
	for (int i = 0; i < p; i++)
		cout << c[i] << " ";
	return 0;
}