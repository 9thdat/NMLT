#include "TamGiac.h"

int main()
{
	TamGiac TamGiac1;
	DiemTamGiac TT;
	double DQ;
	double PT;
	double TN;
	int x = 0;

	do
	{
		x = TamGiac1.Input();
		if (x == 0) 
			cout << "Tam giac ban nhap vao khong hop le, xin moi nhap lai:\n";
	} while (x == 0);

	TamGiac1.Output();

	TamGiac1.TinhTien(TT);
	TamGiac1.Output();

	TamGiac1.Quay(DQ);
	TamGiac1.Output();

	TamGiac1.PhongTo(PT);
	TamGiac1.Output();

	TamGiac1.ThuNho(TN);
	TamGiac1.Output();

	return 0;
}