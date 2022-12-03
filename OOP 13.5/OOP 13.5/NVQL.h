#pragma once
#include "Nhanvien.h"

using namespace std;

class NVQL :public Nhanvien
{
private:
	int Heso;
	int Thuong;
public:
	NVQL() : Heso(0), Thuong(0) {};
	int Get_Luong()
	{
		return this->Luong;
	}
	string Get_Ten()
	{
		return this->Hoten;
	}
	int Tinh_Luong();
	void Input();
	void Output();
};

