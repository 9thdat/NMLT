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
void input(PS a[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].ts >> a[i].ms;
	}
}
void output(PS a[], int& n)
{
	int tuso, mauso;
	for (int i = n-1; i >=0; i--)
	{
		if (a[i].ms == 0)
			cout << "Khong thoa yeu cau bai toan";
		else
		{
			tuso = a[i].ts / ucln(a[i].ts, a[i].ms);
			mauso = a[i].ms / ucln(a[i].ts, a[i].ms);
			if (mauso < 0) {
				tuso = -tuso;
				mauso = -mauso;
			}
			if (tuso % mauso == 0)
				cout << tuso / mauso;
			else
				cout << tuso << "/" << mauso;
		}
		cout << endl;
	}
}
int main()
{
	PS a[10000];
	int n;
	input(a, n);
	output(a, n);
}