#include "SoPhuc.h"

int main()
{
	SoPhuc SP1;
	SoPhuc SP2;
	SoPhuc SPC;

	cout << "Nhap so phuc thu nhat: \n";
	cin >> SP1;
	cout << "Nhap so phuc thu hai: \n";
	cin >> SP2;

	cout << "Ket qua cong hai so phuc: ";
	SPC = SP1 + SP2;
	cout << SPC;

	cout << "\nKet qua tru hai so phuc: ";
	SPC = SP1 - SP2;
	cout << SPC;

	cout << "\nKet qua nhan hai so phuc: ";
	SPC = SP1 * SP2;
	cout << SPC;

	cout << "\nKet qua chia hai so phuc: ";
	SPC = SP1 / SP2;
	cout << SPC;
	
	return 0;
}