#include <iostream>
using namespace std;
int main()
{
	float a[100][100], m, n;
	int dem = 0;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j);
			else if (a[i][j] != 0)
			{
				cout << "No";
				return 0;
			}
		}
	cout << "Yes";
	return 0;
}