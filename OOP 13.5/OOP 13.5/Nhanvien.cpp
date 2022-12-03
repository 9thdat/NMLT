#include "Nhanvien.h"


void Nhanvien::Input()
{
	cout << "\nNhap vao ho ten nhan vien: ";
	cin.ignore();
	getline(cin, this->Hoten);
	cout << "Nhap vao ngay sinh nhan vien (dd/mm/yyyy): ";
	getline(cin, this->Ngaysinh);
	cout << "Nhap vao muc luong co ban: ";
	cin >> this->Luongcb;
}

void Nhanvien::Output()
{
	cout << '\t' << this->Hoten << '\t' << this->Ngaysinh;
}