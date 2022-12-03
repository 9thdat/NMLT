#include <iostream>
using namespace std;
int main()
{
	int a[50];
	int n, min, max, s;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	min = a[0]; max = a[0];
	for (int i = 0; i < n; i++) if (min > a[i]) min = a[i];
	for (int i = 0; i < n; i++) if (max < a[i]) max = a[i];
	s = max - min - n + 1;
	cout << s;
	return 0;
}