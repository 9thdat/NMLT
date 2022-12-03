#include <iostream>
using namespace std;
int main()
{
	long double	 a[200][200], b[200][200], c[200][200];
		int m, n, l, k;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	cin >> l >> k;
	for (int i = 0; i < l; i++)
		for (int j = 0; j < k; j++)
			cin >> b[i][j];
	for (int i = 0; i < m; i++)
			for (int j = 0; j < k; j++)
				c[i][j] = a[i][j] + b[i][j];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
}