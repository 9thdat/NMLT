#include "Congty.h"

int main()
{
	Congty CT1;
	string Name;
	cout << "===========================CHUONG TRINH TINH TIEN LUONG=========================\n";
	CT1.Input();

	cout << "\n===========================DANH SACH NHAN VIEN=========================\n";
	cout << "STT\tVi Tri\t\tHo ten\t\tNgay sinh\tTien luong";
	CT1.Output();
	cout << "\n\t\t\tTONG TIEN LUONG CUA TAT CA NHAN VIEN: " << CT1.Tong_luong();

	cout << "\nNhap vao ho ten nhan vien can tim: ";
	cin.ignore();
	getline(cin, Name);
	CT1.Find_Name(Name);
}