#pragma once
#include "nhanvien.h"

class sanxuat :
	virtual public Nhanvien
{
private:
	long luongcoban, sosp;
public:
	sanxuat()
	{
		this->luongcoban = 0;
		this->sosp = 0;
	}
	~sanxuat()
	{

	}

	virtual void nhap()
	{
		Nhanvien::nhap();
		cout << "Nhap vao luong co ban: "; cin >> luongcoban;
		cout << "Nhap vao so san pham: "; cin >> sosp;
		cout << endl;
	}

	virtual void xuat()
	{
		Nhanvien::xuat();
		cout << "Luong co ban: " << luongcoban << endl << "So san pham : " << sosp << endl;
	}
	
	virtual long luong()
	{
		this->Salary = luongcoban + sosp * 5000;
		return this->Salary;
	}

};