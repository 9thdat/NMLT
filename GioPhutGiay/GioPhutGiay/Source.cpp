#include <iostream>
using namespace std;
int main()
{
	int gio, phut, giay, giotam, sogiay;
	cout << "Moi ban nhap so giay:"<<endl;
	cin >> sogiay;
	gio = (sogiay / 3600) % 24;
	phut = (sogiay % 3600) / 60;
	giay = (sogiay % 3600) % 60;
	giotam= gio > 12 ? gio - 12 : gio;
	cout << "Bay gio la " << giotam <<":"<< phut <<":" << giay << (gio > 12 ? "PM" : "AM");
	return 0;

}