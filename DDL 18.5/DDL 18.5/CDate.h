#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class CDate
{
private:
	int x;
	int y;
	int z;
public:
	CDate(int Day = 0, int Month = 0, int Year = 0)
	{
		this->x = Day;
		this->y = Month;
		this->z = Year;
	}

	void SetX(int x)
	{
		this->x = x;
	}

	void SetY(int y)
	{
		this->y = y;
	}

	void SetZ(int z)
	{
		this->z = z;
	}

	int GetX()
	{
		return this->x;
	}

	int GetY()
	{
		return this->y;
	}

	int GetZ()
	{
		return this->z;
	}

	int Check(int x, int y, int z)
	{
		if (x <= 0 || y <= 0 || z <= 0) return 0;
		if (z % 400 == 0 || (z % 4 == 0 && z % 100 != 0))
			if (y == 2 || x > 29) return 0;
		if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12)
		{
			if (x > 31) return 0;
		}
		else if (y == 2)
		{
			if (x > 28)
				return 0;
		}
		else
			if (x > 30)
				return 0;
		return 1;
	}

	void Input()
	{
		do
		{
			cout << "Nhap vao ngay: ";
			cin >> this->x;
			cout << "Nhap vao thang: ";
			cin >> this->y;
			cout << "Nhap vao nam: ";
			cin >> this->z;
		} while (Check(x, y, z) == 0);

	}

	void Output()
	{
		cout << this->x << "-" << this->y << "-" << this->z;
	}

	friend istream& operator>>(istream& is, CDate& Date)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		cout << "Nhap vao ngay: ";
		is >> a;
		cout << "Nhap vao thang: ";
		is >> b;
		cout << "Nhap vao nam: ";
		is >> c;
		Date.SetX(a);
		Date.SetY(b);
		Date.SetZ(c);
		return is;
	}

	friend ostream& operator<<(ostream& os, CDate& Time)
	{
		int a = Time.GetX();
		int b = Time.GetY();
		int c = Time.GetZ();

		os << a << "-" << b << "-" << c;
		return os;
	}

	void operator+(int x)
	{
		int a = this->GetX();
		int b = this->GetY();
		int c = this->GetZ();

		a += x;
		
		if (b == 2)
		{
			if (c % 400 == 0 || (c % 4 == 0 && c % 100 != 0))
			{
				while (a > 28)
				{
					a -= 28;
					b++;
				}
			}
			else
				while (a > 29)
				{
					a -= 29;
					b++;
				}
		}

		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
		{
			while (a > 31)
			{
				a -= 31;
				b++;
			}
		}

		else
			while (a > 30)
			{
				a -= 30;
				b++;
			}

		while (b > 12)
		{
			b--;
			c++;
		}

		this->SetX(a);
		this->SetY(b);
		this->SetZ(c);
	}

	void operator-(int x)
	{
		int a = this->GetX();
		int b = this->GetY();
		int c = this->GetZ();

		a -= x;

		if (b == 2)
		{
			if (c % 400 == 0 || (c % 4 == 0 && c % 100 != 0))
			{
				while (a < 0)
				{
					a += 28;
					b--;
				}
			}
			else
				while (a < 0)
				{
					a += 29;
					b--;
				}
		}

		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
		{
			while (a < 0)
			{
				a += 31;
				b--;
			}
		}

		else
			while (a < 0)
			{
				a += 30;
				b--;
			}

		while (b < 0)
		{
			b++;
			c--;
		}

		this->SetX(a);
		this->SetY(b);
		this->SetZ(c);
	}

	void operator++()
	{
		int a = this->GetX();
		int b = this->GetY();
		int c = this->GetZ();

		a++;

		if (b == 2)
		{
			if (c % 400 == 0 || (c % 4 == 0 && c % 100 != 0))
			{
				while (a > 28)
				{
					a -= 28;
					b++;
				}
			}
			else
				while (a > 29)
				{
					a -= 29;
					b++;
				}
		}

		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
		{
			while (a > 31)
			{
				a -= 31;
				b++;
			}
		}

		else
			while (a > 30)
			{
				a -= 30;
				b++;
			}

		while (b > 12)
		{
			b--;
			c++;
		}

		this->SetX(a);
		this->SetY(b);
		this->SetZ(c);
	}
	void operator--()
	{
		int a = this->GetX();
		int b = this->GetY();
		int c = this->GetZ();

		a--;

		if (b == 2)
		{
			if (c % 400 == 0 || (c % 4 == 0 && c % 100 != 0))
			{
				while (a < 0)
				{
					a += 28;
					b--;
				}
			}
			else
				while (a < 0)
				{
					a += 29;
					b--;
				}
		}

		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
		{
			while (a < 0)
			{
				a += 31;
				b--;
			}
		}

		else
			while (a < 0)
			{
				a += 30;
				b--;
			}

		while (b < 0)
		{
			b++;
			c--;
		}

		this->SetX(a);
		this->SetY(b);
		this->SetZ(c);
	}

	int operator-(CDate Time)
	{
		int a = this->GetX() - Time.GetX();
		int b = this->GetY() - Time.GetY();
		int c = this->GetZ() - Time.GetZ();

		return a * 12 * 365 + b * 365 + c;
	}

};