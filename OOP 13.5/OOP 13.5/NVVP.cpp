#include "NVVP.h"

void NVVP::Input()
{
	Nhanvien::Input();
	cout << "Nhap vao so ngay lam viec: ";
	cin >> this->Songaylamviec;
	cout << "Nhap vao muc tro cap: ";
	cin >> this->Trocap;
}

int NVVP::Tinh_Luong()
{
	return this->Luong = this->Luongcb + this->Songaylamviec * 200000 + this->Trocap;
}

void NVVP::Output()
{
	cout << "Nhan vien van phong: ";
	Nhanvien::Output();
	cout << "\t" << Tinh_Luong();
}