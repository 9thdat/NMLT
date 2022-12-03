#include "SoPhuc.h"

int main()
{
	SoPhuc SP1;
	SoPhuc SP2;
	
	cout << "Nhap so phuc thu nhat:\n";
	SP1.Input();
	SP1.Output();

	cout << "\nNhap so phuc thu hai:\n";
	cin >> SP2;
	cout << SP2;

	cout << "\nCong hai so phuc: ";
	SoPhuc SPT = SP1 + SP2;
	cout << SPT;

	cout << "\nTru hai so phuc: ";
	SPT = SP1 - SP2;
	cout << SPT;

	cout << "\nNhan hai so phuc: ";
	SPT = SP1 * SP2;
	cout << SPT;

	cout << "\nChia hai so phuc: ";
	SPT = SP1 / SP2;
	cout << SPT;

	cout << "\nSo sanh giong nhau: ";
	if (SP1 == SP2)
		cout << "Hai so phuc giong nhau. ";
	else
		cout << "Hai so phuc khac nhau. ";

	cout << "\nSo sanh khac nhau: ";
	if (SP1 != SP2)
		cout << "Hai so phuc khac nhau. ";
	else
		cout << "Hai so phuc giong nhau. ";
}