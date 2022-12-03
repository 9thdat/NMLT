#pragma once
#include <cstdlib>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class DaGiac
{
private:
	float x;
	float y;

public:
	void Input()
	{
		cout << "\n\tNhap hoanh do: ";
		cin >> this->x;
		cout << "\tNhap tung do: ";
		cin >> this->y;
	}

	void Output()
	{
		cout << "\n\tHoanh do: " << this->x;
		cout << "\n\tTung do: " << this->y;
	}

	void TinhTien(DaGiac VTTT)
	{
		this->x = this->x + VTTT.x;
		this->y = this->y + VTTT.y;
	}

	void Quay(double Do)
	{
		this->x = this->x * cos(Do) - y * sin(Do);
		this->y = this->x * sin(Do) + y * cos(Do);
	}

	void PhongTo(double PT)
	{
		this->x = this->x * PT;
		this->y = this->y * PT;
	}

	void ThuNho(double TN)
	{
		this->x = this->x / TN;
		this->y = this->y / TN;
	}
};