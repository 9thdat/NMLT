#include <iostream>
using namespace std;
int main()
{
	long double	 a[50][50], b[50][50], c[50][50];
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
			for (int x = 0; x < l ; l++)
				c[i][j] = a[i][x]* b[x][j];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
}