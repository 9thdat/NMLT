#include <iostream>
using namespace std;
int main()
{
	int a[1000], b[1000], x, y,dem=0;
	cin >> x >> y;
	for (int i = 0; i < x; i++) cin >> a[i];
	for (int i = 0; i < y; i++) cin >> b[i];
	for (int i = 0; i < x; i++) {
		dem = 0;
		for (int j = 0; j < y; j++)
			if (a[i] != b[j]) dem++;
		if (dem == y) cout << a[i]<<" ";
	}
	return 0;
}