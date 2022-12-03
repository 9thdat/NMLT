#pragma once

#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

class PhanSo
{
	private:
		float x;
		float y;

	public:
		PhanSo(float TS = 0, float MS = 0)
		{
			this->x = TS;
			this->y = MS;
		}

		void SetX(float x)
		{
			this->x = x;
		}

		void SetY(float y)
		{
			this->y = y;
		}

		float GetX()
		{
			return this->x;
		}

		float GetY()
		{
			return this->y;
		}

		friend istream& operator>>(istream& is, PhanSo& PS)
		{
			float a = 0;
			float b = 0;
			cout << "Nhap tu so: ";
			is >> a;
			cout << "Nhap mau so: ";
			is >> b;
			PS.SetX(a);
			PS.SetY(b);
			return is;
		}

		friend ostream& operator<<(ostream& os, PhanSo& PS)
		{
			float a = PS.GetX();
			float b = PS.GetY();

			cout << "Xuat phan so: ";
			if (b > 0)
				os << a << "+" << b << "i";
			else if (b < 0)
				os << a << b << "i";
			else
				os << a;
			return os;
		}

		void Input()
		{
			float a = 0;
			float b = 0;
			cout << "Nhap tu so: ";
			cin >> a;
			cout << "Nhap mau so: ";
			cin >> b;
			this->SetX(a);
			this->SetY(b);
		}

		void Output()
		{
			float a = this->GetX();
			float b = this->GetY();

			if (b < 0)
			{
				a = -a;
				b = -b;
			}

			cout << "Xuat phan so: ";
			if ((int)a % (int)b == 0)
				cout << a / b;
			else
				cout << a << "/" << b;
		}
};