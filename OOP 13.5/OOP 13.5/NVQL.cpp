#include "NVQL.h"

void NVQL::Input()
{
	Nhanvien::Input();
	cout << "Nhap vao he so luong: ";
	cin >> this->Heso;
	cout << "Nhap vao so tien thuong: ";
	cin >> this->Thuong;
}

int NVQL::Tinh_Luong()
{
	return this->Luong = this->Luongcb * this->Heso + this->Thuong;
}

void NVQL::Output()
{
	cout << "Nhan vien quan li: ";
	Nhanvien::Output();
	cout << "\t" << Tinh_Luong();
}
