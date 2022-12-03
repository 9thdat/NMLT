#include "Congty.h"

int luachon()
{
	cout << "\n1.Them nhan vien van phong";
	cout << "\n2.Them nhan vien san xuat";
	cout << "\n3.Them nhan vien quan li";
	cout << "\n0.Thoat";
	cout << "\nMoi ban nhap vao lua chon: ";

	int option;
	cin >> option;

	return option;
}

void Congty::Input()
{
	cout << "Moi ban nhap vao so luong nhan vien: ";
	cin >> this->sl;
	this->dsnv = new Nhanvien * [this->sl];
	for (int i = 0; i < this->sl; i++)
	{
		cout << "=====Nhan vien thu " << i + 1 << "=====";
		int option;
		bool flag = true;
		while (flag == true)
		{
			switch (option = luachon())
			{
			case 1:
			{
				cout << "\n=====Nhan vien van phong=====";
				this->dsnv[i] = new NVVP;
				this->dsnv[i]->Input();
				flag = false;
				break;
			}
			case 2:
			{
				cout << "\n=====Nhan vien san xuat=====";
				this->dsnv[i] = new NVSX;
				this->dsnv[i]->Input();
				flag = false;
				break;
			}
			case 3:
			{
				cout << "\n=====Nhan vien quan ly=====";
				this->dsnv[i] = new NVQL;
				this->dsnv[i]->Input();
				flag = false;
				break;
			}
			case 0:
			{
				flag = false;
				break;
			}
			default:
			{
				cout << "\nLua chon khong ton tai, moi ban nhap lai.";
				break;
			}
			}
		}
	}
}

void Congty::Output()
{
	for (int i = 0; i < this->sl; i++)
	{
		cout << "\n" << i + 1 << ". ";
		this->dsnv[i]->Output();
	}
}

int Congty::Tong_luong()
{
	int sum = 0;
	for (int i = 0; i < this->sl; i++)
	{
		sum += this->dsnv[i]->Get_Luong();
	}
	return sum;
}

void Congty::Find_Name(const string Name)
{
	int t = 0;
	for (int i = 0; i < this->sl; i++)
	{
		if (this->dsnv[i]->Get_Ten() == Name)
		{
			cout << "\nDa tim thay nhan vien " << Name << " !" << endl;
			cout << "STT\tVi Tri\t\tHo ten\t\tNgay sinh\tTien luong\n";
			this->dsnv[i]->Output();
			t++;
		}
	}
	if (t == 0)
		cout << "\nKhong tim thay nhan vien!";
}