#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double s, tgcho, tien;
	bool kieudi;
	cin >> s >> kieudi >> tgcho;
	const double qd = s;
	if (qd < 0) cout << "Gia tri khong hop le";
	else
	{
		if (0 <= qd && qd <= 1)	tien = 10000;
		if (1 < qd && qd <= 30)
		{
			tien = 10000 + 13600 * (qd-1);
		}
		if (31<=qd)
		{
			tien = 404400 + 11000 * (qd - 30);
		}
	}
	if (kieudi == 0)
	{
		if (tgcho < 0) cout << "Gia tri khong hop le";
		else cout << (int)tien;

	}
	else if (kieudi == 1) 
	{
		if (tgcho < 2)
		{
			tien = tien + tien * 0.6;
			cout << (int)tien;
		}
		else if (tgcho >= 2)
		{
			tien = tien + tien * 0.6 + (tgcho - 2) * 20000;
			cout << (int)tien;
		}
		else if (tgcho < 0) cout << "Gia tri khong hop le";
	}
	else if (kieudi != 0 && kieudi != 1) cout << "Gia tri khong hop le";
	return 0;
}