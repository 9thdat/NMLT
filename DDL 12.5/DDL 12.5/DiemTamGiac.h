#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class DiemTamGiac
{
private:
	double x;
	double y;
public:
	void setX(double x)
	{
		this->x = x;
	}

	int getX()
	{
		return this->x;
	}

	void setY(double y)
	{
		this->y = y;
	}

	int getY()
	{
		return this->y;
	}


	float DoDai(DiemTamGiac A, DiemTamGiac B)
	{
		int a = 0;
		if (sqrt(pow((A.getX() - B.getX()), 2) - (pow((A.getY() - B.getY()), 2))) < 0)
			a = -(sqrt(pow((A.getX() - B.getX()), 2) - (pow((A.getY() - B.getY()), 2))));
		else
			a = (sqrt(pow((A.getX() - B.getX()), 2) - (pow((A.getY() - B.getY()), 2))));

		return a;
	}

	void Input()
	{
		cout << "\nNhap hoanh do: ";
		cin >> x;
		setX(x);
		cout << "Nhap tung do: ";
		cin >> y;
		setY(y);
	}

	void Output()
	{
		cout << "\nHoanh do: " << getX();
		cout << "\nTung do: " << getY();
	}

	void TinhTien(DiemTamGiac VTTT)
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