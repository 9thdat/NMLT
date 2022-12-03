#pragma once

#include <iostream>

using namespace std;

class DIEM {
private:
	float HoanhDo;
	float TungDo;

public:

	void setX(double x)
	{
		this->HoanhDo = x;
	}

	int getX()
	{
		return this->HoanhDo;
	}

	void setY(double y)
	{
		this->TungDo = y;
	}

	int getY()
	{
		return this->TungDo;
	}

	DIEM(float hd = 0, float td = 0)
	{
		HoanhDo = hd;
		TungDo = td;
	};

	void Input()
	{
		cout << "\n\tNhap hoanh do: ";
		cin >> HoanhDo;
		cout << "\tNhap tung do: ";
		cin >> TungDo;
	}

	void TinhTien(DIEM&)
	{
		DIEM VectoTinhTien;
		cout << "\nNhap vecto dung de tinh tien:\n";
		VectoTinhTien.Input();

		HoanhDo = HoanhDo + VectoTinhTien.HoanhDo;
		TungDo = TungDo + VectoTinhTien.TungDo;
	}

	void Output()
	{
		cout << "Vecto hien tai: ";
		cout << "\n\tHoanh do: ";
		cout << this->HoanhDo;
		cout << "\n\tTung do: ";
		cout << this->TungDo;
	}
};