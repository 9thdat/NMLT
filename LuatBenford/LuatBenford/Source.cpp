#include <iostream>
using namespace std;
int main()
{
	int dem1 = 0, dem4 = 0;
	int a[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] / 10000 == 1 || a[i] / 1000 == 1 || a[i] / 100 == 1 || a[i] / 10 == 1) dem1++;
		if (a[i] / 10000 == 4 || a[i] / 1000 == 4 || a[i] / 100 == 4 || a[i] / 10 == 4) dem4++;
	}
	if (dem1 == 3 && dem4 == 1) cout << "TRUE";
	else cout << "FALSE";
	return 0;
}