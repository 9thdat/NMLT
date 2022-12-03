#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double toan, ly, hoa, diem;
	cin >> toan >> ly >> hoa;
	diem = (toan + ly + hoa) / 3;
	cout <<setprecision(3)<< "DTB = " << diem << endl << endl << "Loai: ";
	if (diem >= 9 && diem <= 10)
		cout << "XUAT SAC";
	if (diem >= 8 && diem < 9)
		cout << "GIOI";
	if (diem >= 7 && diem < 8)
		cout << "KHA";
	if (diem >= 6 && diem < 7)
		cout << "TB KHA";
	if (diem >= 5 && diem < 6)
		cout << "TB";
	if (diem >= 4 && diem < 5)
		cout << "YEU";
	if (diem < 4)
		cout<<"KEM";
	return 0;
}


