#pragma once
#include "Nhanvien.h"

using namespace std;
class NVSX : public Nhanvien
{
private:
	int So_sp;
public:
	NVSX() :Nhanvien()
	{
		this->So_sp = 0;
	}
	int Tinh_Luong();
	int Get_Luong()
	{
		return this->Luong;
	}
	string Get_Ten()
	{
		return this->Hoten;
	}
	void Input();
	void Output();
};

