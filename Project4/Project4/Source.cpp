#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string kitu,dau;
	int a, b;
	double x;
	cin >> a>>b;
	if (b > 0) dau = "+";
	if (a == 0)
	{
		if (b == 0) kitu = " co vo so nghiem";
		else kitu = " vo nghiem";
		cout << "Phuong trinh" << kitu;
	}
	else {
		x = (double)-b / a;
		if (x == -0) x = 0;
		kitu = "co 1 nghiem x = ";
		cout << setprecision(6) << "Phuong trinh " << a << "x" << dau << b << "=0 " << kitu << x;
	}

	return 0;
	}