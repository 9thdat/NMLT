#include "Candidate.h"
#include "Header.h"
#include <iostream>

using namespace std;

void Candidate::Input()
{
	cout << "Nhap ma thi sinh: ";
	cin >> this->Ma;
	cin.ignore();

	cout << "Nhap ho ten thi sinh: ";
	cin.getline(this->Ten, 24);

	cout << "Nhap ngay sinh: ";
	cin >> this->Ngay;

	cout << "Nhap thang sinh: ";
	cin >> this->Thang;

	cout << "Nhap nam sinh: ";
	cin >> this->Nam;

	cout << "Nhap diem toan: ";
	cin >> this->Toan;

	cout << "Nhap diem van: ";
	cin >> this->Van;

	cout << "Nhap diem anh: ";
	cin >> this->Anh;
}

int Candidate::Check()
{
	if (this->Tong > 15)
		return 1;
	return 0;
}

void Candidate::Output()
{
	cout << "Ma thi sinh: " << this->Ma;

	cout << "\nHo ten thi sinh: " << this->Ten;

	cout << "\nNgay thang nam sinh: " << this->Ngay << "/" << this->Thang << "/" << this->Nam;

	cout << "\nDiem toan: " << this->Toan;

	cout << "\nDiem van: " << this->Van;

	cout << "\nDiem anh: " << this->Anh;
}

int main()
{	
	ListCandidate LC;
	cout << "Moi nguoi dung nhap vao so luong thi sinh: ";
	LC.InputSS();
	LC.OutputSS();
}
