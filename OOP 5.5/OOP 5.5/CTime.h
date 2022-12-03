#pragma once

#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

class CTime
{
	private:
		int Hr;
		int Min;
		int Sec;

	public:
		CTime(int Hr = 0, int Min = 0, int Sec = 0)
		{
			this->Hr = Hr;
			this->Min = Min;
			this->Sec = Sec;
		}

		friend istream& operator>>(istream& is, CTime& Temp)
		{
			cout << "Nhap gio: ";
			is >> Temp.Hr;
			cout << "Nhap phut: ";
			is >> Temp.Min;
			cout << "Nhap giay: ";
			is >> Temp.Sec;
			return is;
		}

		friend ostream& operator<<(ostream& os, CTime& Temp)
		{
			os << Temp.Hr << " : " << Temp.Min << " : " << Temp.Sec;
			return os;
		}

		CTime operator+(CTime temp)
		{
			CTime KQ;
			KQ.Hr = this->Hr + temp.Hr;
			KQ.Min = this->Min + temp.Min;
			KQ.Sec = this->Sec + temp.Sec;
			
			if (KQ.Sec >= 60)
			{
				KQ.Min++;
				KQ.Sec -= 60;
			}

			if (KQ.Min >= 60)
			{
				KQ.Hr++;
				KQ.Min -= 60;
			}
			return KQ;
		}

		CTime operator-(CTime temp)
		{
			CTime KQ;
			KQ.Hr = this->Hr - temp.Hr;
			KQ.Min = this->Min - temp.Min;
			KQ.Sec = this->Sec - temp.Sec;

			if (KQ.Sec < 0)
			{
				KQ.Min--;
				KQ.Sec += 60;
			
			}

			if (KQ.Min < 0)
			{
				KQ.Hr--;
				KQ.Min += 60;

			}

			while (KQ.Hr < 0)
			{
				KQ.Min -= 60;
				KQ.Hr++;

				if (KQ.Sec < 0)
				{
					KQ.Min--;
					KQ.Sec += 60;

				}

				if (KQ.Min < 0)
				{
					KQ.Hr--;
					KQ.Min += 60;

				}

			}
			return KQ;
		}

		CTime operator++(int i)
		{
			this->Sec++;

			if (this->Sec >= 60)
			{
				this->Min++;
				this->Sec -= 60;
			}

			if (this->Min >= 60)
			{
				this->Hr++;
				this->Min -= 60;
			}
			return *this;
		}

		CTime operator++()
		{
			if (this->Sec >= 60)
			{
				this->Min++;
				this->Sec -= 60;
			}

			if (this->Min >= 60)
			{
				this->Hr++;
				this->Min -= 60;
			}
			return *this;
		}

		friend CTime operator--(CTime temp)
		{
			CTime KQ = temp;
			KQ.Sec--;

			if (KQ.Sec < 0)
			{
				KQ.Min--;
				KQ.Sec += 60;

			}

			if (KQ.Min < 0)
			{
				KQ.Hr--;
				KQ.Min += 60;

			}

			while (KQ.Hr < 0)
			{
				KQ.Min -= 60;
				KQ.Hr++;

				if (KQ.Sec < 0)
				{
					KQ.Min--;
					KQ.Sec += 60;

				}

				if (KQ.Min < 0)
				{
					KQ.Hr--;
					KQ.Min += 60;

				}

			}
			return KQ;
		}
};