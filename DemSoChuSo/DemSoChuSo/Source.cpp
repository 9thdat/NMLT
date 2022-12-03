#include <iostream>
using namespace std;
int main()
{
	int n, dem=0,so;
	string dau;
	cin >> n;
	so = n;
	if (n < 0)
	{
		dau = " va 1 dau";
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		dem = dem + 1;
	}
	if (so == 0) dem = 1;
	cout << "So " << so<< " co " << dem << " chu so" << dau;
	return 0;
}