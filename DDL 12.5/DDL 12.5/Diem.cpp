#include "Diem.h"

	int main()
	{
		DIEM Diem1;
		DIEM TT;

		cout << "Moi ban nhap thong tin cua diem: ";

		Diem1.Input();
		Diem1.Output();

		Diem1.TinhTien(TT);
		Diem1.Output();
	}