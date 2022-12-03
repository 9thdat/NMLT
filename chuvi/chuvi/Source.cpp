#include <iostream>
using namespace std;
int main() {
	cout << "Chao mung ban den voi chuong trinh" << endl;
	double chuvi, dientich, r;
	const double pi = 3.14;
	cout << "Moi ban nhap ban kinh=";
	cin >> r;
	chuvi = 2 * pi * r; dientich = pi * r * r;
	cout << "Dien tich la:" << dientich << endl;
	cout << " Chu vi la:" << chuvi;
	return 0;
}