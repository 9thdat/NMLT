#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	int n, a[100];

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (a[i] % 2 == 0) dem = dem + 1;
	if (dem == n) cout << "yes";
	else cout << "no";

	return 0;
}
