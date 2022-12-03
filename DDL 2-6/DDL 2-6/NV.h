#pragma once
#include <iostream>
#include <string>

class NV : public CT 
{
protected:
	string Name;
	string Birth;
	float Salary;
	int luachon;
public:
	NV()
	{
		Name = "";
		Birth = "";
		Salary = 0;
	}

	NV(string ten, string sinhnhat, float luong)
	{
		this->Name = ten;
		this->Birth = sinhnhat;
		this->Salary = luong;
	}

	~NV()
	{

	}

	void setName(string ten)
	{
		this->Name = ten;
	}

	void setBirth(string ngaysinh)
	{
		this->Birth = ngaysinh;
	}

	void setSalary(float luong)
	{
		this->Salary = luong;
	}

	string getName()
	{
		return this->Name;
	}

	string getBirth()
	{
		return this->Birth;
	}

	float getSalary()
	{
		return this->Salary;
	}

	virtual void Input(int luachon, int i)
	{
		cout << "Nhap ho ten: ";
		getline(cin, this->Name);
		cout << "Nhap ngay sinh: (dd/mm/yyyy) ";
		getline(cin, this->Birth);

		if (luachon == 1)
		{
			this->luachon = 1;
			NhanVien[i].NVVP::Input();
		}
		else if (luachon == 2)
		{
			this->luachon = 2;
			NhanVien[i].NVSX::Input();
		}
	}

	float TinhLuong()
	{
		return this->Salary;
	}

	virtual void Output()
	{
		cout << "Ho Ten\tNgay Sinh\tLuong";
		cout << this->Name << "\t" << this->Birth << "\t" << this->Salary;
		cout << endl;
	}

};