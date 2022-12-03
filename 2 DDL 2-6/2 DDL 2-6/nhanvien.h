#pragma once
#include <iostream>
#include<stdio.h>

using namespace std;
class Nhanvien
{
protected:
	char hoten[100];
	int ngay, thang, nam;
	long Salary;
public:
	Nhanvien()
	{
		this->hoten[100] = NULL;
		this->ngay = 0;
		this->thang = 0;
		this->nam = 0;
		this->Salary = 0;
	};
	
	~Nhanvien()
	{

	};

	virtual void nhap()
	{
		cout << "\nNhap ho ten nhan vien: "; fflush(stdin);
		cin.ignore();
		cin.getline(hoten, 50);
		cout << "Nhap lan luot ngay, thang va nam sinh cua nhan vien: ";
		cin >> ngay; cin.ignore(); cin >> thang; cin.ignore(); cin >> nam;
	}

	virtual void xuat()
	{
		cout << "Ho ten: " << hoten << endl << "Ngay sinh: " << ngay << "/" << thang << "/" << nam << endl;
	}

	virtual long luong()
	{
		return this->Salary;
	}
};