#include "CTime.h"

int main2()
{
	CTimeSpan Time1;
	CTimeSpan Time2;
	CTimeSpan Temp;
	int x;
	
	cout << "Nhap vao thoi gian thu nhat: ";
	cin >> Time1;
	cout << "Xuat thoi gian thu nhat: ";
	cout << Time1;

	cout << "Nhap vao thoi gian thu hai: ";
	Time2.Input();
	cout << "Xuat thoi gian thu hai: ";
	Time2.Output();

	cout << "Nhap vao so nguyen giay can them: ";
	cin >> x;
	Time1 = Time1 + x;
	cout << "Thoi gian sau khi them vao " << x << " la: ";
	cout << Time1;

	cout << "Nhap vao so nguyen giay can bot: ";
	cin >> x;
	Time1 = Time1 - x;
	cout << "Thoi gian sau khi bot di " << x << " la: ";
	cout << Time1;

	cout << "Ket qua sau khi cong hai thoi gian voi nhau: ";
	Temp = Time1 + Time2;
	cout << Temp;

	cout << "Ket qua sau khi tru hai thoi gian voi nhau: ";
	Temp = Time1 - Time2;
	cout << Temp;

	cout << "Ket qua sau khi cong vao thoi gian thu nhat 1 giay: ";
	Temp = Time1++;
	cout << Temp;

	cout << "Ket qua sau khi tru ra thoi gian thu nhat 1 giay: ";
	Temp = Time1--;
	cout << Temp;
	return 0;
}