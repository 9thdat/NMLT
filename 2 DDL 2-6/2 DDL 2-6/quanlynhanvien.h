#pragma once
#include "nhanvien.h"
#include "sanxuat.h"
#include "vanphong.h"
#include<vector>

using namespace std;
class quanlynhanvien
{
private:
	Nhanvien** x;
	int n;

protected:
	long SumSalary = 0;

public:
	quanlynhanvien()
	{
		n = 0;
		x = new Nhanvien *();
	}

	~quanlynhanvien()
	{
		delete[]x;
	}

	void nhap()
	{
		int k;
		for (int i = 0;; i++)
		{
			do {
				cout << "===== MENU =====";
				cout << "\n1.Nhap vao nhan vien van phong";
				cout << "\n2.Nhap vao nhan vien san xuat";
				cout << "\n3.Xuat thong tin nhan vien";
				cout << "\n4.Tim nhan vien co luong cao nhat";
				cout << "\n5.Tim nhan vien co luong thap nhat";
				cout << "\n6.Sap xep nhan vien theo luong giam dan";
				cout << "\n0.Thoat chuong trinh";
				cout << "\nMoi ban nhap vao lua chon: ";
				cin >> k;
				if (k != 1 && k != 2 && k != 3 && k != 4 && k != 5 && k != 6 && k != 0) cout << "\nLua chon khong hop le, xin moi ban nhap lai\n\n";
			} while (k != 1 && k != 2 && k != 3 && k != 4 && k != 5 && k != 6 && k != 0);

			if (k == 0)
			{
				cout << "Ket thuc chuong trinh...\n";
				return;
			}

			else if (k == 1)
			{
				n++;
				x[i] = new vanphong;
				x[i]->nhap();
			}

			else if (k == 2)
			{
				n++;
				x[i] = new sanxuat;
				x[i]->nhap();
			}

			else if (k == 3)
			{
				xuat();
			}
			
			else if (k == 4)
			{
				MaxSalary();
			}

			else if (k == 5)
			{
				MinSalary();
			}

			else if (k == 6)
			{
				Sort();
			}
		}
	}

	void xuat()
	{
		cout << "Tong so nhan vien: " << n << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << endl;
			x[i]->xuat();
			cout << "Luong: " << x[i]->luong();
			cout << endl;
		}
		cout << "=== TONG LUONG === : ";
		cout << TongLuong();
		cout << endl;
		cout << endl;
	}

	virtual long TongLuong()
	{
		for (int i = 0; i < n; i++)
		{
			SumSalary += x[i]->luong();
		}
		return SumSalary;
	}

	void MinSalary()
	{
		long Min = x[0]->luong();
		for (int i = 0; i < n; i++)
		{
			if (x[i]->luong() < Min)
			{
				Min = x[i]->luong();
			}

		}

		cout << "Nhan vien co luong thap nhat la:\n";

		for (int i = 0; i < n; i++)
		{
			if (x[i]->luong() == Min)
			{
				x[i]->xuat();
				cout << "Luong: " << x[i]->luong();
				cout << endl;
			}

		}
	}

	void MaxSalary()
	{
		long Max = 0;
		for (int i = 0; i < n; i++)
		{
			if (x[i]->luong() > Max)
			{
				Max = x[i]->luong();
			}

		}

		cout << "Nhan vien co luong cao nhat la:\n";

		for (int i = 0; i < n; i++)
		{
			if (x[i]->luong() == Max)
			{
				x[i]->xuat();
				cout << "Luong: " << x[i]->luong();
				cout << endl;
			}
		}
	}
	
	void Sort()
	{
		for (int i = 0; i < n; i++)
			for (int j = i; j < n - 1; j++)
		{
				if (x[j]->luong() < x[j + 1]->luong())
				{
					swap(x[j], x[j + 1]);
				}
		}
		xuat();
	}
};