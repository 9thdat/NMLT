#pragma once

#include"Nhanvien.h"

using namespace std;
class NVVP : public Nhanvien
{
private:
	int Songaylamviec;
	int Trocap;
public:
	NVVP() :Nhanvien()
	{
		this->Songaylamviec = 0;
		this->Trocap = 0;
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
