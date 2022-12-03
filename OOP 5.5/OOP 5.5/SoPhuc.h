#pragma once


#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;


class SoPhuc
{
	private:
		int iPT;
		int iPA;
	public:
		SoPhuc(int iPT = 0, int iPA = 0)
		{
			this->iPT = iPT;
			this->iPA = iPA;
		}

		friend istream& operator>>(istream& is, SoPhuc &Temp)
		{
			cout << "Nhap phan thuc: ";
			is >> Temp.iPT;
			cout << "Nhap phan ao: ";
			is >> Temp.iPA;
			return is;
		}

		friend ostream& operator<<(ostream& os, SoPhuc &Temp)
		{
			if (Temp.iPA > 0)
				os << Temp.iPT << "+" << Temp.iPA << "i";
			else if (Temp.iPA == 0)
				os << Temp.iPT;
			else
				os << Temp.iPT << Temp.iPA << "i";
			return os;
		}

		SoPhuc operator+(SoPhuc temp)
		{
			SoPhuc KQ;
			KQ.iPT = this->iPT + temp.iPT;
			KQ.iPA = this->iPA + temp.iPA;
			return KQ;
		}

		SoPhuc operator-(SoPhuc temp)
		{
			SoPhuc KQ;
			KQ.iPT = this->iPT - temp.iPT;
			KQ.iPA = this->iPA - temp.iPA;
			return KQ;
		}

		SoPhuc operator*(SoPhuc temp)
		{
			SoPhuc KQ;
			KQ.iPT = this->iPT * temp.iPT - this->iPA * temp.iPA;
			KQ.iPA = this->iPT * temp.iPA + this->iPA * temp.iPT;
			return KQ;
		}

		SoPhuc operator/(SoPhuc temp)
		{
			SoPhuc KQ;
			KQ.iPT = this->iPT * temp.iPT + this->iPA * temp.iPA;
			KQ.iPA = pow(temp.iPT, 2) + pow(temp.iPA, 2);
			return KQ;
		}

		int operator==(SoPhuc temp)
		{
			if (this->iPT != temp.iPT) return 0;
			if (this->iPA != temp.iPA) return 0;
			return 1;
		}

		int operator!=(SoPhuc temp)
		{
			if (this->iPT == temp.iPT) return 0;
			if (this->iPA == temp.iPA) return 0;
			return 1;
		}


};


