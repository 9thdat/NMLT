#pragma once
#include<iostream>
#include<string>
using namespace std;
class Nhanvien
{
protected:
	string Hoten;
	string Ngaysinh;
	int Luongcb;
	int Luong;
public:
	Nhanvien() :Hoten(""), Ngaysinh(""), Luong(0), Luongcb(0) {};
	~Nhanvien() {};
	virtual int Get_Luong()
	{
		return this->Luong;
	}
	virtual string Get_Ten()
	{
		return this->Hoten;
	}
	virtual int Tinh_Luong() = 0;
	virtual void Input();
	virtual void Output();
};

