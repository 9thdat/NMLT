#include "CDate.h"

int main2()
{
	CDate Time1;
	CDate Time2;

	cout << "Nhap thoi gian thu nhat: ";
	cin >> Time1;

	cout << "Nhap thoi gian thu hai: ";
	Time2.Input();

	cout << "Xuat thoi gian thu nhat: ";
	cout << Time1;

	cout << "Xuat thoi gian thu hai: ";
	Time2.Output();

}