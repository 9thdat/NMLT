#pragma once
#include "NV.h"
#include "NVSX.h"
#include "NVVP.h"

using namespace std;

class CT
{
protected:
	NV* NhanVien = new NV;

public:
	int TSNV;

	CT()
	{

	}

	virtual void Input()
	{
		
		int luachon = NULL;
		
		for (int i = 0; i < TSNV; i++)
		{
			do
			{
				cout << "\n=====QUAN LY NHAN VIEN=====";
				cout << "\n1.Nhan vien van phong";
				cout << "\n2.Nhan vien san xuat";
				cout << "\n0.Thoat";
				cout << "\nMoi ban nhap vao lua chon: ";
				cin >> luachon;
				if (luachon != 1 && luachon != 2 && luachon != 0)
					cout << "Lua chon khong hop le, xin moi nhap lai...";
			} while (luachon != 1 && luachon != 2 && luachon != 0);
			if (luachon == 0)
			{
				cout << "Ket thuc chuong trinh...";
				break;
			}
			else if (luachon == 1)
				NhanVien[i].NVSX::Input(luachon, i);
		}
	}

	void TinhLuong()
	{
		for (int i = 0; i < TSNV; i++)
		{
			NhanVien[i].NV::TinhLuong();
		}
	}

	void Output()
	{
		cout << "=====XUAT THONG TIN NHAN VIEN=====\n";
		for (int i = 0; i < TSNV; i++)
		{
			NhanVien[i].NV::Output();
		}
	}

	void TongLuong()
	{
		float Sum = 0;
		for (int i = 0; i < TSNV; i++)
		{
			Sum += NhanVien[i].NV::TinhLuong();
		}
	}

	int MaxSalary()
	{
		float Max = 0;
		float Temp = 0;
		int id = 0;
		for (int i = 0; i < TSNV; i++)
		{
			Temp = NhanVien[i].NV::TinhLuong();
			if (Temp > Max)
			{
				Max = Temp;
				id = i;
			}
		}
		return id;
	}

	int MinSalary()
	{
		float Min = 0;
		float Temp = 0;
		int id = 0;
		for (int i = 0; i < TSNV; i++)
		{
			Temp = NhanVien[i].NV::TinhLuong();
			if (Temp < Min)
			{
				Min = Temp;
				id = i;
			}
		}
		return id;
	}

	void Sort()
	{
		for (int i = 0; i < TSNV; i++)
		{

		}
	}
};