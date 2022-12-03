#include <iostream>

using namespace std;

#pragma once
class Diem
{	
private:
	double x;
	double y;

public:
	Diem(double hd = 0, double td = 0)
	{
		x = hd;
		y = td;
	}

	void setX(double a) {
		x = a;
	}
	double getX() {
		return x;
	}

	void Input()
	{
		cout << "Moi ban nhap hoanh do: ";
		cin >> this->x;
		cout << "\nMoi ban nhap vao tung do: ";
		cin >> this->y;
	}

	void Output()
	{
		cout << "\n\tx1 = " << this->x << " ; y1 = " << this->y;
	}

	void TinhTien()
	{

	}
};

class TamGiac
{	
private:
	Diem A;
	Diem B;
	Diem C;
public:
	TamGiac()
	{

	}

	void InputDiem()
	{	
		cout << "Nhap thong tin cua diem dau tien: ";
		A.Diem::Input();
		cout << "Nhap thong tin cua diem thu hai: ";
		B.Diem::Input();
		cout << "Nhap thong tin cua diem thu ba: ";
		C.Diem::Input();
	}

	void OutputDiem()
	{
		cout << "Toa do cua tam giac la: ";
		cout << "\nDinh dau tien: ";
		A.Diem::Output();
		cout << "\nDinh thu hai: ";
		B.Diem::Output();
		cout << "\nDinh thu ba: ";
		C.Diem::Output();
	}

	Diem TinhTien(Diem vt)
	{
		
	}
};

