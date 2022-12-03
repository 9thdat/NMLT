#include <iostream>
using namespace std;
int tinhgiaithua(int n);
void h10toh2(int n);
int kq,a;
int main()
{
	cout << "Nhap so can tinh giai thua:";
	cin >> a;
	tinhgiaithua(a);
	h10toh2(a);
	cout << "Ket qua la: " << kq;
}
int tinhgiaithua(int n)
{
	if (n <= 1) return 1;
	return kq = n * tinhgiaithua(n - 1);
}
void h10toh2(int n)
{
	if (n > 0)
	{
		int t = n % 2;
		h10toh2(n / 2);
		cout << t << " ";
	}
}