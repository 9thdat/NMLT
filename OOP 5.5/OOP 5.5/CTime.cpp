#include "CTime.h"

int main()
{
	CTime TG;
	CTime AddTG;
	CTime KQ;

	cout << "Nhap thoi gian:\n";
	cin >> TG;

	cout << "Xuat thoi gian: \n";
	cout << TG;

	cout << "Nhap thoi gian can them vao: ";
	cin >> AddTG;

	cout << "Thoi gian sau khi them la: ";
	KQ = TG + AddTG;
	cout << KQ;

	cout << "Nhap thoi gian can tru di: ";
	KQ = TG - AddTG;
	cout << KQ;

	cout << "Thoi gian sau khi tang them 1 giay la: ";
	KQ = TG;
	KQ++;
	cout << KQ;

	cout << "Thoi gian sau khi giam di 1 giay la: ";
	KQ = TG;
	KQ--;
	cout << KQ;

	return 0;
}