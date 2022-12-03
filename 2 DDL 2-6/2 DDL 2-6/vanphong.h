#pragma once
#include "nhanvien.h"

class vanphong :
	virtual public Nhanvien
{
private:
	int songay;
public:
	vanphong()
	{
		this->songay = 0;
	}

	~vanphong()
	{

	}

	virtual void nhap()
	{
		Nhanvien::nhap();
		cout << "So ngay lam viec: "; cin >> songay;
		cout << endl;
	}

	virtual void xuat()
	{
		Nhanvien::xuat();
		cout << "So ngay lam viec: " << songay << endl;
	}

	virtual long luong()
	{
		this->Salary = songay * 100000;
		return this->Salary;
	}
};