#include <iostream>

using namespace std;

class CTimeSpan
{
private:
	int gio;
	int phut;
	int giay;
public:
	CTimeSpan(int hr = 0, int min = 0, int sec = 0)
	{
		gio = hr;
		phut = min;
		giay = sec;
	}

	void SetX(int x)
	{
		this->gio = x;
	}

	void SetY(int y)
	{
		this->phut = y;
	}

	void SetZ(int z)
	{
		this->giay = z;
	}

	float GetX()
	{
		return this->gio;
	}

	float GetY()
	{
		return this->phut;
	}

	float GetZ()
	{
		return this->giay;
	}

	friend istream& operator>>(istream& is, CTimeSpan& Time)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		cout << "Nhap gio: ";
		is >> a;
		cout << "Nhap phut: ";
		is >> b;
		cout << "Nhap giay: ";
		is >> c;
		Time.SetX(a);
		Time.SetY(b);
		Time.SetZ(c);
		return is;
	}

	friend ostream& operator<<(ostream& os, CTimeSpan& SP)
	{
		int a = SP.GetX();
		int b = SP.GetY();
		int c = SP.GetZ();

		os << a << ":" << b << ":" << c;
		return os;
	}

	void Input()
	{
		int a = 0;
		int b = 0;
		int c = 0;
		cout << "Nhap gio: ";
		cin >> a;
		cout << "Nhap phut: ";
		cin >> b;
		cout << "Nhap giay: ";
		cin >> c;
		this->SetX(a);
		this->SetY(b);
		this->SetZ(c);
	}

	void Output()
	{
		int a = this->GetX();
		int b = this->GetY();
		int c = this->GetZ();

		cout << a << ":" << b << ":" << c;
	}

	CTimeSpan operator+(CTimeSpan Time)
	{
		CTimeSpan KQ;
		KQ.SetX(this->GetX() + Time.GetX());
		KQ.SetY(this->GetY() + Time.GetY());
		KQ.SetZ(this->GetY() + Time.GetZ());
		return KQ;
	}

	CTimeSpan operator+(int Time)
	{
		CTimeSpan KQ;

		KQ.SetX(this->GetX());
		KQ.SetY(this->GetY());
		KQ.SetZ(this->GetY());

		int a = KQ.GetX();
		int b = KQ.GetY();
		int c = KQ.GetZ();

		c += Time;

		while (c >= 60)
		{
			c -= 60;
			b += 1;
		}

		while (b >= 60)
		{
			b -= 60;
			a += 1;
		}

		KQ.SetX(a);
		KQ.SetY(b);
		KQ.SetZ(c);

		return KQ;
	}

	CTimeSpan operator-(CTimeSpan Time)
	{
		CTimeSpan KQ;

		KQ.SetX(this->GetX());
		KQ.SetY(this->GetY());
		KQ.SetZ(this->GetY());

		int a = KQ.GetX();
		int b = KQ.GetY();
		int c = KQ.GetZ();

		a -= KQ.GetX();
		b -= KQ.GetY();
		c -= KQ.GetZ();

		while (c < 0)
		{
			c += 60;
			b -= 1;
		}

		while (b < 0)
		{
			b += 60;
			a -= 1;
		}

		KQ.SetX(a);
		KQ.SetY(b);
		KQ.SetZ(c);

		return KQ;
	}

	int operator-(int Time)
	{
		CTimeSpan KQ;

		KQ.SetX(this->GetX());
		KQ.SetY(this->GetY());
		KQ.SetZ(this->GetY());

		int a = KQ.GetX();
		int b = KQ.GetY();
		int c = KQ.GetZ();

		c -= Time;

		while (c < 0)
		{
			c += 60;
			b -= 1;
		}

		while (b < 0)
		{
			c += 60;
			a -= 1;
		}

		int TGKQ = a * 3600 + b * 60 + c;

		return TGKQ;
	}

	CTimeSpan operator++()
	{
		CTimeSpan KQ;

		KQ.SetX(this->GetX());
		KQ.SetY(this->GetY());
		KQ.SetZ(this->GetY());

		int a = KQ.GetX();
		int b = KQ.GetY();
		int c = KQ.GetZ();

		c++;

		while (c >= 60)
		{
			c -= 60;
			b += 1;
		}

		while (b >= 60)
		{
			b -= 60;
			a += 1;
		}

		KQ.SetX(a);
		KQ.SetY(b);
		KQ.SetZ(c);

		return KQ;
	}

	CTimeSpan operator--()
	{
		CTimeSpan KQ;

		KQ.SetX(this->GetX());
		KQ.SetY(this->GetY());
		KQ.SetZ(this->GetY());

		int a = KQ.GetX();
		int b = KQ.GetY();
		int c = KQ.GetZ();

		c--;

		while (c < 0)
		{
			c += 60;
			b -= 1;
		}

		while (b < 0)
		{
			b += 60;
			a -= 1;
		}

		KQ.SetX(a);
		KQ.SetY(b);
		KQ.SetZ(c);
		
		return KQ;
	}

	int operator==(CTimeSpan Time)
	{
		if (this->GetX() != Time.GetX()) return 0;
		if (this->GetY() != Time.GetY()) return 0;
		if (this->GetZ() != Time.GetZ()) return 0;
		return 1;
	}

	int operator!=(CTimeSpan Time)
	{
		if (this->GetX() == Time.GetX() 
			&& this->GetY() == Time.GetY() 
				&& this->GetZ() == Time.GetZ()) 
			return 0;
		return 1;
	}
};