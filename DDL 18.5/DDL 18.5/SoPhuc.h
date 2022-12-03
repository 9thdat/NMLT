#pragma once
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

class SoPhuc
{
	private:
		float x;
		float y;
	public:
		SoPhuc(float PT = 0, float PA = 0)
		{
			this->x = PT;
			this->y = PA;
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

		friend istream &operator>>(istream& is, SoPhuc& SP)
		{
			float a = 0;
			float b = 0;
			cout << "Nhap phan thuc: ";
			is >> a;
			cout << "Nhap phan ao: ";
			is >> b;
			SP.SetX(a);
			SP.SetY(b);
			return is;
		}

		friend ostream& operator<<(ostream& os, SoPhuc& SP)
		{
			float a = SP.GetX();
			float b = SP.GetY();

			cout << "Xuat so phuc: ";
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
			cout << "Nhap phan thuc: ";
			cin >> a;
			cout << "Nhap phan ao: ";
			cin >> b;
			this->SetX(a);
			this->SetY(b);
		}

		void Output()
		{
			float a = this->GetX();
			float b = this->GetY();

			cout << "Xuat so phuc: ";
			if (b > 0)
				cout << a << "+" << b << "i";
			else if (b < 0)
				cout << a << b << "i";
			else
				cout << a;
		}

		SoPhuc operator+(SoPhuc SP)
		{
			SoPhuc KQ;
			KQ.SetX(this->GetX() + SP.GetX());
			KQ.SetY(this->GetY() + SP.GetY());
			return KQ;
		}

		SoPhuc operator-(SoPhuc SP)
		{
			SoPhuc KQ;
			KQ.SetX(this->GetX() - SP.GetX());
			KQ.SetY(this->GetY() - SP.GetY());
			return KQ;
		}

		SoPhuc operator*(SoPhuc SP)
		{
			SoPhuc KQ;
			KQ.SetX(this->GetX() * SP.GetX() - this->GetY() * SP.GetY());
			KQ.SetY(this->GetX() * SP.GetY() + this->GetY() * SP.GetX());
			return KQ;
		}

		SoPhuc operator/(SoPhuc SP)
		{
			SoPhuc KQ;
			KQ.SetX((this->GetX() * SP.GetX() + this->GetY() * SP.GetY())/(pow(SP.GetX(),2) + pow(SP.GetY(),2)));
			KQ.SetY((this->GetY() * SP.GetX() - this->GetX() * SP.GetY()) / (pow(SP.GetX(), 2) + pow(SP.GetY(), 2)));
			return KQ;
		}

		int operator==(SoPhuc SP)
		{
			if (this->GetX() != SP.GetX()) return 0;
			if (this->GetY() != SP.GetY()) return 0;
			return 1;
		}

		int operator!=(SoPhuc SP)
		{
			if (this->GetX() == SP.GetX() && this->GetY() == SP.GetY()) return 0;
			return 1;
		}
};