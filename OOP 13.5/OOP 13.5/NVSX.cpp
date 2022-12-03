#include "NVSX.h"

void NVSX::Input()
{
	Nhanvien::Input();
	cout << "Nhap vao so luong san pham lam ra: ";
	cin >> this->So_sp;
}

int NVSX::Tinh_Luong()
{
	return this->Luong = this->Luongcb + this->So_sp * 2000;
}

void NVSX::Output()
{
	cout << "Nhan vien san xuat: ";
	Nhanvien::Output();
	cout << "\t" << Tinh_Luong();
}