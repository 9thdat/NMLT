#pragma once
#include "NV.h"

class NVSX : public NV
{
protected:
	float LuongCB;
	int SoSP;
public:
	void Input()
	{
		cout << "Nhap vao luong can ban: ";
		cin >> this->LuongCB;
		cout << "\nNhap vao so san pham: ";
		cin >> this->SoSP;
		this->Salary = this->LuongCB + SoSP * 5000;
	}

};