#include <iostream>
#include <math.h>
using namespace std;
typedef struct PhanSo

{
	int ts;
	int ms;
}PS;
int ucln(int a, int b)
{
	int r = a % b;       
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;   
	}
	return b;
}
int main()
{
	PS a, b;
	string dau;
	int uc;
	int tuso, mauso;
	cin >> a.ts >> a.ms >> b.ts >> b.ms >> dau;
	if (a.ms == 0 || b.ms == 0) cout << "Khong thoa yeu cau bai toan";
	else
	{
		if (dau == "+")
		{
			tuso = a.ts * b.ms + a.ms * b.ts;
			mauso = a.ms * b.ms;
			uc = ucln(tuso, mauso);
			tuso = tuso / uc;
			mauso = mauso / uc;
			if (mauso < 0) {
				tuso = -tuso;
				mauso = -mauso;
			}
			if (tuso % mauso == 0)
			{
				cout << tuso / mauso;
				return 0;
			}
			else
				cout << tuso << "/" << mauso;
			return 0;
		}
		else if (dau == "-")
		{

			tuso = a.ts * b.ms - a.ms * b.ts;
			mauso = a.ms * b.ms;
			uc = ucln(tuso, mauso);
			tuso = tuso / uc;
			mauso = mauso / uc;
			if (mauso < 0) {
				tuso = -tuso;
				mauso = -mauso;
			}
			if (tuso % mauso == 0)
			{
				cout << tuso / mauso;
				return 0;
			}
			else
				cout << tuso << "/" << mauso;
			return 0;

		}
		else if (dau == "*")
		{

			tuso = a.ts* b.ts;
			mauso = a.ms * b.ms;
			uc = ucln(tuso, mauso);
			tuso = tuso / uc;
			mauso = mauso / uc;
			if (mauso < 0) {
				tuso = -tuso;
				mauso = -mauso;
			}
			if (tuso % mauso == 0)
			{
				cout << tuso / mauso;
				return 0;
			}
			else
				cout << tuso << "/" << mauso;
			return 0;
		}

		else if (dau == "/")
		{

			tuso = a.ts * b.ms;
			mauso = a.ms * b.ts;
			uc = ucln(tuso, mauso);
			tuso = tuso / uc;
			mauso = mauso / uc;
			if (mauso < 0) {
				tuso = -tuso;
				mauso = -mauso;
			}
			if (tuso % mauso == 0)
			{
				cout << tuso / mauso;
				return 0;
			}
			else
				cout << tuso << "/" << mauso;
			return 0;
		}
	}
}