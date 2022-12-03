#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double s, tgcho, dc=0, tien=0;
    bool di;
	cin >> s >> di >> tgcho;
	const double qd = s;
	if (qd <= 1)
	{
			dc = 1;
			tien = 10000;
		if (2 <= qd && qd <= 30)
			while (dc != qd || dc != 30)
			{
				dc = dc + 1;
				tien = tien + 13600;
			}
		if (31 <= qd)	while (dc != qd)
		{
			dc = dc + 1;
			tien = tien + 11000;
		}
		if (di == 1) if (tgcho >= 2)
		{
			tien = tien + tien * 0.6 + (tgcho - 2) * 20;
			cout << tien;
		}
		else tien = tien + tien * 0.6;
		else if (di == 0) cout << tien;
		else if (di != 1 && di != 0) cout << "Gia tri khong hop le";
	}
	else if (qd<=0) cout << "Gia tri khong hop le";
		return 0;
}