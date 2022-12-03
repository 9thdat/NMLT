#pragma once
#include "NV.h"

class NVVP : public NV
{
protected:
	int SNLV;
public:
	void Input()
	{
		cout << "Nhap vao so ngay lam viec: ";
		cin >> this->SNLV;
		this->Salary = SNLV * 100000;
	}
};