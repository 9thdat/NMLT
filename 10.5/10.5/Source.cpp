#include <iostream>
using namespace std;
int main()
{	
	float a[100][100], m, n, s=0;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for (int i = 0; i < m; i++)
		s += a[i][i];
	cout << s;
}